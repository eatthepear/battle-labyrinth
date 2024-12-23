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
                MOVE_BUG_BITE,
            },
            },
            {
#line 442
            .species = SPECIES_WEEDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 445
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 443
            .ability = ABILITY_SHIELD_DUST,
#line 444
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 446
                MOVE_POISON_STING,
                MOVE_STRING_SHOT,
                MOVE_BUG_BITE,
            },
            },
            {
#line 450
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 453
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 451
            .ability = ABILITY_SHIELD_DUST,
#line 452
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 454
                MOVE_TACKLE,
                MOVE_STRING_SHOT,
                MOVE_POISON_STING,
                MOVE_BUG_BITE,
            },
            },
            {
#line 459
            .species = SPECIES_SCATTERBUG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 462
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 460
            .ability = ABILITY_SHIELD_DUST,
#line 461
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 463
                MOVE_TACKLE,
                MOVE_STRING_SHOT,
                MOVE_STRUGGLE_BUG,
                MOVE_STUN_SPORE,
            },
            },
        },
    },
#line 468
    [TRAINER_PBL_JOSH] =
    {
#line 469
        .trainerName = _("Josh"),
#line 470
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 471
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 472
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 474
        .doubleBattle = FALSE,
#line 473
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 475
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 477
            .species = SPECIES_BLIPBUG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 480
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 478
            .ability = ABILITY_SWARM,
#line 479
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 481
                MOVE_STRUGGLE_BUG,
            },
            },
            {
#line 483
            .species = SPECIES_KRICKETOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 486
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 484
            .ability = ABILITY_SHED_SKIN,
#line 485
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 487
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_STRUGGLE_BUG,
                MOVE_BIDE,
            },
            },
            {
#line 492
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 495
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 493
            .ability = ABILITY_SWARM,
#line 494
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 496
                MOVE_POISON_STING,
                MOVE_STRING_SHOT,
                MOVE_NIGHT_SHADE,
                MOVE_BUG_BITE,
            },
            },
            {
#line 501
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 502
            .ability = ABILITY_COMPOUND_EYES,
#line 503
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 505
                MOVE_SAND_ATTACK,
                MOVE_HARDEN,
                MOVE_FALSE_SWIPE,
                MOVE_FURY_SWIPES,
            },
            },
        },
    },
#line 510
    [TRAINER_PBL_HARPER] =
    {
#line 511
        .trainerName = _("Harper"),
#line 512
        .trainerClass = TRAINER_CLASS_LASS,
#line 513
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 514
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 516
        .doubleBattle = FALSE,
#line 515
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 517
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 519
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 520
            .ability = ABILITY_RATTLED,
#line 521
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 523
                MOVE_ASTONISH,
                MOVE_POUND,
                MOVE_SUPERSONIC,
                MOVE_ECHOED_VOICE,
            },
            },
            {
#line 528
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 531
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 529
            .ability = ABILITY_INSOMNIA,
#line 530
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 532
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_PECK,
                MOVE_CONFUSION,
            },
            },
            {
#line 537
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 540
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 538
            .ability = ABILITY_STATIC,
#line 539
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 541
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_CHARGE,
                MOVE_THUNDER_SHOCK,
            },
            },
        },
    },
#line 546
    [TRAINER_PBL_ARTHUR] =
    {
#line 547
        .trainerName = _("Arthur"),
#line 548
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 549
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 550
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 552
        .doubleBattle = FALSE,
#line 551
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 553
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 555
            .species = SPECIES_YUNGOOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 558
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 556
            .ability = ABILITY_STRONG_JAW,
#line 557
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 559
                MOVE_TACKLE,
                MOVE_SAND_ATTACK,
                MOVE_LEER,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 564
            .species = SPECIES_PIKIPEK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 565
            .ability = ABILITY_SKILL_LINK,
#line 566
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 568
                MOVE_PECK,
                MOVE_GROWL,
                MOVE_MIRROR_MOVE,
            },
            },
            {
#line 572
            .species = SPECIES_NIDORAN_M,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 575
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 573
            .ability = ABILITY_POISON_POINT,
#line 574
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 576
                MOVE_PECK,
                MOVE_FOCUS_ENERGY,
                MOVE_POISON_STING,
                MOVE_DISABLE,
            },
            },
        },
    },
#line 581
    [TRAINER_PBL_SHAUN_LEVIATHAN_2] =
    {
#line 582
        .trainerName = _("Shaun"),
#line 583
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 584
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 585
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 587
        .doubleBattle = FALSE,
#line 586
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 589
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 588
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 591
            .species = SPECIES_BUNNELBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 591
            .heldItem = ITEM_ORAN_BERRY,
#line 594
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 592
            .ability = ABILITY_CHEEK_POUCH,
#line 593
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 595
                MOVE_DOUBLE_SLAP,
                MOVE_LEER,
                MOVE_DEFENSE_CURL,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 600
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 600
            .heldItem = ITEM_ORAN_BERRY,
#line 603
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 601
            .ability = ABILITY_CHEEK_POUCH,
#line 602
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 604
                MOVE_TACKLE,
                MOVE_BITE,
                MOVE_BIDE,
                MOVE_TEARFUL_LOOK,
            },
            },
            {
#line 609
            .species = SPECIES_SKWOVET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 609
            .heldItem = ITEM_ORAN_BERRY,
#line 612
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 610
            .ability = ABILITY_CHEEK_POUCH,
#line 611
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 613
                MOVE_TACKLE,
                MOVE_STUFF_CHEEKS,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
        },
    },
#line 618
    [TRAINER_PBL_SHAUN_LEVIATHAN_2_BRUTAL] =
    {
#line 619
        .trainerName = _("Shaun"),
#line 620
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 621
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 622
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 624
        .doubleBattle = FALSE,
#line 623
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 626
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 625
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 628
            .species = SPECIES_BUNNELBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 628
            .heldItem = ITEM_ORAN_BERRY,
#line 631
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 629
            .ability = ABILITY_CHEEK_POUCH,
#line 630
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 632
                MOVE_DOUBLE_SLAP,
                MOVE_LEER,
                MOVE_DEFENSE_CURL,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 637
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 637
            .heldItem = ITEM_ORAN_BERRY,
#line 640
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 638
            .ability = ABILITY_CHEEK_POUCH,
#line 639
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 641
                MOVE_TACKLE,
                MOVE_BITE,
                MOVE_BIDE,
                MOVE_TEARFUL_LOOK,
            },
            },
            {
#line 646
            .species = SPECIES_SKWOVET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 646
            .heldItem = ITEM_ORAN_BERRY,
#line 649
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 647
            .ability = ABILITY_CHEEK_POUCH,
#line 648
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 650
                MOVE_TACKLE,
                MOVE_STUFF_CHEEKS,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 655
            .species = SPECIES_LECHONK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 655
            .heldItem = ITEM_ORAN_BERRY,
#line 658
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 656
            .ability = ABILITY_THICK_FAT,
#line 657
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 659
                MOVE_TACKLE,
                MOVE_DISARMING_VOICE,
                MOVE_STUFF_CHEEKS,
                MOVE_YAWN,
            },
            },
        },
    },
#line 664
    [TRAINER_PBL_JEMMA] =
    {
#line 665
        .trainerName = _("Jemma"),
#line 666
        .trainerClass = TRAINER_CLASS_LASS,
#line 667
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 668
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 670
        .doubleBattle = FALSE,
#line 669
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 671
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 673
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 676
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 674
            .ability = ABILITY_POISON_POINT,
#line 675
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 677
                MOVE_ABSORB,
                MOVE_WORRY_SEED,
                MOVE_LIFE_DEW,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 682
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 685
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 683
            .ability = ABILITY_KEEN_EYE,
#line 684
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 686
                MOVE_TACKLE,
                MOVE_SAND_ATTACK,
                MOVE_GUST,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 691
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 692
            .ability = ABILITY_SAND_FORCE,
#line 693
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 695
                MOVE_SCRATCH,
                MOVE_SAND_ATTACK,
                MOVE_GROWL,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 700
    [TRAINER_PBL_PATRICK] =
    {
#line 701
        .trainerName = _("Patrick"),
#line 702
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 703
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 704
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 706
        .doubleBattle = FALSE,
#line 705
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 707
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 709
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 712
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 710
            .ability = ABILITY_SHED_SKIN,
#line 711
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 713
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
            {
#line 716
            .species = SPECIES_METAPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 719
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 717
            .ability = ABILITY_SHED_SKIN,
#line 718
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 720
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
            {
#line 723
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 724
            .ability = ABILITY_SHED_SKIN,
#line 725
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 727
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
            {
#line 730
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 733
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 731
            .ability = ABILITY_SHED_SKIN,
#line 732
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 734
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 737
    [TRAINER_PBL_ANNABELLE] =
    {
#line 738
        .trainerName = _("Annabelle"),
#line 739
        .trainerClass = TRAINER_CLASS_LADY,
#line 740
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 741
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 743
        .doubleBattle = FALSE,
#line 742
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 744
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 746
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 747
            .ability = ABILITY_TECHNICIAN,
#line 748
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 750
                MOVE_SCRATCH,
                MOVE_GROWL,
                MOVE_FEINT,
            },
            },
            {
#line 754
            .species = SPECIES_GOSSIFLEUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 757
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 755
            .ability = ABILITY_COTTON_DOWN,
#line 756
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 758
                MOVE_LEAFAGE,
                MOVE_GRASS_WHISTLE,
                MOVE_RAPID_SPIN,
                MOVE_RAZOR_LEAF,
            },
            },
            {
#line 763
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 766
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 764
            .ability = ABILITY_HUGE_POWER,
#line 765
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 767
                MOVE_SOAK,
                MOVE_REFRESH,
                MOVE_CHARM,
                MOVE_BUBBLE,
            },
            },
            {
#line 772
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 773
            .ability = ABILITY_INTIMIDATE,
#line 774
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 776
                MOVE_LEER,
                MOVE_CHARGE,
                MOVE_THUNDER_SHOCK,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 781
    [TRAINER_PBL_BORIS] =
    {
#line 782
        .trainerName = _("Boris"),
#line 783
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 784
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 785
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 787
        .doubleBattle = FALSE,
#line 786
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 788
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 790
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 791
            .ability = ABILITY_SWIFT_SWIM,
#line 792
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 794
                MOVE_ABSORB,
                MOVE_BUBBLE,
                MOVE_MIST,
                MOVE_ASTONISH,
            },
            },
            {
#line 799
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 800
            .ability = ABILITY_LIMBER,
#line 801
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 803
                MOVE_DEFENSE_CURL,
                MOVE_QUICK_ATTACK,
                MOVE_BABY_DOLL_EYES,
                MOVE_COPYCAT,
            },
            },
            {
#line 808
            .species = SPECIES_MASCHIFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 811
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 809
            .ability = ABILITY_INTIMIDATE,
#line 810
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 812
                MOVE_LICK,
                MOVE_SNARL,
                MOVE_SCARY_FACE,
                MOVE_BITE,
            },
            },
        },
    },
#line 817
    [TRAINER_PBL_RICHARD] =
    {
#line 818
        .trainerName = _("Richard"),
#line 819
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 820
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 821
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 823
        .doubleBattle = FALSE,
#line 822
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 824
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 826
            .species = SPECIES_WOOLOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 829
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 827
            .ability = ABILITY_FLUFFY,
#line 828
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 830
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_DEFENSE_CURL,
                MOVE_COPYCAT,
            },
            },
            {
#line 835
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 836
            .ability = ABILITY_STATIC,
#line 837
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 839
                MOVE_THUNDER_SHOCK,
                MOVE_SWEET_KISS,
                MOVE_FAKE_OUT,
                MOVE_CHARM,
            },
            },
            {
#line 844
            .species = SPECIES_SMOLIV,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 847
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 845
            .ability = ABILITY_EARLY_BIRD,
#line 846
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 848
                MOVE_TACKLE,
                MOVE_ABSORB,
                MOVE_HELPING_HAND,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 853
            .species = SPECIES_DUCKLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 856
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 854
            .ability = ABILITY_BIG_PECKS,
#line 855
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 857
                MOVE_AQUA_RING,
                MOVE_GUST,
                MOVE_AQUA_JET,
                MOVE_FEATHER_DANCE,
            },
            },
        },
    },
#line 862
    [TRAINER_PBL_PHILLIPA_LEVIATHAN_3] =
    {
#line 863
        .trainerName = _("Phillipa"),
#line 864
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 865
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 866
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 868
        .doubleBattle = FALSE,
#line 867
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 870
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 869
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 872
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 875
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 873
            .ability = ABILITY_UNAWARE,
#line 874
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 876
                MOVE_ROLLOUT,
            },
            },
            {
#line 878
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 881
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 879
            .ability = ABILITY_SAND_RUSH,
#line 880
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 882
                MOVE_ROLLOUT,
            },
            },
            {
#line 884
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 884
            .heldItem = ITEM_ORAN_BERRY,
#line 887
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 885
            .ability = ABILITY_HUGE_POWER,
#line 886
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 888
                MOVE_ROLLOUT,
            },
            },
        },
    },
#line 890
    [TRAINER_PBL_PHILLIPA_LEVIATHAN_3_BRUTAL] =
    {
#line 891
        .trainerName = _("Phillipa"),
#line 892
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 893
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 894
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 896
        .doubleBattle = FALSE,
#line 895
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 898
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 897
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 900
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 903
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 901
            .ability = ABILITY_UNAWARE,
#line 902
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 904
                MOVE_ROLLOUT,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 907
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 910
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 908
            .ability = ABILITY_SAND_RUSH,
#line 909
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 911
                MOVE_ROLLOUT,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 914
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 914
            .heldItem = ITEM_ORAN_BERRY,
#line 917
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 915
            .ability = ABILITY_HUGE_POWER,
#line 916
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 918
                MOVE_ROLLOUT,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 921
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 921
            .heldItem = ITEM_ORAN_BERRY,
#line 924
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 922
            .ability = ABILITY_CHLOROPHYLL,
#line 923
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 925
                MOVE_ROLLOUT,
                MOVE_DEFENSE_CURL,
            },
            },
        },
    },
#line 928
    [TRAINER_PBL_HERMAN] =
    {
#line 929
        .trainerName = _("Herman"),
#line 930
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 931
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 932
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 934
        .doubleBattle = FALSE,
#line 933
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 935
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 937
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 940
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 938
            .ability = ABILITY_FLASH_FIRE,
#line 939
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 941
                MOVE_EMBER,
                MOVE_BABY_DOLL_EYES,
                MOVE_DISABLE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 946
            .species = SPECIES_BOUNSWEET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 949
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 947
            .ability = ABILITY_OBLIVIOUS,
#line 948
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 950
                MOVE_ABSORB,
                MOVE_GRASS_WHISTLE,
                MOVE_RAPID_SPIN,
                MOVE_RAZOR_LEAF,
            },
            },
            {
#line 955
            .species = SPECIES_ESPURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 958
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 956
            .ability = ABILITY_OWN_TEMPO,
#line 957
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 959
                MOVE_FAKE_OUT,
                MOVE_TICKLE,
                MOVE_CONFUSION,
                MOVE_DISARMING_VOICE,
            },
            },
        },
    },
#line 964
    [TRAINER_PBL_RALPH] =
    {
#line 965
        .trainerName = _("Ralph"),
#line 966
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 967
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 968
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 970
        .doubleBattle = FALSE,
#line 969
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 971
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 973
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 976
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 974
            .ability = ABILITY_LEVITATE,
#line 975
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 977
                MOVE_ASTONISH,
                MOVE_CONFUSION,
                MOVE_DISABLE,
                MOVE_YAWN,
            },
            },
            {
#line 982
            .species = SPECIES_PURRLOIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 985
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 983
            .ability = ABILITY_LIMBER,
#line 984
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 986
                MOVE_FAKE_OUT,
                MOVE_SAND_ATTACK,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 991
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 994
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 992
            .ability = ABILITY_WATER_ABSORB,
#line 993
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 995
                MOVE_WATER_GUN,
                MOVE_MUD_SHOT,
                MOVE_YAWN,
                MOVE_SLAM,
            },
            },
        },
    },
#line 1000
    [TRAINER_PBL_CALLIE] =
    {
#line 1001
        .trainerName = _("Callie"),
#line 1002
        .trainerClass = TRAINER_CLASS_LASS,
#line 1003
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 1004
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1006
        .doubleBattle = FALSE,
#line 1005
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1007
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1009
            .species = SPECIES_LILLIPUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1012
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1010
            .ability = ABILITY_PICKUP,
#line 1011
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1013
                MOVE_TACKLE,
                MOVE_HELPING_HAND,
                MOVE_BITE,
                MOVE_YAWN,
            },
            },
            {
#line 1018
            .species = SPECIES_FIDOUGH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1021
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1019
            .ability = ABILITY_OWN_TEMPO,
#line 1020
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1022
                MOVE_TAIL_WHIP,
                MOVE_BITE,
                MOVE_YAWN,
                MOVE_COVET,
            },
            },
            {
#line 1027
            .species = SPECIES_YAMPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1030
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1028
            .ability = ABILITY_BALL_FETCH,
#line 1029
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1031
                MOVE_NUZZLE,
                MOVE_SPARK,
                MOVE_CHARGE,
                MOVE_BITE,
            },
            },
        },
    },
#line 1036
    [TRAINER_PBL_SANTIAGO] =
    {
#line 1037
        .trainerName = _("Santiago"),
#line 1038
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1039
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 1040
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1042
        .doubleBattle = FALSE,
#line 1041
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1043
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1045
            .species = SPECIES_BURMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1048
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1046
            .ability = ABILITY_SHED_SKIN,
#line 1047
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1049
                MOVE_TACKLE,
                MOVE_STRING_SHOT,
                MOVE_BUG_BITE,
            },
            },
            {
#line 1053
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1056
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1054
            .ability = ABILITY_SWARM,
#line 1055
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1057
                MOVE_SWIFT,
                MOVE_COMET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_ROOST,
            },
            },
            {
#line 1062
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1065
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1063
            .ability = ABILITY_EFFECT_SPORE,
#line 1064
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1066
                MOVE_POISON_POWDER,
                MOVE_ABSORB,
                MOVE_BUG_BITE,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 1071
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1074
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1072
            .ability = ABILITY_SHED_SKIN,
#line 1073
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1075
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 1078
    [TRAINER_PBL_CHLOE_AND_KAYA] =
    {
#line 1079
        .trainerName = _("Chloe&Kaya"),
#line 1080
        .trainerClass = TRAINER_CLASS_TWINS,
#line 1081
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 1082
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1084
        .doubleBattle = TRUE,
#line 1083
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1086
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1089
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1087
            .ability = ABILITY_PRANKSTER,
#line 1088
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1090
                MOVE_FAIRY_WIND,
                MOVE_RAZOR_LEAF,
                MOVE_STUN_SPORE,
                MOVE_POISON_POWDER,
            },
            },
            {
#line 1095
            .species = SPECIES_PETILIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1098
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1096
            .ability = ABILITY_OWN_TEMPO,
#line 1097
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1099
                MOVE_ABSORB,
                MOVE_HELPING_HAND,
                MOVE_STUN_SPORE,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 1104
    [TRAINER_PBL_FRED] =
    {
#line 1105
        .trainerName = _("Fred"),
#line 1106
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 1107
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 1108
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1110
        .doubleBattle = FALSE,
#line 1109
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1111
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1113
            .species = SPECIES_MUNNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1116
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1114
            .ability = ABILITY_SYNCHRONIZE,
#line 1115
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1117
                MOVE_PSYWAVE,
                MOVE_LUCKY_CHANT,
                MOVE_HYPNOSIS,
                MOVE_IMPRISON,
            },
            },
            {
#line 1122
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1123
            .ability = ABILITY_INTIMIDATE,
#line 1124
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1126
                MOVE_GLARE,
                MOVE_BITE,
                MOVE_ACID,
                MOVE_DISABLE,
            },
            },
            {
#line 1131
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1134
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1132
            .ability = ABILITY_FLAME_BODY,
#line 1133
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1135
                MOVE_EMBER,
                MOVE_YAWN,
                MOVE_ROCK_THROW,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 1140
            .species = SPECIES_PANCHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1143
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1141
            .ability = ABILITY_IRON_FIST,
#line 1142
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1144
                MOVE_SEISMIC_TOSS,
                MOVE_COMET_PUNCH,
                MOVE_KARATE_CHOP,
                MOVE_TAUNT,
            },
            },
        },
    },
#line 1149
    [TRAINER_PBL_LUCIA] =
    {
#line 1150
        .trainerName = _("Lucia"),
#line 1151
        .trainerClass = TRAINER_CLASS_FAIRY_TALE_GIRL,
#line 1152
        .trainerPic = TRAINER_PIC_FAIRY_TALE_GIRL,
        .encounterMusic_gender =
#line 1153
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1155
        .doubleBattle = FALSE,
#line 1154
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1156
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1158
            .species = SPECIES_IGGLYBUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1161
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1159
            .ability = ABILITY_COMPETITIVE,
#line 1160
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1162
                MOVE_SWEET_KISS,
                MOVE_DISARMING_VOICE,
                MOVE_DISABLE,
                MOVE_CHARM,
            },
            },
            {
#line 1167
            .species = SPECIES_SPRITZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1170
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1168
            .ability = ABILITY_HEALER,
#line 1169
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1171
                MOVE_FAIRY_WIND,
                MOVE_SWEET_KISS,
                MOVE_REFRESH,
                MOVE_DISARMING_VOICE,
            },
            },
            {
#line 1176
            .species = SPECIES_SWIRLIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1177
            .ability = ABILITY_SWEET_VEIL,
#line 1178
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1180
                MOVE_FAIRY_WIND,
                MOVE_YAWN,
                MOVE_COTTON_SPORE,
                MOVE_ROUND,
            },
            },
            {
#line 1185
            .species = SPECIES_MIME_JR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1186
            .ability = ABILITY_SOUNDPROOF,
#line 1187
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1189
                MOVE_TEETER_DANCE,
                MOVE_DOUBLE_SLAP,
                MOVE_CONFUSION,
                MOVE_FAKE_OUT,
            },
            },
        },
    },
#line 1194
    [TRAINER_PBL_ELLA_AND_BELLA_LEVIATHAN_4] =
    {
#line 1195
        .trainerName = _("Ella&Bella"),
#line 1196
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 1197
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 1198
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1200
        .doubleBattle = TRUE,
#line 1199
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1202
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 1201
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1204
            .species = SPECIES_NICKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1207
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1205
            .ability = ABILITY_UNBURDEN,
#line 1206
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1208
                MOVE_SNARL,
                MOVE_GROWL,
            },
            },
            {
#line 1211
            .species = SPECIES_LITLEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1214
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1212
            .ability = ABILITY_UNNERVE,
#line 1213
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1215
                MOVE_INCINERATE,
                MOVE_GROWL,
            },
            },
            {
#line 1218
            .species = SPECIES_STEENEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1218
            .heldItem = ITEM_ORAN_BERRY,
#line 1221
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1219
            .ability = ABILITY_OBLIVIOUS,
#line 1220
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1222
                MOVE_RAZOR_LEAF,
                MOVE_GRASS_WHISTLE,
            },
            },
            {
#line 1225
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1225
            .heldItem = ITEM_ORAN_BERRY,
#line 1228
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1226
            .ability = ABILITY_FRIEND_GUARD,
#line 1227
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1229
                MOVE_SWIFT,
                MOVE_DISARMING_VOICE,
            },
            },
        },
    },
#line 1232
    [TRAINER_PBL_ELLA_AND_BELLA_LEVIATHAN_4_BRUTAL] =
    {
#line 1233
        .trainerName = _("Ella&Bella"),
#line 1234
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 1235
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 1236
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1238
        .doubleBattle = TRUE,
#line 1237
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 1240
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 1239
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1242
            .species = SPECIES_NICKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1245
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1243
            .ability = ABILITY_STAKEOUT,
#line 1244
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1246
                MOVE_SNARL,
                MOVE_QUICK_ATTACK,
                MOVE_GROWL,
            },
            },
            {
#line 1250
            .species = SPECIES_LITLEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1253
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1251
            .ability = ABILITY_UNNERVE,
#line 1252
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1254
                MOVE_INCINERATE,
                MOVE_ECHOED_VOICE,
                MOVE_GROWL,
            },
            },
            {
#line 1258
            .species = SPECIES_STEENEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1258
            .heldItem = ITEM_ORAN_BERRY,
#line 1261
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1259
            .ability = ABILITY_OBLIVIOUS,
#line 1260
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1262
                MOVE_RAZOR_LEAF,
                MOVE_RAPID_SPIN,
                MOVE_GRASS_WHISTLE,
            },
            },
            {
#line 1266
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1266
            .heldItem = ITEM_ORAN_BERRY,
#line 1269
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1267
            .ability = ABILITY_FRIEND_GUARD,
#line 1268
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1270
                MOVE_SWIFT,
                MOVE_DISARMING_VOICE,
                MOVE_SING,
            },
            },
        },
    },
#line 1274
    [TRAINER_PBL_ANNE_AND_JUNE] =
    {
#line 1275
        .trainerName = _("Anne&June"),
#line 1276
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 1277
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 1278
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1280
        .doubleBattle = TRUE,
#line 1279
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1282
            .species = SPECIES_GOTHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1285
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1283
            .ability = ABILITY_TELEPATHY,
#line 1284
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1286
                MOVE_CONFUSION,
                MOVE_DOUBLE_SLAP,
                MOVE_FAKE_OUT,
                MOVE_TICKLE,
            },
            },
            {
#line 1291
            .species = SPECIES_SOLOSIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1294
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1292
            .ability = ABILITY_MAGIC_GUARD,
#line 1293
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1295
                MOVE_CONFUSION,
                MOVE_NIGHT_SHADE,
                MOVE_ROLLOUT,
                MOVE_RECOVER,
            },
            },
        },
    },
#line 1300
    [TRAINER_PBL_NOVA_AND_CORA] =
    {
#line 1301
        .trainerName = _("Nova&Cora"),
#line 1302
        .trainerClass = TRAINER_CLASS_TWINS,
#line 1303
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 1304
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1306
        .doubleBattle = TRUE,
#line 1305
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1308
            .species = SPECIES_HATENNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1311
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1309
            .ability = ABILITY_HEALER,
#line 1310
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1312
                MOVE_PLAY_NICE,
                MOVE_LIFE_DEW,
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
            },
            },
            {
#line 1317
            .species = SPECIES_IMPIDIMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1320
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1318
            .ability = ABILITY_PICKPOCKET,
#line 1319
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1321
                MOVE_CONFIDE,
                MOVE_FLATTER,
                MOVE_FAKE_OUT,
                MOVE_ASSURANCE,
            },
            },
        },
    },
#line 1326
    [TRAINER_PBL_CLINTON] =
    {
#line 1327
        .trainerName = _("Clinton"),
#line 1328
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1329
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1330
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1332
        .doubleBattle = FALSE,
#line 1331
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1333
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1335
            .species = SPECIES_STUFFUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1336
            .ability = ABILITY_FLUFFY,
#line 1337
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1339
                MOVE_BRUTAL_SWING,
                MOVE_BIDE,
                MOVE_FORCE_PALM,
                MOVE_STOMP,
            },
            },
            {
#line 1344
            .species = SPECIES_ROCKRUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1347
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1345
            .ability = ABILITY_VITAL_SPIRIT,
#line 1346
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1348
                MOVE_DOUBLE_TEAM,
                MOVE_ROCK_THROW,
                MOVE_BITE,
                MOVE_ROAR,
            },
            },
            {
#line 1353
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1356
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1354
            .ability = ABILITY_TRACE,
#line 1355
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1357
                MOVE_CONFUSION,
                MOVE_SHADOW_SNEAK,
                MOVE_TELEPORT,
                MOVE_MAGICAL_LEAF,
            },
            },
            {
#line 1362
            .species = SPECIES_PAWMI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1365
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1363
            .ability = ABILITY_STATIC,
#line 1364
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1366
                MOVE_THUNDER_SHOCK,
                MOVE_BITE,
                MOVE_FAKE_OUT,
                MOVE_SWEET_KISS,
            },
            },
        },
    },
#line 1371
    [TRAINER_PBL_REBECCA] =
    {
#line 1372
        .trainerName = _("Rebecca"),
#line 1373
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 1374
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 1375
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1377
        .doubleBattle = FALSE,
#line 1376
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1378
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1380
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1383
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1381
            .ability = ABILITY_STATIC,
#line 1382
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1384
                MOVE_QUICK_ATTACK,
                MOVE_SPARK,
                MOVE_BITE,
                MOVE_SWIFT,
            },
            },
            {
#line 1389
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1392
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1391
            .ability = ABILITY_WATER_ABSORB,
#line 1390
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1393
                MOVE_LEECH_SEED,
                MOVE_DISABLE,
                MOVE_MAGICAL_LEAF,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 1398
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1401
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1399
            .ability = ABILITY_AFTERMATH,
#line 1400
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1402
                MOVE_SCREECH,
                MOVE_POISON_GAS,
                MOVE_BITE,
                MOVE_ACID_SPRAY,
            },
            },
            {
#line 1407
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1410
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1408
            .ability = ABILITY_OWN_TEMPO,
#line 1409
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1411
                MOVE_WATER_GUN,
                MOVE_YAWN,
                MOVE_DISABLE,
                MOVE_CONFUSION,
            },
            },
        },
    },
#line 1416
    [TRAINER_PBL_RYAN] =
    {
#line 1417
        .trainerName = _("Ryan"),
#line 1418
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 1419
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 1420
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1422
        .doubleBattle = FALSE,
#line 1421
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1423
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1425
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1428
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1426
            .ability = ABILITY_HYPER_CUTTER,
#line 1427
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1429
                MOVE_ROCK_SMASH,
                MOVE_BUBBLE,
                MOVE_LEER,
                MOVE_DIZZY_PUNCH,
            },
            },
            {
#line 1434
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1437
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1435
            .ability = ABILITY_POISON_POINT,
#line 1436
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1438
                MOVE_SCREECH,
                MOVE_BUG_BITE,
                MOVE_BITE,
                MOVE_TWINEEDLE,
            },
            },
            {
#line 1443
            .species = SPECIES_DEERLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1446
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1444
            .ability = ABILITY_SERENE_GRACE,
#line 1445
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1447
                MOVE_CHARM,
                MOVE_LEECH_SEED,
                MOVE_FEINT_ATTACK,
                MOVE_DOUBLE_KICK,
            },
            },
            {
#line 1452
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1455
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1453
            .ability = ABILITY_FLASH_FIRE,
#line 1454
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1456
                MOVE_TORMENT,
                MOVE_RAGE,
                MOVE_BITE,
                MOVE_FIRE_FANG,
            },
            },
        },
    },
#line 1461
    [TRAINER_PBL_CAITLYN] =
    {
#line 1462
        .trainerName = _("Caitlyn"),
#line 1463
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1464
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 1465
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1467
        .doubleBattle = FALSE,
#line 1466
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1468
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1470
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1473
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1471
            .ability = ABILITY_INTIMIDATE,
#line 1472
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1474
                MOVE_BITE,
                MOVE_RAGE,
                MOVE_FAKE_TEARS,
                MOVE_COVET,
            },
            },
            {
#line 1479
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1482
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1480
            .ability = ABILITY_THICK_FAT,
#line 1481
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1483
                MOVE_ICE_SHARD,
                MOVE_FAKE_OUT,
                MOVE_HEADBUTT,
                MOVE_WATER_GUN,
            },
            },
            {
#line 1488
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1491
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1489
            .ability = ABILITY_FLAME_BODY,
#line 1490
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1492
                MOVE_EMBER,
                MOVE_QUICK_ATTACK,
                MOVE_DOUBLE_KICK,
                MOVE_FIRE_SPIN,
            },
            },
            {
#line 1497
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1500
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1498
            .ability = ABILITY_CUD_CHEW,
#line 1499
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1501
                MOVE_MUD_SLAP,
                MOVE_ACID_SPRAY,
                MOVE_STUFF_CHEEKS,
                MOVE_SLUDGE,
            },
            },
        },
    },
#line 1506
    [TRAINER_PBL_KENNETH] =
    {
#line 1507
        .trainerName = _("Kenneth"),
#line 1508
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 1509
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 1510
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1512
        .doubleBattle = FALSE,
#line 1511
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1513
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1515
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1518
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1516
            .ability = ABILITY_STURDY,
#line 1517
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1519
                MOVE_FLAIL,
                MOVE_ROLLOUT,
                MOVE_SLAM,
                MOVE_BULLDOZE,
            },
            },
            {
#line 1524
            .species = SPECIES_PHANTUMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1527
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1525
            .ability = ABILITY_NATURAL_CURE,
#line 1526
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1528
                MOVE_BRANCH_POKE,
                MOVE_LEECH_SEED,
                MOVE_DISABLE,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 1533
            .species = SPECIES_ROOKIDEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1536
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1534
            .ability = ABILITY_BIG_PECKS,
#line 1535
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1537
                MOVE_POWER_TRIP,
                MOVE_FURY_ATTACK,
                MOVE_ROCK_SMASH,
                MOVE_PLUCK,
            },
            },
            {
#line 1542
            .species = SPECIES_GLAMEOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1545
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1543
            .ability = ABILITY_LIMBER,
#line 1544
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1546
                MOVE_CHARM,
                MOVE_QUICK_ATTACK,
                MOVE_FEINT_ATTACK,
                MOVE_FAKE_OUT,
            },
            },
        },
    },
#line 1551
    [TRAINER_PBL_KEVIN] =
    {
#line 1552
        .trainerName = _("Kevin"),
#line 1553
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1554
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 1555
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1557
        .doubleBattle = FALSE,
#line 1556
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1558
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1560
            .species = SPECIES_GRUBBIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1563
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1561
            .ability = ABILITY_SWARM,
#line 1562
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1564
                MOVE_STRING_SHOT,
                MOVE_VISE_GRIP,
                MOVE_BUG_BITE,
                MOVE_BITE,
            },
            },
            {
#line 1569
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1572
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1570
            .ability = ABILITY_SWARM,
#line 1571
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1573
                MOVE_RAZOR_LEAF,
                MOVE_BUG_BITE,
                MOVE_SYNTHESIS,
                MOVE_FLAIL,
            },
            },
            {
#line 1578
            .species = SPECIES_TAROUNTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1581
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1579
            .ability = ABILITY_INSOMNIA,
#line 1580
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1582
                MOVE_ASSURANCE,
                MOVE_BUG_BITE,
                MOVE_FEINT,
                MOVE_BLOCK,
            },
            },
            {
#line 1587
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1590
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1588
            .ability = ABILITY_FLASH_FIRE,
#line 1589
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1591
                MOVE_DEFENSE_CURL,
                MOVE_BUG_BITE,
                MOVE_ROLLOUT,
                MOVE_BITE,
            },
            },
        },
    },
#line 1596
    [TRAINER_PBL_DECLAN_LEVIATHAN_5] =
    {
#line 1597
        .trainerName = _("Declan"),
#line 1598
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 1599
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 1600
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1602
        .doubleBattle = FALSE,
#line 1601
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1604
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 1603
        .randomLead = FALSE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1606
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1609
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1607
            .ability = ABILITY_AFTERMATH,
#line 1608
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1610
                MOVE_SLUDGE,
                MOVE_ACID_SPRAY,
                MOVE_POISON_GAS,
                MOVE_DOUBLE_SLAP,
            },
            },
            {
#line 1615
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1618
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1616
            .ability = ABILITY_INSOMNIA,
#line 1617
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1619
                MOVE_CONFUSION,
                MOVE_WAKE_UP_SLAP,
                MOVE_HYPNOSIS,
                MOVE_HEADBUTT,
            },
            },
            {
#line 1624
            .species = SPECIES_BONSLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1627
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1625
            .ability = ABILITY_STURDY,
#line 1626
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1628
                MOVE_ROCK_THROW,
                MOVE_LOW_KICK,
                MOVE_FEINT_ATTACK,
                MOVE_TEARFUL_LOOK,
            },
            },
            {
#line 1633
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1634
            .ability = ABILITY_SAP_SIPPER,
#line 1635
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1637
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
                MOVE_STOMP,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 1642
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1642
            .heldItem = ITEM_EVIOLITE,
#line 1645
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1643
            .ability = ABILITY_SERENE_GRACE,
#line 1644
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1646
                MOVE_HEADBUTT,
                MOVE_ANCIENT_POWER,
                MOVE_GLARE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 1651
    [TRAINER_PBL_DECLAN_LEVIATHAN_5_BRUTAL] =
    {
#line 1652
        .trainerName = _("Declan"),
#line 1653
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 1654
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 1655
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1657
        .doubleBattle = FALSE,
#line 1656
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 1659
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 1658
        .randomLead = FALSE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1661
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1661
            .heldItem = ITEM_EVIOLITE,
#line 1664
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1662
            .ability = ABILITY_AFTERMATH,
#line 1663
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1665
                MOVE_SLUDGE,
                MOVE_ACID_SPRAY,
                MOVE_POISON_GAS,
                MOVE_DOUBLE_SLAP,
            },
            },
            {
#line 1670
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1670
            .heldItem = ITEM_EVIOLITE,
#line 1673
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1671
            .ability = ABILITY_BAD_DREAMS,
#line 1672
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1674
                MOVE_CONFUSION,
                MOVE_WAKE_UP_SLAP,
                MOVE_HYPNOSIS,
                MOVE_HEADBUTT,
            },
            },
            {
#line 1679
            .species = SPECIES_BONSLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1679
            .heldItem = ITEM_EVIOLITE,
#line 1682
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1680
            .ability = ABILITY_STURDY,
#line 1681
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1683
                MOVE_ROCK_THROW,
                MOVE_LOW_KICK,
                MOVE_FEINT_ATTACK,
                MOVE_TEARFUL_LOOK,
            },
            },
            {
#line 1688
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1688
            .heldItem = ITEM_EVIOLITE,
#line 1691
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1689
            .ability = ABILITY_SAP_SIPPER,
#line 1690
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1692
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
                MOVE_STOMP,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 1697
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1697
            .heldItem = ITEM_EVIOLITE,
#line 1700
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1698
            .ability = ABILITY_SERENE_GRACE,
#line 1699
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1701
                MOVE_HEADBUTT,
                MOVE_ANCIENT_POWER,
                MOVE_GLARE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 1706
    [TRAINER_PBL_GILBERT] =
    {
#line 1707
        .trainerName = _("Gilbert"),
#line 1708
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 1709
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 1710
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1712
        .doubleBattle = FALSE,
#line 1711
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1713
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1715
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1718
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1716
            .ability = ABILITY_SWIFT_SWIM,
#line 1717
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1719
                MOVE_SPLASH,
                MOVE_TACKLE,
                MOVE_FLAIL,
            },
            },
            {
#line 1723
            .species = SPECIES_FINNEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1724
            .ability = ABILITY_STORM_DRAIN,
#line 1725
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1727
                MOVE_SWEET_KISS,
                MOVE_TICKLE,
                MOVE_WATER_PULSE,
                MOVE_TAILWIND,
            },
            },
            {
#line 1732
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1735
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1733
            .ability = ABILITY_SHEER_FORCE,
#line 1734
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1736
                MOVE_MUD_SHOT,
                MOVE_STOMP,
                MOVE_BUBBLE_BEAM,
                MOVE_SLAM,
            },
            },
            {
#line 1741
            .species = SPECIES_CHEWTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1744
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1742
            .ability = ABILITY_STRONG_JAW,
#line 1743
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1745
                MOVE_WATER_GUN,
                MOVE_BITE,
                MOVE_HEADBUTT,
                MOVE_GASTRO_ACID,
            },
            },
        },
    },
#line 1750
    [TRAINER_PBL_MELANIE] =
    {
#line 1751
        .trainerName = _("Melanie"),
#line 1752
        .trainerClass = TRAINER_CLASS_LASS,
#line 1753
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 1754
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1756
        .doubleBattle = FALSE,
#line 1755
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1757
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1759
            .species = SPECIES_CUTIEFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1760
            .ability = ABILITY_SHIELD_DUST,
#line 1761
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1763
                MOVE_AROMATHERAPY,
                MOVE_STRUGGLE_BUG,
                MOVE_STUN_SPORE,
                MOVE_SWITCHEROO,
            },
            },
            {
#line 1768
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1771
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1769
            .ability = ABILITY_INTIMIDATE,
#line 1770
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1772
                MOVE_BITE,
                MOVE_HELPING_HAND,
                MOVE_DOUBLE_KICK,
                MOVE_FLAME_WHEEL,
            },
            },
            {
#line 1777
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1780
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1778
            .ability = ABILITY_TRUANT,
#line 1779
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1781
                MOVE_SNORE,
                MOVE_SLASH,
                MOVE_FEINT_ATTACK,
                MOVE_SLACK_OFF,
            },
            },
        },
    },
#line 1786
    [TRAINER_PBL_CONSTANCE] =
    {
#line 1787
        .trainerName = _("Constance"),
#line 1788
        .trainerClass = TRAINER_CLASS_LADY,
#line 1789
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1790
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1792
        .doubleBattle = FALSE,
#line 1791
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1793
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1795
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1796
            .ability = ABILITY_TECHNICIAN,
#line 1797
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1799
                MOVE_HELPING_HAND,
                MOVE_DOUBLE_SLAP,
                MOVE_TICKLE,
                MOVE_SWIFT,
            },
            },
            {
#line 1804
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1807
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1805
            .ability = ABILITY_LEAF_GUARD,
#line 1806
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1808
                MOVE_SLEEP_POWDER,
                MOVE_MEGA_DRAIN,
                MOVE_HELPING_HAND,
                MOVE_WORRY_SEED,
            },
            },
            {
#line 1813
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1816
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1814
            .ability = ABILITY_GUTS,
#line 1815
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1817
                MOVE_FAKE_OUT,
                MOVE_FORCE_PALM,
                MOVE_BULLET_PUNCH,
                MOVE_SMELLING_SALTS,
            },
            },
            {
#line 1822
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1825
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1823
            .ability = ABILITY_THICK_FAT,
#line 1824
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1826
                MOVE_CONFUSE_RAY,
                MOVE_PAYBACK,
                MOVE_PSYBEAM,
                MOVE_TRICK,
            },
            },
        },
    },
#line 1831
    [TRAINER_PBL_FRANK] =
    {
#line 1832
        .trainerName = _("Frank"),
#line 1833
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 1834
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 1835
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1837
        .doubleBattle = FALSE,
#line 1836
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1838
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1840
            .species = SPECIES_FLABEBE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1843
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1841
            .ability = ABILITY_FLOWER_VEIL,
#line 1842
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1844
                MOVE_TEARFUL_LOOK,
                MOVE_LUCKY_CHANT,
                MOVE_SYNTHESIS,
                MOVE_RAZOR_LEAF,
            },
            },
            {
#line 1849
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1852
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1850
            .ability = ABILITY_GRASS_PELT,
#line 1851
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1853
                MOVE_ROLLOUT,
                MOVE_LEECH_SEED,
                MOVE_RAZOR_LEAF,
                MOVE_BULLDOZE,
            },
            },
            {
#line 1858
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1861
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1859
            .ability = ABILITY_VOLT_ABSORB,
#line 1860
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1862
                MOVE_THUNDER_SHOCK,
                MOVE_FLATTER,
                MOVE_SPARK,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 1867
    [TRAINER_PBL_DUDLEY] =
    {
#line 1868
        .trainerName = _("Dudley"),
#line 1869
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 1870
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 1871
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1873
        .doubleBattle = FALSE,
#line 1872
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1874
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1876
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1877
            .ability = ABILITY_KEEN_EYE,
#line 1878
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1880
                MOVE_TWISTER,
                MOVE_AQUA_RING,
                MOVE_WING_ATTACK,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1885
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1888
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1886
            .ability = ABILITY_SCRAPPY,
#line 1887
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1889
                MOVE_FOCUS_ENERGY,
                MOVE_WING_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_RAGE,
            },
            },
            {
#line 1894
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1897
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1895
            .ability = ABILITY_WIND_POWER,
#line 1896
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1898
                MOVE_THUNDER_SHOCK,
                MOVE_UPROAR,
                MOVE_FEATHER_DANCE,
                MOVE_PLUCK,
            },
            },
            {
#line 1903
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1906
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1904
            .ability = ABILITY_SUPER_LUCK,
#line 1905
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1907
                MOVE_FURY_ATTACK,
                MOVE_AERIAL_ACE,
                MOVE_QUICK_ATTACK,
                MOVE_FEATHER_DANCE,
            },
            },
        },
    },
#line 1912
    [TRAINER_PBL_DAISY] =
    {
#line 1913
        .trainerName = _("Daisy"),
#line 1914
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 1915
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 1916
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1918
        .doubleBattle = FALSE,
#line 1917
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1919
        .randomLead = TRUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1921
            .species = SPECIES_SMEARGLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1924
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1922
            .ability = ABILITY_TECHNICIAN,
#line 1923
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1925
                MOVE_SKETCH,
            },
            },
            {
#line 1927
            .species = SPECIES_APPLIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1930
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1928
            .ability = ABILITY_RIPEN,
#line 1929
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1931
                MOVE_ASTONISH,
                MOVE_WITHDRAW,
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
            },
            },
            {
#line 1936
            .species = SPECIES_MILCERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1939
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1937
            .ability = ABILITY_SWEET_VEIL,
#line 1938
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1940
                MOVE_BABY_DOLL_EYES,
                MOVE_CHARM,
                MOVE_SWEET_KISS,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 1945
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1948
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1946
            .ability = ABILITY_SYNCHRONIZE,
#line 1947
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1949
                MOVE_TELEPORT,
            },
            },
            {
#line 1951
            .species = SPECIES_CLEFFA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1954
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1952
            .ability = ABILITY_MAGIC_GUARD,
#line 1953
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1955
                MOVE_DISARMING_VOICE,
                MOVE_CHARM,
                MOVE_ENCORE,
                MOVE_WISH,
            },
            },
            {
#line 1960
            .species = SPECIES_TYROGUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1963
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1961
            .ability = ABILITY_GUTS,
#line 1962
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1964
                MOVE_MACH_PUNCH,
                MOVE_RAPID_SPIN,
                MOVE_COUNTER,
                MOVE_VACUUM_WAVE,
            },
            },
        },
    },
#line 1969
    [TRAINER_PBL_VIC_AND_DELL] =
    {
#line 1970
        .trainerName = _("Vic&Dell"),
#line 1971
        .trainerClass = TRAINER_CLASS_TWINS,
#line 1972
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 1973
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1975
        .doubleBattle = TRUE,
#line 1974
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1977
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1980
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1978
            .ability = ABILITY_PLUS,
#line 1979
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1981
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_CHARM,
                MOVE_ELECTRO_BALL,
            },
            },
            {
#line 1986
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1989
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1987
            .ability = ABILITY_MINUS,
#line 1988
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1990
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_CHARM,
                MOVE_ELECTRO_BALL,
            },
            },
        },
    },
#line 1995
    [TRAINER_PBL_MINA] =
    {
#line 1996
        .trainerName = _("Nina"),
#line 1997
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 1998
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 1999
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2001
        .doubleBattle = FALSE,
#line 2000
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2002
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2004
            .species = SPECIES_WIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2004
            .heldItem = ITEM_ORAN_BERRY,
#line 2007
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2005
            .ability = ABILITY_GOOEY,
#line 2006
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2008
                MOVE_AQUA_JET,
                MOVE_WATER_PULSE,
                MOVE_SLAM,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 2013
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2013
            .heldItem = ITEM_ORAN_BERRY,
#line 2016
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2014
            .ability = ABILITY_HYDRATION,
#line 2015
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2017
                MOVE_MAGNITUDE,
                MOVE_WATER_PULSE,
                MOVE_MUD_BOMB,
                MOVE_REST,
            },
            },
            {
#line 2022
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2022
            .heldItem = ITEM_ORAN_BERRY,
#line 2025
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2023
            .ability = ABILITY_SWIFT_SWIM,
#line 2024
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2026
                MOVE_WATER_PULSE,
                MOVE_HORN_ATTACK,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
            {
#line 2031
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2031
            .heldItem = ITEM_ORAN_BERRY,
#line 2034
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2032
            .ability = ABILITY_REGENERATOR,
#line 2033
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2035
                MOVE_WATER_PULSE,
                MOVE_HORN_ATTACK,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
        },
    },
#line 2040
    [TRAINER_PBL_ZACK_AND_COBY_LEVIATHAN_6] =
    {
#line 2041
        .trainerName = _("Zack&Coby"),
#line 2042
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 2043
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 2044
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2046
        .doubleBattle = TRUE,
#line 2045
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2048
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2047
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2050
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2050
            .heldItem = ITEM_ORAN_BERRY,
#line 2053
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2051
            .ability = ABILITY_SWIFT_SWIM,
#line 2052
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2054
                MOVE_WATER_PULSE,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 2057
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2057
            .heldItem = ITEM_ORAN_BERRY,
#line 2060
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2058
            .ability = ABILITY_SWIFT_SWIM,
#line 2059
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2061
                MOVE_WATER_PULSE,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 2064
    [TRAINER_PBL_ZACK_AND_COBY_LEVIATHAN_6_BRUTAL] =
    {
#line 2065
        .trainerName = _("Zack&Coby"),
#line 2066
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 2067
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 2068
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2070
        .doubleBattle = TRUE,
#line 2069
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 2072
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2071
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2074
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2074
            .heldItem = ITEM_ORAN_BERRY,
#line 2077
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2075
            .ability = ABILITY_SWIFT_SWIM,
#line 2076
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2078
                MOVE_WATER_PULSE,
                MOVE_DRAINING_KISS,
                MOVE_HEAL_PULSE,
                MOVE_SWEET_KISS,
            },
            },
            {
#line 2083
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2083
            .heldItem = ITEM_ORAN_BERRY,
#line 2086
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 30, 30),
#line 2084
            .ability = ABILITY_SWIFT_SWIM,
#line 2085
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2087
                MOVE_WATER_PULSE,
                MOVE_TAILWIND,
                MOVE_GUST,
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 2093
    [TRAINER_PBL_MILLIE] =
    {
#line 2094
        .trainerName = _("Millie"),
#line 2095
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 2096
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 2097
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2099
        .doubleBattle = FALSE,
#line 2098
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2100
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2102
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2104
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2103
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2105
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2107
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2106
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2108
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2110
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2109
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2111
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2113
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2112
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2114
    [TRAINER_PBL_JAMAL] =
    {
#line 2115
        .trainerName = _("Jamal"),
#line 2116
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2117
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2118
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2120
        .doubleBattle = FALSE,
#line 2119
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2121
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2123
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2125
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2124
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2126
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2128
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2127
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2129
            .species = SPECIES_FOMANTIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2131
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2130
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2132
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2134
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2133
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2135
    [TRAINER_PBL_PAIGE] =
    {
#line 2136
        .trainerName = _("Paige"),
#line 2137
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 2138
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 2139
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2141
        .doubleBattle = FALSE,
#line 2140
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2142
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2144
            .species = SPECIES_COMBEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2146
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2145
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2147
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2149
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2148
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2150
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2152
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2151
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2153
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2155
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2154
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2156
    [TRAINER_PBL_SETH] =
    {
#line 2157
        .trainerName = _("Seth"),
#line 2158
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2159
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 2160
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2162
        .doubleBattle = FALSE,
#line 2161
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2163
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2165
            .species = SPECIES_TYMPOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2167
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2166
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2168
            .species = SPECIES_MUDBRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2170
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2169
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2171
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2173
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2172
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2174
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2176
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2175
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2177
    [TRAINER_PBL_CONNIE] =
    {
#line 2178
        .trainerName = _("Connie"),
#line 2179
        .trainerClass = TRAINER_CLASS_LASS,
#line 2180
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 2181
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2183
        .doubleBattle = FALSE,
#line 2182
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2184
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2186
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2187
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2189
            .species = SPECIES_DEWPIDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2191
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2190
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2192
    [TRAINER_PBL_PETER] =
    {
#line 2193
        .trainerName = _("Peter"),
#line 2194
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 2195
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 2196
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2198
        .doubleBattle = FALSE,
#line 2197
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2199
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2201
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2203
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2202
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2204
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2206
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2205
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2207
    [TRAINER_PBL_WHITAKER] =
    {
#line 2208
        .trainerName = _("Whitaker"),
#line 2209
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 2210
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 2211
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 2213
        .doubleBattle = FALSE,
#line 2212
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2214
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2216
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2219
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2217
            .ability = ABILITY_SNIPER,
#line 2218
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2220
                MOVE_FURY_ATTACK,
                MOVE_QUICK_ATTACK,
                MOVE_WING_ATTACK,
                MOVE_PURSUIT,
            },
            },
            {
#line 2225
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2227
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2226
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2228
            .species = SPECIES_FLITTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2230
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2229
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2231
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2233
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2232
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2234
    [TRAINER_PBL_BETTY_LEVIATHAN_7] =
    {
#line 2235
        .trainerName = _("Betty"),
#line 2236
        .trainerClass = TRAINER_CLASS_LADY,
#line 2237
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 2238
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2240
        .doubleBattle = TRUE,
#line 2239
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2242
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2241
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2244
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2244
            .heldItem = ITEM_SITRUS_BERRY,
#line 2247
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2245
            .ability = ABILITY_ANGER_SHELL,
#line 2246
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2248
                MOVE_ROCK_TOMB,
                MOVE_METAL_CLAW,
                MOVE_ROCK_SMASH,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 2253
            .species = SPECIES_DEDENNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2253
            .heldItem = ITEM_SITRUS_BERRY,
#line 2256
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2254
            .ability = ABILITY_CHEEK_POUCH,
#line 2255
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2257
                MOVE_PARABOLIC_CHARGE,
                MOVE_DRAINING_KISS,
                MOVE_NUZZLE,
                MOVE_CHARGE_BEAM,
            },
            },
        },
    },
#line 2262
    [TRAINER_PBL_BETTY_LEVIATHAN_7_BRUTAL] =
    {
#line 2263
        .trainerName = _("Betty"),
#line 2264
        .trainerClass = TRAINER_CLASS_LADY,
#line 2265
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 2266
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2268
        .doubleBattle = TRUE,
#line 2267
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 2270
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2269
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2272
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2272
            .heldItem = ITEM_SITRUS_BERRY,
#line 2275
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2273
            .ability = ABILITY_ANGER_SHELL,
#line 2274
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2276
                MOVE_ROCK_TOMB,
                MOVE_METAL_CLAW,
                MOVE_ROCK_SMASH,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 2281
            .species = SPECIES_DEDENNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2281
            .heldItem = ITEM_SITRUS_BERRY,
#line 2284
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2282
            .ability = ABILITY_CHEEK_POUCH,
#line 2283
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2285
                MOVE_PARABOLIC_CHARGE,
                MOVE_DRAINING_KISS,
                MOVE_NUZZLE,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 2290
            .species = SPECIES_DRAMPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2290
            .heldItem = ITEM_SITRUS_BERRY,
#line 2293
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2291
            .ability = ABILITY_BERSERK,
#line 2292
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2294
                MOVE_DRAGON_BREATH,
                MOVE_GLARE,
                MOVE_NATURAL_GIFT,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 2299
    [TRAINER_PBL_JIMMY] =
    {
#line 2300
        .trainerName = _("Jimmy"),
#line 2301
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 2302
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 2303
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2305
        .doubleBattle = FALSE,
#line 2304
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2306
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2308
            .species = SPECIES_NOIBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2310
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2309
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2311
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2313
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2312
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2314
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2316
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2315
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2317
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2319
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2318
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2320
    [TRAINER_PBL_EMILIANO] =
    {
#line 2321
        .trainerName = _("Emiliano"),
#line 2322
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2323
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 2324
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2326
        .doubleBattle = FALSE,
#line 2325
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2327
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2329
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2331
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2330
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2332
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2334
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2333
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2335
            .species = SPECIES_CUFANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2337
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2336
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2338
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2340
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2339
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2341
    [TRAINER_PBL_BECKHAM] =
    {
#line 2342
        .trainerName = _("Beckham"),
#line 2343
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2344
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2345
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2347
        .doubleBattle = FALSE,
#line 2346
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2348
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2350
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2352
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2351
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2353
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2355
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2354
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2356
            .species = SPECIES_HELIOPTILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2358
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2357
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2359
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2361
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2360
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2362
    [TRAINER_PBL_KAREN] =
    {
#line 2363
        .trainerName = _("Karen"),
#line 2364
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 2365
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 2366
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2368
        .doubleBattle = FALSE,
#line 2367
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2369
        .randomLead = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2371
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2373
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2372
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2374
    [TRAINER_PBL_JAYDEN] =
    {
#line 2375
        .trainerName = _("Jayden"),
#line 2376
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2377
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 2378
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2380
        .doubleBattle = FALSE,
#line 2379
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2381
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2383
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2385
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2384
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2386
            .species = SPECIES_ROLYCOLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2388
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2387
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2389
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2391
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2390
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2392
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2394
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2393
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2395
    [TRAINER_PBL_NEIL] =
    {
#line 2396
        .trainerName = _("Neil"),
#line 2397
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 2398
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 2399
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2401
        .doubleBattle = FALSE,
#line 2400
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2402
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2404
            .species = SPECIES_RELLOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2406
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2405
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2407
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2409
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2408
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2410
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2412
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2411
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2413
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2415
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2414
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2416
    [TRAINER_PBL_TAMARA] =
    {
#line 2417
        .trainerName = _("Tamara"),
#line 2418
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 2419
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 2420
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2422
        .doubleBattle = FALSE,
#line 2421
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2423
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2425
            .species = SPECIES_SALANDIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2427
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2426
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2428
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2430
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2429
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2431
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2433
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2432
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2434
            .species = SPECIES_MORELULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2435
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2437
    [TRAINER_PBL_ALISTAIR_LEVIATHAN_8] =
    {
#line 2438
        .trainerName = _("Alistair"),
#line 2439
        .trainerClass = TRAINER_CLASS_ROUGHNECK,
#line 2440
        .trainerPic = TRAINER_PIC_ROUGHNECK,
        .encounterMusic_gender =
#line 2441
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2443
        .doubleBattle = FALSE,
#line 2442
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2445
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2444
        .randomLead = FALSE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2447
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2447
            .heldItem = ITEM_POISON_BARB,
#line 2450
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2448
            .ability = ABILITY_POISON_TOUCH,
#line 2449
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2451
                MOVE_SLUDGE,
                MOVE_ACID_SPRAY,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2456
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2456
            .heldItem = ITEM_SHARP_BEAK,
#line 2459
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2457
            .ability = ABILITY_AFTERMATH,
#line 2458
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2460
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_DEFOG,
            },
            },
            {
#line 2465
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2465
            .heldItem = ITEM_SITRUS_BERRY,
#line 2468
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2466
            .ability = ABILITY_POISON_TOUCH,
#line 2467
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2469
                MOVE_VENOSHOCK,
                MOVE_VACUUM_WAVE,
                MOVE_FAKE_OUT,
                MOVE_THIEF,
            },
            },
            {
#line 2474
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2474
            .heldItem = ITEM_SITRUS_BERRY,
#line 2477
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2475
            .ability = ABILITY_STRONG_JAW,
#line 2476
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2478
                MOVE_BITE,
                MOVE_HOWL,
                MOVE_HEADBUTT,
                MOVE_TRAILBLAZE,
            },
            },
            {
#line 2483
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2483
            .heldItem = ITEM_BLACK_BELT,
#line 2486
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2484
            .ability = ABILITY_GUTS,
#line 2485
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2487
                MOVE_REVENGE,
                MOVE_SEISMIC_TOSS,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 2492
    [TRAINER_PBL_ALISTAIR_LEVIATHAN_8_BRUTAL] =
    {
#line 2493
        .trainerName = _("Alistair"),
#line 2494
        .trainerClass = TRAINER_CLASS_ROUGHNECK,
#line 2495
        .trainerPic = TRAINER_PIC_ROUGHNECK,
        .encounterMusic_gender =
#line 2496
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2498
        .doubleBattle = FALSE,
#line 2497
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 2500
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2499
        .randomLead = FALSE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2502
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2502
            .heldItem = ITEM_POISON_BARB,
#line 2505
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2503
            .ability = ABILITY_POISON_TOUCH,
#line 2504
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2506
                MOVE_SLUDGE,
                MOVE_ACID_SPRAY,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2511
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2511
            .heldItem = ITEM_SHARP_BEAK,
#line 2514
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2512
            .ability = ABILITY_AFTERMATH,
#line 2513
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2515
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_DEFOG,
            },
            },
            {
#line 2520
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2520
            .heldItem = ITEM_SITRUS_BERRY,
#line 2523
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2521
            .ability = ABILITY_POISON_TOUCH,
#line 2522
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2524
                MOVE_VENOSHOCK,
                MOVE_VACUUM_WAVE,
                MOVE_FAKE_OUT,
                MOVE_THIEF,
            },
            },
            {
#line 2529
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2529
            .heldItem = ITEM_SITRUS_BERRY,
#line 2532
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2530
            .ability = ABILITY_STRONG_JAW,
#line 2531
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2533
                MOVE_BITE,
                MOVE_HOWL,
                MOVE_HEADBUTT,
                MOVE_TRAILBLAZE,
            },
            },
            {
#line 2538
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2538
            .heldItem = ITEM_BLACK_BELT,
#line 2541
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2539
            .ability = ABILITY_GUTS,
#line 2540
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2542
                MOVE_REVENGE,
                MOVE_SEISMIC_TOSS,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 2547
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2547
            .heldItem = ITEM_SITRUS_BERRY,
#line 2550
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2548
            .ability = ABILITY_MERCILESS,
#line 2549
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2551
                MOVE_VENOSHOCK,
                MOVE_POISON_FANG,
                MOVE_THIEF,
                MOVE_GLARE,
            },
            },
        },
    },
#line 2556
    [TRAINER_PBL_COOPER] =
    {
#line 2557
        .trainerName = _("STEVEN"),
#line 2558
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2559
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2561
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2563
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2567
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2566
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2565
            .lvl = 42,
#line 2564
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2568
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2573
    [TRAINER_PBL_CARMINE] =
    {
#line 2574
        .trainerName = _("STEVEN"),
#line 2575
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2576
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2578
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2580
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2584
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2583
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2582
            .lvl = 42,
#line 2581
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2585
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2590
    [TRAINER_PBL_ARI] =
    {
#line 2591
        .trainerName = _("STEVEN"),
#line 2592
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2593
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2595
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2597
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2601
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2600
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2599
            .lvl = 42,
#line 2598
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2602
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2607
    [TRAINER_PBL_BERTHA] =
    {
#line 2608
        .trainerName = _("STEVEN"),
#line 2609
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2610
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2612
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2614
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2618
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2617
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2616
            .lvl = 42,
#line 2615
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2619
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2624
    [TRAINER_PBL_CASSANDRA] =
    {
#line 2625
        .trainerName = _("STEVEN"),
#line 2626
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2627
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2629
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2631
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2635
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2634
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2633
            .lvl = 42,
#line 2632
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2636
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2641
    [TRAINER_PBL_DOMINIC] =
    {
#line 2642
        .trainerName = _("STEVEN"),
#line 2643
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2644
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2646
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2648
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2652
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2651
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2650
            .lvl = 42,
#line 2649
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2653
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2658
    [TRAINER_PBL_ERICA] =
    {
#line 2659
        .trainerName = _("STEVEN"),
#line 2660
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2661
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2663
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2665
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2669
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2668
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2667
            .lvl = 42,
#line 2666
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2670
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2675
    [TRAINER_PBL_KYLE] =
    {
#line 2676
        .trainerName = _("STEVEN"),
#line 2677
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2678
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2680
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2682
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2686
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2685
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2684
            .lvl = 42,
#line 2683
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2687
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2692
    [TRAINER_PBL_BELLE] =
    {
#line 2693
        .trainerName = _("STEVEN"),
#line 2694
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2695
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2697
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2699
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2703
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2702
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2701
            .lvl = 42,
#line 2700
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2704
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2709
    [TRAINER_PBL_DEWEY] =
    {
#line 2710
        .trainerName = _("STEVEN"),
#line 2711
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2712
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2714
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2716
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2720
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2719
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2718
            .lvl = 42,
#line 2717
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2721
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2726
    [TRAINER_PBL_PEARLIE] =
    {
#line 2727
        .trainerName = _("STEVEN"),
#line 2728
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2729
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2731
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2733
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2737
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2736
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2735
            .lvl = 42,
#line 2734
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2738
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2743
    [TRAINER_PBL_ERNEST] =
    {
#line 2744
        .trainerName = _("STEVEN"),
#line 2745
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2746
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2748
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2750
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2754
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2753
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2752
            .lvl = 42,
#line 2751
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2755
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2760
    [TRAINER_PBL_ALANA] =
    {
#line 2761
        .trainerName = _("STEVEN"),
#line 2762
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2763
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2765
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2767
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2771
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2770
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2769
            .lvl = 42,
#line 2768
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2772
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2777
    [TRAINER_PBL_SUSAN] =
    {
#line 2778
        .trainerName = _("STEVEN"),
#line 2779
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2780
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2782
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2784
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2788
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2787
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2786
            .lvl = 42,
#line 2785
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2789
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2794
    [TRAINER_PBL_CONRAD] =
    {
#line 2795
        .trainerName = _("STEVEN"),
#line 2796
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2797
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2799
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2801
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2805
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2804
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2803
            .lvl = 42,
#line 2802
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2806
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2811
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9] =
    {
#line 2812
        .trainerName = _("STEVEN"),
#line 2813
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2814
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2816
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2818
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2822
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2821
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2820
            .lvl = 42,
#line 2819
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2823
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2828
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9_BRUTAL] =
    {
#line 2829
        .trainerName = _("STEVEN"),
#line 2830
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2831
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2833
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2835
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2839
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2838
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2837
            .lvl = 42,
#line 2836
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2840
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2845
    [TRAINER_PBL_JEANETTE] =
    {
#line 2846
        .trainerName = _("STEVEN"),
#line 2847
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2848
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2850
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2852
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2856
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2855
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2854
            .lvl = 42,
#line 2853
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2857
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2862
    [TRAINER_PBL_EMMA_AND_LEO] =
    {
#line 2863
        .trainerName = _("STEVEN"),
#line 2864
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2865
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2867
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2869
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2873
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2872
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2871
            .lvl = 42,
#line 2870
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2874
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2879
    [TRAINER_PBL_JOEL] =
    {
#line 2880
        .trainerName = _("STEVEN"),
#line 2881
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2882
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2884
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2886
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2890
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2889
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2888
            .lvl = 42,
#line 2887
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2891
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2896
    [TRAINER_PBL_MARION] =
    {
#line 2897
        .trainerName = _("STEVEN"),
#line 2898
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2899
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2901
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2903
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2907
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2906
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2905
            .lvl = 42,
#line 2904
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2908
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2913
    [TRAINER_PBL_REGINA] =
    {
#line 2914
        .trainerName = _("STEVEN"),
#line 2915
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2916
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2918
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2920
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2924
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2923
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2922
            .lvl = 42,
#line 2921
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2925
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2930
    [TRAINER_PBL_NEWTON_LEVIATHAN_10] =
    {
#line 2931
        .trainerName = _("STEVEN"),
#line 2932
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2933
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2935
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2937
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2941
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2940
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2939
            .lvl = 42,
#line 2938
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2942
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2947
    [TRAINER_PBL_NEWTON_LEVIATHAN_10_BRUTAL] =
    {
#line 2948
        .trainerName = _("STEVEN"),
#line 2949
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2950
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2952
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2954
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2958
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2957
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2956
            .lvl = 42,
#line 2955
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2959
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2964
    [TRAINER_PBL_ESSENCE] =
    {
#line 2965
        .trainerName = _("STEVEN"),
#line 2966
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2967
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2969
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2971
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2975
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2974
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2973
            .lvl = 42,
#line 2972
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2976
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2981
    [TRAINER_PBL_DOLORES] =
    {
#line 2982
        .trainerName = _("STEVEN"),
#line 2983
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2984
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2986
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2988
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2992
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2991
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2990
            .lvl = 42,
#line 2989
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2993
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2998
    [TRAINER_PBL_JULIE] =
    {
#line 2999
        .trainerName = _("STEVEN"),
#line 3000
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3001
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3003
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3005
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3009
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3008
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3007
            .lvl = 42,
#line 3006
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3010
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3015
    [TRAINER_PBL_ROMULUS] =
    {
#line 3016
        .trainerName = _("STEVEN"),
#line 3017
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3018
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3020
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3022
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3026
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3025
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3024
            .lvl = 42,
#line 3023
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3027
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3032
    [TRAINER_PBL_TREVOR] =
    {
#line 3033
        .trainerName = _("STEVEN"),
#line 3034
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3035
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3037
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3039
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3043
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3042
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3041
            .lvl = 42,
#line 3040
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3044
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3049
    [TRAINER_PBL_FEDERICO] =
    {
#line 3050
        .trainerName = _("STEVEN"),
#line 3051
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3052
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3054
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3056
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3060
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3059
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3058
            .lvl = 42,
#line 3057
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3061
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3066
    [TRAINER_PBL_GENIE] =
    {
#line 3067
        .trainerName = _("STEVEN"),
#line 3068
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3069
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3071
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3073
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3077
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3076
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3075
            .lvl = 42,
#line 3074
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3078
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3083
    [TRAINER_PBL_HILDA] =
    {
#line 3084
        .trainerName = _("STEVEN"),
#line 3085
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3086
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3088
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3090
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3094
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3093
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3092
            .lvl = 42,
#line 3091
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3095
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3100
    [TRAINER_PBL_KINLEY] =
    {
#line 3101
        .trainerName = _("STEVEN"),
#line 3102
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3103
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3105
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3107
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3111
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3110
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3109
            .lvl = 42,
#line 3108
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3112
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3117
    [TRAINER_PBL_VIOLET] =
    {
#line 3118
        .trainerName = _("STEVEN"),
#line 3119
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3120
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3122
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3124
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3128
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3127
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3126
            .lvl = 42,
#line 3125
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3129
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3134
    [TRAINER_PBL_WANDA] =
    {
#line 3135
        .trainerName = _("STEVEN"),
#line 3136
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3137
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3139
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3141
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3145
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3144
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3143
            .lvl = 42,
#line 3142
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3146
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3151
    [TRAINER_PBL_AMBER_AND_KIM] =
    {
#line 3152
        .trainerName = _("STEVEN"),
#line 3153
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3154
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3156
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3158
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3162
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3161
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3160
            .lvl = 42,
#line 3159
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3163
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3168
    [TRAINER_PBL_JAN_AND_ERIN] =
    {
#line 3169
        .trainerName = _("STEVEN"),
#line 3170
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3171
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3173
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3175
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3179
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3178
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3177
            .lvl = 42,
#line 3176
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3180
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3185
    [TRAINER_PBL_STEVE] =
    {
#line 3186
        .trainerName = _("STEVEN"),
#line 3187
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3188
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3190
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3192
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3196
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3195
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3194
            .lvl = 42,
#line 3193
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3197
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3202
    [TRAINER_PBL_GOULD] =
    {
#line 3203
        .trainerName = _("STEVEN"),
#line 3204
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3205
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3207
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3209
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3213
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3212
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3211
            .lvl = 42,
#line 3210
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3214
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3219
    [TRAINER_PBL_MENDEL] =
    {
#line 3220
        .trainerName = _("STEVEN"),
#line 3221
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3222
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3224
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3226
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3230
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3228
            .lvl = 42,
#line 3227
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3231
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3236
    [TRAINER_PBL_DARWIN] =
    {
#line 3237
        .trainerName = _("STEVEN"),
#line 3238
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3239
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3241
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3243
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3247
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3246
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3245
            .lvl = 42,
#line 3244
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3248
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3253
    [TRAINER_PBL_JENNY_LEVIATHAN_11] =
    {
#line 3254
        .trainerName = _("STEVEN"),
#line 3255
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3256
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3258
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3260
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3264
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3263
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3262
            .lvl = 42,
#line 3261
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3265
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3270
    [TRAINER_PBL_JENNY_LEVIATHAN_11_BRUTAL] =
    {
#line 3271
        .trainerName = _("STEVEN"),
#line 3272
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3273
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3275
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3277
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3281
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3280
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3279
            .lvl = 42,
#line 3278
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3282
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3287
    [TRAINER_PBL_BART] =
    {
#line 3288
        .trainerName = _("STEVEN"),
#line 3289
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3290
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3292
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3294
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3298
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3297
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3296
            .lvl = 42,
#line 3295
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3299
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3304
    [TRAINER_PBL_NIGEL] =
    {
#line 3305
        .trainerName = _("STEVEN"),
#line 3306
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3307
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3309
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3311
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3315
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3314
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3313
            .lvl = 42,
#line 3312
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3316
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3321
    [TRAINER_PBL_LOLA] =
    {
#line 3322
        .trainerName = _("STEVEN"),
#line 3323
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3324
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3326
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3328
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3332
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3331
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3330
            .lvl = 42,
#line 3329
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3333
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3338
    [TRAINER_PBL_CHARLIE] =
    {
#line 3339
        .trainerName = _("STEVEN"),
#line 3340
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3341
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3343
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3345
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3349
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3348
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3347
            .lvl = 42,
#line 3346
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3350
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3355
    [TRAINER_PBL_RANDOLPH] =
    {
#line 3356
        .trainerName = _("STEVEN"),
#line 3357
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3358
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3360
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3362
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3366
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3365
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3364
            .lvl = 42,
#line 3363
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3367
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3372
    [TRAINER_PBL_TODD] =
    {
#line 3373
        .trainerName = _("STEVEN"),
#line 3374
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3375
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3377
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3379
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3383
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3382
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3381
            .lvl = 42,
#line 3380
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3384
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3389
    [TRAINER_PBL_RUSSELL] =
    {
#line 3390
        .trainerName = _("STEVEN"),
#line 3391
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3392
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3394
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3396
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3400
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3399
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3398
            .lvl = 42,
#line 3397
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3401
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3406
    [TRAINER_PBL_OTIS] =
    {
#line 3407
        .trainerName = _("STEVEN"),
#line 3408
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3409
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3411
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3413
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3417
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3416
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3415
            .lvl = 42,
#line 3414
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3418
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3423
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12] =
    {
#line 3424
        .trainerName = _("STEVEN"),
#line 3425
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3426
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3428
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3430
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3434
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3433
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3432
            .lvl = 42,
#line 3431
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3435
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3440
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12_BRUTAL] =
    {
#line 3441
        .trainerName = _("STEVEN"),
#line 3442
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3443
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3445
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3447
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3451
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3450
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3449
            .lvl = 42,
#line 3448
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3452
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3457
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13] =
    {
#line 3458
        .trainerName = _("STEVEN"),
#line 3459
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3460
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3462
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3464
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3468
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3467
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3466
            .lvl = 42,
#line 3465
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3469
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3474
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13_BRUTAL] =
    {
#line 3475
        .trainerName = _("STEVEN"),
#line 3476
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3477
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3479
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3481
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3485
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3484
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3483
            .lvl = 42,
#line 3482
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3486
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3491
    [TRAINER_PBL_IONA] =
    {
#line 3492
        .trainerName = _("STEVEN"),
#line 3493
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3494
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3496
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3498
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3502
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3501
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3500
            .lvl = 42,
#line 3499
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3503
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3508
    [TRAINER_PBL_BERKE] =
    {
#line 3509
        .trainerName = _("STEVEN"),
#line 3510
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3511
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3513
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3515
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3519
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3518
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3517
            .lvl = 42,
#line 3516
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3520
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3525
    [TRAINER_PBL_TANISHA] =
    {
#line 3526
        .trainerName = _("STEVEN"),
#line 3527
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3528
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3530
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3532
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3536
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3535
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3534
            .lvl = 42,
#line 3533
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3537
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3542
    [TRAINER_PBL_ROBERT] =
    {
#line 3543
        .trainerName = _("STEVEN"),
#line 3544
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3545
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3547
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3549
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3553
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3552
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3551
            .lvl = 42,
#line 3550
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3554
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3559
    [TRAINER_PBL_CHRIS] =
    {
#line 3560
        .trainerName = _("STEVEN"),
#line 3561
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3562
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3564
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3566
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3570
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3569
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3568
            .lvl = 42,
#line 3567
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3571
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3576
    [TRAINER_PBL_ANGUS] =
    {
#line 3577
        .trainerName = _("STEVEN"),
#line 3578
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3579
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3581
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3583
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3587
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3586
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3585
            .lvl = 42,
#line 3584
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3588
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3593
    [TRAINER_PBL_LILY_LEVIATHAN_14] =
    {
#line 3594
        .trainerName = _("STEVEN"),
#line 3595
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3596
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3598
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3600
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3604
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3603
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3602
            .lvl = 42,
#line 3601
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3605
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3610
    [TRAINER_PBL_LILY_LEVIATHAN_14_BRUTAL] =
    {
#line 3611
        .trainerName = _("STEVEN"),
#line 3612
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3613
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3615
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3617
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3621
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3620
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3619
            .lvl = 42,
#line 3618
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3622
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3627
    [TRAINER_PBL_AXLE] =
    {
#line 3628
        .trainerName = _("STEVEN"),
#line 3629
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3630
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3632
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3634
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3638
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3637
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3636
            .lvl = 42,
#line 3635
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3639
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3644
    [TRAINER_PBL_RAFAEL] =
    {
#line 3645
        .trainerName = _("STEVEN"),
#line 3646
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3647
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3649
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3651
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3655
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3654
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3653
            .lvl = 42,
#line 3652
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3656
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3661
    [TRAINER_PBL_GEORGINA] =
    {
#line 3662
        .trainerName = _("STEVEN"),
#line 3663
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3664
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3666
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3668
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3672
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3671
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3670
            .lvl = 42,
#line 3669
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3673
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3678
    [TRAINER_PBL_MIA_LEVIATHAN_15] =
    {
#line 3679
        .trainerName = _("STEVEN"),
#line 3680
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3681
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3683
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3685
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3689
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3688
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3687
            .lvl = 42,
#line 3686
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3690
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3695
    [TRAINER_PBL_MIA_LEVIATHAN_15_BRUTAL] =
    {
#line 3696
        .trainerName = _("STEVEN"),
#line 3697
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3698
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3700
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3702
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3706
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3705
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3704
            .lvl = 42,
#line 3703
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3707
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3712
    [TRAINER_PBL_DORIS] =
    {
#line 3713
        .trainerName = _("STEVEN"),
#line 3714
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3715
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3717
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3719
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3723
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3722
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3721
            .lvl = 42,
#line 3720
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3724
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3729
    [TRAINER_PBL_HOMER] =
    {
#line 3730
        .trainerName = _("STEVEN"),
#line 3731
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3732
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3734
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3736
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3740
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3739
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3738
            .lvl = 42,
#line 3737
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3741
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3746
    [TRAINER_PBL_JOHN] =
    {
#line 3747
        .trainerName = _("STEVEN"),
#line 3748
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3749
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3751
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3753
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3757
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3756
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3755
            .lvl = 42,
#line 3754
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3758
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3763
    [TRAINER_PBL_GLENN] =
    {
#line 3764
        .trainerName = _("STEVEN"),
#line 3765
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3766
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3768
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3770
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3774
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3773
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3772
            .lvl = 42,
#line 3771
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3775
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3780
    [TRAINER_PBL_JAY] =
    {
#line 3781
        .trainerName = _("STEVEN"),
#line 3782
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3783
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3785
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3787
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3791
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3790
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3789
            .lvl = 42,
#line 3788
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3792
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3797
    [TRAINER_PBL_TYLER] =
    {
#line 3798
        .trainerName = _("STEVEN"),
#line 3799
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3800
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3802
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3804
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3808
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3807
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3806
            .lvl = 42,
#line 3805
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3809
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3814
    [TRAINER_PBL_TERRENCE] =
    {
#line 3815
        .trainerName = _("STEVEN"),
#line 3816
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3817
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3819
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3821
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3825
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3824
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3823
            .lvl = 42,
#line 3822
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3826
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3831
    [TRAINER_PBL_MARTY] =
    {
#line 3832
        .trainerName = _("STEVEN"),
#line 3833
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3834
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3836
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3838
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3842
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3841
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3840
            .lvl = 42,
#line 3839
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3843
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3848
    [TRAINER_PBL_KARI] =
    {
#line 3849
        .trainerName = _("STEVEN"),
#line 3850
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3851
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3853
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3855
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3859
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3858
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3857
            .lvl = 42,
#line 3856
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3860
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3865
    [TRAINER_PBL_ABRAHAM] =
    {
#line 3866
        .trainerName = _("STEVEN"),
#line 3867
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3868
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3870
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3872
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3876
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3875
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3874
            .lvl = 42,
#line 3873
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3877
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3882
    [TRAINER_PBL_MELINDA] =
    {
#line 3883
        .trainerName = _("STEVEN"),
#line 3884
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3885
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3887
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3889
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3893
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3892
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3891
            .lvl = 42,
#line 3890
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3894
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3899
    [TRAINER_PBL_EMILIO] =
    {
#line 3900
        .trainerName = _("STEVEN"),
#line 3901
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3902
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3904
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3906
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3910
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3909
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3908
            .lvl = 42,
#line 3907
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3911
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3916
    [TRAINER_PBL_REX] =
    {
#line 3917
        .trainerName = _("STEVEN"),
#line 3918
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3919
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3921
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3923
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3927
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3926
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3925
            .lvl = 42,
#line 3924
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3928
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3933
    [TRAINER_PBL_LOUIS] =
    {
#line 3934
        .trainerName = _("STEVEN"),
#line 3935
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3936
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3938
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3940
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3944
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3943
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3942
            .lvl = 42,
#line 3941
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3945
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3950
    [TRAINER_PBL_LEROY] =
    {
#line 3951
        .trainerName = _("STEVEN"),
#line 3952
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3953
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3955
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3957
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3961
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3960
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3959
            .lvl = 42,
#line 3958
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3962
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3967
    [TRAINER_PBL_ELTON] =
    {
#line 3968
        .trainerName = _("STEVEN"),
#line 3969
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3970
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3972
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3974
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3978
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3977
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3976
            .lvl = 42,
#line 3975
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3979
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3984
    [TRAINER_PBL_WILLIE] =
    {
#line 3985
        .trainerName = _("STEVEN"),
#line 3986
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3987
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3989
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3991
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3995
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3994
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3993
            .lvl = 42,
#line 3992
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3996
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4001
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16] =
    {
#line 4002
        .trainerName = _("STEVEN"),
#line 4003
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4004
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4006
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4008
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4012
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4011
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4010
            .lvl = 42,
#line 4009
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4013
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4018
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16_BRUTAL] =
    {
#line 4019
        .trainerName = _("STEVEN"),
#line 4020
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4021
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4023
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4025
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4029
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4028
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4027
            .lvl = 42,
#line 4026
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4030
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4035
    [TRAINER_PBL_PIRATE_1] =
    {
#line 4036
        .trainerName = _("STEVEN"),
#line 4037
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4038
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4040
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4042
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4046
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4045
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4044
            .lvl = 42,
#line 4043
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4047
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4052
    [TRAINER_PBL_PIRATE_2] =
    {
#line 4053
        .trainerName = _("STEVEN"),
#line 4054
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4055
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4057
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4059
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4063
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4062
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4061
            .lvl = 42,
#line 4060
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4064
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4069
    [TRAINER_PBL_PIRATE_3] =
    {
#line 4070
        .trainerName = _("STEVEN"),
#line 4071
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4072
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4074
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4076
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4080
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4079
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4078
            .lvl = 42,
#line 4077
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4081
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4086
    [TRAINER_PBL_PIRATE_4] =
    {
#line 4087
        .trainerName = _("STEVEN"),
#line 4088
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4089
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4091
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4093
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4097
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4096
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4095
            .lvl = 42,
#line 4094
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4098
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4103
    [TRAINER_PBL_SHAWN] =
    {
#line 4104
        .trainerName = _("STEVEN"),
#line 4105
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4106
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4108
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4110
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4114
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4113
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4112
            .lvl = 42,
#line 4111
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4115
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4120
    [TRAINER_PBL_FERNANDO] =
    {
#line 4121
        .trainerName = _("STEVEN"),
#line 4122
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4123
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4125
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4127
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4131
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4130
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4129
            .lvl = 42,
#line 4128
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4132
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4137
    [TRAINER_PBL_KANE] =
    {
#line 4138
        .trainerName = _("STEVEN"),
#line 4139
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4140
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4142
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4144
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4148
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4146
            .lvl = 42,
#line 4145
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4149
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4154
    [TRAINER_PBL_KIRK] =
    {
#line 4155
        .trainerName = _("STEVEN"),
#line 4156
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4157
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4159
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4161
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4165
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4163
            .lvl = 42,
#line 4162
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4166
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4171
    [TRAINER_PBL_DALTON] =
    {
#line 4172
        .trainerName = _("STEVEN"),
#line 4173
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4174
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4176
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4178
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4182
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4181
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4180
            .lvl = 42,
#line 4179
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4183
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4188
    [TRAINER_PBL_LEE] =
    {
#line 4189
        .trainerName = _("STEVEN"),
#line 4190
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4191
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4193
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4195
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4199
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4198
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4197
            .lvl = 42,
#line 4196
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4200
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4205
    [TRAINER_PBL_BLANCHE] =
    {
#line 4206
        .trainerName = _("STEVEN"),
#line 4207
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4208
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4210
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4212
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4216
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4215
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4214
            .lvl = 42,
#line 4213
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4217
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4222
    [TRAINER_PBL_TROY] =
    {
#line 4223
        .trainerName = _("STEVEN"),
#line 4224
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4225
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4227
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4229
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4233
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4232
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4231
            .lvl = 42,
#line 4230
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4234
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4239
    [TRAINER_PBL_ABED] =
    {
#line 4240
        .trainerName = _("STEVEN"),
#line 4241
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4242
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4244
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4246
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4250
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4249
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4248
            .lvl = 42,
#line 4247
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4251
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4256
    [TRAINER_PBL_TROY_BRUTAL] =
    {
#line 4257
        .trainerName = _("STEVEN"),
#line 4258
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4259
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4261
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4263
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4267
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4266
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4265
            .lvl = 42,
#line 4264
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4268
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4273
    [TRAINER_PBL_ABED_BRUTAL] =
    {
#line 4274
        .trainerName = _("STEVEN"),
#line 4275
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4276
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4278
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4280
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4284
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4283
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4282
            .lvl = 42,
#line 4281
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4285
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4290
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17] =
    {
#line 4291
        .trainerName = _("STEVEN"),
#line 4292
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4293
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4295
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4297
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4301
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4300
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4299
            .lvl = 42,
#line 4298
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4302
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4307
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17_BRUTAL] =
    {
#line 4308
        .trainerName = _("STEVEN"),
#line 4309
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4310
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4312
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4314
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4318
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4317
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4316
            .lvl = 42,
#line 4315
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4319
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4324
    [TRAINER_PBL_ANITA] =
    {
#line 4325
        .trainerName = _("STEVEN"),
#line 4326
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4327
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4329
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4331
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4335
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4334
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4333
            .lvl = 42,
#line 4332
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4336
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4341
    [TRAINER_PBL_DESIREE] =
    {
#line 4342
        .trainerName = _("STEVEN"),
#line 4343
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4344
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4346
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4348
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4352
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4351
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4350
            .lvl = 42,
#line 4349
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4353
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4358
    [TRAINER_PBL_HOWARD] =
    {
#line 4359
        .trainerName = _("STEVEN"),
#line 4360
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4361
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4363
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4365
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4369
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4368
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4367
            .lvl = 42,
#line 4366
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4370
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4375
    [TRAINER_PBL_ELOISE] =
    {
#line 4376
        .trainerName = _("STEVEN"),
#line 4377
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4378
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4380
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4382
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4386
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4385
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4384
            .lvl = 42,
#line 4383
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4387
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4392
    [TRAINER_PBL_ALLY_AND_EMMY] =
    {
#line 4393
        .trainerName = _("STEVEN"),
#line 4394
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4395
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4397
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4399
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4403
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4402
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4401
            .lvl = 42,
#line 4400
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4404
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4409
    [TRAINER_PBL_AMIR] =
    {
#line 4410
        .trainerName = _("STEVEN"),
#line 4411
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4412
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4414
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4416
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4420
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4419
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4418
            .lvl = 42,
#line 4417
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4421
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4426
    [TRAINER_PBL_GETHIN] =
    {
#line 4427
        .trainerName = _("STEVEN"),
#line 4428
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4429
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4431
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4433
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4437
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4435
            .lvl = 42,
#line 4434
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4438
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4443
    [TRAINER_PBL_BERNARD] =
    {
#line 4444
        .trainerName = _("STEVEN"),
#line 4445
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4446
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4448
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4450
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4454
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4453
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4452
            .lvl = 42,
#line 4451
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4455
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4460
    [TRAINER_PBL_ELLIE] =
    {
#line 4461
        .trainerName = _("STEVEN"),
#line 4462
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4463
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4465
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4467
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4471
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4470
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4469
            .lvl = 42,
#line 4468
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4472
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4477
    [TRAINER_PBL_RUSTY] =
    {
#line 4478
        .trainerName = _("STEVEN"),
#line 4479
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4480
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4482
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4484
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4488
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4487
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4486
            .lvl = 42,
#line 4485
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4489
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4494
    [TRAINER_PBL_CODY] =
    {
#line 4495
        .trainerName = _("STEVEN"),
#line 4496
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4497
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4499
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4501
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4505
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4504
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4503
            .lvl = 42,
#line 4502
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4506
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4511
    [TRAINER_PBL_LEWIS] =
    {
#line 4512
        .trainerName = _("STEVEN"),
#line 4513
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4514
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4516
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4518
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4522
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4521
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4520
            .lvl = 42,
#line 4519
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4523
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4528
    [TRAINER_PBL_CORNELIUS] =
    {
#line 4529
        .trainerName = _("STEVEN"),
#line 4530
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4531
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4533
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4535
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4539
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4538
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4537
            .lvl = 42,
#line 4536
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4540
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4545
    [TRAINER_PBL_INEZ_AND_EMMA] =
    {
#line 4546
        .trainerName = _("STEVEN"),
#line 4547
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4548
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4550
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4552
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4556
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4555
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4554
            .lvl = 42,
#line 4553
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4557
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4562
    [TRAINER_PBL_HELEN] =
    {
#line 4563
        .trainerName = _("STEVEN"),
#line 4564
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4565
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4567
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4569
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4573
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4572
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4571
            .lvl = 42,
#line 4570
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4574
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4579
    [TRAINER_PBL_WESLEY] =
    {
#line 4580
        .trainerName = _("STEVEN"),
#line 4581
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4582
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4584
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4586
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4590
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4589
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4588
            .lvl = 42,
#line 4587
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4591
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4596
    [TRAINER_PBL_ALFREDO] =
    {
#line 4597
        .trainerName = _("STEVEN"),
#line 4598
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4599
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4601
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4603
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4607
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4606
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4605
            .lvl = 42,
#line 4604
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4608
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4613
    [TRAINER_PBL_IAN] =
    {
#line 4614
        .trainerName = _("STEVEN"),
#line 4615
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4616
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4618
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4620
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4624
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4623
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4622
            .lvl = 42,
#line 4621
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4625
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4630
    [TRAINER_PBL_AUDREY] =
    {
#line 4631
        .trainerName = _("STEVEN"),
#line 4632
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4633
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4635
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4637
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4641
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4640
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4639
            .lvl = 42,
#line 4638
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4642
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4647
    [TRAINER_PBL_LEVIATHAN13] =
    {
#line 4648
        .trainerName = _("STEVEN"),
#line 4649
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4650
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4652
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4654
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4658
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4657
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4656
            .lvl = 42,
#line 4655
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4659
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4664
    [TRAINER_PBL_EDGARDO] =
    {
#line 4665
        .trainerName = _("STEVEN"),
#line 4666
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4667
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4669
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4671
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4675
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4674
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4673
            .lvl = 42,
#line 4672
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4676
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4681
    [TRAINER_PBL_JEAN] =
    {
#line 4682
        .trainerName = _("STEVEN"),
#line 4683
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4684
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4686
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4688
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4692
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4691
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4690
            .lvl = 42,
#line 4689
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4693
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4698
    [TRAINER_PBL_ROSE] =
    {
#line 4699
        .trainerName = _("STEVEN"),
#line 4700
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4701
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4703
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4705
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4709
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4708
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4707
            .lvl = 42,
#line 4706
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4710
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4715
    [TRAINER_PBL_JENNIFER] =
    {
#line 4716
        .trainerName = _("STEVEN"),
#line 4717
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4718
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4720
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4722
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4726
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4725
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4724
            .lvl = 42,
#line 4723
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4727
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4732
    [TRAINER_PBL_MATTHEW] =
    {
#line 4733
        .trainerName = _("STEVEN"),
#line 4734
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4735
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4737
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4739
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4743
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4742
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4741
            .lvl = 42,
#line 4740
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4744
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4749
    [TRAINER_PBL_KERRY] =
    {
#line 4750
        .trainerName = _("STEVEN"),
#line 4751
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4752
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4754
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4756
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4760
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4759
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4758
            .lvl = 42,
#line 4757
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4761
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4766
    [TRAINER_PBL_ANNIE] =
    {
#line 4767
        .trainerName = _("STEVEN"),
#line 4768
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4769
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4771
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4773
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4777
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4776
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4775
            .lvl = 42,
#line 4774
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4778
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4783
    [TRAINER_PBL_CHRISTI] =
    {
#line 4784
        .trainerName = _("STEVEN"),
#line 4785
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4786
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4788
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4790
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4794
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4793
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4792
            .lvl = 42,
#line 4791
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4795
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4800
    [TRAINER_PBL_SPENCER] =
    {
#line 4801
        .trainerName = _("STEVEN"),
#line 4802
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4803
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4805
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4807
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4811
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4810
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4809
            .lvl = 42,
#line 4808
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4812
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4817
    [TRAINER_PBL_HAYWOOD] =
    {
#line 4818
        .trainerName = _("STEVEN"),
#line 4819
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4820
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4822
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4824
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4828
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4827
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4826
            .lvl = 42,
#line 4825
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4829
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4834
    [TRAINER_PBL_MONROE] =
    {
#line 4835
        .trainerName = _("STEVEN"),
#line 4836
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4837
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4839
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4841
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4845
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4844
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4843
            .lvl = 42,
#line 4842
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4846
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4851
    [TRAINER_PBL_DAVID] =
    {
#line 4852
        .trainerName = _("STEVEN"),
#line 4853
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4854
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4856
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4858
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4862
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4861
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4860
            .lvl = 42,
#line 4859
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4863
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4868
    [TRAINER_PBL_DOMINIK] =
    {
#line 4869
        .trainerName = _("STEVEN"),
#line 4870
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4871
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4873
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4875
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4879
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4878
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4877
            .lvl = 42,
#line 4876
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4880
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4885
    [TRAINER_PBL_DOUGLAS] =
    {
#line 4886
        .trainerName = _("STEVEN"),
#line 4887
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4888
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4890
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4892
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4896
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4895
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4894
            .lvl = 42,
#line 4893
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4897
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4902
    [TRAINER_PBL_NADINE] =
    {
#line 4903
        .trainerName = _("STEVEN"),
#line 4904
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4905
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4907
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4909
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4913
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4912
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4911
            .lvl = 42,
#line 4910
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4914
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4919
    [TRAINER_PBL_SANDY] =
    {
#line 4920
        .trainerName = _("STEVEN"),
#line 4921
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4922
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4924
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4926
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4930
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4929
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4928
            .lvl = 42,
#line 4927
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4931
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4936
    [TRAINER_PBL_SHELDON] =
    {
#line 4937
        .trainerName = _("STEVEN"),
#line 4938
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4939
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4941
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4943
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4947
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4946
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4945
            .lvl = 42,
#line 4944
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4948
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4953
    [TRAINER_PBL_LEVIATHAN14] =
    {
#line 4954
        .trainerName = _("STEVEN"),
#line 4955
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4956
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4958
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4960
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4964
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4963
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4962
            .lvl = 42,
#line 4961
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4965
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4970
    [TRAINER_PBL_LEVIATHAN12_BRUTAL] =
    {
#line 4971
        .trainerName = _("STEVEN"),
#line 4972
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4973
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4975
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4977
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4981
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4980
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4979
            .lvl = 42,
#line 4978
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4982
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4987
    [TRAINER_PBL_LEVIATHAN13_BRUTAL] =
    {
#line 4988
        .trainerName = _("STEVEN"),
#line 4989
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4990
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4992
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4994
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4998
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4997
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4996
            .lvl = 42,
#line 4995
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4999
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5004
    [TRAINER_PBL_LEVIATHAN14_BRUTAL] =
    {
#line 5005
        .trainerName = _("STEVEN"),
#line 5006
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5007
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5009
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5011
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5015
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5014
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5013
            .lvl = 42,
#line 5012
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5016
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5021
    [TRAINER_PBL_LEVIATHAN12] =
    {
#line 5022
        .trainerName = _("STEVEN"),
#line 5023
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5024
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5026
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5028
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5032
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5031
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5030
            .lvl = 42,
#line 5029
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5033
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
