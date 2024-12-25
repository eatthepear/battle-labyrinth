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
        .aiFlags = AI_FLAG_BASIC_TRAINER,
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
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
#line 92
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
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
        .aiFlags = AI_FLAG_BASIC_TRAINER,
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
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 108
            .ability = ABILITY_RUN_AWAY,
#line 109
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 111
                MOVE_TACKLE,
                MOVE_LEER,
                MOVE_SAND_ATTACK,
            },
            },
            {
#line 115
            .species = SPECIES_PIDOVE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 119
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 116
            .ability = ABILITY_SUPER_LUCK,
#line 117
            .lvl = 4,
#line 118
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 120
                MOVE_QUICK_ATTACK,
                MOVE_GROWL,
                MOVE_LEER,
            },
            },
            {
#line 124
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 128
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 125
            .ability = ABILITY_NORMALIZE,
#line 126
            .lvl = 4,
#line 127
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 129
                MOVE_TACKLE,
                MOVE_TAIL_WHIP,
                MOVE_GROWL,
            },
            },
        },
    },
#line 133
    [TRAINER_PBL_MARIAM] =
    {
#line 134
        .trainerName = _("Mariam"),
#line 135
        .trainerClass = TRAINER_CLASS_LASS,
#line 136
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 137
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 139
        .doubleBattle = FALSE,
#line 138
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 140
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 142
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 146
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 143
            .ability = ABILITY_GLUTTONY,
#line 144
            .lvl = 5,
#line 145
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 147
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_SAND_ATTACK,
            },
            },
            {
#line 151
            .species = SPECIES_FLETCHLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 155
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 152
            .ability = ABILITY_BIG_PECKS,
#line 153
            .lvl = 5,
#line 154
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 156
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_PECK,
            },
            },
            {
#line 160
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 164
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 161
            .ability = ABILITY_CHLOROPHYLL,
#line 162
            .lvl = 5,
#line 163
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 165
                MOVE_TACKLE,
                MOVE_ABSORB,
            },
            },
        },
    },
#line 168
    [TRAINER_PBL_OSCAR] =
    {
#line 169
        .trainerName = _("Oscar"),
#line 170
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 171
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 172
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 174
        .doubleBattle = FALSE,
#line 173
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 175
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 177
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 181
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 178
            .ability = ABILITY_GUTS,
#line 179
            .lvl = 5,
#line 180
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 182
                MOVE_TACKLE,
                MOVE_TAIL_WHIP,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 186
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 189
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 187
            .ability = ABILITY_DAMP,
#line 188
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 190
                MOVE_SCRATCH,
                MOVE_TAIL_WHIP,
                MOVE_REFRESH,
                MOVE_WATER_GUN,
            },
            },
            {
#line 195
            .species = SPECIES_STARLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 199
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 196
            .ability = ABILITY_KEEN_EYE,
#line 197
            .lvl = 5,
#line 198
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 200
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 204
    [TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER] =
    {
#line 205
        .trainerName = _("Corey"),
#line 206
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 207
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 208
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 210
        .doubleBattle = FALSE,
#line 209
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 212
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 211
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 214
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 217
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 215
            .ability = ABILITY_GLUTTONY,
#line 216
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 218
                MOVE_WATER_GUN,
                MOVE_SCRATCH,
            },
            },
            {
#line 221
            .species = SPECIES_PANSAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 224
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 222
            .ability = ABILITY_GLUTTONY,
#line 223
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 225
                MOVE_LEAFAGE,
                MOVE_SCRATCH,
            },
            },
            {
#line 228
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 231
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 229
            .ability = ABILITY_GLUTTONY,
#line 230
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 232
                MOVE_EMBER,
                MOVE_SCRATCH,
            },
            },
        },
    },
#line 235
    [TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER_BRUTAL] =
    {
#line 236
        .trainerName = _("Corey"),
#line 237
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 238
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 239
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 241
        .doubleBattle = FALSE,
#line 240
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 243
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 242
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 245
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 248
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 246
            .ability = ABILITY_TORRENT,
#line 247
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 249
                MOVE_WATER_GUN,
                MOVE_SCRATCH,
            },
            },
            {
#line 252
            .species = SPECIES_PANSAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 255
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 253
            .ability = ABILITY_OVERGROW,
#line 254
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 256
                MOVE_LEAFAGE,
                MOVE_SCRATCH,
            },
            },
            {
#line 259
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 262
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 260
            .ability = ABILITY_BLAZE,
#line 261
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 263
                MOVE_EMBER,
                MOVE_SCRATCH,
            },
            },
        },
    },
#line 266
    [TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER] =
    {
#line 267
        .trainerName = _("Corey"),
#line 268
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 269
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 270
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 272
        .doubleBattle = FALSE,
#line 271
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 274
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 273
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 276
            .species = SPECIES_PANSAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 279
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 277
            .ability = ABILITY_GLUTTONY,
#line 278
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 280
                MOVE_LEAFAGE,
                MOVE_SCRATCH,
            },
            },
            {
#line 283
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 286
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 284
            .ability = ABILITY_GLUTTONY,
#line 285
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 287
                MOVE_EMBER,
                MOVE_SCRATCH,
            },
            },
            {
#line 290
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 293
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 291
            .ability = ABILITY_GLUTTONY,
#line 292
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 294
                MOVE_WATER_GUN,
                MOVE_SCRATCH,
            },
            },
        },
    },
#line 297
    [TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER_BRUTAL] =
    {
#line 298
        .trainerName = _("Corey"),
#line 299
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 300
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 301
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 303
        .doubleBattle = FALSE,
#line 302
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 305
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 304
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 307
            .species = SPECIES_PANSAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 310
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 308
            .ability = ABILITY_OVERGROW,
#line 309
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 311
                MOVE_LEAFAGE,
                MOVE_SCRATCH,
            },
            },
            {
#line 314
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 317
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 315
            .ability = ABILITY_BLAZE,
#line 316
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 318
                MOVE_EMBER,
                MOVE_SCRATCH,
            },
            },
            {
#line 321
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 324
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 322
            .ability = ABILITY_TORRENT,
#line 323
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 325
                MOVE_WATER_GUN,
                MOVE_SCRATCH,
            },
            },
        },
    },
#line 328
    [TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER] =
    {
#line 329
        .trainerName = _("Corey"),
#line 330
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 331
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 332
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 334
        .doubleBattle = FALSE,
#line 333
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 336
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 335
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 338
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 341
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 339
            .ability = ABILITY_GLUTTONY,
#line 340
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 342
                MOVE_EMBER,
                MOVE_SCRATCH,
            },
            },
            {
#line 345
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 348
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 346
            .ability = ABILITY_GLUTTONY,
#line 347
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 349
                MOVE_WATER_GUN,
                MOVE_SCRATCH,
            },
            },
            {
#line 352
            .species = SPECIES_PANSAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 355
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 353
            .ability = ABILITY_GLUTTONY,
#line 354
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 356
                MOVE_LEAFAGE,
                MOVE_SCRATCH,
            },
            },
        },
    },
#line 359
    [TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER_BRUTAL] =
    {
#line 360
        .trainerName = _("Corey"),
#line 361
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 362
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 363
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 365
        .doubleBattle = FALSE,
#line 364
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 367
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 366
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 369
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 372
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 370
            .ability = ABILITY_BLAZE,
#line 371
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 373
                MOVE_EMBER,
                MOVE_SCRATCH,
            },
            },
            {
#line 376
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 379
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 377
            .ability = ABILITY_TORRENT,
#line 378
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 380
                MOVE_WATER_GUN,
                MOVE_SCRATCH,
            },
            },
            {
#line 383
            .species = SPECIES_PANSAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 386
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 384
            .ability = ABILITY_OVERGROW,
#line 385
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 387
                MOVE_LEAFAGE,
                MOVE_SCRATCH,
            },
            },
        },
    },
#line 390
    [TRAINER_PBL_POLLY] =
    {
#line 391
        .trainerName = _("Polly"),
#line 392
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 393
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 394
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 396
        .doubleBattle = FALSE,
#line 395
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 397
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 399
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 402
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 400
            .ability = ABILITY_KEEN_EYE,
#line 401
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 403
                MOVE_SCRATCH,
                MOVE_GROWL,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 407
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 410
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 408
            .ability = ABILITY_EARLY_BIRD,
#line 409
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 411
                MOVE_HARDEN,
                MOVE_ASTONISH,
                MOVE_BIDE,
                MOVE_ABSORB,
            },
            },
            {
#line 416
            .species = SPECIES_NIDORAN_F,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 417
            .ability = ABILITY_POISON_POINT,
#line 418
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 420
                MOVE_SCRATCH,
                MOVE_TAIL_WHIP,
                MOVE_POISON_STING,
                MOVE_DISABLE,
            },
            },
        },
    },
#line 425
    [TRAINER_PBL_JEREMIAH] =
    {
#line 426
        .trainerName = _("Jeremiah"),
#line 427
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 428
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 429
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 431
        .doubleBattle = FALSE,
#line 430
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 432
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 434
            .species = SPECIES_CATERPIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 437
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 435
            .ability = ABILITY_SHIELD_DUST,
#line 436
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 438
                MOVE_TACKLE,
                MOVE_STRING_SHOT,
            },
            },
            {
#line 441
            .species = SPECIES_WEEDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 444
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 442
            .ability = ABILITY_SHIELD_DUST,
#line 443
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 445
                MOVE_POISON_STING,
                MOVE_STRING_SHOT,
            },
            },
            {
#line 448
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 451
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 449
            .ability = ABILITY_SHIELD_DUST,
#line 450
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 452
                MOVE_TACKLE,
                MOVE_STRING_SHOT,
                MOVE_POISON_STING,
            },
            },
            {
#line 456
            .species = SPECIES_SCATTERBUG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 459
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 457
            .ability = ABILITY_SHIELD_DUST,
#line 458
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 460
                MOVE_TACKLE,
                MOVE_STRING_SHOT,
                MOVE_STRUGGLE_BUG,
            },
            },
        },
    },
#line 464
    [TRAINER_PBL_JOSH] =
    {
#line 465
        .trainerName = _("Josh"),
#line 466
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 467
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 468
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 470
        .doubleBattle = FALSE,
#line 469
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 471
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 473
            .species = SPECIES_BLIPBUG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 476
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 474
            .ability = ABILITY_SWARM,
#line 475
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 477
                MOVE_STRUGGLE_BUG,
            },
            },
            {
#line 479
            .species = SPECIES_KRICKETOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 482
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 480
            .ability = ABILITY_SHED_SKIN,
#line 481
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 483
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_STRUGGLE_BUG,
                MOVE_BIDE,
            },
            },
            {
#line 488
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 491
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 489
            .ability = ABILITY_SWARM,
#line 490
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 492
                MOVE_SPIDER_WEB,
                MOVE_POISON_STING,
                MOVE_STRING_SHOT,
                MOVE_NIGHT_SHADE,
            },
            },
            {
#line 497
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 500
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 498
            .ability = ABILITY_COMPOUND_EYES,
#line 499
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 501
                MOVE_SAND_ATTACK,
                MOVE_HARDEN,
                MOVE_FALSE_SWIPE,
                MOVE_FURY_SWIPES,
            },
            },
        },
    },
#line 506
    [TRAINER_PBL_HARPER] =
    {
#line 507
        .trainerName = _("Harper"),
#line 508
        .trainerClass = TRAINER_CLASS_LASS,
#line 509
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 510
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 512
        .doubleBattle = FALSE,
#line 511
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 513
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 515
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 518
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 516
            .ability = ABILITY_RATTLED,
#line 517
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 519
                MOVE_ASTONISH,
                MOVE_POUND,
                MOVE_SUPERSONIC,
                MOVE_ECHOED_VOICE,
            },
            },
            {
#line 524
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 527
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 525
            .ability = ABILITY_INSOMNIA,
#line 526
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 528
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_PECK,
                MOVE_CONFUSION,
            },
            },
            {
#line 533
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 536
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 534
            .ability = ABILITY_STATIC,
#line 535
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 537
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_CHARGE,
                MOVE_THUNDER_SHOCK,
            },
            },
        },
    },
#line 542
    [TRAINER_PBL_ARTHUR] =
    {
#line 543
        .trainerName = _("Arthur"),
#line 544
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 545
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 546
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 548
        .doubleBattle = FALSE,
#line 547
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 549
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 551
            .species = SPECIES_YUNGOOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 554
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 552
            .ability = ABILITY_STRONG_JAW,
#line 553
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 555
                MOVE_TACKLE,
                MOVE_SAND_ATTACK,
                MOVE_LEER,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 560
            .species = SPECIES_PIKIPEK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 563
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 561
            .ability = ABILITY_SKILL_LINK,
#line 562
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 564
                MOVE_PECK,
                MOVE_GROWL,
                MOVE_MIRROR_MOVE,
            },
            },
            {
#line 568
            .species = SPECIES_NIDORAN_M,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 571
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 569
            .ability = ABILITY_POISON_POINT,
#line 570
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 572
                MOVE_PECK,
                MOVE_FOCUS_ENERGY,
                MOVE_POISON_STING,
                MOVE_DISABLE,
            },
            },
        },
    },
#line 577
    [TRAINER_PBL_SHAUN_LEVIATHAN_2] =
    {
#line 578
        .trainerName = _("Shaun"),
#line 579
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 580
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 581
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 583
        .doubleBattle = FALSE,
#line 582
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 585
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 584
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 587
            .species = SPECIES_BUNNELBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 587
            .heldItem = ITEM_ORAN_BERRY,
#line 590
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 588
            .ability = ABILITY_CHEEK_POUCH,
#line 589
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 591
                MOVE_DOUBLE_SLAP,
                MOVE_LEER,
                MOVE_DEFENSE_CURL,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 596
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 596
            .heldItem = ITEM_ORAN_BERRY,
#line 599
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 597
            .ability = ABILITY_CHEEK_POUCH,
#line 598
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 600
                MOVE_TACKLE,
                MOVE_BITE,
                MOVE_BIDE,
                MOVE_TEARFUL_LOOK,
            },
            },
            {
#line 605
            .species = SPECIES_SKWOVET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 605
            .heldItem = ITEM_ORAN_BERRY,
#line 608
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 606
            .ability = ABILITY_CHEEK_POUCH,
#line 607
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 609
                MOVE_TACKLE,
                MOVE_STUFF_CHEEKS,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
        },
    },
#line 614
    [TRAINER_PBL_SHAUN_LEVIATHAN_2_BRUTAL] =
    {
#line 615
        .trainerName = _("Shaun"),
#line 616
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 617
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 618
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 620
        .doubleBattle = FALSE,
#line 619
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 622
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 621
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 624
            .species = SPECIES_BUNNELBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 624
            .heldItem = ITEM_ORAN_BERRY,
#line 627
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 625
            .ability = ABILITY_CHEEK_POUCH,
#line 626
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 628
                MOVE_DOUBLE_SLAP,
                MOVE_LEER,
                MOVE_DEFENSE_CURL,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 633
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 633
            .heldItem = ITEM_ORAN_BERRY,
#line 636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 634
            .ability = ABILITY_CHEEK_POUCH,
#line 635
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 637
                MOVE_TACKLE,
                MOVE_BITE,
                MOVE_BIDE,
                MOVE_TEARFUL_LOOK,
            },
            },
            {
#line 642
            .species = SPECIES_SKWOVET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 642
            .heldItem = ITEM_ORAN_BERRY,
#line 645
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 643
            .ability = ABILITY_CHEEK_POUCH,
#line 644
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 646
                MOVE_TACKLE,
                MOVE_STUFF_CHEEKS,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 651
            .species = SPECIES_LECHONK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 651
            .heldItem = ITEM_ORAN_BERRY,
#line 654
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 652
            .ability = ABILITY_THICK_FAT,
#line 653
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 655
                MOVE_TACKLE,
                MOVE_DISARMING_VOICE,
                MOVE_STUFF_CHEEKS,
                MOVE_YAWN,
            },
            },
        },
    },
#line 660
    [TRAINER_PBL_JEMMA] =
    {
#line 661
        .trainerName = _("Jemma"),
#line 662
        .trainerClass = TRAINER_CLASS_LASS,
#line 663
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 664
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 666
        .doubleBattle = FALSE,
#line 665
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 667
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 669
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 672
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 670
            .ability = ABILITY_POISON_POINT,
#line 671
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 673
                MOVE_ABSORB,
                MOVE_WORRY_SEED,
                MOVE_LIFE_DEW,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 678
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 681
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 679
            .ability = ABILITY_KEEN_EYE,
#line 680
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 682
                MOVE_TACKLE,
                MOVE_SAND_ATTACK,
                MOVE_GUST,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 687
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 690
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 688
            .ability = ABILITY_SAND_FORCE,
#line 689
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 691
                MOVE_SCRATCH,
                MOVE_SAND_ATTACK,
                MOVE_GROWL,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 696
    [TRAINER_PBL_PATRICK] =
    {
#line 697
        .trainerName = _("Patrick"),
#line 698
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 699
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 700
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 702
        .doubleBattle = FALSE,
#line 701
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 703
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 705
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 708
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 706
            .ability = ABILITY_SHED_SKIN,
#line 707
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 709
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
            {
#line 712
            .species = SPECIES_METAPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 715
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 713
            .ability = ABILITY_SHED_SKIN,
#line 714
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 716
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
            {
#line 719
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 722
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 720
            .ability = ABILITY_SHED_SKIN,
#line 721
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 723
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
            {
#line 726
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 729
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 727
            .ability = ABILITY_SHED_SKIN,
#line 728
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 730
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 733
    [TRAINER_PBL_ANNABELLE] =
    {
#line 734
        .trainerName = _("Annabelle"),
#line 735
        .trainerClass = TRAINER_CLASS_LADY,
#line 736
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 737
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 739
        .doubleBattle = FALSE,
#line 738
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 740
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 742
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 745
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 743
            .ability = ABILITY_TECHNICIAN,
#line 744
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 746
                MOVE_SCRATCH,
                MOVE_GROWL,
                MOVE_FEINT,
            },
            },
            {
#line 750
            .species = SPECIES_GOSSIFLEUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 753
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 751
            .ability = ABILITY_COTTON_DOWN,
#line 752
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 754
                MOVE_LEAFAGE,
                MOVE_GRASS_WHISTLE,
                MOVE_RAPID_SPIN,
                MOVE_RAZOR_LEAF,
            },
            },
            {
#line 759
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 760
            .ability = ABILITY_HUGE_POWER,
#line 761
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 763
                MOVE_SOAK,
                MOVE_REFRESH,
                MOVE_CHARM,
                MOVE_BUBBLE,
            },
            },
            {
#line 768
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 771
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 769
            .ability = ABILITY_INTIMIDATE,
#line 770
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 772
                MOVE_LEER,
                MOVE_CHARGE,
                MOVE_THUNDER_SHOCK,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 777
    [TRAINER_PBL_BORIS] =
    {
#line 778
        .trainerName = _("Boris"),
#line 779
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 780
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 781
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 783
        .doubleBattle = FALSE,
#line 782
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 784
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 786
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 787
            .ability = ABILITY_SWIFT_SWIM,
#line 788
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 790
                MOVE_ABSORB,
                MOVE_BUBBLE,
                MOVE_MIST,
                MOVE_ASTONISH,
            },
            },
            {
#line 795
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 796
            .ability = ABILITY_LIMBER,
#line 797
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 799
                MOVE_DEFENSE_CURL,
                MOVE_QUICK_ATTACK,
                MOVE_BABY_DOLL_EYES,
                MOVE_COPYCAT,
            },
            },
            {
#line 804
            .species = SPECIES_MASCHIFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 807
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 805
            .ability = ABILITY_INTIMIDATE,
#line 806
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 808
                MOVE_LICK,
                MOVE_SNARL,
                MOVE_SCARY_FACE,
                MOVE_BITE,
            },
            },
        },
    },
#line 813
    [TRAINER_PBL_RICHARD] =
    {
#line 814
        .trainerName = _("Richard"),
#line 815
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 816
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 817
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 819
        .doubleBattle = FALSE,
#line 818
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 820
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 822
            .species = SPECIES_WOOLOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 825
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 823
            .ability = ABILITY_FLUFFY,
#line 824
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 826
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_DEFENSE_CURL,
                MOVE_COPYCAT,
            },
            },
            {
#line 831
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 832
            .ability = ABILITY_STATIC,
#line 833
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 835
                MOVE_THUNDER_SHOCK,
                MOVE_SWEET_KISS,
                MOVE_FAKE_OUT,
                MOVE_CHARM,
            },
            },
            {
#line 840
            .species = SPECIES_SMOLIV,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 843
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 841
            .ability = ABILITY_EARLY_BIRD,
#line 842
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 844
                MOVE_TACKLE,
                MOVE_ABSORB,
                MOVE_HELPING_HAND,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 849
            .species = SPECIES_DUCKLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 852
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 850
            .ability = ABILITY_BIG_PECKS,
#line 851
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 853
                MOVE_AQUA_RING,
                MOVE_GUST,
                MOVE_AQUA_JET,
                MOVE_FEATHER_DANCE,
            },
            },
        },
    },
#line 858
    [TRAINER_PBL_PHILLIPA_LEVIATHAN_3] =
    {
#line 859
        .trainerName = _("Phillipa"),
#line 860
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 861
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 862
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 864
        .doubleBattle = FALSE,
#line 863
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 866
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 865
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 868
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 871
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 869
            .ability = ABILITY_UNAWARE,
#line 870
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 872
                MOVE_ROLLOUT,
            },
            },
            {
#line 874
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 877
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 875
            .ability = ABILITY_SAND_RUSH,
#line 876
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 878
                MOVE_ROLLOUT,
            },
            },
            {
#line 880
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 880
            .heldItem = ITEM_ORAN_BERRY,
#line 883
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 881
            .ability = ABILITY_HUGE_POWER,
#line 882
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 884
                MOVE_ROLLOUT,
            },
            },
        },
    },
#line 886
    [TRAINER_PBL_PHILLIPA_LEVIATHAN_3_BRUTAL] =
    {
#line 887
        .trainerName = _("Phillipa"),
#line 888
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 889
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 890
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 892
        .doubleBattle = FALSE,
#line 891
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 894
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 893
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 896
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 899
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 897
            .ability = ABILITY_UNAWARE,
#line 898
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 900
                MOVE_ROLLOUT,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 903
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 906
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 904
            .ability = ABILITY_SAND_RUSH,
#line 905
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 907
                MOVE_ROLLOUT,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 910
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 910
            .heldItem = ITEM_ORAN_BERRY,
#line 913
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 911
            .ability = ABILITY_HUGE_POWER,
#line 912
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 914
                MOVE_ROLLOUT,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 917
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 917
            .heldItem = ITEM_ORAN_BERRY,
#line 920
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 918
            .ability = ABILITY_CHLOROPHYLL,
#line 919
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 921
                MOVE_ROLLOUT,
                MOVE_DEFENSE_CURL,
            },
            },
        },
    },
#line 924
    [TRAINER_PBL_HERMAN] =
    {
#line 925
        .trainerName = _("Herman"),
#line 926
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 927
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 928
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 930
        .doubleBattle = FALSE,
#line 929
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 931
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 933
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 936
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 934
            .ability = ABILITY_FLASH_FIRE,
#line 935
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 937
                MOVE_EMBER,
                MOVE_BABY_DOLL_EYES,
                MOVE_DISABLE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 942
            .species = SPECIES_BOUNSWEET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 945
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 943
            .ability = ABILITY_OBLIVIOUS,
#line 944
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 946
                MOVE_ABSORB,
                MOVE_GRASS_WHISTLE,
                MOVE_RAPID_SPIN,
                MOVE_RAZOR_LEAF,
            },
            },
            {
#line 951
            .species = SPECIES_ESPURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 954
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 952
            .ability = ABILITY_OWN_TEMPO,
#line 953
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 955
                MOVE_FAKE_OUT,
                MOVE_TICKLE,
                MOVE_CONFUSION,
                MOVE_DISARMING_VOICE,
            },
            },
        },
    },
#line 960
    [TRAINER_PBL_RALPH] =
    {
#line 961
        .trainerName = _("Ralph"),
#line 962
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 963
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 964
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 966
        .doubleBattle = FALSE,
#line 965
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 967
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 969
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 972
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 970
            .ability = ABILITY_LEVITATE,
#line 971
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 973
                MOVE_ASTONISH,
                MOVE_CONFUSION,
                MOVE_DISABLE,
                MOVE_YAWN,
            },
            },
            {
#line 978
            .species = SPECIES_PURRLOIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 981
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 979
            .ability = ABILITY_LIMBER,
#line 980
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 982
                MOVE_FAKE_OUT,
                MOVE_SAND_ATTACK,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 987
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 990
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 988
            .ability = ABILITY_WATER_ABSORB,
#line 989
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 991
                MOVE_WATER_GUN,
                MOVE_MUD_SHOT,
                MOVE_YAWN,
                MOVE_SLAM,
            },
            },
        },
    },
#line 996
    [TRAINER_PBL_CALLIE] =
    {
#line 997
        .trainerName = _("Callie"),
#line 998
        .trainerClass = TRAINER_CLASS_LASS,
#line 999
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 1000
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1002
        .doubleBattle = FALSE,
#line 1001
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1003
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1005
            .species = SPECIES_LILLIPUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1008
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1006
            .ability = ABILITY_PICKUP,
#line 1007
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1009
                MOVE_TACKLE,
                MOVE_HELPING_HAND,
                MOVE_BITE,
                MOVE_YAWN,
            },
            },
            {
#line 1014
            .species = SPECIES_FIDOUGH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1017
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1015
            .ability = ABILITY_OWN_TEMPO,
#line 1016
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1018
                MOVE_TAIL_WHIP,
                MOVE_BITE,
                MOVE_YAWN,
                MOVE_COVET,
            },
            },
            {
#line 1023
            .species = SPECIES_YAMPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1026
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1024
            .ability = ABILITY_BALL_FETCH,
#line 1025
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1027
                MOVE_NUZZLE,
                MOVE_SPARK,
                MOVE_CHARGE,
                MOVE_BITE,
            },
            },
        },
    },
#line 1032
    [TRAINER_PBL_SANTIAGO] =
    {
#line 1033
        .trainerName = _("Santiago"),
#line 1034
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1035
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 1036
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1038
        .doubleBattle = FALSE,
#line 1037
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1039
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1041
            .species = SPECIES_BURMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1044
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1042
            .ability = ABILITY_SHED_SKIN,
#line 1043
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1045
                MOVE_TACKLE,
                MOVE_STRING_SHOT,
                MOVE_BUG_BITE,
            },
            },
            {
#line 1049
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1052
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1050
            .ability = ABILITY_SWARM,
#line 1051
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1053
                MOVE_SWIFT,
                MOVE_COMET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_ROOST,
            },
            },
            {
#line 1058
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1061
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1059
            .ability = ABILITY_EFFECT_SPORE,
#line 1060
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1062
                MOVE_POISON_POWDER,
                MOVE_ABSORB,
                MOVE_BUG_BITE,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 1067
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1070
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1068
            .ability = ABILITY_SHED_SKIN,
#line 1069
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1071
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 1074
    [TRAINER_PBL_CHLOE_AND_KAYA] =
    {
#line 1075
        .trainerName = _("Chloe&Kaya"),
#line 1076
        .trainerClass = TRAINER_CLASS_TWINS,
#line 1077
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 1078
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1080
        .doubleBattle = TRUE,
#line 1079
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1082
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1085
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1083
            .ability = ABILITY_PRANKSTER,
#line 1084
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1086
                MOVE_FAIRY_WIND,
                MOVE_RAZOR_LEAF,
                MOVE_STUN_SPORE,
                MOVE_POISON_POWDER,
            },
            },
            {
#line 1091
            .species = SPECIES_PETILIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1094
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1092
            .ability = ABILITY_OWN_TEMPO,
#line 1093
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1095
                MOVE_ABSORB,
                MOVE_HELPING_HAND,
                MOVE_STUN_SPORE,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 1100
    [TRAINER_PBL_FRED] =
    {
#line 1101
        .trainerName = _("Fred"),
#line 1102
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 1103
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 1104
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1106
        .doubleBattle = FALSE,
#line 1105
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1107
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1109
            .species = SPECIES_MUNNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1112
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1110
            .ability = ABILITY_SYNCHRONIZE,
#line 1111
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1113
                MOVE_PSYWAVE,
                MOVE_LUCKY_CHANT,
                MOVE_HYPNOSIS,
                MOVE_IMPRISON,
            },
            },
            {
#line 1118
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1121
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1119
            .ability = ABILITY_INTIMIDATE,
#line 1120
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1122
                MOVE_GLARE,
                MOVE_BITE,
                MOVE_ACID,
                MOVE_DISABLE,
            },
            },
            {
#line 1127
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1130
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1128
            .ability = ABILITY_FLAME_BODY,
#line 1129
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1131
                MOVE_EMBER,
                MOVE_YAWN,
                MOVE_ROCK_THROW,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 1136
            .species = SPECIES_PANCHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1139
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1137
            .ability = ABILITY_IRON_FIST,
#line 1138
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1140
                MOVE_SEISMIC_TOSS,
                MOVE_COMET_PUNCH,
                MOVE_KARATE_CHOP,
                MOVE_TAUNT,
            },
            },
        },
    },
#line 1145
    [TRAINER_PBL_LUCIA] =
    {
#line 1146
        .trainerName = _("Lucia"),
#line 1147
        .trainerClass = TRAINER_CLASS_FAIRY_TALE_GIRL,
#line 1148
        .trainerPic = TRAINER_PIC_FAIRY_TALE_GIRL,
        .encounterMusic_gender =
#line 1149
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1151
        .doubleBattle = FALSE,
#line 1150
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1152
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1154
            .species = SPECIES_IGGLYBUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1157
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1155
            .ability = ABILITY_CUTE_CHARM,
#line 1156
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1158
                MOVE_SWEET_KISS,
                MOVE_DISARMING_VOICE,
                MOVE_DISABLE,
                MOVE_CHARM,
            },
            },
            {
#line 1163
            .species = SPECIES_SPRITZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1166
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1164
            .ability = ABILITY_HEALER,
#line 1165
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1167
                MOVE_FAIRY_WIND,
                MOVE_SWEET_KISS,
                MOVE_REFRESH,
                MOVE_DISARMING_VOICE,
            },
            },
            {
#line 1172
            .species = SPECIES_SWIRLIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1175
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1173
            .ability = ABILITY_SWEET_VEIL,
#line 1174
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1176
                MOVE_FAIRY_WIND,
                MOVE_YAWN,
                MOVE_COTTON_SPORE,
                MOVE_ROUND,
            },
            },
            {
#line 1181
            .species = SPECIES_MIME_JR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1184
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1182
            .ability = ABILITY_SOUNDPROOF,
#line 1183
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1185
                MOVE_TEETER_DANCE,
                MOVE_DOUBLE_SLAP,
                MOVE_CONFUSION,
                MOVE_FAKE_OUT,
            },
            },
        },
    },
#line 1190
    [TRAINER_PBL_ELLA_AND_BELLA_LEVIATHAN_4] =
    {
#line 1191
        .trainerName = _("Ella&Bella"),
#line 1192
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 1193
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 1194
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1196
        .doubleBattle = TRUE,
#line 1195
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1198
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 1197
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1200
            .species = SPECIES_NICKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1203
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1201
            .ability = ABILITY_UNBURDEN,
#line 1202
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1204
                MOVE_SNARL,
                MOVE_GROWL,
            },
            },
            {
#line 1207
            .species = SPECIES_LITLEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1210
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1208
            .ability = ABILITY_UNNERVE,
#line 1209
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1211
                MOVE_INCINERATE,
                MOVE_GROWL,
            },
            },
            {
#line 1214
            .species = SPECIES_STEENEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1214
            .heldItem = ITEM_ORAN_BERRY,
#line 1217
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1215
            .ability = ABILITY_OBLIVIOUS,
#line 1216
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1218
                MOVE_RAZOR_LEAF,
                MOVE_GRASS_WHISTLE,
            },
            },
            {
#line 1221
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1221
            .heldItem = ITEM_ORAN_BERRY,
#line 1224
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1222
            .ability = ABILITY_FRIEND_GUARD,
#line 1223
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1225
                MOVE_SWIFT,
                MOVE_DISARMING_VOICE,
            },
            },
        },
    },
#line 1228
    [TRAINER_PBL_ELLA_AND_BELLA_LEVIATHAN_4_BRUTAL] =
    {
#line 1229
        .trainerName = _("Ella&Bella"),
#line 1230
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 1231
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 1232
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1234
        .doubleBattle = TRUE,
#line 1233
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 1236
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 1235
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1238
            .species = SPECIES_NICKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1241
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1239
            .ability = ABILITY_STAKEOUT,
#line 1240
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1242
                MOVE_SNARL,
                MOVE_QUICK_ATTACK,
                MOVE_GROWL,
            },
            },
            {
#line 1246
            .species = SPECIES_LITLEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1249
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1247
            .ability = ABILITY_UNNERVE,
#line 1248
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1250
                MOVE_INCINERATE,
                MOVE_ECHOED_VOICE,
                MOVE_GROWL,
            },
            },
            {
#line 1254
            .species = SPECIES_STEENEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1254
            .heldItem = ITEM_ORAN_BERRY,
#line 1257
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1255
            .ability = ABILITY_OBLIVIOUS,
#line 1256
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1258
                MOVE_RAZOR_LEAF,
                MOVE_RAPID_SPIN,
                MOVE_GRASS_WHISTLE,
            },
            },
            {
#line 1262
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1262
            .heldItem = ITEM_ORAN_BERRY,
#line 1265
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1263
            .ability = ABILITY_FRIEND_GUARD,
#line 1264
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1266
                MOVE_SWIFT,
                MOVE_DISARMING_VOICE,
                MOVE_SING,
            },
            },
        },
    },
#line 1270
    [TRAINER_PBL_ANNE_AND_JUNE] =
    {
#line 1271
        .trainerName = _("Anne&June"),
#line 1272
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 1273
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 1274
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1276
        .doubleBattle = TRUE,
#line 1275
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1278
            .species = SPECIES_GOTHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1281
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1279
            .ability = ABILITY_TELEPATHY,
#line 1280
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1282
                MOVE_CONFUSION,
                MOVE_DOUBLE_SLAP,
                MOVE_FAKE_OUT,
                MOVE_TICKLE,
            },
            },
            {
#line 1287
            .species = SPECIES_SOLOSIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1288
            .ability = ABILITY_MAGIC_GUARD,
#line 1289
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1291
                MOVE_CONFUSION,
                MOVE_NIGHT_SHADE,
                MOVE_ROLLOUT,
                MOVE_RECOVER,
            },
            },
        },
    },
#line 1296
    [TRAINER_PBL_NOVA_AND_CORA] =
    {
#line 1297
        .trainerName = _("Nova&Cora"),
#line 1298
        .trainerClass = TRAINER_CLASS_TWINS,
#line 1299
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 1300
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1302
        .doubleBattle = TRUE,
#line 1301
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1304
            .species = SPECIES_HATENNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1307
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1305
            .ability = ABILITY_HEALER,
#line 1306
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1308
                MOVE_PLAY_NICE,
                MOVE_LIFE_DEW,
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
            },
            },
            {
#line 1313
            .species = SPECIES_IMPIDIMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1316
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1314
            .ability = ABILITY_PICKPOCKET,
#line 1315
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1317
                MOVE_CONFIDE,
                MOVE_FLATTER,
                MOVE_FAKE_OUT,
                MOVE_ASSURANCE,
            },
            },
        },
    },
#line 1322
    [TRAINER_PBL_CLINTON] =
    {
#line 1323
        .trainerName = _("Clinton"),
#line 1324
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1325
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1326
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1328
        .doubleBattle = FALSE,
#line 1327
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1329
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1331
            .species = SPECIES_STUFFUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1334
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1332
            .ability = ABILITY_FLUFFY,
#line 1333
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1335
                MOVE_BRUTAL_SWING,
                MOVE_BIDE,
                MOVE_FORCE_PALM,
                MOVE_STOMP,
            },
            },
            {
#line 1340
            .species = SPECIES_ROCKRUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1343
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1341
            .ability = ABILITY_VITAL_SPIRIT,
#line 1342
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1344
                MOVE_DOUBLE_TEAM,
                MOVE_ROCK_THROW,
                MOVE_BITE,
                MOVE_ROAR,
            },
            },
            {
#line 1349
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1352
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1350
            .ability = ABILITY_TRACE,
#line 1351
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1353
                MOVE_CONFUSION,
                MOVE_SHADOW_SNEAK,
                MOVE_TELEPORT,
                MOVE_MAGICAL_LEAF,
            },
            },
            {
#line 1358
            .species = SPECIES_PAWMI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1361
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1359
            .ability = ABILITY_STATIC,
#line 1360
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1362
                MOVE_THUNDER_SHOCK,
                MOVE_BITE,
                MOVE_FAKE_OUT,
                MOVE_SWEET_KISS,
            },
            },
        },
    },
#line 1367
    [TRAINER_PBL_REBECCA] =
    {
#line 1368
        .trainerName = _("Rebecca"),
#line 1369
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 1370
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 1371
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1373
        .doubleBattle = FALSE,
#line 1372
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1374
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1376
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1379
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1377
            .ability = ABILITY_STATIC,
#line 1378
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1380
                MOVE_QUICK_ATTACK,
                MOVE_SPARK,
                MOVE_BITE,
                MOVE_SWIFT,
            },
            },
            {
#line 1385
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1388
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1387
            .ability = ABILITY_WATER_ABSORB,
#line 1386
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1389
                MOVE_LEECH_SEED,
                MOVE_DISABLE,
                MOVE_MAGICAL_LEAF,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 1394
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1397
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1395
            .ability = ABILITY_AFTERMATH,
#line 1396
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1398
                MOVE_SCREECH,
                MOVE_POISON_GAS,
                MOVE_BITE,
                MOVE_ACID_SPRAY,
            },
            },
            {
#line 1403
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1404
            .ability = ABILITY_OWN_TEMPO,
#line 1405
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1407
                MOVE_WATER_GUN,
                MOVE_YAWN,
                MOVE_DISABLE,
                MOVE_CONFUSION,
            },
            },
        },
    },
#line 1412
    [TRAINER_PBL_RYAN] =
    {
#line 1413
        .trainerName = _("Ryan"),
#line 1414
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 1415
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 1416
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1418
        .doubleBattle = FALSE,
#line 1417
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1419
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1421
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1424
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1422
            .ability = ABILITY_HYPER_CUTTER,
#line 1423
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1425
                MOVE_ROCK_SMASH,
                MOVE_BUBBLE,
                MOVE_LEER,
                MOVE_DIZZY_PUNCH,
            },
            },
            {
#line 1430
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1433
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1431
            .ability = ABILITY_POISON_POINT,
#line 1432
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1434
                MOVE_SCREECH,
                MOVE_BUG_BITE,
                MOVE_BITE,
                MOVE_TWINEEDLE,
            },
            },
            {
#line 1439
            .species = SPECIES_DEERLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1442
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1440
            .ability = ABILITY_SERENE_GRACE,
#line 1441
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1443
                MOVE_CHARM,
                MOVE_LEECH_SEED,
                MOVE_FEINT_ATTACK,
                MOVE_DOUBLE_KICK,
            },
            },
            {
#line 1448
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1451
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1449
            .ability = ABILITY_FLASH_FIRE,
#line 1450
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1452
                MOVE_TORMENT,
                MOVE_RAGE,
                MOVE_BITE,
                MOVE_FIRE_FANG,
            },
            },
        },
    },
#line 1457
    [TRAINER_PBL_CAITLYN] =
    {
#line 1458
        .trainerName = _("Caitlyn"),
#line 1459
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1460
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 1461
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1463
        .doubleBattle = FALSE,
#line 1462
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1464
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1466
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1469
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1467
            .ability = ABILITY_INTIMIDATE,
#line 1468
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1470
                MOVE_BITE,
                MOVE_RAGE,
                MOVE_FAKE_TEARS,
                MOVE_COVET,
            },
            },
            {
#line 1475
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1478
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1476
            .ability = ABILITY_THICK_FAT,
#line 1477
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1479
                MOVE_ICE_SHARD,
                MOVE_FAKE_OUT,
                MOVE_HEADBUTT,
                MOVE_WATER_GUN,
            },
            },
            {
#line 1484
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1487
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1485
            .ability = ABILITY_FLAME_BODY,
#line 1486
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1488
                MOVE_EMBER,
                MOVE_QUICK_ATTACK,
                MOVE_DOUBLE_KICK,
                MOVE_FIRE_SPIN,
            },
            },
            {
#line 1493
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1496
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1494
            .ability = ABILITY_CUD_CHEW,
#line 1495
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1497
                MOVE_MUD_SLAP,
                MOVE_ACID_SPRAY,
                MOVE_STUFF_CHEEKS,
                MOVE_SLUDGE,
            },
            },
        },
    },
#line 1502
    [TRAINER_PBL_KENNETH] =
    {
#line 1503
        .trainerName = _("Kenneth"),
#line 1504
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 1505
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 1506
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1508
        .doubleBattle = FALSE,
#line 1507
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1509
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1511
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1514
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1512
            .ability = ABILITY_STURDY,
#line 1513
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1515
                MOVE_FLAIL,
                MOVE_ROLLOUT,
                MOVE_SLAM,
                MOVE_BULLDOZE,
            },
            },
            {
#line 1520
            .species = SPECIES_PHANTUMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1523
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1521
            .ability = ABILITY_NATURAL_CURE,
#line 1522
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1524
                MOVE_BRANCH_POKE,
                MOVE_LEECH_SEED,
                MOVE_DISABLE,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 1529
            .species = SPECIES_ROOKIDEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1532
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1530
            .ability = ABILITY_BIG_PECKS,
#line 1531
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1533
                MOVE_POWER_TRIP,
                MOVE_FURY_ATTACK,
                MOVE_ROCK_SMASH,
                MOVE_PLUCK,
            },
            },
            {
#line 1538
            .species = SPECIES_GLAMEOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1541
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1539
            .ability = ABILITY_LIMBER,
#line 1540
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1542
                MOVE_CHARM,
                MOVE_QUICK_ATTACK,
                MOVE_FEINT_ATTACK,
                MOVE_FAKE_OUT,
            },
            },
        },
    },
#line 1547
    [TRAINER_PBL_KEVIN] =
    {
#line 1548
        .trainerName = _("Kevin"),
#line 1549
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1550
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 1551
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1553
        .doubleBattle = FALSE,
#line 1552
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1554
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1556
            .species = SPECIES_GRUBBIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1559
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1557
            .ability = ABILITY_SWARM,
#line 1558
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1560
                MOVE_STRING_SHOT,
                MOVE_VISE_GRIP,
                MOVE_BUG_BITE,
                MOVE_BITE,
            },
            },
            {
#line 1565
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1568
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1566
            .ability = ABILITY_SWARM,
#line 1567
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1569
                MOVE_RAZOR_LEAF,
                MOVE_BUG_BITE,
                MOVE_SYNTHESIS,
                MOVE_FLAIL,
            },
            },
            {
#line 1574
            .species = SPECIES_TAROUNTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1577
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1575
            .ability = ABILITY_INSOMNIA,
#line 1576
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1578
                MOVE_ASSURANCE,
                MOVE_BUG_BITE,
                MOVE_FEINT,
                MOVE_BLOCK,
            },
            },
            {
#line 1583
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1584
            .ability = ABILITY_FLASH_FIRE,
#line 1585
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1587
                MOVE_DEFENSE_CURL,
                MOVE_BUG_BITE,
                MOVE_ROLLOUT,
                MOVE_BITE,
            },
            },
        },
    },
#line 1592
    [TRAINER_PBL_DECLAN_LEVIATHAN_5] =
    {
#line 1593
        .trainerName = _("Declan"),
#line 1594
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 1595
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 1596
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1598
        .doubleBattle = FALSE,
#line 1597
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1600
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 1599
        .randomLead = FALSE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1602
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1605
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1603
            .ability = ABILITY_AFTERMATH,
#line 1604
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1606
                MOVE_SLUDGE,
                MOVE_ACID_SPRAY,
                MOVE_POISON_GAS,
                MOVE_DOUBLE_SLAP,
            },
            },
            {
#line 1611
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1614
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1612
            .ability = ABILITY_INSOMNIA,
#line 1613
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1615
                MOVE_CONFUSION,
                MOVE_WAKE_UP_SLAP,
                MOVE_HYPNOSIS,
                MOVE_HEADBUTT,
            },
            },
            {
#line 1620
            .species = SPECIES_BONSLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1623
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1621
            .ability = ABILITY_STURDY,
#line 1622
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1624
                MOVE_ROCK_THROW,
                MOVE_LOW_KICK,
                MOVE_FEINT_ATTACK,
                MOVE_TEARFUL_LOOK,
            },
            },
            {
#line 1629
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1632
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1630
            .ability = ABILITY_SAP_SIPPER,
#line 1631
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1633
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
                MOVE_STOMP,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 1638
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1638
            .heldItem = ITEM_EVIOLITE,
#line 1641
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1639
            .ability = ABILITY_SERENE_GRACE,
#line 1640
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1642
                MOVE_HEADBUTT,
                MOVE_ANCIENT_POWER,
                MOVE_GLARE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 1647
    [TRAINER_PBL_DECLAN_LEVIATHAN_5_BRUTAL] =
    {
#line 1648
        .trainerName = _("Declan"),
#line 1649
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 1650
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 1651
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1653
        .doubleBattle = FALSE,
#line 1652
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 1655
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 1654
        .randomLead = FALSE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1657
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1657
            .heldItem = ITEM_EVIOLITE,
#line 1660
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1658
            .ability = ABILITY_AFTERMATH,
#line 1659
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1661
                MOVE_SLUDGE,
                MOVE_ACID_SPRAY,
                MOVE_POISON_GAS,
                MOVE_DOUBLE_SLAP,
            },
            },
            {
#line 1666
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1666
            .heldItem = ITEM_EVIOLITE,
#line 1669
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1667
            .ability = ABILITY_BAD_DREAMS,
#line 1668
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1670
                MOVE_CONFUSION,
                MOVE_WAKE_UP_SLAP,
                MOVE_HYPNOSIS,
                MOVE_HEADBUTT,
            },
            },
            {
#line 1675
            .species = SPECIES_BONSLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1675
            .heldItem = ITEM_EVIOLITE,
#line 1678
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1676
            .ability = ABILITY_STURDY,
#line 1677
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1679
                MOVE_ROCK_THROW,
                MOVE_LOW_KICK,
                MOVE_FEINT_ATTACK,
                MOVE_TEARFUL_LOOK,
            },
            },
            {
#line 1684
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1684
            .heldItem = ITEM_EVIOLITE,
#line 1687
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1685
            .ability = ABILITY_SAP_SIPPER,
#line 1686
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1688
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
                MOVE_STOMP,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 1693
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1693
            .heldItem = ITEM_EVIOLITE,
#line 1696
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1694
            .ability = ABILITY_SERENE_GRACE,
#line 1695
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1697
                MOVE_HEADBUTT,
                MOVE_ANCIENT_POWER,
                MOVE_GLARE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 1702
    [TRAINER_PBL_GILBERT] =
    {
#line 1703
        .trainerName = _("Gilbert"),
#line 1704
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 1705
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 1706
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1708
        .doubleBattle = FALSE,
#line 1707
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1709
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1711
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1712
            .ability = ABILITY_SWIFT_SWIM,
#line 1713
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1715
                MOVE_SPLASH,
                MOVE_TACKLE,
                MOVE_FLAIL,
            },
            },
            {
#line 1719
            .species = SPECIES_FINNEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1722
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1720
            .ability = ABILITY_STORM_DRAIN,
#line 1721
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1723
                MOVE_SWEET_KISS,
                MOVE_TICKLE,
                MOVE_WATER_PULSE,
                MOVE_TAILWIND,
            },
            },
            {
#line 1728
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1731
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1729
            .ability = ABILITY_SHEER_FORCE,
#line 1730
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1732
                MOVE_MUD_SHOT,
                MOVE_STOMP,
                MOVE_BUBBLE_BEAM,
                MOVE_SLAM,
            },
            },
            {
#line 1737
            .species = SPECIES_CHEWTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1740
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1738
            .ability = ABILITY_STRONG_JAW,
#line 1739
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1741
                MOVE_WATER_GUN,
                MOVE_BITE,
                MOVE_HEADBUTT,
                MOVE_GASTRO_ACID,
            },
            },
        },
    },
#line 1746
    [TRAINER_PBL_MELANIE] =
    {
#line 1747
        .trainerName = _("Melanie"),
#line 1748
        .trainerClass = TRAINER_CLASS_LASS,
#line 1749
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 1750
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1752
        .doubleBattle = FALSE,
#line 1751
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1753
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1755
            .species = SPECIES_CUTIEFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1758
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1756
            .ability = ABILITY_SHIELD_DUST,
#line 1757
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1759
                MOVE_AROMATHERAPY,
                MOVE_STRUGGLE_BUG,
                MOVE_STUN_SPORE,
                MOVE_SWITCHEROO,
            },
            },
            {
#line 1764
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1767
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1765
            .ability = ABILITY_INTIMIDATE,
#line 1766
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1768
                MOVE_BITE,
                MOVE_HELPING_HAND,
                MOVE_DOUBLE_KICK,
                MOVE_FLAME_WHEEL,
            },
            },
            {
#line 1773
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1774
            .ability = ABILITY_TRUANT,
#line 1775
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1777
                MOVE_SNORE,
                MOVE_SLASH,
                MOVE_FEINT_ATTACK,
                MOVE_SLACK_OFF,
            },
            },
        },
    },
#line 1782
    [TRAINER_PBL_CONSTANCE] =
    {
#line 1783
        .trainerName = _("Constance"),
#line 1784
        .trainerClass = TRAINER_CLASS_LADY,
#line 1785
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1786
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1788
        .doubleBattle = FALSE,
#line 1787
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1789
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1791
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1792
            .ability = ABILITY_TECHNICIAN,
#line 1793
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1795
                MOVE_HELPING_HAND,
                MOVE_DOUBLE_SLAP,
                MOVE_TICKLE,
                MOVE_SWIFT,
            },
            },
            {
#line 1800
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1803
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1801
            .ability = ABILITY_LEAF_GUARD,
#line 1802
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1804
                MOVE_SLEEP_POWDER,
                MOVE_MEGA_DRAIN,
                MOVE_HELPING_HAND,
                MOVE_WORRY_SEED,
            },
            },
            {
#line 1809
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1812
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1810
            .ability = ABILITY_GUTS,
#line 1811
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1813
                MOVE_FAKE_OUT,
                MOVE_FORCE_PALM,
                MOVE_BULLET_PUNCH,
                MOVE_SMELLING_SALTS,
            },
            },
            {
#line 1818
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1821
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1819
            .ability = ABILITY_THICK_FAT,
#line 1820
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1822
                MOVE_CONFUSE_RAY,
                MOVE_PAYBACK,
                MOVE_PSYBEAM,
                MOVE_TRICK,
            },
            },
        },
    },
#line 1827
    [TRAINER_PBL_FRANK] =
    {
#line 1828
        .trainerName = _("Frank"),
#line 1829
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 1830
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 1831
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1833
        .doubleBattle = FALSE,
#line 1832
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1834
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1836
            .species = SPECIES_FLABEBE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1839
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1837
            .ability = ABILITY_FLOWER_VEIL,
#line 1838
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1840
                MOVE_TEARFUL_LOOK,
                MOVE_LUCKY_CHANT,
                MOVE_SYNTHESIS,
                MOVE_RAZOR_LEAF,
            },
            },
            {
#line 1845
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1848
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1846
            .ability = ABILITY_GRASS_PELT,
#line 1847
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1849
                MOVE_ROLLOUT,
                MOVE_LEECH_SEED,
                MOVE_RAZOR_LEAF,
                MOVE_BULLDOZE,
            },
            },
            {
#line 1854
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1857
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1855
            .ability = ABILITY_VOLT_ABSORB,
#line 1856
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1858
                MOVE_THUNDER_SHOCK,
                MOVE_FLATTER,
                MOVE_SPARK,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 1863
    [TRAINER_PBL_DUDLEY] =
    {
#line 1864
        .trainerName = _("Dudley"),
#line 1865
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 1866
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 1867
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1869
        .doubleBattle = FALSE,
#line 1868
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1870
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1872
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1875
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1873
            .ability = ABILITY_KEEN_EYE,
#line 1874
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1876
                MOVE_TWISTER,
                MOVE_AQUA_RING,
                MOVE_WING_ATTACK,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1881
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1884
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1882
            .ability = ABILITY_SCRAPPY,
#line 1883
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1885
                MOVE_FOCUS_ENERGY,
                MOVE_WING_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_RAGE,
            },
            },
            {
#line 1890
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1893
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1891
            .ability = ABILITY_WIND_POWER,
#line 1892
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1894
                MOVE_THUNDER_SHOCK,
                MOVE_UPROAR,
                MOVE_FEATHER_DANCE,
                MOVE_PLUCK,
            },
            },
            {
#line 1899
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1902
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1900
            .ability = ABILITY_SUPER_LUCK,
#line 1901
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1903
                MOVE_FURY_ATTACK,
                MOVE_AERIAL_ACE,
                MOVE_QUICK_ATTACK,
                MOVE_FEATHER_DANCE,
            },
            },
        },
    },
#line 1908
    [TRAINER_PBL_DAISY] =
    {
#line 1909
        .trainerName = _("Daisy"),
#line 1910
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 1911
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 1912
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1914
        .doubleBattle = FALSE,
#line 1913
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1915
        .randomLead = TRUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1917
            .species = SPECIES_SMEARGLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1920
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1918
            .ability = ABILITY_TECHNICIAN,
#line 1919
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1921
                MOVE_SKETCH,
            },
            },
            {
#line 1923
            .species = SPECIES_APPLIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1926
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1924
            .ability = ABILITY_RIPEN,
#line 1925
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1927
                MOVE_ASTONISH,
                MOVE_WITHDRAW,
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
            },
            },
            {
#line 1932
            .species = SPECIES_MILCERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1935
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1933
            .ability = ABILITY_SWEET_VEIL,
#line 1934
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1936
                MOVE_BABY_DOLL_EYES,
                MOVE_CHARM,
                MOVE_SWEET_KISS,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 1941
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1944
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1942
            .ability = ABILITY_SYNCHRONIZE,
#line 1943
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1945
                MOVE_TELEPORT,
            },
            },
            {
#line 1947
            .species = SPECIES_CLEFFA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1950
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1948
            .ability = ABILITY_CUTE_CHARM,
#line 1949
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1951
                MOVE_DISARMING_VOICE,
                MOVE_CHARM,
                MOVE_ENCORE,
                MOVE_WISH,
            },
            },
            {
#line 1956
            .species = SPECIES_TYROGUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1959
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1957
            .ability = ABILITY_GUTS,
#line 1958
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1960
                MOVE_MACH_PUNCH,
                MOVE_RAPID_SPIN,
                MOVE_COUNTER,
                MOVE_VACUUM_WAVE,
            },
            },
        },
    },
#line 1965
    [TRAINER_PBL_VIC_AND_DELL] =
    {
#line 1966
        .trainerName = _("Vic&Dell"),
#line 1967
        .trainerClass = TRAINER_CLASS_TWINS,
#line 1968
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 1969
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1971
        .doubleBattle = TRUE,
#line 1970
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1973
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1976
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1974
            .ability = ABILITY_PLUS,
#line 1975
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1977
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_CHARM,
                MOVE_ELECTRO_BALL,
            },
            },
            {
#line 1982
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1985
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1983
            .ability = ABILITY_MINUS,
#line 1984
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1986
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_CHARM,
                MOVE_ELECTRO_BALL,
            },
            },
        },
    },
#line 1991
    [TRAINER_PBL_MINA] =
    {
#line 1992
        .trainerName = _("Nina"),
#line 1993
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 1994
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 1995
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1997
        .doubleBattle = FALSE,
#line 1996
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1998
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2000
            .species = SPECIES_WIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2000
            .heldItem = ITEM_ORAN_BERRY,
#line 2003
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2001
            .ability = ABILITY_GOOEY,
#line 2002
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2004
                MOVE_AQUA_JET,
                MOVE_WATER_PULSE,
                MOVE_SLAM,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 2009
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2009
            .heldItem = ITEM_ORAN_BERRY,
#line 2012
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2010
            .ability = ABILITY_HYDRATION,
#line 2011
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2013
                MOVE_MAGNITUDE,
                MOVE_WATER_PULSE,
                MOVE_MUD_BOMB,
                MOVE_REST,
            },
            },
            {
#line 2018
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2018
            .heldItem = ITEM_ORAN_BERRY,
#line 2021
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2019
            .ability = ABILITY_SWIFT_SWIM,
#line 2020
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2022
                MOVE_WATER_PULSE,
                MOVE_HORN_ATTACK,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
            {
#line 2027
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2027
            .heldItem = ITEM_ORAN_BERRY,
#line 2030
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2028
            .ability = ABILITY_REGENERATOR,
#line 2029
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2031
                MOVE_WATER_PULSE,
                MOVE_HORN_ATTACK,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
        },
    },
#line 2036
    [TRAINER_PBL_ZACK_AND_COBY_LEVIATHAN_6] =
    {
#line 2037
        .trainerName = _("Zack&Coby"),
#line 2038
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 2039
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 2040
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2042
        .doubleBattle = TRUE,
#line 2041
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2044
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2043
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2046
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2046
            .heldItem = ITEM_ORAN_BERRY,
#line 2049
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2047
            .ability = ABILITY_SWIFT_SWIM,
#line 2048
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2050
                MOVE_WATER_PULSE,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 2053
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2053
            .heldItem = ITEM_ORAN_BERRY,
#line 2056
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2054
            .ability = ABILITY_SWIFT_SWIM,
#line 2055
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2057
                MOVE_WATER_PULSE,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 2060
    [TRAINER_PBL_ZACK_AND_COBY_LEVIATHAN_6_BRUTAL] =
    {
#line 2061
        .trainerName = _("Zack&Coby"),
#line 2062
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 2063
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 2064
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2066
        .doubleBattle = TRUE,
#line 2065
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 2068
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2067
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2070
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2070
            .heldItem = ITEM_ORAN_BERRY,
#line 2073
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2071
            .ability = ABILITY_SWIFT_SWIM,
#line 2072
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2074
                MOVE_WATER_PULSE,
                MOVE_DRAINING_KISS,
                MOVE_HEAL_PULSE,
                MOVE_SWEET_KISS,
            },
            },
            {
#line 2079
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2079
            .heldItem = ITEM_ORAN_BERRY,
#line 2082
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 30, 30),
#line 2080
            .ability = ABILITY_SWIFT_SWIM,
#line 2081
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2083
                MOVE_WATER_PULSE,
                MOVE_TAILWIND,
                MOVE_GUST,
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 2089
    [TRAINER_PBL_MILLIE] =
    {
#line 2090
        .trainerName = _("Millie"),
#line 2091
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 2092
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 2093
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2095
        .doubleBattle = FALSE,
#line 2094
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2096
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2098
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2100
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2099
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2101
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2103
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2102
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2104
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2106
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2105
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2107
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2109
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2108
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2110
    [TRAINER_PBL_JAMAL] =
    {
#line 2111
        .trainerName = _("Jamal"),
#line 2112
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2113
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2114
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2116
        .doubleBattle = FALSE,
#line 2115
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2117
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2119
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2121
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2120
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2122
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2124
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2123
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2125
            .species = SPECIES_FOMANTIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2127
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2126
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2128
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2130
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2129
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2131
    [TRAINER_PBL_PAIGE] =
    {
#line 2132
        .trainerName = _("Paige"),
#line 2133
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 2134
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 2135
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2137
        .doubleBattle = FALSE,
#line 2136
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2138
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2140
            .species = SPECIES_COMBEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2142
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2141
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2143
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2145
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2144
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2146
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2147
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2149
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2151
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2150
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2152
    [TRAINER_PBL_SETH] =
    {
#line 2153
        .trainerName = _("Seth"),
#line 2154
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2155
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 2156
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2158
        .doubleBattle = FALSE,
#line 2157
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2159
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2161
            .species = SPECIES_TYMPOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2163
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2162
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2164
            .species = SPECIES_MUDBRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2166
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2165
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2167
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2169
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2168
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2170
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2171
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2173
    [TRAINER_PBL_CONNIE] =
    {
#line 2174
        .trainerName = _("Connie"),
#line 2175
        .trainerClass = TRAINER_CLASS_LASS,
#line 2176
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 2177
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2179
        .doubleBattle = FALSE,
#line 2178
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2180
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2182
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2184
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2183
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2185
            .species = SPECIES_DEWPIDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2187
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2186
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2188
    [TRAINER_PBL_PETER] =
    {
#line 2189
        .trainerName = _("Peter"),
#line 2190
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 2191
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 2192
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2194
        .doubleBattle = FALSE,
#line 2193
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2195
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2197
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2199
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2198
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2200
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2202
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2201
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2203
    [TRAINER_PBL_WHITAKER] =
    {
#line 2204
        .trainerName = _("Whitaker"),
#line 2205
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 2206
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 2207
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 2209
        .doubleBattle = FALSE,
#line 2208
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2210
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2212
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2215
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2213
            .ability = ABILITY_SNIPER,
#line 2214
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2216
                MOVE_FURY_ATTACK,
                MOVE_QUICK_ATTACK,
                MOVE_WING_ATTACK,
                MOVE_PURSUIT,
            },
            },
            {
#line 2221
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2223
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2222
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2224
            .species = SPECIES_FLITTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2226
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2225
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2227
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2228
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2230
    [TRAINER_PBL_BETTY_LEVIATHAN_7] =
    {
#line 2231
        .trainerName = _("Betty"),
#line 2232
        .trainerClass = TRAINER_CLASS_LADY,
#line 2233
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 2234
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2236
        .doubleBattle = TRUE,
#line 2235
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2238
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2237
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2240
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2240
            .heldItem = ITEM_SITRUS_BERRY,
#line 2243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2241
            .ability = ABILITY_ANGER_SHELL,
#line 2242
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2244
                MOVE_ROCK_TOMB,
                MOVE_METAL_CLAW,
                MOVE_ROCK_SMASH,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 2249
            .species = SPECIES_DEDENNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2249
            .heldItem = ITEM_SITRUS_BERRY,
#line 2252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2250
            .ability = ABILITY_CHEEK_POUCH,
#line 2251
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2253
                MOVE_PARABOLIC_CHARGE,
                MOVE_DRAINING_KISS,
                MOVE_NUZZLE,
                MOVE_CHARGE_BEAM,
            },
            },
        },
    },
#line 2258
    [TRAINER_PBL_BETTY_LEVIATHAN_7_BRUTAL] =
    {
#line 2259
        .trainerName = _("Betty"),
#line 2260
        .trainerClass = TRAINER_CLASS_LADY,
#line 2261
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 2262
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2264
        .doubleBattle = TRUE,
#line 2263
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 2266
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2265
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2268
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2268
            .heldItem = ITEM_SITRUS_BERRY,
#line 2271
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2269
            .ability = ABILITY_ANGER_SHELL,
#line 2270
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2272
                MOVE_ROCK_TOMB,
                MOVE_METAL_CLAW,
                MOVE_ROCK_SMASH,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 2277
            .species = SPECIES_DEDENNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2277
            .heldItem = ITEM_SITRUS_BERRY,
#line 2280
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2278
            .ability = ABILITY_CHEEK_POUCH,
#line 2279
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2281
                MOVE_PARABOLIC_CHARGE,
                MOVE_DRAINING_KISS,
                MOVE_NUZZLE,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 2286
            .species = SPECIES_DRAMPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2286
            .heldItem = ITEM_SITRUS_BERRY,
#line 2289
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2287
            .ability = ABILITY_BERSERK,
#line 2288
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2290
                MOVE_DRAGON_BREATH,
                MOVE_GLARE,
                MOVE_NATURAL_GIFT,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 2295
    [TRAINER_PBL_JIMMY] =
    {
#line 2296
        .trainerName = _("Jimmy"),
#line 2297
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 2298
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 2299
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2301
        .doubleBattle = FALSE,
#line 2300
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2302
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2304
            .species = SPECIES_NOIBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2306
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2305
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2307
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2309
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2308
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2310
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2312
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2311
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2313
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2315
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2314
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2316
    [TRAINER_PBL_EMILIANO] =
    {
#line 2317
        .trainerName = _("Emiliano"),
#line 2318
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2319
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 2320
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2322
        .doubleBattle = FALSE,
#line 2321
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2323
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2325
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2327
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2326
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2328
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2330
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2329
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2331
            .species = SPECIES_CUFANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2333
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2332
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2334
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2336
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2335
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2337
    [TRAINER_PBL_BECKHAM] =
    {
#line 2338
        .trainerName = _("Beckham"),
#line 2339
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2340
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2341
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2343
        .doubleBattle = FALSE,
#line 2342
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2344
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2346
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2348
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2347
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2349
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2351
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2350
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2352
            .species = SPECIES_HELIOPTILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2354
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2353
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2355
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2357
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2356
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2358
    [TRAINER_PBL_KAREN] =
    {
#line 2359
        .trainerName = _("Karen"),
#line 2360
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 2361
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 2362
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2364
        .doubleBattle = FALSE,
#line 2363
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2365
        .randomLead = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2367
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2369
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2368
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2370
    [TRAINER_PBL_JAYDEN] =
    {
#line 2371
        .trainerName = _("Jayden"),
#line 2372
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2373
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 2374
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2376
        .doubleBattle = FALSE,
#line 2375
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2377
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2379
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2381
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2380
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2382
            .species = SPECIES_ROLYCOLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2384
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2383
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2385
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2387
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2386
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2388
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2390
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2389
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2391
    [TRAINER_PBL_NEIL] =
    {
#line 2392
        .trainerName = _("Neil"),
#line 2393
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 2394
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 2395
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2397
        .doubleBattle = FALSE,
#line 2396
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2398
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2400
            .species = SPECIES_RELLOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2402
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2401
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2403
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2405
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2404
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2406
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2408
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2407
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2409
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2411
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2410
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2412
    [TRAINER_PBL_TAMARA] =
    {
#line 2413
        .trainerName = _("Tamara"),
#line 2414
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 2415
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 2416
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2418
        .doubleBattle = FALSE,
#line 2417
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2419
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2421
            .species = SPECIES_SALANDIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2423
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2422
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2424
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2426
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2425
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2427
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2429
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2428
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2430
            .species = SPECIES_MORELULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2432
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2431
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2433
    [TRAINER_PBL_ALISTAIR_LEVIATHAN_8] =
    {
#line 2434
        .trainerName = _("Alistair"),
#line 2435
        .trainerClass = TRAINER_CLASS_ROUGHNECK,
#line 2436
        .trainerPic = TRAINER_PIC_ROUGHNECK,
        .encounterMusic_gender =
#line 2437
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2439
        .doubleBattle = FALSE,
#line 2438
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2441
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2440
        .randomLead = FALSE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2443
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2443
            .heldItem = ITEM_POISON_BARB,
#line 2446
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2444
            .ability = ABILITY_POISON_TOUCH,
#line 2445
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2447
                MOVE_SLUDGE,
                MOVE_ACID_SPRAY,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2452
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2452
            .heldItem = ITEM_SHARP_BEAK,
#line 2455
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2453
            .ability = ABILITY_AFTERMATH,
#line 2454
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2456
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_DEFOG,
            },
            },
            {
#line 2461
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2461
            .heldItem = ITEM_SITRUS_BERRY,
#line 2464
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2462
            .ability = ABILITY_POISON_TOUCH,
#line 2463
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2465
                MOVE_VENOSHOCK,
                MOVE_VACUUM_WAVE,
                MOVE_FAKE_OUT,
                MOVE_THIEF,
            },
            },
            {
#line 2470
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2470
            .heldItem = ITEM_SITRUS_BERRY,
#line 2473
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2471
            .ability = ABILITY_STRONG_JAW,
#line 2472
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2474
                MOVE_BITE,
                MOVE_HOWL,
                MOVE_HEADBUTT,
                MOVE_TRAILBLAZE,
            },
            },
            {
#line 2479
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2479
            .heldItem = ITEM_BLACK_BELT,
#line 2482
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2480
            .ability = ABILITY_GUTS,
#line 2481
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2483
                MOVE_REVENGE,
                MOVE_SEISMIC_TOSS,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 2488
    [TRAINER_PBL_ALISTAIR_LEVIATHAN_8_BRUTAL] =
    {
#line 2489
        .trainerName = _("Alistair"),
#line 2490
        .trainerClass = TRAINER_CLASS_ROUGHNECK,
#line 2491
        .trainerPic = TRAINER_PIC_ROUGHNECK,
        .encounterMusic_gender =
#line 2492
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2494
        .doubleBattle = FALSE,
#line 2493
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 2496
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2495
        .randomLead = FALSE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2498
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2498
            .heldItem = ITEM_POISON_BARB,
#line 2501
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2499
            .ability = ABILITY_POISON_TOUCH,
#line 2500
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2502
                MOVE_SLUDGE,
                MOVE_ACID_SPRAY,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2507
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2507
            .heldItem = ITEM_SHARP_BEAK,
#line 2510
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2508
            .ability = ABILITY_AFTERMATH,
#line 2509
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2511
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_DEFOG,
            },
            },
            {
#line 2516
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2516
            .heldItem = ITEM_SITRUS_BERRY,
#line 2519
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2517
            .ability = ABILITY_POISON_TOUCH,
#line 2518
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2520
                MOVE_VENOSHOCK,
                MOVE_VACUUM_WAVE,
                MOVE_FAKE_OUT,
                MOVE_THIEF,
            },
            },
            {
#line 2525
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2525
            .heldItem = ITEM_SITRUS_BERRY,
#line 2528
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2526
            .ability = ABILITY_STRONG_JAW,
#line 2527
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2529
                MOVE_BITE,
                MOVE_HOWL,
                MOVE_HEADBUTT,
                MOVE_TRAILBLAZE,
            },
            },
            {
#line 2534
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2534
            .heldItem = ITEM_BLACK_BELT,
#line 2537
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2535
            .ability = ABILITY_GUTS,
#line 2536
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2538
                MOVE_REVENGE,
                MOVE_SEISMIC_TOSS,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 2543
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2543
            .heldItem = ITEM_SITRUS_BERRY,
#line 2546
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2544
            .ability = ABILITY_MERCILESS,
#line 2545
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2547
                MOVE_VENOSHOCK,
                MOVE_POISON_FANG,
                MOVE_THIEF,
                MOVE_GLARE,
            },
            },
        },
    },
#line 2552
    [TRAINER_PBL_COOPER] =
    {
#line 2553
        .trainerName = _("STEVEN"),
#line 2554
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2555
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2557
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2559
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2563
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2562
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2561
            .lvl = 42,
#line 2560
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2564
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2569
    [TRAINER_PBL_CARMINE] =
    {
#line 2570
        .trainerName = _("STEVEN"),
#line 2571
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2572
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2574
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2576
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2580
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2579
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2578
            .lvl = 42,
#line 2577
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2581
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2586
    [TRAINER_PBL_ARI] =
    {
#line 2587
        .trainerName = _("STEVEN"),
#line 2588
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2589
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2591
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2593
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2597
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2596
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2595
            .lvl = 42,
#line 2594
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2598
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2603
    [TRAINER_PBL_BERTHA] =
    {
#line 2604
        .trainerName = _("STEVEN"),
#line 2605
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2606
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2608
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2610
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2614
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2613
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2612
            .lvl = 42,
#line 2611
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2615
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2620
    [TRAINER_PBL_CASSANDRA] =
    {
#line 2621
        .trainerName = _("STEVEN"),
#line 2622
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2623
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2625
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2627
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2631
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2630
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2629
            .lvl = 42,
#line 2628
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2632
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2637
    [TRAINER_PBL_DOMINIC] =
    {
#line 2638
        .trainerName = _("STEVEN"),
#line 2639
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2640
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2642
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2644
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2648
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2647
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2646
            .lvl = 42,
#line 2645
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2649
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2654
    [TRAINER_PBL_ERICA] =
    {
#line 2655
        .trainerName = _("STEVEN"),
#line 2656
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2657
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2659
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2661
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2665
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2664
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2663
            .lvl = 42,
#line 2662
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2666
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2671
    [TRAINER_PBL_KYLE] =
    {
#line 2672
        .trainerName = _("STEVEN"),
#line 2673
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2674
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2676
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2678
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2682
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2681
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2680
            .lvl = 42,
#line 2679
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2683
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2688
    [TRAINER_PBL_BELLE] =
    {
#line 2689
        .trainerName = _("STEVEN"),
#line 2690
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2691
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2693
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2695
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2699
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2698
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2697
            .lvl = 42,
#line 2696
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2700
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2705
    [TRAINER_PBL_DEWEY] =
    {
#line 2706
        .trainerName = _("STEVEN"),
#line 2707
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2708
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2710
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2712
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2716
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2715
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2714
            .lvl = 42,
#line 2713
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2717
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2722
    [TRAINER_PBL_PEARLIE] =
    {
#line 2723
        .trainerName = _("STEVEN"),
#line 2724
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2725
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2727
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2729
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2733
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2732
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2731
            .lvl = 42,
#line 2730
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2734
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2739
    [TRAINER_PBL_ERNEST] =
    {
#line 2740
        .trainerName = _("STEVEN"),
#line 2741
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2742
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2744
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2746
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2750
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2749
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2748
            .lvl = 42,
#line 2747
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2751
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2756
    [TRAINER_PBL_ALANA] =
    {
#line 2757
        .trainerName = _("STEVEN"),
#line 2758
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2759
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2761
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2763
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2767
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2766
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2765
            .lvl = 42,
#line 2764
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2768
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2773
    [TRAINER_PBL_SUSAN] =
    {
#line 2774
        .trainerName = _("STEVEN"),
#line 2775
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2776
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2778
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2780
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2784
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2783
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2782
            .lvl = 42,
#line 2781
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2785
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2790
    [TRAINER_PBL_CONRAD] =
    {
#line 2791
        .trainerName = _("STEVEN"),
#line 2792
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2793
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2795
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2797
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2801
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2800
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2799
            .lvl = 42,
#line 2798
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2802
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2807
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9] =
    {
#line 2808
        .trainerName = _("STEVEN"),
#line 2809
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2810
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2812
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2814
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2818
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2817
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2816
            .lvl = 42,
#line 2815
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2819
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2824
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9_BRUTAL] =
    {
#line 2825
        .trainerName = _("STEVEN"),
#line 2826
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2827
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2829
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2831
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2835
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2834
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2833
            .lvl = 42,
#line 2832
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2836
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2841
    [TRAINER_PBL_JEANETTE] =
    {
#line 2842
        .trainerName = _("STEVEN"),
#line 2843
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2844
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2846
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2848
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2852
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2851
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2850
            .lvl = 42,
#line 2849
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2853
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2858
    [TRAINER_PBL_EMMA_AND_LEO] =
    {
#line 2859
        .trainerName = _("STEVEN"),
#line 2860
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2861
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2863
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2865
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2869
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2868
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2867
            .lvl = 42,
#line 2866
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2870
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2875
    [TRAINER_PBL_JOEL] =
    {
#line 2876
        .trainerName = _("STEVEN"),
#line 2877
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2878
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2880
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2882
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2886
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2885
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2884
            .lvl = 42,
#line 2883
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2887
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2892
    [TRAINER_PBL_MARION] =
    {
#line 2893
        .trainerName = _("STEVEN"),
#line 2894
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2895
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2897
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2899
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2903
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2902
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2901
            .lvl = 42,
#line 2900
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2904
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2909
    [TRAINER_PBL_REGINA] =
    {
#line 2910
        .trainerName = _("STEVEN"),
#line 2911
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2912
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2914
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2916
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2920
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2919
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2918
            .lvl = 42,
#line 2917
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2921
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2926
    [TRAINER_PBL_NEWTON_LEVIATHAN_10] =
    {
#line 2927
        .trainerName = _("STEVEN"),
#line 2928
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2929
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2931
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2933
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2937
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2936
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2935
            .lvl = 42,
#line 2934
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2938
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2943
    [TRAINER_PBL_NEWTON_LEVIATHAN_10_BRUTAL] =
    {
#line 2944
        .trainerName = _("STEVEN"),
#line 2945
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2946
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2948
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2950
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2954
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2953
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2952
            .lvl = 42,
#line 2951
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2955
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2960
    [TRAINER_PBL_ESSENCE] =
    {
#line 2961
        .trainerName = _("STEVEN"),
#line 2962
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2963
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2965
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2967
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2971
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2970
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2969
            .lvl = 42,
#line 2968
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2972
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2977
    [TRAINER_PBL_DOLORES] =
    {
#line 2978
        .trainerName = _("STEVEN"),
#line 2979
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2980
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2982
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2984
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2988
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2987
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2986
            .lvl = 42,
#line 2985
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2989
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2994
    [TRAINER_PBL_JULIE] =
    {
#line 2995
        .trainerName = _("STEVEN"),
#line 2996
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2997
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2999
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3001
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3005
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3004
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3003
            .lvl = 42,
#line 3002
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3006
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3011
    [TRAINER_PBL_ROMULUS] =
    {
#line 3012
        .trainerName = _("STEVEN"),
#line 3013
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3014
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3016
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3018
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3022
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3021
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3020
            .lvl = 42,
#line 3019
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3023
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3028
    [TRAINER_PBL_TREVOR] =
    {
#line 3029
        .trainerName = _("STEVEN"),
#line 3030
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3031
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3033
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3035
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3039
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3038
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3037
            .lvl = 42,
#line 3036
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3040
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3045
    [TRAINER_PBL_FEDERICO] =
    {
#line 3046
        .trainerName = _("STEVEN"),
#line 3047
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3048
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3050
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3052
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3056
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3055
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3054
            .lvl = 42,
#line 3053
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3057
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3062
    [TRAINER_PBL_GENIE] =
    {
#line 3063
        .trainerName = _("STEVEN"),
#line 3064
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3065
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3067
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3069
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3073
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3072
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3071
            .lvl = 42,
#line 3070
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3074
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3079
    [TRAINER_PBL_HILDA] =
    {
#line 3080
        .trainerName = _("STEVEN"),
#line 3081
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3082
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3084
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3086
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3090
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3089
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3088
            .lvl = 42,
#line 3087
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3091
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3096
    [TRAINER_PBL_KINLEY] =
    {
#line 3097
        .trainerName = _("STEVEN"),
#line 3098
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3099
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3101
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3103
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3107
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3106
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3105
            .lvl = 42,
#line 3104
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3108
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3113
    [TRAINER_PBL_VIOLET] =
    {
#line 3114
        .trainerName = _("STEVEN"),
#line 3115
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3116
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3118
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3120
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3124
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3123
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3122
            .lvl = 42,
#line 3121
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3125
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3130
    [TRAINER_PBL_WANDA] =
    {
#line 3131
        .trainerName = _("STEVEN"),
#line 3132
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3133
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3135
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3137
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3141
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3140
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3139
            .lvl = 42,
#line 3138
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3142
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3147
    [TRAINER_PBL_AMBER_AND_KIM] =
    {
#line 3148
        .trainerName = _("STEVEN"),
#line 3149
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3150
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3152
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3154
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3158
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3157
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3156
            .lvl = 42,
#line 3155
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3159
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3164
    [TRAINER_PBL_JAN_AND_ERIN] =
    {
#line 3165
        .trainerName = _("STEVEN"),
#line 3166
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3167
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3169
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3171
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3175
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3174
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3173
            .lvl = 42,
#line 3172
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3176
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3181
    [TRAINER_PBL_STEVE] =
    {
#line 3182
        .trainerName = _("STEVEN"),
#line 3183
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3184
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3186
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3188
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3192
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3191
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3190
            .lvl = 42,
#line 3189
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3193
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3198
    [TRAINER_PBL_GOULD] =
    {
#line 3199
        .trainerName = _("STEVEN"),
#line 3200
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3201
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3203
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3205
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3209
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3208
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3207
            .lvl = 42,
#line 3206
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3210
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3215
    [TRAINER_PBL_MENDEL] =
    {
#line 3216
        .trainerName = _("STEVEN"),
#line 3217
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3218
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3220
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3222
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3226
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3224
            .lvl = 42,
#line 3223
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3227
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3232
    [TRAINER_PBL_DARWIN] =
    {
#line 3233
        .trainerName = _("STEVEN"),
#line 3234
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3235
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3237
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3239
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3243
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3242
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3241
            .lvl = 42,
#line 3240
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3244
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3249
    [TRAINER_PBL_JENNY_LEVIATHAN_11] =
    {
#line 3250
        .trainerName = _("STEVEN"),
#line 3251
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3252
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3254
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3256
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3260
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3259
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3258
            .lvl = 42,
#line 3257
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3261
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3266
    [TRAINER_PBL_JENNY_LEVIATHAN_11_BRUTAL] =
    {
#line 3267
        .trainerName = _("STEVEN"),
#line 3268
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3269
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3271
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3273
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3277
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3275
            .lvl = 42,
#line 3274
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3278
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3283
    [TRAINER_PBL_BART] =
    {
#line 3284
        .trainerName = _("STEVEN"),
#line 3285
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3286
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3288
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3290
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3294
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3293
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3292
            .lvl = 42,
#line 3291
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3295
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3300
    [TRAINER_PBL_NIGEL] =
    {
#line 3301
        .trainerName = _("STEVEN"),
#line 3302
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3303
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3305
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3307
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3311
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3310
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3309
            .lvl = 42,
#line 3308
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3312
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3317
    [TRAINER_PBL_LOLA] =
    {
#line 3318
        .trainerName = _("STEVEN"),
#line 3319
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3320
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3322
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3324
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3328
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3327
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3326
            .lvl = 42,
#line 3325
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3329
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3334
    [TRAINER_PBL_CHARLIE] =
    {
#line 3335
        .trainerName = _("STEVEN"),
#line 3336
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3337
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3339
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3341
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3345
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3344
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3343
            .lvl = 42,
#line 3342
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3346
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3351
    [TRAINER_PBL_RANDOLPH] =
    {
#line 3352
        .trainerName = _("STEVEN"),
#line 3353
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3354
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3356
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3358
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3362
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3361
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3360
            .lvl = 42,
#line 3359
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3363
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3368
    [TRAINER_PBL_TODD] =
    {
#line 3369
        .trainerName = _("STEVEN"),
#line 3370
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3371
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3373
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3375
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3379
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3378
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3377
            .lvl = 42,
#line 3376
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3380
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3385
    [TRAINER_PBL_RUSSELL] =
    {
#line 3386
        .trainerName = _("STEVEN"),
#line 3387
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3388
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3390
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3392
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3396
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3395
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3394
            .lvl = 42,
#line 3393
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3397
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3402
    [TRAINER_PBL_OTIS] =
    {
#line 3403
        .trainerName = _("STEVEN"),
#line 3404
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3405
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3407
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3409
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3413
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3412
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3411
            .lvl = 42,
#line 3410
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3414
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3419
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12] =
    {
#line 3420
        .trainerName = _("STEVEN"),
#line 3421
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3422
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3424
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3426
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3430
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3429
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3428
            .lvl = 42,
#line 3427
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3431
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3436
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12_BRUTAL] =
    {
#line 3437
        .trainerName = _("STEVEN"),
#line 3438
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3439
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3441
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3443
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3447
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3446
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3445
            .lvl = 42,
#line 3444
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3448
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3453
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13] =
    {
#line 3454
        .trainerName = _("STEVEN"),
#line 3455
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3456
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3458
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3460
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3464
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3463
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3462
            .lvl = 42,
#line 3461
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3465
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3470
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13_BRUTAL] =
    {
#line 3471
        .trainerName = _("STEVEN"),
#line 3472
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3473
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3475
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3477
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3481
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3480
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3479
            .lvl = 42,
#line 3478
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3482
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3487
    [TRAINER_PBL_IONA] =
    {
#line 3488
        .trainerName = _("STEVEN"),
#line 3489
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3490
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3492
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3494
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3498
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3497
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3496
            .lvl = 42,
#line 3495
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3499
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3504
    [TRAINER_PBL_BERKE] =
    {
#line 3505
        .trainerName = _("STEVEN"),
#line 3506
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3507
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3509
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3511
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3515
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3514
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3513
            .lvl = 42,
#line 3512
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3516
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3521
    [TRAINER_PBL_TANISHA] =
    {
#line 3522
        .trainerName = _("STEVEN"),
#line 3523
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3524
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3526
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3528
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3532
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3531
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3530
            .lvl = 42,
#line 3529
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3533
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3538
    [TRAINER_PBL_ROBERT] =
    {
#line 3539
        .trainerName = _("STEVEN"),
#line 3540
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3541
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3543
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3545
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3549
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3548
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3547
            .lvl = 42,
#line 3546
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3550
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3555
    [TRAINER_PBL_CHRIS] =
    {
#line 3556
        .trainerName = _("STEVEN"),
#line 3557
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3558
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3560
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3562
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3566
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3565
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3564
            .lvl = 42,
#line 3563
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3567
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3572
    [TRAINER_PBL_ANGUS] =
    {
#line 3573
        .trainerName = _("STEVEN"),
#line 3574
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3575
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3577
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3579
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3583
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3582
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3581
            .lvl = 42,
#line 3580
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3584
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3589
    [TRAINER_PBL_LILY_LEVIATHAN_14] =
    {
#line 3590
        .trainerName = _("STEVEN"),
#line 3591
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3592
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3594
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3596
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3600
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3599
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3598
            .lvl = 42,
#line 3597
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3601
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3606
    [TRAINER_PBL_LILY_LEVIATHAN_14_BRUTAL] =
    {
#line 3607
        .trainerName = _("STEVEN"),
#line 3608
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3609
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3611
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3613
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3617
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3616
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3615
            .lvl = 42,
#line 3614
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3618
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3623
    [TRAINER_PBL_AXLE] =
    {
#line 3624
        .trainerName = _("STEVEN"),
#line 3625
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3626
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3628
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3630
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3634
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3633
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3632
            .lvl = 42,
#line 3631
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3635
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3640
    [TRAINER_PBL_RAFAEL] =
    {
#line 3641
        .trainerName = _("STEVEN"),
#line 3642
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3643
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3645
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3647
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3651
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3650
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3649
            .lvl = 42,
#line 3648
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3652
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3657
    [TRAINER_PBL_GEORGINA] =
    {
#line 3658
        .trainerName = _("STEVEN"),
#line 3659
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3660
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3662
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3664
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3668
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3667
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3666
            .lvl = 42,
#line 3665
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3669
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3674
    [TRAINER_PBL_MIA_LEVIATHAN_15] =
    {
#line 3675
        .trainerName = _("STEVEN"),
#line 3676
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3677
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3679
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3681
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3685
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3684
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3683
            .lvl = 42,
#line 3682
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3686
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3691
    [TRAINER_PBL_MIA_LEVIATHAN_15_BRUTAL] =
    {
#line 3692
        .trainerName = _("STEVEN"),
#line 3693
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3694
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3696
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3698
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3702
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3701
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3700
            .lvl = 42,
#line 3699
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3703
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3708
    [TRAINER_PBL_DORIS] =
    {
#line 3709
        .trainerName = _("STEVEN"),
#line 3710
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3711
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3713
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3715
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3719
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3718
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3717
            .lvl = 42,
#line 3716
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3720
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3725
    [TRAINER_PBL_HOMER] =
    {
#line 3726
        .trainerName = _("STEVEN"),
#line 3727
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3728
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3730
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3732
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3736
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3735
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3734
            .lvl = 42,
#line 3733
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3737
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3742
    [TRAINER_PBL_JOHN] =
    {
#line 3743
        .trainerName = _("STEVEN"),
#line 3744
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3745
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3747
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3749
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3753
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3752
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3751
            .lvl = 42,
#line 3750
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3754
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3759
    [TRAINER_PBL_GLENN] =
    {
#line 3760
        .trainerName = _("STEVEN"),
#line 3761
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3762
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3764
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3766
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3770
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3769
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3768
            .lvl = 42,
#line 3767
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3771
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3776
    [TRAINER_PBL_JAY] =
    {
#line 3777
        .trainerName = _("STEVEN"),
#line 3778
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3779
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3781
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3783
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3787
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3786
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3785
            .lvl = 42,
#line 3784
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3788
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3793
    [TRAINER_PBL_TYLER] =
    {
#line 3794
        .trainerName = _("STEVEN"),
#line 3795
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3796
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3798
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3800
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3804
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3803
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3802
            .lvl = 42,
#line 3801
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3805
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3810
    [TRAINER_PBL_TERRENCE] =
    {
#line 3811
        .trainerName = _("STEVEN"),
#line 3812
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3813
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3815
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3817
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3821
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3820
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3819
            .lvl = 42,
#line 3818
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3822
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3827
    [TRAINER_PBL_MARTY] =
    {
#line 3828
        .trainerName = _("STEVEN"),
#line 3829
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3830
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3832
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3834
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3838
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3837
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3836
            .lvl = 42,
#line 3835
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3839
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3844
    [TRAINER_PBL_KARI] =
    {
#line 3845
        .trainerName = _("STEVEN"),
#line 3846
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3847
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3849
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3851
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3855
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3854
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3853
            .lvl = 42,
#line 3852
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3856
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3861
    [TRAINER_PBL_ABRAHAM] =
    {
#line 3862
        .trainerName = _("STEVEN"),
#line 3863
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3864
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3866
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3868
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3872
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3871
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3870
            .lvl = 42,
#line 3869
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3873
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3878
    [TRAINER_PBL_MELINDA] =
    {
#line 3879
        .trainerName = _("STEVEN"),
#line 3880
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3881
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3883
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3885
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3889
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3888
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3887
            .lvl = 42,
#line 3886
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3890
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3895
    [TRAINER_PBL_EMILIO] =
    {
#line 3896
        .trainerName = _("STEVEN"),
#line 3897
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3898
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3900
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3902
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3906
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3905
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3904
            .lvl = 42,
#line 3903
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3907
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3912
    [TRAINER_PBL_REX] =
    {
#line 3913
        .trainerName = _("STEVEN"),
#line 3914
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3915
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3917
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3919
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3923
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3922
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3921
            .lvl = 42,
#line 3920
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3924
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3929
    [TRAINER_PBL_LOUIS] =
    {
#line 3930
        .trainerName = _("STEVEN"),
#line 3931
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3932
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3934
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3936
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3940
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3939
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3938
            .lvl = 42,
#line 3937
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3941
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3946
    [TRAINER_PBL_LEROY] =
    {
#line 3947
        .trainerName = _("STEVEN"),
#line 3948
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3949
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3951
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3953
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3957
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3956
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3955
            .lvl = 42,
#line 3954
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3958
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3963
    [TRAINER_PBL_ELTON] =
    {
#line 3964
        .trainerName = _("STEVEN"),
#line 3965
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3966
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3968
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3970
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3974
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3973
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3972
            .lvl = 42,
#line 3971
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3975
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3980
    [TRAINER_PBL_WILLIE] =
    {
#line 3981
        .trainerName = _("STEVEN"),
#line 3982
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3983
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3985
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3987
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3991
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3990
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3989
            .lvl = 42,
#line 3988
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3992
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3997
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16] =
    {
#line 3998
        .trainerName = _("STEVEN"),
#line 3999
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4000
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4002
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4004
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4008
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4007
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4006
            .lvl = 42,
#line 4005
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4009
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4014
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16_BRUTAL] =
    {
#line 4015
        .trainerName = _("STEVEN"),
#line 4016
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4017
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4019
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4021
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4025
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4024
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4023
            .lvl = 42,
#line 4022
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4026
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4031
    [TRAINER_PBL_PIRATE_1] =
    {
#line 4032
        .trainerName = _("STEVEN"),
#line 4033
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4034
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4036
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4038
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4042
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4041
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4040
            .lvl = 42,
#line 4039
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4043
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4048
    [TRAINER_PBL_PIRATE_2] =
    {
#line 4049
        .trainerName = _("STEVEN"),
#line 4050
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4051
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4053
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4055
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4059
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4058
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4057
            .lvl = 42,
#line 4056
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4060
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4065
    [TRAINER_PBL_PIRATE_3] =
    {
#line 4066
        .trainerName = _("STEVEN"),
#line 4067
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4068
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4070
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4072
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4076
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4075
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4074
            .lvl = 42,
#line 4073
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4077
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4082
    [TRAINER_PBL_PIRATE_4] =
    {
#line 4083
        .trainerName = _("STEVEN"),
#line 4084
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4085
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4087
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4089
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4093
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4092
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4091
            .lvl = 42,
#line 4090
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4094
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4099
    [TRAINER_PBL_SHAWN] =
    {
#line 4100
        .trainerName = _("STEVEN"),
#line 4101
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4102
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4104
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4106
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4110
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4109
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4108
            .lvl = 42,
#line 4107
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4111
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4116
    [TRAINER_PBL_FERNANDO] =
    {
#line 4117
        .trainerName = _("STEVEN"),
#line 4118
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4119
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4121
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4123
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4127
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4126
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4125
            .lvl = 42,
#line 4124
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4128
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4133
    [TRAINER_PBL_KANE] =
    {
#line 4134
        .trainerName = _("STEVEN"),
#line 4135
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4136
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4138
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4140
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4144
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4143
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4142
            .lvl = 42,
#line 4141
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4145
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4150
    [TRAINER_PBL_KIRK] =
    {
#line 4151
        .trainerName = _("STEVEN"),
#line 4152
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4153
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4155
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4157
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4161
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4160
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4159
            .lvl = 42,
#line 4158
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4162
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4167
    [TRAINER_PBL_DALTON] =
    {
#line 4168
        .trainerName = _("STEVEN"),
#line 4169
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4170
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4172
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4174
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4178
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4177
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4176
            .lvl = 42,
#line 4175
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4179
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4184
    [TRAINER_PBL_LEE] =
    {
#line 4185
        .trainerName = _("STEVEN"),
#line 4186
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4187
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4189
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4191
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4195
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4194
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4193
            .lvl = 42,
#line 4192
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4196
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4201
    [TRAINER_PBL_BLANCHE] =
    {
#line 4202
        .trainerName = _("STEVEN"),
#line 4203
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4204
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4206
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4208
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4212
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4211
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4210
            .lvl = 42,
#line 4209
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4213
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4218
    [TRAINER_PBL_TROY] =
    {
#line 4219
        .trainerName = _("STEVEN"),
#line 4220
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4221
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4223
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4225
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4229
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4228
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4227
            .lvl = 42,
#line 4226
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4230
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4235
    [TRAINER_PBL_ABED] =
    {
#line 4236
        .trainerName = _("STEVEN"),
#line 4237
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4238
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4240
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4242
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4246
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4245
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4244
            .lvl = 42,
#line 4243
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4247
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4252
    [TRAINER_PBL_TROY_BRUTAL] =
    {
#line 4253
        .trainerName = _("STEVEN"),
#line 4254
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4255
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4257
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4259
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4263
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4262
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4261
            .lvl = 42,
#line 4260
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4264
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4269
    [TRAINER_PBL_ABED_BRUTAL] =
    {
#line 4270
        .trainerName = _("STEVEN"),
#line 4271
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4272
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4274
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4276
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4280
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4279
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4278
            .lvl = 42,
#line 4277
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4281
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4286
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17] =
    {
#line 4287
        .trainerName = _("STEVEN"),
#line 4288
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4289
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4291
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4293
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4297
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4296
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4295
            .lvl = 42,
#line 4294
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4298
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4303
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17_BRUTAL] =
    {
#line 4304
        .trainerName = _("STEVEN"),
#line 4305
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4306
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4308
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4310
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4314
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4313
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4312
            .lvl = 42,
#line 4311
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4315
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4320
    [TRAINER_PBL_ANITA] =
    {
#line 4321
        .trainerName = _("STEVEN"),
#line 4322
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4323
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4325
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4327
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4331
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4330
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4329
            .lvl = 42,
#line 4328
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4332
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4337
    [TRAINER_PBL_DESIREE] =
    {
#line 4338
        .trainerName = _("STEVEN"),
#line 4339
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4340
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4342
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4344
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4348
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4347
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4346
            .lvl = 42,
#line 4345
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4349
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4354
    [TRAINER_PBL_HOWARD] =
    {
#line 4355
        .trainerName = _("STEVEN"),
#line 4356
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4357
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4359
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4361
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4365
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4364
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4363
            .lvl = 42,
#line 4362
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4366
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4371
    [TRAINER_PBL_ELOISE] =
    {
#line 4372
        .trainerName = _("STEVEN"),
#line 4373
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4374
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4376
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4378
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4382
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4381
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4380
            .lvl = 42,
#line 4379
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4383
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4388
    [TRAINER_PBL_ALLY_AND_EMMY] =
    {
#line 4389
        .trainerName = _("STEVEN"),
#line 4390
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4391
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4393
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4395
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4399
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4398
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4397
            .lvl = 42,
#line 4396
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4400
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4405
    [TRAINER_PBL_AMIR] =
    {
#line 4406
        .trainerName = _("STEVEN"),
#line 4407
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4408
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4410
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4412
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4416
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4415
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4414
            .lvl = 42,
#line 4413
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4417
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4422
    [TRAINER_PBL_GETHIN] =
    {
#line 4423
        .trainerName = _("STEVEN"),
#line 4424
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4425
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4427
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4429
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4433
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4432
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4431
            .lvl = 42,
#line 4430
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4434
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4439
    [TRAINER_PBL_BERNARD] =
    {
#line 4440
        .trainerName = _("STEVEN"),
#line 4441
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4442
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4444
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4446
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4450
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4449
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4448
            .lvl = 42,
#line 4447
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4451
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4456
    [TRAINER_PBL_ELLIE] =
    {
#line 4457
        .trainerName = _("STEVEN"),
#line 4458
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4459
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4461
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4463
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4467
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4466
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4465
            .lvl = 42,
#line 4464
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4468
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4473
    [TRAINER_PBL_RUSTY] =
    {
#line 4474
        .trainerName = _("STEVEN"),
#line 4475
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4476
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4478
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4480
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4484
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4483
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4482
            .lvl = 42,
#line 4481
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4485
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4490
    [TRAINER_PBL_CODY] =
    {
#line 4491
        .trainerName = _("STEVEN"),
#line 4492
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4493
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4495
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4497
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4501
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4499
            .lvl = 42,
#line 4498
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4502
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4507
    [TRAINER_PBL_LEWIS] =
    {
#line 4508
        .trainerName = _("STEVEN"),
#line 4509
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4510
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4512
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4514
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4518
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4517
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4516
            .lvl = 42,
#line 4515
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4519
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4524
    [TRAINER_PBL_CORNELIUS] =
    {
#line 4525
        .trainerName = _("STEVEN"),
#line 4526
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4527
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4529
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4531
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4535
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4534
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4533
            .lvl = 42,
#line 4532
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4536
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4541
    [TRAINER_PBL_INEZ_AND_EMMA] =
    {
#line 4542
        .trainerName = _("STEVEN"),
#line 4543
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4544
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4546
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4548
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4552
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4551
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4550
            .lvl = 42,
#line 4549
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4553
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4558
    [TRAINER_PBL_HELEN] =
    {
#line 4559
        .trainerName = _("STEVEN"),
#line 4560
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4561
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4563
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4565
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4569
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4568
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4567
            .lvl = 42,
#line 4566
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4570
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4575
    [TRAINER_PBL_WESLEY] =
    {
#line 4576
        .trainerName = _("STEVEN"),
#line 4577
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4578
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4580
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4582
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4586
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4585
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4584
            .lvl = 42,
#line 4583
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4587
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4592
    [TRAINER_PBL_ALFREDO] =
    {
#line 4593
        .trainerName = _("STEVEN"),
#line 4594
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4595
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4597
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4599
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4603
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4602
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4601
            .lvl = 42,
#line 4600
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4604
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4609
    [TRAINER_PBL_IAN] =
    {
#line 4610
        .trainerName = _("STEVEN"),
#line 4611
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4612
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4614
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4616
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4620
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4619
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4618
            .lvl = 42,
#line 4617
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4621
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4626
    [TRAINER_PBL_AUDREY] =
    {
#line 4627
        .trainerName = _("STEVEN"),
#line 4628
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4629
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4631
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4633
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4637
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4635
            .lvl = 42,
#line 4634
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4638
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4643
    [TRAINER_PBL_LEVIATHAN13] =
    {
#line 4644
        .trainerName = _("STEVEN"),
#line 4645
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4646
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4648
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4650
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4654
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4653
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4652
            .lvl = 42,
#line 4651
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4655
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4660
    [TRAINER_PBL_EDGARDO] =
    {
#line 4661
        .trainerName = _("STEVEN"),
#line 4662
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4663
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4665
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4667
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4671
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4670
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4669
            .lvl = 42,
#line 4668
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4672
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4677
    [TRAINER_PBL_JEAN] =
    {
#line 4678
        .trainerName = _("STEVEN"),
#line 4679
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4680
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4682
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4684
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4688
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4687
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4686
            .lvl = 42,
#line 4685
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4689
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4694
    [TRAINER_PBL_ROSE] =
    {
#line 4695
        .trainerName = _("STEVEN"),
#line 4696
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4697
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4699
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4701
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4705
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4704
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4703
            .lvl = 42,
#line 4702
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4706
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4711
    [TRAINER_PBL_JENNIFER] =
    {
#line 4712
        .trainerName = _("STEVEN"),
#line 4713
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4714
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4716
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4718
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4722
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4721
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4720
            .lvl = 42,
#line 4719
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4723
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4728
    [TRAINER_PBL_MATTHEW] =
    {
#line 4729
        .trainerName = _("STEVEN"),
#line 4730
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4731
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4733
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4735
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4739
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4738
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4737
            .lvl = 42,
#line 4736
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4740
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4745
    [TRAINER_PBL_KERRY] =
    {
#line 4746
        .trainerName = _("STEVEN"),
#line 4747
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4748
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4750
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4752
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4756
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4755
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4754
            .lvl = 42,
#line 4753
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4757
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4762
    [TRAINER_PBL_ANNIE] =
    {
#line 4763
        .trainerName = _("STEVEN"),
#line 4764
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4765
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4767
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4769
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4773
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4772
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4771
            .lvl = 42,
#line 4770
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4774
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4779
    [TRAINER_PBL_CHRISTI] =
    {
#line 4780
        .trainerName = _("STEVEN"),
#line 4781
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4782
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4784
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4786
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4790
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4789
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4788
            .lvl = 42,
#line 4787
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4791
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4796
    [TRAINER_PBL_SPENCER] =
    {
#line 4797
        .trainerName = _("STEVEN"),
#line 4798
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4799
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4801
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4803
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4807
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4806
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4805
            .lvl = 42,
#line 4804
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4808
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4813
    [TRAINER_PBL_HAYWOOD] =
    {
#line 4814
        .trainerName = _("STEVEN"),
#line 4815
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4816
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4818
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4820
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4824
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4823
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4822
            .lvl = 42,
#line 4821
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4825
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4830
    [TRAINER_PBL_MONROE] =
    {
#line 4831
        .trainerName = _("STEVEN"),
#line 4832
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4833
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4835
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4837
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4841
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4840
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4839
            .lvl = 42,
#line 4838
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4842
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4847
    [TRAINER_PBL_DAVID] =
    {
#line 4848
        .trainerName = _("STEVEN"),
#line 4849
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4850
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4852
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4854
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4858
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4857
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4856
            .lvl = 42,
#line 4855
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4859
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4864
    [TRAINER_PBL_DOMINIK] =
    {
#line 4865
        .trainerName = _("STEVEN"),
#line 4866
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4867
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4869
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4871
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4875
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4874
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4873
            .lvl = 42,
#line 4872
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4876
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4881
    [TRAINER_PBL_DOUGLAS] =
    {
#line 4882
        .trainerName = _("STEVEN"),
#line 4883
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4884
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4886
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4888
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4892
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4891
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4890
            .lvl = 42,
#line 4889
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4893
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4898
    [TRAINER_PBL_NADINE] =
    {
#line 4899
        .trainerName = _("STEVEN"),
#line 4900
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4901
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4903
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4905
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4909
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4908
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4907
            .lvl = 42,
#line 4906
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4910
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4915
    [TRAINER_PBL_SANDY] =
    {
#line 4916
        .trainerName = _("STEVEN"),
#line 4917
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4918
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4920
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4922
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4926
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4925
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4924
            .lvl = 42,
#line 4923
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4927
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4932
    [TRAINER_PBL_SHELDON] =
    {
#line 4933
        .trainerName = _("STEVEN"),
#line 4934
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4935
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4937
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4939
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4943
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4942
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4941
            .lvl = 42,
#line 4940
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4944
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4949
    [TRAINER_PBL_LEVIATHAN14] =
    {
#line 4950
        .trainerName = _("STEVEN"),
#line 4951
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4952
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4954
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4956
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4960
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4959
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4958
            .lvl = 42,
#line 4957
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4961
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4966
    [TRAINER_PBL_LEVIATHAN12_BRUTAL] =
    {
#line 4967
        .trainerName = _("STEVEN"),
#line 4968
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4969
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4971
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4973
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4977
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4976
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4975
            .lvl = 42,
#line 4974
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4978
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4983
    [TRAINER_PBL_LEVIATHAN13_BRUTAL] =
    {
#line 4984
        .trainerName = _("STEVEN"),
#line 4985
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4986
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4988
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4990
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4994
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4993
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4992
            .lvl = 42,
#line 4991
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4995
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5000
    [TRAINER_PBL_LEVIATHAN14_BRUTAL] =
    {
#line 5001
        .trainerName = _("STEVEN"),
#line 5002
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5003
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5005
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5007
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5011
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5010
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5009
            .lvl = 42,
#line 5008
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5012
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5017
    [TRAINER_PBL_LEVIATHAN12] =
    {
#line 5018
        .trainerName = _("STEVEN"),
#line 5019
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5020
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5022
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5024
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5028
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5027
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5026
            .lvl = 42,
#line 5025
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5029
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
