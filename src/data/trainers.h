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
            .species = SPECIES_PURRLOIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 154
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 152
            .ability = ABILITY_LIMBER,
#line 153
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 155
                MOVE_SCRATCH,
                MOVE_GROWL,
                MOVE_SAND_ATTACK,
                MOVE_YAWN,
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
    [TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER_CHALLENGE] =
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
        .aiFlags = AI_FLAG_CHALLENGE,
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
    [TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER_CHALLENGE] =
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
        .aiFlags = AI_FLAG_CHALLENGE,
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
    [TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER_CHALLENGE] =
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
        .aiFlags = AI_FLAG_CHALLENGE,
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
            .species = SPECIES_BURMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 491
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 489
            .ability = ABILITY_SHED_SKIN,
#line 490
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 492
                MOVE_TACKLE,
                MOVE_STRING_SHOT,
                MOVE_PROTECT,
            },
            },
            {
#line 496
            .species = SPECIES_TAROUNTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 499
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 497
            .ability = ABILITY_INSOMNIA,
#line 498
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 500
                MOVE_TACKLE,
                MOVE_STRING_SHOT,
                MOVE_STRUGGLE_BUG,
                MOVE_ASSURANCE,
            },
            },
        },
    },
#line 505
    [TRAINER_PBL_HARPER] =
    {
#line 506
        .trainerName = _("Harper"),
#line 507
        .trainerClass = TRAINER_CLASS_LASS,
#line 508
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 509
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 511
        .doubleBattle = FALSE,
#line 510
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 512
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 514
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 515
            .ability = ABILITY_RATTLED,
#line 516
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 518
                MOVE_ASTONISH,
                MOVE_POUND,
                MOVE_SUPERSONIC,
                MOVE_ECHOED_VOICE,
            },
            },
            {
#line 523
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 524
            .ability = ABILITY_INSOMNIA,
#line 525
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 527
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_PECK,
                MOVE_CONFUSION,
            },
            },
            {
#line 532
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 535
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 533
            .ability = ABILITY_SAND_FORCE,
#line 534
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 536
                MOVE_SCRATCH,
                MOVE_SAND_ATTACK,
                MOVE_GROWL,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 541
    [TRAINER_PBL_ARTHUR] =
    {
#line 542
        .trainerName = _("Arthur"),
#line 543
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 544
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 545
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 547
        .doubleBattle = FALSE,
#line 546
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 548
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 550
            .species = SPECIES_YUNGOOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 553
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 551
            .ability = ABILITY_STRONG_JAW,
#line 552
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 554
                MOVE_TACKLE,
                MOVE_SAND_ATTACK,
                MOVE_LEER,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 559
            .species = SPECIES_PIKIPEK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 562
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 560
            .ability = ABILITY_SKILL_LINK,
#line 561
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 563
                MOVE_PECK,
                MOVE_GROWL,
                MOVE_MIRROR_MOVE,
            },
            },
            {
#line 567
            .species = SPECIES_NIDORAN_M,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 570
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 568
            .ability = ABILITY_POISON_POINT,
#line 569
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 571
                MOVE_PECK,
                MOVE_FOCUS_ENERGY,
                MOVE_POISON_STING,
                MOVE_DISABLE,
            },
            },
        },
    },
#line 576
    [TRAINER_PBL_SHAUN_LEVIATHAN_2] =
    {
#line 577
        .trainerName = _("Shaun"),
#line 578
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 579
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 580
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 582
        .doubleBattle = FALSE,
#line 581
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 584
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 583
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 586
            .species = SPECIES_BUNNELBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 586
            .heldItem = ITEM_ORAN_BERRY,
#line 589
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 587
            .ability = ABILITY_CHEEK_POUCH,
#line 588
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 590
                MOVE_TACKLE,
                MOVE_LEER,
                MOVE_DEFENSE_CURL,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 595
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 595
            .heldItem = ITEM_ORAN_BERRY,
#line 598
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 596
            .ability = ABILITY_CHEEK_POUCH,
#line 597
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 599
                MOVE_TACKLE,
                MOVE_BITE,
                MOVE_BIDE,
                MOVE_TEARFUL_LOOK,
            },
            },
            {
#line 604
            .species = SPECIES_SKWOVET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 604
            .heldItem = ITEM_ORAN_BERRY,
#line 607
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 605
            .ability = ABILITY_CHEEK_POUCH,
#line 606
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 608
                MOVE_TACKLE,
                MOVE_STUFF_CHEEKS,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
        },
    },
#line 613
    [TRAINER_PBL_SHAUN_LEVIATHAN_2_CHALLENGE] =
    {
#line 614
        .trainerName = _("Shaun"),
#line 615
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 616
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 617
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 619
        .doubleBattle = FALSE,
#line 618
        .aiFlags = AI_FLAG_CHALLENGE,
#line 621
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 620
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 623
            .species = SPECIES_BUNNELBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 623
            .heldItem = ITEM_ORAN_BERRY,
#line 626
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 624
            .ability = ABILITY_CHEEK_POUCH,
#line 625
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 627
                MOVE_TACKLE,
                MOVE_LEER,
                MOVE_DEFENSE_CURL,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 632
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 632
            .heldItem = ITEM_ORAN_BERRY,
#line 635
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 633
            .ability = ABILITY_CHEEK_POUCH,
#line 634
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 636
                MOVE_TACKLE,
                MOVE_BITE,
                MOVE_BIDE,
                MOVE_TEARFUL_LOOK,
            },
            },
            {
#line 641
            .species = SPECIES_LECHONK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 641
            .heldItem = ITEM_ORAN_BERRY,
#line 644
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 642
            .ability = ABILITY_THICK_FAT,
#line 643
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 645
                MOVE_TACKLE,
                MOVE_DISARMING_VOICE,
                MOVE_STUFF_CHEEKS,
            },
            },
            {
#line 649
            .species = SPECIES_SKWOVET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 649
            .heldItem = ITEM_ORAN_BERRY,
#line 652
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 650
            .ability = ABILITY_CHEEK_POUCH,
#line 651
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 653
                MOVE_TACKLE,
                MOVE_STUFF_CHEEKS,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
        },
    },
#line 658
    [TRAINER_PBL_JEMMA] =
    {
#line 659
        .trainerName = _("Jemma"),
#line 660
        .trainerClass = TRAINER_CLASS_LASS,
#line 661
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 662
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 664
        .doubleBattle = FALSE,
#line 663
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 665
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 667
            .species = SPECIES_BOUNSWEET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 670
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 668
            .ability = ABILITY_OBLIVIOUS,
#line 669
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 671
                MOVE_PLAY_NICE,
                MOVE_AROMATIC_MIST,
                MOVE_ABSORB,
                MOVE_GRASS_WHISTLE,
            },
            },
            {
#line 676
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 679
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 677
            .ability = ABILITY_KEEN_EYE,
#line 678
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 680
                MOVE_TACKLE,
                MOVE_SAND_ATTACK,
                MOVE_GUST,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 685
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 688
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 686
            .ability = ABILITY_STATIC,
#line 687
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 689
                MOVE_GROWL,
                MOVE_CHARGE,
                MOVE_THUNDER_SHOCK,
                MOVE_COTTON_SPORE,
            },
            },
        },
    },
#line 694
    [TRAINER_PBL_PATRICK] =
    {
#line 695
        .trainerName = _("Patrick"),
#line 696
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 697
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 698
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 700
        .doubleBattle = FALSE,
#line 699
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 701
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 703
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 706
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 704
            .ability = ABILITY_SHED_SKIN,
#line 705
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 707
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
            {
#line 710
            .species = SPECIES_METAPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 713
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 711
            .ability = ABILITY_SHED_SKIN,
#line 712
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 714
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
            {
#line 717
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 720
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 718
            .ability = ABILITY_SHED_SKIN,
#line 719
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 721
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
            {
#line 724
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 727
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 725
            .ability = ABILITY_SHED_SKIN,
#line 726
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 728
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 731
    [TRAINER_PBL_ANNABELLE] =
    {
#line 732
        .trainerName = _("Annabelle"),
#line 733
        .trainerClass = TRAINER_CLASS_LADY,
#line 734
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 735
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 737
        .doubleBattle = FALSE,
#line 736
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 738
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 740
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 743
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 741
            .ability = ABILITY_TECHNICIAN,
#line 742
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 744
                MOVE_SCRATCH,
                MOVE_GROWL,
                MOVE_FEINT,
            },
            },
            {
#line 748
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 751
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 749
            .ability = ABILITY_POISON_POINT,
#line 750
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 752
                MOVE_ABSORB,
                MOVE_WORRY_SEED,
                MOVE_LIFE_DEW,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 757
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 760
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 758
            .ability = ABILITY_HUGE_POWER,
#line 759
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 761
                MOVE_SOAK,
                MOVE_REFRESH,
                MOVE_CHARM,
                MOVE_BUBBLE,
            },
            },
            {
#line 766
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 769
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 767
            .ability = ABILITY_LEVITATE,
#line 768
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 770
                MOVE_GROWL,
                MOVE_ASTONISH,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
        },
    },
#line 775
    [TRAINER_PBL_BORIS] =
    {
#line 776
        .trainerName = _("Boris"),
#line 777
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 778
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 779
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 781
        .doubleBattle = FALSE,
#line 780
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 782
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 784
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 787
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 785
            .ability = ABILITY_SWIFT_SWIM,
#line 786
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 788
                MOVE_ABSORB,
                MOVE_BUBBLE,
                MOVE_MIST,
                MOVE_ASTONISH,
            },
            },
            {
#line 793
            .species = SPECIES_FLETCHLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 796
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 794
            .ability = ABILITY_BIG_PECKS,
#line 795
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 797
                MOVE_GROWL,
                MOVE_PECK,
                MOVE_QUICK_ATTACK,
                MOVE_EMBER,
            },
            },
            {
#line 802
            .species = SPECIES_YAMPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 805
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 803
            .ability = ABILITY_BALL_FETCH,
#line 804
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 806
                MOVE_SAND_ATTACK,
                MOVE_NUZZLE,
                MOVE_SPARK,
                MOVE_CHARGE,
            },
            },
        },
    },
#line 811
    [TRAINER_PBL_RICHARD] =
    {
#line 812
        .trainerName = _("Richard"),
#line 813
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 814
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 815
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 817
        .doubleBattle = FALSE,
#line 816
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 818
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 820
            .species = SPECIES_WOOLOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 823
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 821
            .ability = ABILITY_FLUFFY,
#line 822
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 824
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_DEFENSE_CURL,
                MOVE_COPYCAT,
            },
            },
            {
#line 829
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 832
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 830
            .ability = ABILITY_STATIC,
#line 831
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 833
                MOVE_THUNDER_SHOCK,
                MOVE_SWEET_KISS,
                MOVE_FAKE_OUT,
                MOVE_CHARM,
            },
            },
            {
#line 838
            .species = SPECIES_SMOLIV,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 841
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 839
            .ability = ABILITY_EARLY_BIRD,
#line 840
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 842
                MOVE_TACKLE,
                MOVE_ABSORB,
                MOVE_HELPING_HAND,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 847
            .species = SPECIES_IGGLYBUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 850
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 848
            .ability = ABILITY_CUTE_CHARM,
#line 849
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 851
                MOVE_ECHOED_VOICE,
                MOVE_SWEET_KISS,
                MOVE_DISARMING_VOICE,
                MOVE_DISABLE,
            },
            },
        },
    },
#line 856
    [TRAINER_PBL_PHILLIPA_LEVIATHAN_3] =
    {
#line 857
        .trainerName = _("Phillipa"),
#line 858
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 859
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 860
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 862
        .doubleBattle = FALSE,
#line 861
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 864
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 863
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 866
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 869
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 867
            .ability = ABILITY_UNAWARE,
#line 868
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 870
                MOVE_ROLLOUT,
            },
            },
            {
#line 872
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 875
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 873
            .ability = ABILITY_SAND_RUSH,
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
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 878
            .heldItem = ITEM_ORAN_BERRY,
#line 881
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 879
            .ability = ABILITY_HUGE_POWER,
#line 880
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 882
                MOVE_ROLLOUT,
            },
            },
        },
    },
#line 884
    [TRAINER_PBL_PHILLIPA_LEVIATHAN_3_CHALLENGE] =
    {
#line 885
        .trainerName = _("Phillipa"),
#line 886
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 887
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 888
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 890
        .doubleBattle = FALSE,
#line 889
        .aiFlags = AI_FLAG_CHALLENGE,
#line 892
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 891
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 894
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 897
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 895
            .ability = ABILITY_UNAWARE,
#line 896
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 898
                MOVE_ROLLOUT,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 901
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 904
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 902
            .ability = ABILITY_SAND_RUSH,
#line 903
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 905
                MOVE_ROLLOUT,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 908
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 908
            .heldItem = ITEM_ORAN_BERRY,
#line 911
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 909
            .ability = ABILITY_AFTERMATH,
#line 910
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 912
                MOVE_ROLLOUT,
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
        },
    },
#line 921
    [TRAINER_PBL_HERMAN] =
    {
#line 922
        .trainerName = _("Herman"),
#line 923
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 924
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 925
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 927
        .doubleBattle = FALSE,
#line 926
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 928
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 930
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 933
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 931
            .ability = ABILITY_LIMBER,
#line 932
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 934
                MOVE_QUICK_ATTACK,
                MOVE_BABY_DOLL_EYES,
                MOVE_COPYCAT,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 939
            .species = SPECIES_DUCKLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 942
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 940
            .ability = ABILITY_BIG_PECKS,
#line 941
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 943
                MOVE_GUST,
                MOVE_AQUA_JET,
                MOVE_FEATHER_DANCE,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 948
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 951
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 949
            .ability = ABILITY_CHLOROPHYLL,
#line 950
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 952
                MOVE_ABSORB,
                MOVE_LEECH_SEED,
                MOVE_ROLLOUT,
                MOVE_GRASS_WHISTLE,
            },
            },
        },
    },
#line 957
    [TRAINER_PBL_RALPH] =
    {
#line 958
        .trainerName = _("Ralph"),
#line 959
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 960
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 961
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 963
        .doubleBattle = FALSE,
#line 962
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 964
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 966
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 969
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 967
            .ability = ABILITY_INTIMIDATE,
#line 968
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 970
                MOVE_CHARGE,
                MOVE_THUNDER_SHOCK,
                MOVE_QUICK_ATTACK,
                MOVE_BITE,
            },
            },
            {
#line 975
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 978
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 976
            .ability = ABILITY_FLASH_FIRE,
#line 977
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 979
                MOVE_EMBER,
                MOVE_SMOG,
                MOVE_TORMENT,
                MOVE_BITE,
            },
            },
            {
#line 984
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 987
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 985
            .ability = ABILITY_WATER_ABSORB,
#line 986
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 988
                MOVE_WATER_GUN,
                MOVE_MUD_SHOT,
                MOVE_YAWN,
                MOVE_SLAM,
            },
            },
        },
    },
#line 993
    [TRAINER_PBL_CALLIE] =
    {
#line 994
        .trainerName = _("Callie"),
#line 995
        .trainerClass = TRAINER_CLASS_LASS,
#line 996
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 997
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 999
        .doubleBattle = FALSE,
#line 998
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1000
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1002
            .species = SPECIES_LILLIPUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1005
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1003
            .ability = ABILITY_PICKUP,
#line 1004
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1006
                MOVE_TACKLE,
                MOVE_HELPING_HAND,
                MOVE_BITE,
                MOVE_YAWN,
            },
            },
            {
#line 1011
            .species = SPECIES_FIDOUGH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1012
            .ability = ABILITY_OWN_TEMPO,
#line 1013
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1015
                MOVE_TAIL_WHIP,
                MOVE_BITE,
                MOVE_YAWN,
                MOVE_COVET,
            },
            },
            {
#line 1020
            .species = SPECIES_MASCHIFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1023
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1021
            .ability = ABILITY_INTIMIDATE,
#line 1022
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1024
                MOVE_LICK,
                MOVE_SNARL,
                MOVE_SCARY_FACE,
                MOVE_BITE,
            },
            },
        },
    },
#line 1029
    [TRAINER_PBL_SANTIAGO] =
    {
#line 1030
        .trainerName = _("Santiago"),
#line 1031
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1032
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 1033
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1035
        .doubleBattle = FALSE,
#line 1034
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1036
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1038
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1041
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1039
            .ability = ABILITY_SWARM,
#line 1040
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1042
                MOVE_STRING_SHOT,
                MOVE_NIGHT_SHADE,
                MOVE_INFESTATION,
                MOVE_DISABLE,
            },
            },
            {
#line 1047
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1050
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1048
            .ability = ABILITY_SWARM,
#line 1049
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1051
                MOVE_SWIFT,
                MOVE_COMET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_ROOST,
            },
            },
            {
#line 1056
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1059
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1057
            .ability = ABILITY_EFFECT_SPORE,
#line 1058
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1060
                MOVE_POISON_POWDER,
                MOVE_ABSORB,
                MOVE_BUG_BITE,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 1065
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1068
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1066
            .ability = ABILITY_SHED_SKIN,
#line 1067
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1069
                MOVE_PROTECT,
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 1073
    [TRAINER_PBL_CHLOE_AND_KAYA] =
    {
#line 1074
        .trainerName = _("Chloe&Kaya"),
#line 1075
        .trainerClass = TRAINER_CLASS_TWINS,
#line 1076
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 1077
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1079
        .doubleBattle = TRUE,
#line 1078
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1081
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1084
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1082
            .ability = ABILITY_PRANKSTER,
#line 1083
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1085
                MOVE_FAIRY_WIND,
                MOVE_RAZOR_LEAF,
                MOVE_STUN_SPORE,
                MOVE_POISON_POWDER,
            },
            },
            {
#line 1090
            .species = SPECIES_PETILIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1093
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1091
            .ability = ABILITY_OWN_TEMPO,
#line 1092
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1094
                MOVE_ABSORB,
                MOVE_HELPING_HAND,
                MOVE_STUN_SPORE,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 1099
    [TRAINER_PBL_FRED] =
    {
#line 1100
        .trainerName = _("Fred"),
#line 1101
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 1102
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 1103
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1105
        .doubleBattle = FALSE,
#line 1104
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1106
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1108
            .species = SPECIES_GOSSIFLEUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1111
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1109
            .ability = ABILITY_COTTON_DOWN,
#line 1110
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1112
                MOVE_GRASS_WHISTLE,
                MOVE_RAPID_SPIN,
                MOVE_RAZOR_LEAF,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 1117
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1120
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1118
            .ability = ABILITY_INTIMIDATE,
#line 1119
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1121
                MOVE_GLARE,
                MOVE_BITE,
                MOVE_ACID,
                MOVE_DISABLE,
            },
            },
            {
#line 1126
            .species = SPECIES_BONSLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1129
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1127
            .ability = ABILITY_STURDY,
#line 1128
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1130
                MOVE_TEARFUL_LOOK,
                MOVE_ROCK_THROW,
                MOVE_LOW_KICK,
                MOVE_BLOCK,
            },
            },
            {
#line 1135
            .species = SPECIES_PANCHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1136
            .ability = ABILITY_IRON_FIST,
#line 1137
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1139
                MOVE_SEISMIC_TOSS,
                MOVE_COMET_PUNCH,
                MOVE_KARATE_CHOP,
                MOVE_TAUNT,
            },
            },
        },
    },
#line 1144
    [TRAINER_PBL_LUCIA] =
    {
#line 1145
        .trainerName = _("Lucia"),
#line 1146
        .trainerClass = TRAINER_CLASS_FAIRY_TALE_GIRL,
#line 1147
        .trainerPic = TRAINER_PIC_FAIRY_TALE_GIRL,
        .encounterMusic_gender =
#line 1148
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1150
        .doubleBattle = FALSE,
#line 1149
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1151
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1153
            .species = SPECIES_MORELULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1156
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1154
            .ability = ABILITY_EFFECT_SPORE,
#line 1155
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1157
                MOVE_ABSORB,
                MOVE_ASTONISH,
                MOVE_CONFUSE_RAY,
                MOVE_INGRAIN,
            },
            },
            {
#line 1162
            .species = SPECIES_SPRITZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1165
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1163
            .ability = ABILITY_HEALER,
#line 1164
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1166
                MOVE_FAIRY_WIND,
                MOVE_SWEET_KISS,
                MOVE_REFRESH,
                MOVE_DISARMING_VOICE,
            },
            },
            {
#line 1171
            .species = SPECIES_SWIRLIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1174
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1172
            .ability = ABILITY_SWEET_VEIL,
#line 1173
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1175
                MOVE_FAIRY_WIND,
                MOVE_YAWN,
                MOVE_COTTON_SPORE,
                MOVE_ROUND,
            },
            },
            {
#line 1180
            .species = SPECIES_MIME_JR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1183
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1181
            .ability = ABILITY_SOUNDPROOF,
#line 1182
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1184
                MOVE_TEETER_DANCE,
                MOVE_DOUBLE_SLAP,
                MOVE_CONFUSION,
                MOVE_FAKE_OUT,
            },
            },
        },
    },
#line 1189
    [TRAINER_PBL_ELLA_AND_BELLA_LEVIATHAN_4] =
    {
#line 1190
        .trainerName = _("Ella&Bella"),
#line 1191
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 1192
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 1193
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1195
        .doubleBattle = TRUE,
#line 1194
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1197
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 1196
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1199
            .species = SPECIES_NICKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1202
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1200
            .ability = ABILITY_UNBURDEN,
#line 1201
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1203
                MOVE_SNARL,
                MOVE_GROWL,
            },
            },
            {
#line 1206
            .species = SPECIES_LITLEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1209
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1207
            .ability = ABILITY_UNNERVE,
#line 1208
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1210
                MOVE_INCINERATE,
                MOVE_GROWL,
            },
            },
            {
#line 1213
            .species = SPECIES_STEENEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1213
            .heldItem = ITEM_ORAN_BERRY,
#line 1216
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1214
            .ability = ABILITY_OBLIVIOUS,
#line 1215
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1217
                MOVE_RAZOR_LEAF,
                MOVE_GRASS_WHISTLE,
            },
            },
            {
#line 1220
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1220
            .heldItem = ITEM_ORAN_BERRY,
#line 1223
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1221
            .ability = ABILITY_FRIEND_GUARD,
#line 1222
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1224
                MOVE_SWIFT,
                MOVE_DISARMING_VOICE,
            },
            },
        },
    },
#line 1227
    [TRAINER_PBL_ELLA_AND_BELLA_LEVIATHAN_4_CHALLENGE] =
    {
#line 1228
        .trainerName = _("Ella&Bella"),
#line 1229
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 1230
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 1231
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1233
        .doubleBattle = TRUE,
#line 1232
        .aiFlags = AI_FLAG_CHALLENGE,
#line 1235
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 1234
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1237
            .species = SPECIES_NICKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1240
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1238
            .ability = ABILITY_STAKEOUT,
#line 1239
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1241
                MOVE_SNARL,
                MOVE_QUICK_ATTACK,
                MOVE_GROWL,
            },
            },
            {
#line 1245
            .species = SPECIES_LITLEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1248
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1246
            .ability = ABILITY_UNNERVE,
#line 1247
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1249
                MOVE_INCINERATE,
                MOVE_ECHOED_VOICE,
                MOVE_GROWL,
            },
            },
            {
#line 1253
            .species = SPECIES_STEENEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1253
            .heldItem = ITEM_ORAN_BERRY,
#line 1256
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1254
            .ability = ABILITY_OBLIVIOUS,
#line 1255
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1257
                MOVE_RAZOR_LEAF,
                MOVE_RAPID_SPIN,
                MOVE_GRASS_WHISTLE,
            },
            },
            {
#line 1261
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1261
            .heldItem = ITEM_ORAN_BERRY,
#line 1264
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1262
            .ability = ABILITY_FRIEND_GUARD,
#line 1263
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1265
                MOVE_SWIFT,
                MOVE_DISARMING_VOICE,
                MOVE_SING,
            },
            },
        },
    },
#line 1269
    [TRAINER_PBL_ANNE_AND_JUNE] =
    {
#line 1270
        .trainerName = _("Anne&June"),
#line 1271
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 1272
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 1273
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1275
        .doubleBattle = TRUE,
#line 1274
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1277
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1280
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1278
            .ability = ABILITY_AFTERMATH,
#line 1279
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1281
                MOVE_SMOG,
                MOVE_SCREECH,
                MOVE_POISON_GAS,
                MOVE_BITE,
            },
            },
            {
#line 1286
            .species = SPECIES_GLAMEOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1289
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1287
            .ability = ABILITY_LIMBER,
#line 1288
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1290
                MOVE_CHARM,
                MOVE_QUICK_ATTACK,
                MOVE_FEINT_ATTACK,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 1295
            .species = SPECIES_GOTHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1296
            .ability = ABILITY_TELEPATHY,
#line 1297
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1299
                MOVE_CONFUSION,
                MOVE_DOUBLE_SLAP,
                MOVE_FAKE_OUT,
                MOVE_TICKLE,
            },
            },
            {
#line 1304
            .species = SPECIES_SOLOSIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1307
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1305
            .ability = ABILITY_MAGIC_GUARD,
#line 1306
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1308
                MOVE_CONFUSION,
                MOVE_NIGHT_SHADE,
                MOVE_ROLLOUT,
                MOVE_RECOVER,
            },
            },
        },
    },
#line 1313
    [TRAINER_PBL_NOVA_AND_CORA] =
    {
#line 1314
        .trainerName = _("Nova&Cora"),
#line 1315
        .trainerClass = TRAINER_CLASS_TWINS,
#line 1316
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 1317
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1319
        .doubleBattle = TRUE,
#line 1318
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1321
            .species = SPECIES_HATENNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1324
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1322
            .ability = ABILITY_HEALER,
#line 1323
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1325
                MOVE_PLAY_NICE,
                MOVE_LIFE_DEW,
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
            },
            },
            {
#line 1330
            .species = SPECIES_IMPIDIMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1333
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1331
            .ability = ABILITY_PICKPOCKET,
#line 1332
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1334
                MOVE_CONFIDE,
                MOVE_FLATTER,
                MOVE_FAKE_OUT,
                MOVE_ASSURANCE,
            },
            },
        },
    },
#line 1339
    [TRAINER_PBL_CLINTON] =
    {
#line 1340
        .trainerName = _("Clinton"),
#line 1341
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1342
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1343
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1345
        .doubleBattle = FALSE,
#line 1344
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1346
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1348
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1351
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1349
            .ability = ABILITY_TRACE,
#line 1350
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1352
                MOVE_CONFUSION,
                MOVE_SHADOW_SNEAK,
                MOVE_TELEPORT,
                MOVE_MAGICAL_LEAF,
            },
            },
            {
#line 1357
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1360
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1358
            .ability = ABILITY_LEAF_GUARD,
#line 1359
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1361
                MOVE_POISON_POWDER,
                MOVE_SLEEP_POWDER,
                MOVE_MEGA_DRAIN,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 1366
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1369
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1367
            .ability = ABILITY_FLAME_BODY,
#line 1368
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1370
                MOVE_YAWN,
                MOVE_ROCK_THROW,
                MOVE_CLEAR_SMOG,
                MOVE_INCINERATE,
            },
            },
            {
#line 1375
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1378
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1376
            .ability = ABILITY_THICK_FAT,
#line 1377
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1379
                MOVE_ICE_SHARD,
                MOVE_FAKE_OUT,
                MOVE_HEADBUTT,
                MOVE_WATER_GUN,
            },
            },
        },
    },
#line 1384
    [TRAINER_PBL_REBECCA] =
    {
#line 1385
        .trainerName = _("Rebecca"),
#line 1386
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 1387
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 1388
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1390
        .doubleBattle = FALSE,
#line 1389
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1391
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1393
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1396
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1394
            .ability = ABILITY_FLASH_FIRE,
#line 1395
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1397
                MOVE_BABY_DOLL_EYES,
                MOVE_DISABLE,
                MOVE_QUICK_ATTACK,
                MOVE_INCINERATE,
            },
            },
            {
#line 1402
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1405
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1403
            .ability = ABILITY_GRASS_PELT,
#line 1404
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1406
                MOVE_VINE_WHIP,
                MOVE_ROLLOUT,
                MOVE_LEECH_SEED,
                MOVE_RAZOR_LEAF,
            },
            },
            {
#line 1411
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1414
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1412
            .ability = ABILITY_HYPER_CUTTER,
#line 1413
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1415
                MOVE_ROCK_SMASH,
                MOVE_BUBBLE,
                MOVE_LEER,
                MOVE_DIZZY_PUNCH,
            },
            },
            {
#line 1420
            .species = SPECIES_PAWMI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1423
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1421
            .ability = ABILITY_STATIC,
#line 1422
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1424
                MOVE_THUNDER_SHOCK,
                MOVE_BITE,
                MOVE_FAKE_OUT,
                MOVE_SWEET_KISS,
            },
            },
        },
    },
#line 1429
    [TRAINER_PBL_RYAN] =
    {
#line 1430
        .trainerName = _("Ryan"),
#line 1431
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 1432
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 1433
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1435
        .doubleBattle = FALSE,
#line 1434
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1436
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1438
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1441
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1439
            .ability = ABILITY_FLASH_FIRE,
#line 1440
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1442
                MOVE_DEFENSE_CURL,
                MOVE_BUG_BITE,
                MOVE_ROLLOUT,
                MOVE_BITE,
            },
            },
            {
#line 1447
            .species = SPECIES_DEERLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1450
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1448
            .ability = ABILITY_SERENE_GRACE,
#line 1449
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1451
                MOVE_CHARM,
                MOVE_LEECH_SEED,
                MOVE_FEINT_ATTACK,
                MOVE_DOUBLE_KICK,
            },
            },
            {
#line 1456
            .species = SPECIES_STUFFUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1459
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1457
            .ability = ABILITY_FLUFFY,
#line 1458
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1460
                MOVE_BRUTAL_SWING,
                MOVE_BIDE,
                MOVE_FORCE_PALM,
                MOVE_STOMP,
            },
            },
            {
#line 1465
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1468
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1466
            .ability = ABILITY_STATIC,
#line 1467
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1469
                MOVE_QUICK_ATTACK,
                MOVE_SPARK,
                MOVE_BITE,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 1474
    [TRAINER_PBL_CAITLYN] =
    {
#line 1475
        .trainerName = _("Caitlyn"),
#line 1476
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1477
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 1478
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1480
        .doubleBattle = FALSE,
#line 1479
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1481
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1483
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1486
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1484
            .ability = ABILITY_INTIMIDATE,
#line 1485
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1487
                MOVE_BITE,
                MOVE_RAGE,
                MOVE_FAKE_TEARS,
                MOVE_COVET,
            },
            },
            {
#line 1492
            .species = SPECIES_PUMPKABOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1495
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1493
            .ability = ABILITY_PICKUP,
#line 1494
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1496
                MOVE_RAZOR_LEAF,
                MOVE_LEECH_SEED,
                MOVE_DISABLE,
                MOVE_SHADOW_SNEAK,
            },
            },
            {
#line 1501
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1502
            .ability = ABILITY_AFTERMATH,
#line 1503
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1505
                MOVE_DOUBLE_SLAP,
                MOVE_ROLLOUT,
                MOVE_SLUDGE,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 1510
            .species = SPECIES_ESPURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1513
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1511
            .ability = ABILITY_OWN_TEMPO,
#line 1512
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1514
                MOVE_TICKLE,
                MOVE_CONFUSION,
                MOVE_DISARMING_VOICE,
                MOVE_YAWN,
            },
            },
        },
    },
#line 1519
    [TRAINER_PBL_KENNETH] =
    {
#line 1520
        .trainerName = _("Kenneth"),
#line 1521
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 1522
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 1523
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1525
        .doubleBattle = FALSE,
#line 1524
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1526
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1528
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1531
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1529
            .ability = ABILITY_STURDY,
#line 1530
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1532
                MOVE_FLAIL,
                MOVE_ROLLOUT,
                MOVE_SLAM,
                MOVE_BULLDOZE,
            },
            },
            {
#line 1537
            .species = SPECIES_PHANTUMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1540
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1538
            .ability = ABILITY_NATURAL_CURE,
#line 1539
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1541
                MOVE_BRANCH_POKE,
                MOVE_LEECH_SEED,
                MOVE_DISABLE,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 1546
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1549
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1547
            .ability = ABILITY_CUD_CHEW,
#line 1548
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1550
                MOVE_MUD_SLAP,
                MOVE_ACID_SPRAY,
                MOVE_STUFF_CHEEKS,
                MOVE_SLUDGE,
            },
            },
            {
#line 1555
            .species = SPECIES_MUNNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1558
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1556
            .ability = ABILITY_SYNCHRONIZE,
#line 1557
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1559
                MOVE_LUCKY_CHANT,
                MOVE_HYPNOSIS,
                MOVE_IMPRISON,
                MOVE_PSYBEAM,
            },
            },
        },
    },
#line 1564
    [TRAINER_PBL_KEVIN] =
    {
#line 1565
        .trainerName = _("Kevin"),
#line 1566
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1567
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 1568
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1570
        .doubleBattle = FALSE,
#line 1569
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1571
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1573
            .species = SPECIES_GRUBBIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1576
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1574
            .ability = ABILITY_SWARM,
#line 1575
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1577
                MOVE_STRING_SHOT,
                MOVE_VISE_GRIP,
                MOVE_BUG_BITE,
                MOVE_BITE,
            },
            },
            {
#line 1582
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1585
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1583
            .ability = ABILITY_SWARM,
#line 1584
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1586
                MOVE_RAZOR_LEAF,
                MOVE_BUG_BITE,
                MOVE_SYNTHESIS,
                MOVE_FLAIL,
            },
            },
            {
#line 1591
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1594
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1592
            .ability = ABILITY_COMPOUND_EYES,
#line 1593
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1595
                MOVE_FURY_SWIPES,
                MOVE_BUG_BITE,
                MOVE_MUD_SLAP,
                MOVE_ABSORB,
            },
            },
            {
#line 1600
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1601
            .ability = ABILITY_POISON_POINT,
#line 1602
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1604
                MOVE_SCREECH,
                MOVE_BUG_BITE,
                MOVE_PROTECT,
                MOVE_TWINEEDLE,
            },
            },
        },
    },
#line 1609
    [TRAINER_PBL_MARIA_LEVIATHAN_5] =
    {
#line 1610
        .trainerName = _("Maria"),
#line 1611
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 1612
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 1613
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1615
        .doubleBattle = FALSE,
#line 1614
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1617
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 1616
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1619
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1619
            .heldItem = ITEM_EVIOLITE,
#line 1622
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1620
            .ability = ABILITY_EARLY_BIRD,
#line 1621
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1623
                MOVE_PSYBEAM,
                MOVE_STOMP,
                MOVE_DOUBLE_KICK,
            },
            },
        },
    },
#line 1627
    [TRAINER_PBL_MARIA_LEVIATHAN_5_CHALLENGE] =
    {
#line 1628
        .trainerName = _("Maria"),
#line 1629
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 1630
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 1631
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1633
        .doubleBattle = FALSE,
#line 1632
        .aiFlags = AI_FLAG_CHALLENGE,
#line 1635
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 1634
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1637
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1637
            .heldItem = ITEM_EVIOLITE,
#line 1640
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1638
            .ability = ABILITY_EARLY_BIRD,
#line 1639
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1641
                MOVE_PSYBEAM,
                MOVE_STOMP,
                MOVE_DOUBLE_KICK,
                MOVE_REST,
            },
            },
        },
    },
#line 1646
    [TRAINER_PBL_GILBERT] =
    {
#line 1647
        .trainerName = _("Gilbert"),
#line 1648
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 1649
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 1650
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1652
        .doubleBattle = FALSE,
#line 1651
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1653
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1655
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1656
            .ability = ABILITY_SWIFT_SWIM,
#line 1657
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1659
                MOVE_SPLASH,
                MOVE_TACKLE,
                MOVE_FLAIL,
            },
            },
            {
#line 1663
            .species = SPECIES_FINNEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1666
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1664
            .ability = ABILITY_STORM_DRAIN,
#line 1665
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1667
                MOVE_SWEET_KISS,
                MOVE_TICKLE,
                MOVE_WATER_PULSE,
                MOVE_TAILWIND,
            },
            },
            {
#line 1672
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1675
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1673
            .ability = ABILITY_SHEER_FORCE,
#line 1674
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1676
                MOVE_MUD_SHOT,
                MOVE_STOMP,
                MOVE_BUBBLE_BEAM,
                MOVE_SLAM,
            },
            },
            {
#line 1681
            .species = SPECIES_CHEWTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1684
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1682
            .ability = ABILITY_STRONG_JAW,
#line 1683
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1685
                MOVE_WATER_GUN,
                MOVE_BITE,
                MOVE_HEADBUTT,
                MOVE_GASTRO_ACID,
            },
            },
        },
    },
#line 1690
    [TRAINER_PBL_MELANIE] =
    {
#line 1691
        .trainerName = _("Melanie"),
#line 1692
        .trainerClass = TRAINER_CLASS_LASS,
#line 1693
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 1694
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1696
        .doubleBattle = FALSE,
#line 1695
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1697
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1699
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1702
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1700
            .ability = ABILITY_SAP_SIPPER,
#line 1701
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1703
                MOVE_THUNDER_WAVE,
                MOVE_SHOCK_WAVE,
                MOVE_STOMP,
                MOVE_CHARGE,
            },
            },
            {
#line 1708
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1711
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1709
            .ability = ABILITY_FLAME_BODY,
#line 1710
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1712
                MOVE_QUICK_ATTACK,
                MOVE_DOUBLE_KICK,
                MOVE_FIRE_SPIN,
                MOVE_FLAME_WHEEL,
            },
            },
            {
#line 1717
            .species = SPECIES_MUDBRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1720
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1718
            .ability = ABILITY_STAMINA,
#line 1719
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1721
                MOVE_SMACK_DOWN,
                MOVE_BULLDOZE,
                MOVE_DOUBLE_KICK,
                MOVE_STOMP,
            },
            },
        },
    },
#line 1726
    [TRAINER_PBL_CONSTANCE] =
    {
#line 1727
        .trainerName = _("Constance"),
#line 1728
        .trainerClass = TRAINER_CLASS_LADY,
#line 1729
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1730
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1732
        .doubleBattle = FALSE,
#line 1731
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1733
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1735
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1738
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1736
            .ability = ABILITY_TECHNICIAN,
#line 1737
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1739
                MOVE_HELPING_HAND,
                MOVE_DOUBLE_SLAP,
                MOVE_TICKLE,
                MOVE_SWIFT,
            },
            },
            {
#line 1744
            .species = SPECIES_ROCKRUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1747
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1745
            .ability = ABILITY_VITAL_SPIRIT,
#line 1746
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1748
                MOVE_ROCK_THROW,
                MOVE_BITE,
                MOVE_ROAR,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 1753
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1756
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1754
            .ability = ABILITY_GUTS,
#line 1755
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1757
                MOVE_FAKE_OUT,
                MOVE_FORCE_PALM,
                MOVE_BULLET_PUNCH,
                MOVE_SMELLING_SALTS,
            },
            },
            {
#line 1762
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1765
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1763
            .ability = ABILITY_THICK_FAT,
#line 1764
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1766
                MOVE_CONFUSE_RAY,
                MOVE_PAYBACK,
                MOVE_PSYBEAM,
                MOVE_TRICK,
            },
            },
        },
    },
#line 1771
    [TRAINER_PBL_FRANK] =
    {
#line 1772
        .trainerName = _("Frank"),
#line 1773
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 1774
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 1775
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1777
        .doubleBattle = FALSE,
#line 1776
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1778
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1780
            .species = SPECIES_FLABEBE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1783
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1781
            .ability = ABILITY_FLOWER_VEIL,
#line 1782
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1784
                MOVE_TEARFUL_LOOK,
                MOVE_LUCKY_CHANT,
                MOVE_SYNTHESIS,
                MOVE_RAZOR_LEAF,
            },
            },
            {
#line 1789
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1792
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1790
            .ability = ABILITY_INTIMIDATE,
#line 1791
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1793
                MOVE_BITE,
                MOVE_HELPING_HAND,
                MOVE_DOUBLE_KICK,
                MOVE_FLAME_WHEEL,
            },
            },
            {
#line 1798
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1801
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1799
            .ability = ABILITY_TRUANT,
#line 1800
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1802
                MOVE_SNORE,
                MOVE_SLASH,
                MOVE_FEINT_ATTACK,
                MOVE_SLACK_OFF,
            },
            },
        },
    },
#line 1807
    [TRAINER_PBL_DUDLEY] =
    {
#line 1808
        .trainerName = _("Dudley"),
#line 1809
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 1810
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 1811
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1813
        .doubleBattle = FALSE,
#line 1812
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1814
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1816
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1819
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1817
            .ability = ABILITY_KEEN_EYE,
#line 1818
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1820
                MOVE_TWISTER,
                MOVE_AQUA_RING,
                MOVE_WING_ATTACK,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1825
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1828
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1826
            .ability = ABILITY_SCRAPPY,
#line 1827
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1829
                MOVE_FOCUS_ENERGY,
                MOVE_WING_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_RAGE,
            },
            },
            {
#line 1834
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1837
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1835
            .ability = ABILITY_WIND_POWER,
#line 1836
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1838
                MOVE_THUNDER_SHOCK,
                MOVE_UPROAR,
                MOVE_FEATHER_DANCE,
                MOVE_PLUCK,
            },
            },
            {
#line 1843
            .species = SPECIES_ROOKIDEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1846
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1844
            .ability = ABILITY_BIG_PECKS,
#line 1845
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1847
                MOVE_POWER_TRIP,
                MOVE_FURY_ATTACK,
                MOVE_ROCK_SMASH,
                MOVE_PLUCK,
            },
            },
        },
    },
#line 1852
    [TRAINER_PBL_DAISY] =
    {
#line 1853
        .trainerName = _("Daisy"),
#line 1854
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 1855
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 1856
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1858
        .doubleBattle = FALSE,
#line 1857
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1859
        .randomLead = TRUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1861
            .species = SPECIES_SMEARGLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1864
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1862
            .ability = ABILITY_TECHNICIAN,
#line 1863
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1865
                MOVE_SKETCH,
            },
            },
            {
#line 1867
            .species = SPECIES_APPLIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1870
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1868
            .ability = ABILITY_RIPEN,
#line 1869
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1871
                MOVE_ASTONISH,
                MOVE_WITHDRAW,
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
            },
            },
            {
#line 1876
            .species = SPECIES_MILCERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1877
            .ability = ABILITY_SWEET_VEIL,
#line 1878
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1880
                MOVE_BABY_DOLL_EYES,
                MOVE_CHARM,
                MOVE_SWEET_KISS,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 1885
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1888
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1886
            .ability = ABILITY_SYNCHRONIZE,
#line 1887
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1889
                MOVE_TELEPORT,
            },
            },
            {
#line 1891
            .species = SPECIES_CLEFFA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1894
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1892
            .ability = ABILITY_CUTE_CHARM,
#line 1893
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1895
                MOVE_DISARMING_VOICE,
                MOVE_CHARM,
                MOVE_ENCORE,
                MOVE_WISH,
            },
            },
            {
#line 1900
            .species = SPECIES_SNOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1903
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1901
            .ability = ABILITY_ICE_SCALES,
#line 1902
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1904
                MOVE_STRUGGLE_BUG,
                MOVE_POWDER_SNOW,
                MOVE_MIRROR_COAT,
                MOVE_FAIRY_WIND,
            },
            },
        },
    },
#line 1909
    [TRAINER_PBL_VIC_AND_DELL] =
    {
#line 1910
        .trainerName = _("Vic&Dell"),
#line 1911
        .trainerClass = TRAINER_CLASS_TWINS,
#line 1912
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 1913
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1915
        .doubleBattle = TRUE,
#line 1914
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1917
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1920
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1918
            .ability = ABILITY_PLUS,
#line 1919
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1921
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_CHARM,
                MOVE_ELECTRO_BALL,
            },
            },
            {
#line 1926
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1929
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1927
            .ability = ABILITY_MINUS,
#line 1928
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1930
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_CHARM,
                MOVE_ELECTRO_BALL,
            },
            },
        },
    },
#line 1935
    [TRAINER_PBL_MINA] =
    {
#line 1936
        .trainerName = _("Nina"),
#line 1937
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 1938
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 1939
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1941
        .doubleBattle = FALSE,
#line 1940
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1942
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1944
            .species = SPECIES_WIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1947
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1945
            .ability = ABILITY_GOOEY,
#line 1946
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1948
                MOVE_AQUA_JET,
                MOVE_WATER_PULSE,
                MOVE_SLAM,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 1953
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1956
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1954
            .ability = ABILITY_HYDRATION,
#line 1955
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1957
                MOVE_MAGNITUDE,
                MOVE_WATER_PULSE,
                MOVE_MUD_BOMB,
                MOVE_REST,
            },
            },
            {
#line 1962
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1965
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1963
            .ability = ABILITY_SWIFT_SWIM,
#line 1964
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1966
                MOVE_WATER_PULSE,
                MOVE_HORN_ATTACK,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
            {
#line 1971
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1971
            .heldItem = ITEM_ORAN_BERRY,
#line 1974
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1972
            .ability = ABILITY_REGENERATOR,
#line 1973
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1975
                MOVE_BUBBLE_BEAM,
                MOVE_ANCIENT_POWER,
                MOVE_SPIKE_CANNON,
                MOVE_REFRESH,
            },
            },
        },
    },
#line 1980
    [TRAINER_PBL_ZACK_AND_COBY_LEVIATHAN_6] =
    {
#line 1981
        .trainerName = _("Zack&Coby"),
#line 1982
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 1983
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 1984
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1986
        .doubleBattle = TRUE,
#line 1985
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1988
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 1987
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1990
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1990
            .heldItem = ITEM_ORAN_BERRY,
#line 1993
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1991
            .ability = ABILITY_SWIFT_SWIM,
#line 1992
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1994
                MOVE_CHILLING_WATER,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 1997
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1997
            .heldItem = ITEM_ORAN_BERRY,
#line 2000
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 30, 30),
#line 1998
            .ability = ABILITY_STORM_DRAIN,
#line 1999
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2001
                MOVE_CHILLING_WATER,
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 2005
    [TRAINER_PBL_ZACK_AND_COBY_LEVIATHAN_6_CHALLENGE] =
    {
#line 2006
        .trainerName = _("Zack&Coby"),
#line 2007
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 2008
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 2009
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2011
        .doubleBattle = TRUE,
#line 2010
        .aiFlags = AI_FLAG_CHALLENGE,
#line 2013
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2012
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2015
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2015
            .heldItem = ITEM_ORAN_BERRY,
#line 2018
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2016
            .ability = ABILITY_SWIFT_SWIM,
#line 2017
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2019
                MOVE_CHILLING_WATER,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 2022
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2022
            .heldItem = ITEM_ORAN_BERRY,
#line 2025
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 30, 30),
#line 2023
            .ability = ABILITY_STORM_DRAIN,
#line 2024
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2026
                MOVE_SURF,
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 2030
    [TRAINER_PBL_MILLIE] =
    {
#line 2031
        .trainerName = _("Millie"),
#line 2032
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 2033
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 2034
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2036
        .doubleBattle = FALSE,
#line 2035
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2037
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2039
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2040
            .ability = ABILITY_INNER_FOCUS,
#line 2041
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2043
                MOVE_FAKE_OUT,
                MOVE_FORCE_PALM,
                MOVE_ME_FIRST,
                MOVE_VITAL_THROW,
            },
            },
            {
#line 2048
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2051
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2049
            .ability = ABILITY_VITAL_SPIRIT,
#line 2050
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2052
                MOVE_SWAGGER,
                MOVE_RETALIATE,
                MOVE_KARATE_CHOP,
                MOVE_ASSURANCE,
            },
            },
            {
#line 2057
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2060
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2058
            .ability = ABILITY_PURE_POWER,
#line 2059
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2061
                MOVE_FEINT,
                MOVE_SECRET_POWER,
                MOVE_FORCE_PALM,
                MOVE_PSYBEAM,
            },
            },
            {
#line 2066
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2069
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2067
            .ability = ABILITY_IRON_FIST,
#line 2068
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2070
                MOVE_ROCK_THROW,
                MOVE_WAKE_UP_SLAP,
                MOVE_CHIP_AWAY,
                MOVE_MACH_PUNCH,
            },
            },
        },
    },
#line 2075
    [TRAINER_PBL_JAMAL] =
    {
#line 2076
        .trainerName = _("Jamal"),
#line 2077
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2078
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2079
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2081
        .doubleBattle = FALSE,
#line 2080
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2082
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2084
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2087
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2085
            .ability = ABILITY_OBLIVIOUS,
#line 2086
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2088
                MOVE_BULLDOZE,
                MOVE_YAWN,
                MOVE_FLAME_WHEEL,
                MOVE_MAGNITUDE,
            },
            },
            {
#line 2093
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2096
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2094
            .ability = ABILITY_INNER_FOCUS,
#line 2095
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2097
                MOVE_POISON_FANG,
                MOVE_QUICK_GUARD,
                MOVE_WING_ATTACK,
                MOVE_SWIFT,
            },
            },
            {
#line 2102
            .species = SPECIES_FOMANTIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2105
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2103
            .ability = ABILITY_LEAF_GUARD,
#line 2104
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2106
                MOVE_WORRY_SEED,
                MOVE_RAZOR_LEAF,
                MOVE_SYNTHESIS,
                MOVE_SLASH,
            },
            },
            {
#line 2111
            .species = SPECIES_BUIZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2114
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2112
            .ability = ABILITY_WATER_VEIL,
#line 2113
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2115
                MOVE_BITE,
                MOVE_AQUA_JET,
                MOVE_SONIC_BOOM,
                MOVE_PURSUIT,
            },
            },
        },
    },
#line 2120
    [TRAINER_PBL_PAIGE] =
    {
#line 2121
        .trainerName = _("Paige"),
#line 2122
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 2123
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 2124
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2126
        .doubleBattle = FALSE,
#line 2125
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2127
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2129
            .species = SPECIES_COMBEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2132
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2130
            .ability = ABILITY_HONEY_GATHER,
#line 2131
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2133
                MOVE_GUST,
                MOVE_SWEET_SCENT,
                MOVE_STRUGGLE_BUG,
                MOVE_BUG_BITE,
            },
            },
            {
#line 2138
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2141
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2139
            .ability = ABILITY_CHLOROPHYLL,
#line 2140
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2142
                MOVE_CONFUSION,
                MOVE_MEGA_DRAIN,
                MOVE_POISON_POWDER,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 2147
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2150
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2148
            .ability = ABILITY_EFFECT_SPORE,
#line 2149
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2151
                MOVE_HEADBUTT,
                MOVE_MEGA_DRAIN,
                MOVE_FAKE_TEARS,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 2156
            .species = SPECIES_CUTIEFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2159
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2157
            .ability = ABILITY_SHIELD_DUST,
#line 2158
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2160
                MOVE_STRUGGLE_BUG,
                MOVE_STUN_SPORE,
                MOVE_SWITCHEROO,
                MOVE_DRAINING_KISS,
            },
            },
        },
    },
#line 2165
    [TRAINER_PBL_SETH] =
    {
#line 2166
        .trainerName = _("Seth"),
#line 2167
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2168
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 2169
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2171
        .doubleBattle = FALSE,
#line 2170
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2172
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2174
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2177
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2175
            .ability = ABILITY_PRANKSTER,
#line 2176
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2178
                MOVE_FLATTER,
                MOVE_SPARK,
                MOVE_SWIFT,
                MOVE_NUZZLE,
            },
            },
            {
#line 2183
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2186
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2184
            .ability = ABILITY_QUICK_FEET,
#line 2185
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2187
                MOVE_YAWN,
                MOVE_COVET,
                MOVE_METAL_CLAW,
                MOVE_CHIP_AWAY,
            },
            },
            {
#line 2192
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2195
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2193
            .ability = ABILITY_PICKUP,
#line 2194
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2196
                MOVE_FAKE_OUT,
                MOVE_ASTONISH,
                MOVE_QUICK_GUARD,
                MOVE_SLAM,
            },
            },
            {
#line 2201
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2204
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2202
            .ability = ABILITY_UNBURDEN,
#line 2203
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2205
                MOVE_SWITCHEROO,
                MOVE_POISON_FANG,
                MOVE_SUPER_FANG,
                MOVE_FLATTER,
            },
            },
        },
    },
#line 2211
    [TRAINER_PBL_CONNIE] =
    {
#line 2212
        .trainerName = _("Connie"),
#line 2213
        .trainerClass = TRAINER_CLASS_LASS,
#line 2214
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 2215
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2217
        .doubleBattle = FALSE,
#line 2216
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2218
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2220
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2223
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2221
            .ability = ABILITY_CHLOROPHYLL,
#line 2222
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2224
                MOVE_LEECH_SEED,
                MOVE_RAZOR_LEAF,
                MOVE_SECRET_POWER,
                MOVE_MEGA_DRAIN,
            },
            },
            {
#line 2229
            .species = SPECIES_DEWPIDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2232
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2230
            .ability = ABILITY_WATER_BUBBLE,
#line 2231
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2233
                MOVE_AQUA_RING,
                MOVE_SPIDER_WEB,
                MOVE_BUG_BITE,
                MOVE_BUBBLE_BEAM,
            },
            },
        },
    },
#line 2239
    [TRAINER_PBL_PETER] =
    {
#line 2240
        .trainerName = _("Peter"),
#line 2241
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 2242
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 2243
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2245
        .doubleBattle = FALSE,
#line 2244
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2246
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2248
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2251
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2249
            .ability = ABILITY_CHLOROPHYLL,
#line 2250
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2252
                MOVE_CLEAR_SMOG,
                MOVE_RAZOR_LEAF,
                MOVE_ACID_SPRAY,
                MOVE_MAGICAL_LEAF,
            },
            },
            {
#line 2257
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2260
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2258
            .ability = ABILITY_SWIFT_SWIM,
#line 2259
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2261
                MOVE_STRUGGLE_BUG,
                MOVE_BUBBLE_BEAM,
                MOVE_PSYBEAM,
                MOVE_SIGNAL_BEAM,
            },
            },
        },
    },
#line 2266
    [TRAINER_PBL_WHITAKER] =
    {
#line 2267
        .trainerName = _("Whitaker"),
#line 2268
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 2269
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 2270
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 2272
        .doubleBattle = FALSE,
#line 2271
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2273
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2275
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2278
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2276
            .ability = ABILITY_SNIPER,
#line 2277
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2279
                MOVE_FURY_ATTACK,
                MOVE_QUICK_ATTACK,
                MOVE_WING_ATTACK,
                MOVE_PURSUIT,
            },
            },
            {
#line 2284
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2287
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2285
            .ability = ABILITY_MAGIC_BOUNCE,
#line 2286
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2288
                MOVE_NIGHT_SHADE,
                MOVE_REFRESH,
                MOVE_AIR_CUTTER,
                MOVE_OMINOUS_WIND,
            },
            },
            {
#line 2293
            .species = SPECIES_FLITTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2296
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2294
            .ability = ABILITY_FRISK,
#line 2295
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2297
                MOVE_DISARMING_VOICE,
                MOVE_BABY_DOLL_EYES,
                MOVE_PSYBEAM,
                MOVE_PLUCK,
            },
            },
            {
#line 2302
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2305
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2303
            .ability = ABILITY_SUPER_LUCK,
#line 2304
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2306
                MOVE_AERIAL_ACE,
                MOVE_QUICK_ATTACK,
                MOVE_FEATHER_DANCE,
                MOVE_AIR_CUTTER,
            },
            },
        },
    },
#line 2311
    [TRAINER_PBL_BETTY_LEVIATHAN_7] =
    {
#line 2312
        .trainerName = _("Betty"),
#line 2313
        .trainerClass = TRAINER_CLASS_LADY,
#line 2314
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 2315
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2317
        .doubleBattle = TRUE,
#line 2316
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2319
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2318
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2321
            .species = SPECIES_DEDENNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2321
            .heldItem = ITEM_SITRUS_BERRY,
#line 2324
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2322
            .ability = ABILITY_PLUS,
#line 2323
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2325
                MOVE_SHOCK_WAVE,
                MOVE_DRAINING_KISS,
                MOVE_NUZZLE,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 2330
            .species = SPECIES_DRAMPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2330
            .heldItem = ITEM_SITRUS_BERRY,
#line 2333
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2331
            .ability = ABILITY_CLOUD_NINE,
#line 2332
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2334
                MOVE_DRAGON_BREATH,
                MOVE_GLARE,
                MOVE_NATURAL_GIFT,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 2339
    [TRAINER_PBL_BETTY_LEVIATHAN_7_CHALLENGE] =
    {
#line 2340
        .trainerName = _("Betty"),
#line 2341
        .trainerClass = TRAINER_CLASS_LADY,
#line 2342
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 2343
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2345
        .doubleBattle = TRUE,
#line 2344
        .aiFlags = AI_FLAG_CHALLENGE,
#line 2347
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2346
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2349
            .species = SPECIES_DEDENNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2349
            .heldItem = ITEM_SITRUS_BERRY,
#line 2352
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2350
            .ability = ABILITY_CHEEK_POUCH,
#line 2351
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2353
                MOVE_SHOCK_WAVE,
                MOVE_DRAINING_KISS,
                MOVE_NUZZLE,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 2358
            .species = SPECIES_DRAMPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2358
            .heldItem = ITEM_SITRUS_BERRY,
#line 2361
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2359
            .ability = ABILITY_BERSERK,
#line 2360
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2362
                MOVE_DRAGON_BREATH,
                MOVE_GLARE,
                MOVE_NATURAL_GIFT,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 2367
    [TRAINER_PBL_JIMMY] =
    {
#line 2368
        .trainerName = _("Jimmy"),
#line 2369
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 2370
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 2371
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2373
        .doubleBattle = FALSE,
#line 2372
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2374
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2376
            .species = SPECIES_NOIBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2379
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2377
            .ability = ABILITY_INFILTRATOR,
#line 2378
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2380
                MOVE_WING_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_BITE,
                MOVE_ROOST,
            },
            },
            {
#line 2385
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2388
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2386
            .ability = ABILITY_SWIFT_SWIM,
#line 2387
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2389
                MOVE_SPLASH,
                MOVE_TACKLE,
                MOVE_FLAIL,
            },
            },
            {
#line 2393
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2396
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2394
            .ability = ABILITY_CLEAR_BODY,
#line 2395
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2397
                MOVE_TACKLE,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 2400
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2403
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2401
            .ability = ABILITY_SHED_SKIN,
#line 2402
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2404
                MOVE_HAZE,
                MOVE_THUNDER_WAVE,
                MOVE_WATER_PULSE,
                MOVE_DRAGON_BREATH,
            },
            },
        },
    },
#line 2409
    [TRAINER_PBL_EMILIANO] =
    {
#line 2410
        .trainerName = _("Emiliano"),
#line 2411
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2412
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 2413
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2415
        .doubleBattle = FALSE,
#line 2414
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2416
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2418
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2421
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2419
            .ability = ABILITY_STURDY,
#line 2420
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2422
                MOVE_SMACK_DOWN,
                MOVE_SAND_TOMB,
                MOVE_SCREECH,
                MOVE_SLAM,
            },
            },
            {
#line 2427
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2430
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2428
            .ability = ABILITY_STURDY,
#line 2429
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2431
                MOVE_SMACK_DOWN,
                MOVE_MUD_SLAP,
                MOVE_MAGNITUDE,
                MOVE_HEADBUTT,
            },
            },
            {
#line 2436
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2439
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2437
            .ability = ABILITY_STURDY,
#line 2438
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2440
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_MAGNITUDE,
                MOVE_ROCK_BLAST,
            },
            },
            {
#line 2445
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2448
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2446
            .ability = ABILITY_NO_GUARD,
#line 2447
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2449
                MOVE_SEISMIC_TOSS,
                MOVE_LOW_SWEEP,
                MOVE_STRENGTH,
                MOVE_VITAL_THROW,
            },
            },
        },
    },
#line 2454
    [TRAINER_PBL_BECKHAM] =
    {
#line 2455
        .trainerName = _("Beckham"),
#line 2456
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2457
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2458
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2460
        .doubleBattle = FALSE,
#line 2459
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2461
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2463
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2466
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2464
            .ability = ABILITY_OWN_TEMPO,
#line 2465
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2467
                MOVE_YAWN,
                MOVE_DISABLE,
                MOVE_CONFUSION,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 2472
            .species = SPECIES_SALANDIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2475
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2473
            .ability = ABILITY_CORROSION,
#line 2474
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2476
                MOVE_MUD_SLAP,
                MOVE_FAKE_OUT,
                MOVE_POISON_FANG,
                MOVE_INCINERATE,
            },
            },
            {
#line 2481
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2482
            .ability = ABILITY_BATTLE_ARMOR,
#line 2483
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2485
                MOVE_BONE_CLUB,
                MOVE_FOCUS_ENERGY,
                MOVE_DOUBLE_KICK,
                MOVE_BONE_RUSH,
            },
            },
            {
#line 2490
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2493
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2491
            .ability = ABILITY_UNAWARE,
#line 2492
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2494
                MOVE_DISABLE,
                MOVE_STOMP,
                MOVE_WRAP,
                MOVE_MAGNITUDE,
            },
            },
        },
    },
#line 2499
    [TRAINER_PBL_KAREN] =
    {
#line 2500
        .trainerName = _("Karen"),
#line 2501
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 2502
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 2503
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2505
        .doubleBattle = FALSE,
#line 2504
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2506
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2508
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2511
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2509
            .ability = ABILITY_CONTRARY,
#line 2510
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2512
                MOVE_SMELLING_SALTS,
                MOVE_FEINT_ATTACK,
                MOVE_PSYBEAM,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 2517
    [TRAINER_PBL_JAYDEN] =
    {
#line 2518
        .trainerName = _("Jayden"),
#line 2519
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2520
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 2521
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2523
        .doubleBattle = FALSE,
#line 2522
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2524
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2526
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2529
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2527
            .ability = ABILITY_STURDY,
#line 2528
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2530
                MOVE_ROLLOUT,
                MOVE_MAGNITUDE,
                MOVE_SMACK_DOWN,
                MOVE_BULLDOZE,
            },
            },
            {
#line 2535
            .species = SPECIES_ROLYCOLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2536
            .ability = ABILITY_STEAM_ENGINE,
#line 2537
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2539
                MOVE_SMACK_DOWN,
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_INCINERATE,
            },
            },
            {
#line 2544
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2547
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2545
            .ability = ABILITY_PURIFYING_SALT,
#line 2546
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2548
                MOVE_MUD_SHOT,
                MOVE_HEADBUTT,
                MOVE_SMACK_DOWN,
                MOVE_RECOVER,
            },
            },
            {
#line 2553
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2556
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2554
            .ability = ABILITY_SOLID_ROCK,
#line 2555
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2557
                MOVE_STRUGGLE_BUG,
                MOVE_ACID,
                MOVE_ROCK_THROW,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 2562
    [TRAINER_PBL_NEIL] =
    {
#line 2563
        .trainerName = _("Neil"),
#line 2564
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 2565
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 2566
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2568
        .doubleBattle = FALSE,
#line 2567
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2569
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2571
            .species = SPECIES_RELLOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2574
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2572
            .ability = ABILITY_COMPOUND_EYES,
#line 2573
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2575
                MOVE_STRUGGLE_BUG,
                MOVE_MUD_SHOT,
                MOVE_BUG_BITE,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 2580
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2583
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2581
            .ability = ABILITY_LEVITATE,
#line 2582
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2584
                MOVE_ROCK_TOMB,
                MOVE_RAPID_SPIN,
                MOVE_ANCIENT_POWER,
                MOVE_PSYBEAM,
            },
            },
            {
#line 2589
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2592
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2590
            .ability = ABILITY_MUMMY,
#line 2591
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2593
                MOVE_IMPRISON,
                MOVE_HEX,
                MOVE_CURSE,
                MOVE_FAKE_TEARS,
            },
            },
            {
#line 2598
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2601
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2599
            .ability = ABILITY_PLUS,
#line 2600
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2602
                MOVE_CHARGE,
                MOVE_METAL_SOUND,
                MOVE_SCREECH,
                MOVE_MIRROR_SHOT,
            },
            },
        },
    },
#line 2607
    [TRAINER_PBL_TAMARA] =
    {
#line 2608
        .trainerName = _("Tamara"),
#line 2609
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 2610
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 2611
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2613
        .doubleBattle = FALSE,
#line 2612
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2614
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2616
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2619
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2617
            .ability = ABILITY_STORM_DRAIN,
#line 2618
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2620
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_HIDDEN_POWER,
                MOVE_SLUDGE,
            },
            },
            {
#line 2625
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2628
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2626
            .ability = ABILITY_SERENE_GRACE,
#line 2627
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2629
                MOVE_HEART_STAMP,
                MOVE_FLATTER,
                MOVE_ASSURANCE,
                MOVE_AIR_CUTTER,
            },
            },
            {
#line 2634
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2635
            .ability = ABILITY_INSOMNIA,
#line 2636
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2638
                MOVE_POISON_GAS,
                MOVE_HEADBUTT,
                MOVE_WAKE_UP_SLAP,
                MOVE_PSYBEAM,
            },
            },
            {
#line 2643
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2646
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2644
            .ability = ABILITY_UNNERVE,
#line 2645
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2647
                MOVE_POISON_STING,
                MOVE_FEINT_ATTACK,
                MOVE_STRUGGLE_BUG,
                MOVE_ELECTROWEB,
            },
            },
        },
    },
#line 2652
    [TRAINER_PBL_ALISTAIR_LEVIATHAN_8] =
    {
#line 2653
        .trainerName = _("Alistair"),
#line 2654
        .trainerClass = TRAINER_CLASS_ROUGHNECK,
#line 2655
        .trainerPic = TRAINER_PIC_ROUGHNECK,
        .encounterMusic_gender =
#line 2656
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2658
        .doubleBattle = FALSE,
#line 2657
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2660
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2659
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2662
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2662
            .heldItem = ITEM_POISON_BARB,
#line 2665
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2663
            .ability = ABILITY_POISON_TOUCH,
#line 2664
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2666
                MOVE_ACID_SPRAY,
                MOVE_POISON_GAS,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2671
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2671
            .heldItem = ITEM_SHARP_BEAK,
#line 2674
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2672
            .ability = ABILITY_AFTERMATH,
#line 2673
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2675
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 2680
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2680
            .heldItem = ITEM_BLACK_BELT,
#line 2683
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2681
            .ability = ABILITY_POISON_TOUCH,
#line 2682
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2684
                MOVE_VENOSHOCK,
                MOVE_POWER_UP_PUNCH,
                MOVE_FAKE_OUT,
                MOVE_THIEF,
            },
            },
            {
#line 2689
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2689
            .heldItem = ITEM_SITRUS_BERRY,
#line 2692
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2690
            .ability = ABILITY_STRONG_JAW,
#line 2691
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2693
                MOVE_BITE,
                MOVE_THUNDER_FANG,
                MOVE_FIRE_FANG,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 2698
    [TRAINER_PBL_ALISTAIR_LEVIATHAN_8_CHALLENGE] =
    {
#line 2699
        .trainerName = _("Alistair"),
#line 2700
        .trainerClass = TRAINER_CLASS_ROUGHNECK,
#line 2701
        .trainerPic = TRAINER_PIC_ROUGHNECK,
        .encounterMusic_gender =
#line 2702
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2704
        .doubleBattle = FALSE,
#line 2703
        .aiFlags = AI_FLAG_CHALLENGE,
#line 2706
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2705
        .randomLead = FALSE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2708
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2708
            .heldItem = ITEM_POISON_BARB,
#line 2711
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2709
            .ability = ABILITY_POISON_TOUCH,
#line 2710
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2712
                MOVE_ACID_SPRAY,
                MOVE_POISON_GAS,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2717
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2717
            .heldItem = ITEM_SHARP_BEAK,
#line 2720
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2718
            .ability = ABILITY_AFTERMATH,
#line 2719
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2721
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 2726
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2726
            .heldItem = ITEM_BLACK_BELT,
#line 2729
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2727
            .ability = ABILITY_POISON_TOUCH,
#line 2728
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2730
                MOVE_VENOSHOCK,
                MOVE_POWER_UP_PUNCH,
                MOVE_FAKE_OUT,
                MOVE_THIEF,
            },
            },
            {
#line 2735
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2735
            .heldItem = ITEM_EVIOLITE,
#line 2738
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2736
            .ability = ABILITY_SERENE_GRACE,
#line 2737
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2739
                MOVE_HEADBUTT,
                MOVE_BITE,
                MOVE_GLARE,
                MOVE_ROOST,
            },
            },
            {
#line 2744
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2744
            .heldItem = ITEM_SITRUS_BERRY,
#line 2747
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2745
            .ability = ABILITY_STRONG_JAW,
#line 2746
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2748
                MOVE_BITE,
                MOVE_THUNDER_FANG,
                MOVE_FIRE_FANG,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 2753
    [TRAINER_PBL_COOPER] =
    {
#line 2754
        .trainerName = _("Cooper"),
#line 2755
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 2756
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 2757
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2759
        .doubleBattle = FALSE,
#line 2758
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2760
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2762
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2765
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2763
            .ability = ABILITY_EFFECT_SPORE,
#line 2764
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2766
                MOVE_GASTRO_ACID,
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 2771
            .species = SPECIES_SKORUPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2774
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2772
            .ability = ABILITY_SNIPER,
#line 2773
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2775
                MOVE_POISON_FANG,
                MOVE_BUG_BITE,
                MOVE_FEINT_ATTACK,
                MOVE_HONE_CLAWS,
            },
            },
            {
#line 2780
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2783
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2781
            .ability = ABILITY_LEVITATE,
#line 2782
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2784
                MOVE_SLUDGE,
                MOVE_STOCKPILE,
                MOVE_SPIT_UP,
                MOVE_SWALLOW,
            },
            },
            {
#line 2789
            .species = SPECIES_VENONAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2792
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2790
            .ability = ABILITY_COMPOUND_EYES,
#line 2791
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2793
                MOVE_STRUGGLE_BUG,
                MOVE_POISON_POWDER,
                MOVE_PSYBEAM,
                MOVE_STUN_SPORE,
            },
            },
        },
    },
#line 2798
    [TRAINER_PBL_CARMINE] =
    {
#line 2799
        .trainerName = _("Carmine"),
#line 2800
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 2801
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 2802
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2804
        .doubleBattle = FALSE,
#line 2803
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2805
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2807
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2810
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2808
            .ability = ABILITY_MOTOR_DRIVE,
#line 2809
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2811
                MOVE_SHOCK_WAVE,
                MOVE_CHARGE_BEAM,
                MOVE_AERIAL_ACE,
                MOVE_ENCORE,
            },
            },
        },
    },
#line 2816
    [TRAINER_PBL_JONATHAN] =
    {
#line 2817
        .trainerName = _("Jonathan"),
#line 2818
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 2819
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 2820
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2822
        .doubleBattle = FALSE,
#line 2821
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2823
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2825
            .species = SPECIES_NYMBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2828
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2826
            .ability = ABILITY_SWARM,
#line 2827
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2829
                MOVE_DOUBLE_KICK,
                MOVE_SCREECH,
                MOVE_BUG_BITE,
                MOVE_FEINT,
            },
            },
            {
#line 2834
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2837
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2835
            .ability = ABILITY_STURDY,
#line 2836
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2838
                MOVE_BUG_BITE,
                MOVE_PAYBACK,
                MOVE_RAPID_SPIN,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 2843
            .species = SPECIES_SHELMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2846
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2844
            .ability = ABILITY_SHELL_ARMOR,
#line 2845
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2847
                MOVE_MUD_SLAP,
                MOVE_STRUGGLE_BUG,
                MOVE_MEGA_DRAIN,
                MOVE_RECOVER,
            },
            },
            {
#line 2852
            .species = SPECIES_KARRABLAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2855
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2853
            .ability = ABILITY_SWARM,
#line 2854
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2856
                MOVE_FEINT_ATTACK,
                MOVE_BUG_BITE,
                MOVE_SLASH,
                MOVE_RECOVER,
            },
            },
        },
    },
#line 2861
    [TRAINER_PBL_CALVIN] =
    {
#line 2862
        .trainerName = _("Calvin"),
#line 2863
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 2864
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 2865
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2867
        .doubleBattle = FALSE,
#line 2866
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2868
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2870
            .species = SPECIES_ARROKUDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2873
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2871
            .ability = ABILITY_PROPELLER_TAIL,
#line 2872
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2874
                MOVE_AQUA_JET,
                MOVE_BITE,
                MOVE_FOCUS_ENERGY,
                MOVE_LASER_FOCUS,
            },
            },
            {
#line 2879
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2882
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2880
            .ability = ABILITY_WATER_ABSORB,
#line 2881
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2883
                MOVE_MUD_SHOT,
                MOVE_BUBBLE_BEAM,
                MOVE_ENDEAVOR,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 2888
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2891
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2889
            .ability = ABILITY_SNIPER,
#line 2890
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2892
                MOVE_FOCUS_ENERGY,
                MOVE_BUBBLE_BEAM,
                MOVE_PSYBEAM,
                MOVE_AURORA_BEAM,
            },
            },
            {
#line 2897
            .species = SPECIES_TYMPOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2898
            .ability = ABILITY_WATER_ABSORB,
#line 2899
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2901
                MOVE_UPROAR,
                MOVE_BUBBLE_BEAM,
                MOVE_MUD_BOMB,
                MOVE_AQUA_RING,
            },
            },
        },
    },
#line 2906
    [TRAINER_PBL_LUIS] =
    {
#line 2907
        .trainerName = _("Luis"),
#line 2908
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 2909
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 2910
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2912
        .doubleBattle = FALSE,
#line 2911
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2913
        .randomLead = TRUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2915
            .species = SPECIES_CHARCADET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2918
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2916
            .ability = ABILITY_FLASH_FIRE,
#line 2917
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2919
                MOVE_NIGHT_SHADE,
                MOVE_INCINERATE,
                MOVE_WILL_O_WISP,
                MOVE_FLAME_CHARGE,
            },
            },
            {
#line 2924
            .species = SPECIES_CAPSAKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2927
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2925
            .ability = ABILITY_CHLOROPHYLL,
#line 2926
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2928
                MOVE_LEECH_SEED,
                MOVE_RAZOR_LEAF,
                MOVE_WORRY_SEED,
                MOVE_HEADBUTT,
            },
            },
            {
#line 2933
            .species = SPECIES_WIMPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2936
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2934
            .ability = ABILITY_WIMP_OUT,
#line 2935
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2937
                MOVE_STRUGGLE_BUG,
                MOVE_SAND_ATTACK,
                MOVE_HARDEN,
                MOVE_AQUA_JET,
            },
            },
            {
#line 2942
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2945
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2943
            .ability = ABILITY_LEVITATE,
#line 2944
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2946
                MOVE_TACKLE,
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 2951
            .species = SPECIES_CETODDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2954
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2952
            .ability = ABILITY_THICK_FAT,
#line 2953
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2955
                MOVE_YAWN,
                MOVE_ICE_SHARD,
                MOVE_ENTRAINMENT,
                MOVE_FLAIL,
            },
            },
            {
#line 2960
            .species = SPECIES_TOXEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2963
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2961
            .ability = ABILITY_STATIC,
#line 2962
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2964
                MOVE_GROWL,
                MOVE_ACID,
                MOVE_NUZZLE,
                MOVE_TEARFUL_LOOK,
            },
            },
        },
    },
#line 2969
    [TRAINER_PBL_ARI] =
    {
#line 2970
        .trainerName = _("Ari"),
#line 2971
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 2972
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2973
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2975
        .doubleBattle = FALSE,
#line 2974
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2976
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2978
            .species = SPECIES_TANDEMAUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2981
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2979
            .ability = ABILITY_PICKUP,
#line 2980
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2982
                MOVE_SUPER_FANG,
            },
            },
            {
#line 2984
            .species = SPECIES_TADBULB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2987
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2985
            .ability = ABILITY_STATIC,
#line 2986
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2988
                MOVE_PARABOLIC_CHARGE,
            },
            },
            {
#line 2990
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2993
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2991
            .ability = ABILITY_RUN_AWAY,
#line 2992
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2994
                MOVE_DOUBLE_HIT,
            },
            },
        },
    },
#line 2996
    [TRAINER_PBL_BERTHA] =
    {
#line 2997
        .trainerName = _("Bertha"),
#line 2998
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 2999
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 3000
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3002
        .doubleBattle = FALSE,
#line 3001
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3003
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3005
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3008
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3006
            .ability = ABILITY_STATIC,
#line 3007
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3009
                MOVE_MUD_SHOT,
                MOVE_SPARK,
            },
            },
        },
    },
#line 3012
    [TRAINER_PBL_CASSANDRA] =
    {
#line 3013
        .trainerName = _("Cassandra"),
#line 3014
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3015
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3016
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3018
        .doubleBattle = FALSE,
#line 3017
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3019
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3021
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3024
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3022
            .ability = ABILITY_INTIMIDATE,
#line 3023
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3025
                MOVE_PLUCK,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 3028
    [TRAINER_PBL_DOMINIC] =
    {
#line 3029
        .trainerName = _("Dominic"),
#line 3030
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3031
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3032
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3034
        .doubleBattle = FALSE,
#line 3033
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3035
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3037
            .species = SPECIES_CARNIVINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3040
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3038
            .ability = ABILITY_LEVITATE,
#line 3039
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3041
                MOVE_LEAF_TORNADO,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 3044
    [TRAINER_PBL_ERICA] =
    {
#line 3045
        .trainerName = _("Erica"),
#line 3046
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3047
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3048
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3050
        .doubleBattle = FALSE,
#line 3049
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3051
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3053
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3056
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3054
            .ability = ABILITY_GUTS,
#line 3055
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3057
                MOVE_RETALIATE,
                MOVE_REVENGE,
            },
            },
            {
#line 3060
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3063
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3061
            .ability = ABILITY_STURDY,
#line 3062
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3064
                MOVE_RETALIATE,
                MOVE_LOW_SWEEP,
            },
            },
        },
    },
#line 3067
    [TRAINER_PBL_ARI_CHALLENGE] =
    {
#line 3068
        .trainerName = _("Ari"),
#line 3069
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3070
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 3071
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3073
        .doubleBattle = FALSE,
#line 3072
        .aiFlags = AI_FLAG_CHALLENGE,
#line 3074
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3076
            .species = SPECIES_TANDEMAUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3076
            .heldItem = ITEM_ORAN_BERRY,
#line 3079
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3077
            .ability = ABILITY_PICKUP,
#line 3078
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3080
                MOVE_DOUBLE_HIT,
                MOVE_SUPER_FANG,
            },
            },
            {
#line 3083
            .species = SPECIES_TADBULB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3083
            .heldItem = ITEM_ORAN_BERRY,
#line 3086
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3084
            .ability = ABILITY_STATIC,
#line 3085
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3087
                MOVE_PARABOLIC_CHARGE,
                MOVE_CHARGE_BEAM,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3091
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3091
            .heldItem = ITEM_ORAN_BERRY,
#line 3094
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3092
            .ability = ABILITY_RUN_AWAY,
#line 3093
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3095
                MOVE_DOUBLE_HIT,
                MOVE_PLUCK,
                MOVE_QUICK_ATTACK,
                MOVE_PURSUIT,
            },
            },
        },
    },
#line 3100
    [TRAINER_PBL_BERTHA_CHALLENGE] =
    {
#line 3101
        .trainerName = _("Bertha"),
#line 3102
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3103
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 3104
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3106
        .doubleBattle = FALSE,
#line 3105
        .aiFlags = AI_FLAG_CHALLENGE,
#line 3107
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3109
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3109
            .heldItem = ITEM_ORAN_BERRY,
#line 3112
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3110
            .ability = ABILITY_STATIC,
#line 3111
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3113
                MOVE_SPARK,
                MOVE_MUD_SHOT,
                MOVE_YAWN,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 3118
    [TRAINER_PBL_CASSANDRA_CHALLENGE] =
    {
#line 3119
        .trainerName = _("Cassandra"),
#line 3120
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3121
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3122
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3124
        .doubleBattle = FALSE,
#line 3123
        .aiFlags = AI_FLAG_CHALLENGE,
#line 3125
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3127
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3127
            .heldItem = ITEM_SITRUS_BERRY,
#line 3130
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3128
            .ability = ABILITY_INTIMIDATE,
#line 3129
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3131
                MOVE_PLUCK,
                MOVE_QUICK_ATTACK,
                MOVE_THIEF,
                MOVE_TAUNT,
            },
            },
        },
    },
#line 3136
    [TRAINER_PBL_DOMINIC_CHALLENGE] =
    {
#line 3137
        .trainerName = _("Dominic"),
#line 3138
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3139
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3140
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3142
        .doubleBattle = FALSE,
#line 3141
        .aiFlags = AI_FLAG_CHALLENGE,
#line 3143
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3145
            .species = SPECIES_CARNIVINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3145
            .heldItem = ITEM_SITRUS_BERRY,
#line 3148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3146
            .ability = ABILITY_LEVITATE,
#line 3147
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3149
                MOVE_LEAF_TORNADO,
                MOVE_LEECH_SEED,
                MOVE_TRAILBLAZE,
                MOVE_SYNTHESIS,
            },
            },
        },
    },
#line 3154
    [TRAINER_PBL_ERICA_CHALLENGE] =
    {
#line 3155
        .trainerName = _("Erica"),
#line 3156
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3157
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3158
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3160
        .doubleBattle = FALSE,
#line 3159
        .aiFlags = AI_FLAG_CHALLENGE,
#line 3161
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3163
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3163
            .heldItem = ITEM_SITRUS_BERRY,
#line 3166
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3164
            .ability = ABILITY_STURDY,
#line 3165
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3167
                MOVE_RETALIATE,
                MOVE_LOW_SWEEP,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3172
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3172
            .heldItem = ITEM_SITRUS_BERRY,
#line 3175
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3173
            .ability = ABILITY_GUTS,
#line 3174
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3176
                MOVE_RETALIATE,
                MOVE_REVENGE,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 3181
    [TRAINER_PBL_ALANA] =
    {
#line 3182
        .trainerName = _("Alana"),
#line 3183
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 3184
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 3185
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3187
        .doubleBattle = FALSE,
#line 3186
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3188
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3190
            .species = SPECIES_TINKATINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3193
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3191
            .ability = ABILITY_MOLD_BREAKER,
#line 3192
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3194
                MOVE_METAL_CLAW,
                MOVE_COVET,
                MOVE_SWEET_KISS,
                MOVE_SLAM,
            },
            },
            {
#line 3199
            .species = SPECIES_HELIOPTILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3202
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3200
            .ability = ABILITY_SAND_VEIL,
#line 3201
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3203
                MOVE_THUNDER_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_RAZOR_WIND,
                MOVE_PARABOLIC_CHARGE,
            },
            },
            {
#line 3208
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3211
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3209
            .ability = ABILITY_HUSTLE,
#line 3210
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3212
                MOVE_INCINERATE,
                MOVE_FLAME_WHEEL,
                MOVE_HEADBUTT,
                MOVE_FIRE_FANG,
            },
            },
            {
#line 3217
            .species = SPECIES_TOEDSCOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3220
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3218
            .ability = ABILITY_MYCELIUM_MIGHT,
#line 3219
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3221
                MOVE_STUN_SPORE,
                MOVE_MEGA_DRAIN,
                MOVE_LEECH_SEED,
                MOVE_MUD_SHOT,
            },
            },
        },
    },
#line 3226
    [TRAINER_PBL_JACOB] =
    {
#line 3227
        .trainerName = _("Jacob"),
#line 3228
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 3229
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 3230
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3232
        .doubleBattle = FALSE,
#line 3231
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3233
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3235
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3236
            .ability = ABILITY_SHEER_FORCE,
#line 3237
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3239
                MOVE_AERIAL_ACE,
                MOVE_SCARY_FACE,
                MOVE_ROOST,
                MOVE_SKY_DROP,
            },
            },
            {
#line 3244
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3247
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3245
            .ability = ABILITY_NATURAL_CURE,
#line 3246
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3248
                MOVE_ROUND,
                MOVE_HAZE,
                MOVE_FEATHER_DANCE,
                MOVE_DRAGON_BREATH,
            },
            },
            {
#line 3253
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3256
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3254
            .ability = ABILITY_SUPER_LUCK,
#line 3255
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3257
                MOVE_NIGHT_SHADE,
                MOVE_ASSURANCE,
                MOVE_AIR_CUTTER,
                MOVE_WHIRLWIND,
            },
            },
            {
#line 3262
            .species = SPECIES_TRUMBEAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3265
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3263
            .ability = ABILITY_SKILL_LINK,
#line 3264
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3266
                MOVE_FURY_ATTACK,
                MOVE_PLUCK,
                MOVE_ROOST,
                MOVE_SCREECH,
            },
            },
        },
    },
#line 3271
    [TRAINER_PBL_DEWEY] =
    {
#line 3272
        .trainerName = _("Dewey"),
#line 3273
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3274
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 3275
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3277
        .doubleBattle = FALSE,
#line 3276
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3278
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3280
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3283
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3281
            .ability = ABILITY_WATER_ABSORB,
#line 3282
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3284
                MOVE_PIN_MISSILE,
                MOVE_PAYBACK,
                MOVE_GRASS_WHISTLE,
                MOVE_NEEDLE_ARM,
            },
            },
            {
#line 3289
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3292
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3290
            .ability = ABILITY_INTIMIDATE,
#line 3291
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3293
                MOVE_FEINT_ATTACK,
                MOVE_BRICK_BREAK,
                MOVE_TORMENT,
                MOVE_SWAGGER,
            },
            },
            {
#line 3298
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3301
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3299
            .ability = ABILITY_HYPER_CUTTER,
#line 3300
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3302
                MOVE_FEINT_ATTACK,
                MOVE_BULLDOZE,
                MOVE_FLAIL,
                MOVE_LASER_FOCUS,
            },
            },
            {
#line 3307
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3310
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3308
            .ability = ABILITY_STURDY,
#line 3309
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3311
                MOVE_BUG_BITE,
                MOVE_SLASH,
                MOVE_KNOCK_OFF,
                MOVE_ROCK_BLAST,
            },
            },
        },
    },
#line 3316
    [TRAINER_PBL_ERNEST] =
    {
#line 3317
        .trainerName = _("Ernest"),
#line 3318
        .trainerClass = TRAINER_CLASS_HIKER,
#line 3319
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 3320
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3322
        .doubleBattle = FALSE,
#line 3321
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3323
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3325
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3328
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3326
            .ability = ABILITY_SAND_FORCE,
#line 3327
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3329
                MOVE_FURY_SWIPES,
                MOVE_METAL_CLAW,
                MOVE_SLASH,
                MOVE_DIG,
            },
            },
            {
#line 3334
            .species = SPECIES_CUFANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3337
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3335
            .ability = ABILITY_SHEER_FORCE,
#line 3336
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3338
                MOVE_BULLDOZE,
                MOVE_SLAM,
                MOVE_DIG,
                MOVE_WHIRLWIND,
            },
            },
            {
#line 3343
            .species = SPECIES_SILICOBRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3346
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3344
            .ability = ABILITY_SHED_SKIN,
#line 3345
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3347
                MOVE_SAND_TOMB,
                MOVE_HEADBUTT,
                MOVE_BULLDOZE,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 3352
            .species = SPECIES_SANDYGAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3355
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3353
            .ability = ABILITY_WATER_COMPACTION,
#line 3354
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3356
                MOVE_HYPNOSIS,
                MOVE_MEGA_DRAIN,
                MOVE_BULLDOZE,
                MOVE_ANCIENT_POWER,
            },
            },
        },
    },
#line 3361
    [TRAINER_PBL_KYLE] =
    {
#line 3362
        .trainerName = _("Kyle"),
#line 3363
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 3364
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 3365
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3367
        .doubleBattle = FALSE,
#line 3366
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3368
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3370
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3373
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3371
            .ability = ABILITY_GUTS,
#line 3372
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3374
                MOVE_SMACK_DOWN,
                MOVE_SCREECH,
                MOVE_PAYBACK,
                MOVE_CHIP_AWAY,
            },
            },
            {
#line 3379
            .species = SPECIES_RIOLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3382
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3380
            .ability = ABILITY_STEADFAST,
#line 3381
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3383
                MOVE_FORCE_PALM,
                MOVE_COUNTER,
                MOVE_BULLET_PUNCH,
                MOVE_VACUUM_WAVE,
            },
            },
            {
#line 3388
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3391
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3389
            .ability = ABILITY_MOLD_BREAKER,
#line 3390
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3392
                MOVE_TAUNT,
                MOVE_BREAKING_SWIPE,
                MOVE_FOCUS_ENERGY,
                MOVE_SLASH,
            },
            },
            {
#line 3397
            .species = SPECIES_LARVESTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3400
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3398
            .ability = ABILITY_FLAME_BODY,
#line 3399
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3401
                MOVE_ABSORB,
                MOVE_FLAME_CHARGE,
                MOVE_STRUGGLE_BUG,
                MOVE_FLAME_WHEEL,
            },
            },
        },
    },
#line 3406
    [TRAINER_PBL_ELIAS] =
    {
#line 3407
        .trainerName = _("Elias"),
#line 3408
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 3409
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 3410
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3412
        .doubleBattle = FALSE,
#line 3411
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3413
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3415
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3418
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3416
            .ability = ABILITY_HUSTLE,
#line 3417
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3419
                MOVE_DRAGON_BREATH,
                MOVE_BITE,
                MOVE_HEADBUTT,
                MOVE_SCREECH,
            },
            },
            {
#line 3424
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3427
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3425
            .ability = ABILITY_ROCK_HEAD,
#line 3426
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3428
                MOVE_HEADBUTT,
                MOVE_DRAGON_BREATH,
                MOVE_SCARY_FACE,
                MOVE_FIRE_FANG,
            },
            },
            {
#line 3433
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3436
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3434
            .ability = ABILITY_SAND_VEIL,
#line 3435
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3437
                MOVE_BITE,
                MOVE_BULLDOZE,
                MOVE_TAKE_DOWN,
                MOVE_SCARY_FACE,
            },
            },
            {
#line 3442
            .species = SPECIES_JANGMO_O,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3445
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3443
            .ability = ABILITY_SOUNDPROOF,
#line 3444
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3446
                MOVE_SCARY_FACE,
                MOVE_HEADBUTT,
                MOVE_SCREECH,
                MOVE_DRAGON_TAIL,
            },
            },
        },
    },
#line 3451
    [TRAINER_PBL_PEARLIE] =
    {
#line 3452
        .trainerName = _("Pearlie"),
#line 3453
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 3454
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 3455
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3457
        .doubleBattle = FALSE,
#line 3456
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3458
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3460
            .species = SPECIES_PASSIMIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3463
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3461
            .ability = ABILITY_RECEIVER,
#line 3462
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3464
                MOVE_FEINT,
                MOVE_VITAL_THROW,
                MOVE_SCARY_FACE,
                MOVE_TAKE_DOWN,
            },
            },
        },
    },
#line 3469
    [TRAINER_PBL_SUSAN] =
    {
#line 3470
        .trainerName = _("Susan"),
#line 3471
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 3472
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 3473
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3475
        .doubleBattle = FALSE,
#line 3474
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3476
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3478
            .species = SPECIES_ORANGURU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3481
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3479
            .ability = ABILITY_SYMBIOSIS,
#line 3480
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3482
                MOVE_PSYCH_UP,
                MOVE_EXTRASENSORY,
                MOVE_INSTRUCT,
                MOVE_AFTER_YOU,
            },
            },
        },
    },
#line 3487
    [TRAINER_PBL_CONRAD] =
    {
#line 3488
        .trainerName = _("Ernest"),
#line 3489
        .trainerClass = TRAINER_CLASS_HIKER,
#line 3490
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 3491
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3493
        .doubleBattle = FALSE,
#line 3492
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3494
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3496
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3499
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3497
            .ability = ABILITY_STURDY,
#line 3498
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3500
                MOVE_METAL_SOUND,
                MOVE_METAL_CLAW,
                MOVE_ROCK_TOMB,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 3505
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3508
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3506
            .ability = ABILITY_SAND_FORCE,
#line 3507
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3509
                MOVE_SAND_TOMB,
                MOVE_DIG,
                MOVE_TAKE_DOWN,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 3514
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3515
            .ability = ABILITY_INTIMIDATE,
#line 3516
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3518
                MOVE_SCARY_FACE,
                MOVE_DIG,
                MOVE_ASSURANCE,
                MOVE_ROCK_CLIMB,
            },
            },
            {
#line 3523
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3524
            .ability = ABILITY_ROCK_HEAD,
#line 3525
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3527
                MOVE_HORN_ATTACK,
                MOVE_SMACK_DOWN,
                MOVE_BULLDOZE,
                MOVE_TAKE_DOWN,
            },
            },
        },
    },
#line 3532
    [TRAINER_PBL_BRETT] =
    {
#line 3533
        .trainerName = _("Brett"),
#line 3534
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3535
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3536
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3538
        .doubleBattle = FALSE,
#line 3537
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3539
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3541
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3544
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3542
            .ability = ABILITY_LIQUID_OOZE,
#line 3543
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3545
                MOVE_ACID_SPRAY,
                MOVE_TICKLE,
                MOVE_HAZE,
                MOVE_BRINE,
            },
            },
            {
#line 3550
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3553
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3551
            .ability = ABILITY_VOLT_ABSORB,
#line 3552
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3554
                MOVE_CONFUSE_RAY,
                MOVE_BUBBLE_BEAM,
                MOVE_THUNDER_WAVE,
                MOVE_SHOCK_WAVE,
            },
            },
            {
#line 3559
            .species = SPECIES_BINACLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3562
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3560
            .ability = ABILITY_TOUGH_CLAWS,
#line 3561
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3563
                MOVE_FURY_CUTTER,
                MOVE_ANCIENT_POWER,
                MOVE_RAZOR_SHELL,
                MOVE_SLASH,
            },
            },
            {
#line 3568
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3571
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3569
            .ability = ABILITY_HYPER_CUTTER,
#line 3570
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3572
                MOVE_AQUA_JET,
                MOVE_CHIP_AWAY,
                MOVE_BUBBLE_BEAM,
                MOVE_RAZOR_SHELL,
            },
            },
        },
    },
#line 3577
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9] =
    {
#line 3578
        .trainerName = _("Adamina"),
#line 3579
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 3580
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 3581
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3583
        .doubleBattle = FALSE,
#line 3582
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3585
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 3584
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3587
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3587
            .heldItem = ITEM_HARD_STONE,
#line 3590
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3588
            .ability = ABILITY_ANGER_SHELL,
#line 3589
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3591
                MOVE_ROCK_TOMB,
                MOVE_BULLDOZE,
                MOVE_KNOCK_OFF,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 3596
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3596
            .heldItem = ITEM_BLACK_GLASSES,
#line 3599
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3597
            .ability = ABILITY_OVERCOAT,
#line 3598
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3600
                MOVE_PLUCK,
                MOVE_FEINT_ATTACK,
                MOVE_ROOST,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3605
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3605
            .heldItem = ITEM_MIRACLE_SEED,
#line 3608
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3606
            .ability = ABILITY_SAND_RUSH,
#line 3607
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3609
                MOVE_MEGA_DRAIN,
                MOVE_PIN_MISSILE,
                MOVE_BOUNCE,
                MOVE_GROWTH,
            },
            },
            {
#line 3614
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3614
            .heldItem = ITEM_SITRUS_BERRY,
#line 3617
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3615
            .ability = ABILITY_MAGIC_GUARD,
#line 3616
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3618
                MOVE_PSYBEAM,
                MOVE_AIR_CUTTER,
                MOVE_ANCIENT_POWER,
                MOVE_ROOST,
            },
            },
        },
    },
#line 3623
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9_CHALLENGE] =
    {
#line 3624
        .trainerName = _("Adamina"),
#line 3625
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 3626
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 3627
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3629
        .doubleBattle = FALSE,
#line 3628
        .aiFlags = AI_FLAG_CHALLENGE,
#line 3631
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 3630
        .randomLead = FALSE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3633
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3633
            .heldItem = ITEM_HARD_STONE,
#line 3636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3634
            .ability = ABILITY_ANGER_SHELL,
#line 3635
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3637
                MOVE_ROCK_TOMB,
                MOVE_BULLDOZE,
                MOVE_KNOCK_OFF,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 3642
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3642
            .heldItem = ITEM_BLACK_GLASSES,
#line 3645
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3643
            .ability = ABILITY_OVERCOAT,
#line 3644
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3646
                MOVE_PLUCK,
                MOVE_FEINT_ATTACK,
                MOVE_ROOST,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3651
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3651
            .heldItem = ITEM_MIRACLE_SEED,
#line 3654
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3652
            .ability = ABILITY_SAND_RUSH,
#line 3653
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3655
                MOVE_MEGA_DRAIN,
                MOVE_PIN_MISSILE,
                MOVE_BOUNCE,
                MOVE_GROWTH,
            },
            },
            {
#line 3660
            .species = SPECIES_BRAIXEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3660
            .heldItem = ITEM_CHARCOAL,
#line 3663
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3661
            .ability = ABILITY_MAGIC_GUARD,
#line 3662
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3664
                MOVE_INCINERATE,
                MOVE_PSYBEAM,
                MOVE_SHOCK_WAVE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 3669
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3669
            .heldItem = ITEM_SITRUS_BERRY,
#line 3672
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3670
            .ability = ABILITY_MAGIC_GUARD,
#line 3671
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3673
                MOVE_PSYBEAM,
                MOVE_AIR_CUTTER,
                MOVE_ANCIENT_POWER,
                MOVE_ROOST,
            },
            },
        },
    },
#line 3678
    [TRAINER_PBL_JEANETTE] =
    {
#line 3679
        .trainerName = _("Jeanette"),
#line 3680
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 3681
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 3682
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3684
        .doubleBattle = FALSE,
#line 3683
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3685
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3687
            .species = SPECIES_GASTLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3690
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3688
            .ability = ABILITY_LEVITATE,
#line 3689
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3691
                MOVE_CLEAR_SMOG,
                MOVE_HEX,
                MOVE_HAZE,
                MOVE_SCARY_FACE,
            },
            },
            {
#line 3696
            .species = SPECIES_FRILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3699
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3697
            .ability = ABILITY_CURSED_BODY,
#line 3698
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3700
                MOVE_BUBBLE_BEAM,
                MOVE_WHIRLPOOL,
                MOVE_HEX,
                MOVE_RECOVER,
            },
            },
            {
#line 3705
            .species = SPECIES_HONEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3708
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3706
            .ability = ABILITY_NO_GUARD,
#line 3707
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3709
                MOVE_SHADOW_SNEAK,
                MOVE_METAL_SOUND,
                MOVE_RETALIATE,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 3714
            .species = SPECIES_GREAVARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3717
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3715
            .ability = ABILITY_FLUFFY,
#line 3716
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3718
                MOVE_SHADOW_SNEAK,
                MOVE_YAWN,
                MOVE_HEADBUTT,
                MOVE_DIG,
            },
            },
        },
    },
#line 3723
    [TRAINER_PBL_EMMA_AND_LEO] =
    {
#line 3724
        .trainerName = _("Emma&Leo"),
#line 3725
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 3726
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 3727
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3729
        .doubleBattle = TRUE,
#line 3728
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3730
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3732
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3735
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3733
            .ability = ABILITY_PRANKSTER,
#line 3734
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3736
                MOVE_SHOCK_WAVE,
                MOVE_ENCORE,
                MOVE_MOONLIGHT,
                MOVE_SIGNAL_BEAM,
            },
            },
            {
#line 3741
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3744
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3742
            .ability = ABILITY_PRANKSTER,
#line 3743
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3745
                MOVE_COVET,
                MOVE_ENCORE,
                MOVE_MOONLIGHT,
                MOVE_SIGNAL_BEAM,
            },
            },
            {
#line 3750
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3753
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3751
            .ability = ABILITY_EARLY_BIRD,
#line 3752
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3754
                MOVE_FEINT_ATTACK,
                MOVE_DEFOG,
                MOVE_MEGA_DRAIN,
                MOVE_BEAT_UP,
            },
            },
            {
#line 3759
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3760
            .ability = ABILITY_RAIN_DISH,
#line 3761
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3763
                MOVE_BUBBLE_BEAM,
                MOVE_MEGA_DRAIN,
                MOVE_TICKLE,
                MOVE_SYNTHESIS,
            },
            },
        },
    },
#line 3768
    [TRAINER_PBL_JOEL] =
    {
#line 3769
        .trainerName = _("Joel"),
#line 3770
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3771
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3772
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3774
        .doubleBattle = FALSE,
#line 3773
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3775
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3777
            .species = SPECIES_BRONZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3780
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3778
            .ability = ABILITY_LEVITATE,
#line 3779
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3781
                MOVE_IMPRISON,
                MOVE_FEINT_ATTACK,
                MOVE_METAL_SOUND,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 3786
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3787
            .ability = ABILITY_IRON_FIST,
#line 3788
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3790
                MOVE_MAGNITUDE,
                MOVE_CURSE,
                MOVE_SHADOW_PUNCH,
                MOVE_STOMPING_TANTRUM,
            },
            },
            {
#line 3795
            .species = SPECIES_POLTCHAGEIST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3796
            .ability = ABILITY_HOSPITALITY,
#line 3797
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3799
                MOVE_LIFE_DEW,
                MOVE_MEGA_DRAIN,
                MOVE_HEX,
                MOVE_FOUL_PLAY,
            },
            },
            {
#line 3804
            .species = SPECIES_INKAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3807
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3805
            .ability = ABILITY_CONTRARY,
#line 3806
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3808
                MOVE_SLASH,
                MOVE_PLUCK,
                MOVE_PSYBEAM,
                MOVE_SWITCHEROO,
            },
            },
        },
    },
#line 3813
    [TRAINER_PBL_MARION] =
    {
#line 3814
        .trainerName = _("Marion"),
#line 3815
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3816
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3817
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3819
        .doubleBattle = FALSE,
#line 3818
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3820
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3822
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3825
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3823
            .ability = ABILITY_LEVITATE,
#line 3824
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3826
                MOVE_NIGHT_SHADE,
                MOVE_CONFUSE_RAY,
                MOVE_CURSE,
                MOVE_HEX,
            },
            },
            {
#line 3831
            .species = SPECIES_SINISTEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3832
            .ability = ABILITY_CURSED_BODY,
#line 3833
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3835
                MOVE_NIGHT_SHADE,
                MOVE_SUCKER_PUNCH,
                MOVE_HEX,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 3840
            .species = SPECIES_ELGYEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3843
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3841
            .ability = ABILITY_SYNCHRONIZE,
#line 3842
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3844
                MOVE_PSYBEAM,
                MOVE_TELEPORT,
                MOVE_COSMIC_POWER,
                MOVE_RECOVER,
            },
            },
            {
#line 3849
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3852
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3850
            .ability = ABILITY_FLAME_BODY,
#line 3851
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3853
                MOVE_IMPRISON,
                MOVE_HEX,
                MOVE_FLAME_BURST,
                MOVE_WILL_O_WISP,
            },
            },
        },
    },
#line 3858
    [TRAINER_PBL_REGINA] =
    {
#line 3859
        .trainerName = _("Regina"),
#line 3860
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 3861
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 3862
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3864
        .doubleBattle = FALSE,
#line 3863
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3865
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3867
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3870
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3868
            .ability = ABILITY_LEVITATE,
#line 3869
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3871
                MOVE_CURSE,
                MOVE_HEX,
                MOVE_PSYBEAM,
                MOVE_OMINOUS_WIND,
            },
            },
            {
#line 3876
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3877
            .ability = ABILITY_CURSED_BODY,
#line 3878
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3880
                MOVE_SHADOW_SNEAK,
                MOVE_SNATCH,
                MOVE_OMINOUS_WIND,
                MOVE_TRICK,
            },
            },
            {
#line 3885
            .species = SPECIES_GIMMIGHOUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3888
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3886
            .ability = ABILITY_RATTLED,
#line 3887
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3889
                MOVE_ASTONISH,
                MOVE_TACKLE,
            },
            },
            {
#line 3892
            .species = SPECIES_BRAMBLIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3895
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3893
            .ability = ABILITY_WIND_RIDER,
#line 3894
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3896
                MOVE_LEECH_SEED,
                MOVE_SHADOW_SNEAK,
                MOVE_MEGA_DRAIN,
                MOVE_HEX,
            },
            },
        },
    },
#line 3901
    [TRAINER_PBL_NEWTON_LEVIATHAN_10] =
    {
#line 3902
        .trainerName = _("Newton"),
#line 3903
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 3904
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .encounterMusic_gender =
#line 3905
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3907
        .doubleBattle = TRUE,
#line 3906
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3909
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 3908
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3911
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3914
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3912
            .ability = ABILITY_FRIEND_GUARD,
#line 3913
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3915
                MOVE_GRAVITY,
                MOVE_DRAINING_KISS,
                MOVE_MOONLIGHT,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3920
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3923
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3921
            .ability = ABILITY_INTIMIDATE,
#line 3922
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3924
                MOVE_STOMP,
                MOVE_DOUBLE_KICK,
                MOVE_HYPNOSIS,
                MOVE_PSYSHIELD_BASH,
            },
            },
            {
#line 3929
            .species = SPECIES_STONJOURNER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3932
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3930
            .ability = ABILITY_POWER_SPOT,
#line 3931
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3933
                MOVE_GRAVITY,
                MOVE_ROCK_TOMB,
                MOVE_WIDE_GUARD,
                MOVE_MEGA_KICK,
            },
            },
            {
#line 3938
            .species = SPECIES_FLAPPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3938
            .heldItem = ITEM_SITRUS_BERRY,
#line 3941
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3939
            .ability = ABILITY_HUSTLE,
#line 3940
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3942
                MOVE_GRAV_APPLE,
                MOVE_ACROBATICS,
                MOVE_ROOST,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 3947
    [TRAINER_PBL_NEWTON_LEVIATHAN_10_CHALLENGE] =
    {
#line 3948
        .trainerName = _("Newton"),
#line 3949
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 3950
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .encounterMusic_gender =
#line 3951
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3953
        .doubleBattle = TRUE,
#line 3952
        .aiFlags = AI_FLAG_CHALLENGE,
#line 3955
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 3954
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3957
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3957
            .heldItem = ITEM_EVIOLITE,
#line 3960
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3958
            .ability = ABILITY_FRIEND_GUARD,
#line 3959
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3961
                MOVE_GRAVITY,
                MOVE_DRAINING_KISS,
                MOVE_MOONLIGHT,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3966
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3966
            .heldItem = ITEM_EVIOLITE,
#line 3969
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3967
            .ability = ABILITY_INTIMIDATE,
#line 3968
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3970
                MOVE_STOMP,
                MOVE_DOUBLE_KICK,
                MOVE_HYPNOSIS,
                MOVE_PSYSHIELD_BASH,
            },
            },
            {
#line 3975
            .species = SPECIES_STONJOURNER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3975
            .heldItem = ITEM_SITRUS_BERRY,
#line 3978
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3976
            .ability = ABILITY_POWER_SPOT,
#line 3977
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3979
                MOVE_GRAVITY,
                MOVE_ROCK_TOMB,
                MOVE_WIDE_GUARD,
                MOVE_MEGA_KICK,
            },
            },
            {
#line 3984
            .species = SPECIES_FLAPPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3984
            .heldItem = ITEM_SITRUS_BERRY,
#line 3988
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3985
            .ability = ABILITY_HUSTLE,
#line 3987
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 3986
            .teraType = TYPE_DRAGON,
            .moves = {
#line 3989
                MOVE_GRAV_APPLE,
                MOVE_ACROBATICS,
                MOVE_ROOST,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 3994
    [TRAINER_PBL_ESSENCE] =
    {
#line 3995
        .trainerName = _("Essence"),
#line 3996
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 3997
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 3998
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4000
        .doubleBattle = FALSE,
#line 3999
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4001
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4003
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4005
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4004
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4007
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4009
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4008
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4011
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4013
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4012
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4015
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4017
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4016
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4019
    [TRAINER_PBL_DOLORES] =
    {
#line 4020
        .trainerName = _("Dolores"),
#line 4021
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 4022
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 4023
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4025
        .doubleBattle = FALSE,
#line 4024
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4026
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4028
            .species = SPECIES_SNOVER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4030
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4029
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4032
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4034
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4033
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4036
            .species = SPECIES_CUBCHOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4038
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4037
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4040
            .species = SPECIES_SNORUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4041
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4044
    [TRAINER_PBL_GENIE] =
    {
#line 4045
        .trainerName = _("Genie"),
#line 4046
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4047
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 4048
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4050
        .doubleBattle = FALSE,
#line 4049
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4051
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4053
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4055
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4054
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4057
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4059
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4058
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4061
            .species = SPECIES_PAWMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4063
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4062
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4065
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4067
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4066
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4069
    [TRAINER_PBL_ABIGAIL] =
    {
#line 4070
        .trainerName = _("Abigail"),
#line 4071
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4072
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4073
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4075
        .doubleBattle = FALSE,
#line 4074
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4076
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4078
            .species = SPECIES_GLIMMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4080
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4079
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4082
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4084
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4083
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4086
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4088
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4087
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4090
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4092
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4091
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4094
    [TRAINER_PBL_FEDERICO] =
    {
#line 4095
        .trainerName = _("Federico"),
#line 4096
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4097
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4098
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4100
        .doubleBattle = FALSE,
#line 4099
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4101
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4103
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4105
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4104
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4107
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4109
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4108
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4111
            .species = SPECIES_MAREANIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4113
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4112
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4115
            .species = SPECIES_MANTYKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4117
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4116
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4120
    [TRAINER_PBL_ROMULUS] =
    {
#line 4121
        .trainerName = _("Romulus"),
#line 4122
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 4123
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 4124
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4126
        .doubleBattle = FALSE,
#line 4125
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4127
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4129
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4131
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4130
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4133
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4135
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4134
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4137
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4139
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4138
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4142
    [TRAINER_PBL_JULIE] =
    {
#line 4143
        .trainerName = _("Julie"),
#line 4144
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 4145
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 4146
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4148
        .doubleBattle = FALSE,
#line 4147
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4149
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4151
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4153
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4152
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4155
            .species = SPECIES_CLAUNCHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4157
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4156
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4159
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4161
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4160
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4163
    [TRAINER_PBL_HILDA] =
    {
#line 4164
        .trainerName = _("Hilda"),
#line 4165
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4166
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4167
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4169
        .doubleBattle = FALSE,
#line 4168
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4170
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4172
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4174
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4173
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4176
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4178
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4177
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4180
            .species = SPECIES_SKRELP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4182
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4181
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4184
            .species = SPECIES_FINIZEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4186
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4185
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4188
    [TRAINER_PBL_TREVOR] =
    {
#line 4189
        .trainerName = _("Trevor"),
#line 4190
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 4191
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 4192
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4194
        .doubleBattle = FALSE,
#line 4193
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4195
        .randomLead = TRUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4197
            .species = SPECIES_TOGEPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4199
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4198
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4201
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4203
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4202
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4205
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4207
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4206
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4209
            .species = SPECIES_SMOOCHUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4211
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4210
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4213
            .species = SPECIES_ELEKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4215
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4214
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4217
            .species = SPECIES_MAGBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4219
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4218
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4221
    [TRAINER_PBL_RUFUS] =
    {
#line 4222
        .trainerName = _("Rufus"),
#line 4223
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 4224
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 4225
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4227
        .doubleBattle = FALSE,
#line 4226
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4228
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4230
            .species = SPECIES_FRIGIBAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4232
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4231
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4234
            .species = SPECIES_DREEPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4236
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4235
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4238
            .species = SPECIES_GOOMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4241
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4239
            .ability = ABILITY_SAP_SIPPER,
#line 4240
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4242
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_LIFE_DEW,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 4247
            .species = SPECIES_ZORUA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4249
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4248
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4251
    [TRAINER_PBL_KINLEY] =
    {
#line 4252
        .trainerName = _("Kinley"),
#line 4253
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 4254
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 4255
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 4257
        .doubleBattle = FALSE,
#line 4256
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4258
        .randomLead = TRUE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4260
            .species = SPECIES_HERDIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4262
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4261
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4264
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4266
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4265
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4268
            .species = SPECIES_CROCONAW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4270
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4269
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4272
            .species = SPECIES_RABOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4274
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4273
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4276
            .species = SPECIES_FLORAGATO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4278
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4277
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4280
    [TRAINER_PBL_REID] =
    {
#line 4281
        .trainerName = _("Reid"),
#line 4282
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 4283
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 4284
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4286
        .doubleBattle = FALSE,
#line 4285
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4287
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4289
            .species = SPECIES_DOTTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4291
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4290
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4293
            .species = SPECIES_WHIRLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4295
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4294
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4297
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4299
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4298
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4301
    [TRAINER_PBL_DECLAN_LEVIATHAN_11] =
    {
#line 4302
        .trainerName = _("Declan"),
#line 4303
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 4304
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 4305
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4307
        .doubleBattle = FALSE,
#line 4306
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4309
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 4308
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4311
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4313
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4312
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4315
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4317
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4316
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4319
            .species = SPECIES_RABSCA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4321
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4320
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4323
            .species = SPECIES_LURANTIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4325
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4324
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4327
    [TRAINER_PBL_DECLAN_LEVIATHAN_11_CHALLENGE] =
    {
#line 4328
        .trainerName = _("Declan"),
#line 4329
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 4330
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 4331
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4333
        .doubleBattle = FALSE,
#line 4332
        .aiFlags = AI_FLAG_CHALLENGE,
#line 4335
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 4334
        .randomLead = FALSE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4337
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4339
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4338
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4341
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4343
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4342
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4345
            .species = SPECIES_RABSCA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4347
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4346
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4349
            .species = SPECIES_LURANTIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4351
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4350
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4353
            .species = SPECIES_LOKIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4355
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4354
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4357
    [TRAINER_PBL_VIOLET] =
    {
#line 4358
        .trainerName = _("STEVEN"),
#line 4359
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4360
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4362
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4364
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4366
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4365
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4368
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4370
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4369
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4372
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4374
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4373
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4376
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4378
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4377
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4380
    [TRAINER_PBL_WANDA] =
    {
#line 4381
        .trainerName = _("STEVEN"),
#line 4382
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4383
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4385
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4387
            .species = SPECIES_TRANQUILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4389
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4388
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4391
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4393
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4392
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4395
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4397
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4396
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4399
            .species = SPECIES_WEEPINBELL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4401
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4400
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4403
    [TRAINER_PBL_AMBER_AND_KIM] =
    {
#line 4404
        .trainerName = _("STEVEN"),
#line 4405
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4406
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4408
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4410
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4412
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4411
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4414
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4416
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4415
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4418
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4420
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4419
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4422
            .species = SPECIES_DOLLIV,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4424
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4423
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4426
    [TRAINER_PBL_JAN_AND_ERIN] =
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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4433
            .species = SPECIES_FURFROU_STAR_TRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4435
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4434
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4437
            .species = SPECIES_FURFROU_HEART_TRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4439
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4438
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4441
            .species = SPECIES_FURFROU_DANDY_TRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4443
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4442
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4445
            .species = SPECIES_FURFROU_DEBUTANTE_TRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4447
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4446
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4449
    [TRAINER_PBL_STEVE] =
    {
#line 4450
        .trainerName = _("STEVEN"),
#line 4451
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4452
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4454
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4456
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4457
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4460
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4462
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4461
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4464
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4466
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4465
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4468
            .species = SPECIES_NIDORINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4470
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4469
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4472
    [TRAINER_PBL_GOULD] =
    {
#line 4473
        .trainerName = _("STEVEN"),
#line 4474
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4475
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4477
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4479
            .species = SPECIES_CRANIDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4481
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4480
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4483
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4485
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4484
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4487
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4489
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4488
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4491
            .species = SPECIES_ANORITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4493
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4492
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4495
            .species = SPECIES_ARCHEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4497
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4496
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4499
    [TRAINER_PBL_MENDEL] =
    {
#line 4500
        .trainerName = _("STEVEN"),
#line 4501
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4502
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4504
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4506
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4508
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4507
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4510
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4512
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4511
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4514
            .species = SPECIES_TYRUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4515
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4518
            .species = SPECIES_AMAURA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4520
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4519
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4522
            .species = SPECIES_TIRTOUGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4524
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4523
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4526
    [TRAINER_PBL_DARWIN] =
    {
#line 4527
        .trainerName = _("STEVEN"),
#line 4528
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4529
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4531
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4533
            .species = SPECIES_COMFEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4535
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4534
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4537
            .species = SPECIES_KOMALA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4539
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4538
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4541
            .species = SPECIES_FLOETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4543
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4542
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4545
            .species = SPECIES_CHARJABUG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4547
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4546
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4549
    [TRAINER_PBL_JENNY_LEVIATHAN_11] =
    {
#line 4550
        .trainerName = _("STEVEN"),
#line 4551
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4552
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4554
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4556
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4560
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4559
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4558
            .lvl = 42,
#line 4557
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4561
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4566
    [TRAINER_PBL_JENNY_LEVIATHAN_11_CHALLENGE] =
    {
#line 4567
        .trainerName = _("STEVEN"),
#line 4568
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4569
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4571
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4573
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4577
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4576
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4575
            .lvl = 42,
#line 4574
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4578
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4583
    [TRAINER_PBL_BART] =
    {
#line 4584
        .trainerName = _("STEVEN"),
#line 4585
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4586
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4588
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4590
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4592
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4591
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4594
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4596
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4595
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4598
            .species = SPECIES_TOGEDEMARU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4600
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4599
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4602
            .species = SPECIES_WISHIWASHI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4604
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4603
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4606
    [TRAINER_PBL_NIGEL] =
    {
#line 4607
        .trainerName = _("STEVEN"),
#line 4608
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4609
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4611
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4613
            .species = SPECIES_CARKOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4615
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4614
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4617
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4619
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4618
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4621
            .species = SPECIES_CARBINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4623
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4622
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4625
            .species = SPECIES_BOLDORE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4627
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4626
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4629
    [TRAINER_PBL_LOLA] =
    {
#line 4630
        .trainerName = _("STEVEN"),
#line 4631
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4632
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4634
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4636
            .species = SPECIES_CORVISQUIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4638
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4637
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4640
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4642
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4641
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4644
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4646
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4645
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4648
            .species = SPECIES_SERVINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4650
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4649
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4652
            .species = SPECIES_MONFERNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4653
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4656
    [TRAINER_PBL_CHARLIE] =
    {
#line 4657
        .trainerName = _("STEVEN"),
#line 4658
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4659
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4661
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4663
            .species = SPECIES_PIDGEOTTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4665
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4664
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4667
            .species = SPECIES_PIGNITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4669
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4668
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4671
            .species = SPECIES_QUAXWELL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4673
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4672
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4675
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4677
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4676
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4679
            .species = SPECIES_GROTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4681
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4680
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4683
    [TRAINER_PBL_RANDOLPH] =
    {
#line 4684
        .trainerName = _("STEVEN"),
#line 4685
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4686
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4688
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4690
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4692
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4691
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4694
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4696
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4695
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4698
            .species = SPECIES_QUILAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4700
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4699
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4702
            .species = SPECIES_BRIONNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4704
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4703
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4706
            .species = SPECIES_IVYSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4708
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4707
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4710
    [TRAINER_PBL_TODD] =
    {
#line 4711
        .trainerName = _("STEVEN"),
#line 4712
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4713
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4715
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4717
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4721
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4720
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4719
            .lvl = 42,
#line 4718
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4722
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4727
    [TRAINER_PBL_RUSSELL] =
    {
#line 4728
        .trainerName = _("STEVEN"),
#line 4729
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4730
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4732
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4734
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4738
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4737
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4736
            .lvl = 42,
#line 4735
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4739
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4744
    [TRAINER_PBL_OTIS] =
    {
#line 4745
        .trainerName = _("STEVEN"),
#line 4746
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4747
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4749
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4751
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4755
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4754
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4753
            .lvl = 42,
#line 4752
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4756
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4761
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12] =
    {
#line 4762
        .trainerName = _("STEVEN"),
#line 4763
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4764
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4766
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4768
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4772
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4771
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4770
            .lvl = 42,
#line 4769
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4773
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4778
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12_CHALLENGE] =
    {
#line 4779
        .trainerName = _("STEVEN"),
#line 4780
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4781
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4783
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4785
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4789
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4788
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4787
            .lvl = 42,
#line 4786
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4790
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4795
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13] =
    {
#line 4796
        .trainerName = _("STEVEN"),
#line 4797
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4798
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4800
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4802
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4806
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4805
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4804
            .lvl = 42,
#line 4803
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4807
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4812
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13_CHALLENGE] =
    {
#line 4813
        .trainerName = _("STEVEN"),
#line 4814
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4815
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4817
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4819
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4823
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4822
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4821
            .lvl = 42,
#line 4820
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4824
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4829
    [TRAINER_PBL_IONA] =
    {
#line 4830
        .trainerName = _("STEVEN"),
#line 4831
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4832
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4834
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4836
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4840
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4839
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4838
            .lvl = 42,
#line 4837
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4841
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4846
    [TRAINER_PBL_BERKE] =
    {
#line 4847
        .trainerName = _("STEVEN"),
#line 4848
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4849
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4851
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4853
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4857
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4856
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4855
            .lvl = 42,
#line 4854
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4858
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4863
    [TRAINER_PBL_TANISHA] =
    {
#line 4864
        .trainerName = _("STEVEN"),
#line 4865
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4866
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4868
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4870
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4874
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4873
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4872
            .lvl = 42,
#line 4871
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4875
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4880
    [TRAINER_PBL_ROBERT] =
    {
#line 4881
        .trainerName = _("STEVEN"),
#line 4882
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4883
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4885
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4887
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4891
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4890
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4889
            .lvl = 42,
#line 4888
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4892
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4897
    [TRAINER_PBL_CHRIS] =
    {
#line 4898
        .trainerName = _("STEVEN"),
#line 4899
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4900
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4902
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4904
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4908
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4907
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4906
            .lvl = 42,
#line 4905
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4909
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4914
    [TRAINER_PBL_ANGUS] =
    {
#line 4915
        .trainerName = _("STEVEN"),
#line 4916
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4917
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4919
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4921
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4925
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4924
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4923
            .lvl = 42,
#line 4922
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4926
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4931
    [TRAINER_PBL_LILY_LEVIATHAN_14] =
    {
#line 4932
        .trainerName = _("STEVEN"),
#line 4933
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4934
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4936
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4938
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4942
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4941
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4940
            .lvl = 42,
#line 4939
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4943
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4948
    [TRAINER_PBL_LILY_LEVIATHAN_14_CHALLENGE] =
    {
#line 4949
        .trainerName = _("STEVEN"),
#line 4950
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4951
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4953
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4955
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4959
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4958
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4957
            .lvl = 42,
#line 4956
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4960
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4965
    [TRAINER_PBL_AXLE] =
    {
#line 4966
        .trainerName = _("STEVEN"),
#line 4967
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4968
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4970
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4972
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4976
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4975
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4974
            .lvl = 42,
#line 4973
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4977
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4982
    [TRAINER_PBL_RAFAEL] =
    {
#line 4983
        .trainerName = _("STEVEN"),
#line 4984
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4985
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4987
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4989
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4993
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4992
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4991
            .lvl = 42,
#line 4990
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4994
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4999
    [TRAINER_PBL_GEORGINA] =
    {
#line 5000
        .trainerName = _("STEVEN"),
#line 5001
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5002
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5004
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5006
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5010
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5009
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5008
            .lvl = 42,
#line 5007
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5011
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5016
    [TRAINER_PBL_MIA_LEVIATHAN_15] =
    {
#line 5017
        .trainerName = _("STEVEN"),
#line 5018
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5019
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5021
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5023
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5027
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5026
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5025
            .lvl = 42,
#line 5024
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5028
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5033
    [TRAINER_PBL_MIA_LEVIATHAN_15_CHALLENGE] =
    {
#line 5034
        .trainerName = _("STEVEN"),
#line 5035
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5036
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5038
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5040
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5044
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5043
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5042
            .lvl = 42,
#line 5041
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5045
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5050
    [TRAINER_PBL_DORIS] =
    {
#line 5051
        .trainerName = _("STEVEN"),
#line 5052
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5053
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5055
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5057
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5061
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5060
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5059
            .lvl = 42,
#line 5058
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5062
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5067
    [TRAINER_PBL_HOMER] =
    {
#line 5068
        .trainerName = _("STEVEN"),
#line 5069
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5070
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5072
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5074
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5078
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5077
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5076
            .lvl = 42,
#line 5075
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5079
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5084
    [TRAINER_PBL_JOHN] =
    {
#line 5085
        .trainerName = _("STEVEN"),
#line 5086
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5087
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5089
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5091
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5095
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5094
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5093
            .lvl = 42,
#line 5092
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5096
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5101
    [TRAINER_PBL_GLENN] =
    {
#line 5102
        .trainerName = _("STEVEN"),
#line 5103
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5104
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5106
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5108
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5112
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5111
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5110
            .lvl = 42,
#line 5109
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5113
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5118
    [TRAINER_PBL_JAY] =
    {
#line 5119
        .trainerName = _("STEVEN"),
#line 5120
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5121
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5123
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5125
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5129
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5128
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5127
            .lvl = 42,
#line 5126
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5130
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5135
    [TRAINER_PBL_TYLER] =
    {
#line 5136
        .trainerName = _("STEVEN"),
#line 5137
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5138
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5140
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5142
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5146
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5145
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5144
            .lvl = 42,
#line 5143
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5147
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5152
    [TRAINER_PBL_TERRENCE] =
    {
#line 5153
        .trainerName = _("STEVEN"),
#line 5154
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5155
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5157
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5159
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5163
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5162
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5161
            .lvl = 42,
#line 5160
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5164
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5169
    [TRAINER_PBL_MARTY] =
    {
#line 5170
        .trainerName = _("STEVEN"),
#line 5171
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5172
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5174
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5176
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5180
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5178
            .lvl = 42,
#line 5177
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5181
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5186
    [TRAINER_PBL_KARI] =
    {
#line 5187
        .trainerName = _("STEVEN"),
#line 5188
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5189
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5191
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5193
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5197
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5195
            .lvl = 42,
#line 5194
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5198
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5203
    [TRAINER_PBL_ABRAHAM] =
    {
#line 5204
        .trainerName = _("STEVEN"),
#line 5205
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5206
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5208
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5210
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5214
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5213
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5212
            .lvl = 42,
#line 5211
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5215
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5220
    [TRAINER_PBL_MELINDA] =
    {
#line 5221
        .trainerName = _("STEVEN"),
#line 5222
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5223
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5225
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5227
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5231
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5230
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5229
            .lvl = 42,
#line 5228
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5232
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5237
    [TRAINER_PBL_EMILIO] =
    {
#line 5238
        .trainerName = _("STEVEN"),
#line 5239
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5240
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5242
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5244
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5248
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5247
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5246
            .lvl = 42,
#line 5245
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5249
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5254
    [TRAINER_PBL_REX] =
    {
#line 5255
        .trainerName = _("STEVEN"),
#line 5256
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5257
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5259
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5261
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5265
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5264
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5263
            .lvl = 42,
#line 5262
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5266
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5271
    [TRAINER_PBL_LOUIS] =
    {
#line 5272
        .trainerName = _("STEVEN"),
#line 5273
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5274
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5276
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5278
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5282
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5281
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5280
            .lvl = 42,
#line 5279
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5283
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5288
    [TRAINER_PBL_LEROY] =
    {
#line 5289
        .trainerName = _("STEVEN"),
#line 5290
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5291
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5293
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5295
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5299
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5298
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5297
            .lvl = 42,
#line 5296
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5300
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5305
    [TRAINER_PBL_ELTON] =
    {
#line 5306
        .trainerName = _("STEVEN"),
#line 5307
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5308
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5310
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5312
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5316
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5315
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5314
            .lvl = 42,
#line 5313
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5317
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5322
    [TRAINER_PBL_WILLIE] =
    {
#line 5323
        .trainerName = _("STEVEN"),
#line 5324
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5325
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5327
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5329
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5333
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5332
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5331
            .lvl = 42,
#line 5330
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5334
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5339
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16] =
    {
#line 5340
        .trainerName = _("STEVEN"),
#line 5341
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5342
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5344
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5346
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5350
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5349
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5348
            .lvl = 42,
#line 5347
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5351
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5356
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16_CHALLENGE] =
    {
#line 5357
        .trainerName = _("STEVEN"),
#line 5358
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5359
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5361
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5363
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5367
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5366
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5365
            .lvl = 42,
#line 5364
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5368
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5373
    [TRAINER_PBL_PIRATE_1] =
    {
#line 5374
        .trainerName = _("STEVEN"),
#line 5375
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5376
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5378
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5380
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5384
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5383
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5382
            .lvl = 42,
#line 5381
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5385
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5390
    [TRAINER_PBL_PIRATE_2] =
    {
#line 5391
        .trainerName = _("STEVEN"),
#line 5392
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5393
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5395
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5397
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5401
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5400
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5399
            .lvl = 42,
#line 5398
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5402
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5407
    [TRAINER_PBL_PIRATE_3] =
    {
#line 5408
        .trainerName = _("STEVEN"),
#line 5409
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5410
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5412
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5414
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5418
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5417
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5416
            .lvl = 42,
#line 5415
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5419
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5424
    [TRAINER_PBL_PIRATE_4] =
    {
#line 5425
        .trainerName = _("STEVEN"),
#line 5426
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5427
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5429
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5431
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5435
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5434
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5433
            .lvl = 42,
#line 5432
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5436
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5441
    [TRAINER_PBL_SHAWN] =
    {
#line 5442
        .trainerName = _("STEVEN"),
#line 5443
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5444
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5446
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5448
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5452
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5451
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5450
            .lvl = 42,
#line 5449
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5453
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5458
    [TRAINER_PBL_FERNANDO] =
    {
#line 5459
        .trainerName = _("STEVEN"),
#line 5460
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5461
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5463
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5465
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5469
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5468
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5467
            .lvl = 42,
#line 5466
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5470
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5475
    [TRAINER_PBL_KANE] =
    {
#line 5476
        .trainerName = _("STEVEN"),
#line 5477
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5478
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5480
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5482
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5486
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5485
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5484
            .lvl = 42,
#line 5483
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5487
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5492
    [TRAINER_PBL_KIRK] =
    {
#line 5493
        .trainerName = _("STEVEN"),
#line 5494
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5495
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5497
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5499
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5503
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5502
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5501
            .lvl = 42,
#line 5500
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5504
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5509
    [TRAINER_PBL_DALTON] =
    {
#line 5510
        .trainerName = _("STEVEN"),
#line 5511
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5512
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5514
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5516
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5520
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5519
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5518
            .lvl = 42,
#line 5517
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5521
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5526
    [TRAINER_PBL_LEE] =
    {
#line 5527
        .trainerName = _("STEVEN"),
#line 5528
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5529
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5531
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5533
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5537
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5536
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5535
            .lvl = 42,
#line 5534
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5538
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5543
    [TRAINER_PBL_BLANCHE] =
    {
#line 5544
        .trainerName = _("STEVEN"),
#line 5545
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5546
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5548
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5550
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5554
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5553
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5552
            .lvl = 42,
#line 5551
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5555
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5560
    [TRAINER_PBL_TROY] =
    {
#line 5561
        .trainerName = _("STEVEN"),
#line 5562
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5563
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5565
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5567
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5571
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5570
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5569
            .lvl = 42,
#line 5568
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5572
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5577
    [TRAINER_PBL_ABED] =
    {
#line 5578
        .trainerName = _("STEVEN"),
#line 5579
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5580
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5582
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5584
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5588
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5587
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5586
            .lvl = 42,
#line 5585
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5589
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5594
    [TRAINER_PBL_TROY_BRUTAL] =
    {
#line 5595
        .trainerName = _("STEVEN"),
#line 5596
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5597
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5599
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5601
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5605
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5604
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5603
            .lvl = 42,
#line 5602
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5606
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5611
    [TRAINER_PBL_ABED_BRUTAL] =
    {
#line 5612
        .trainerName = _("STEVEN"),
#line 5613
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5614
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5616
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5618
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5622
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5621
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5620
            .lvl = 42,
#line 5619
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5623
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5628
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17] =
    {
#line 5629
        .trainerName = _("STEVEN"),
#line 5630
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5631
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5633
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5635
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5639
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5638
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5637
            .lvl = 42,
#line 5636
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5640
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5645
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17_CHALLENGE] =
    {
#line 5646
        .trainerName = _("STEVEN"),
#line 5647
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5648
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5650
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5652
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5656
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5655
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5654
            .lvl = 42,
#line 5653
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5657
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5662
    [TRAINER_PBL_ANITA] =
    {
#line 5663
        .trainerName = _("STEVEN"),
#line 5664
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5665
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5667
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5669
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5673
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5672
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5671
            .lvl = 42,
#line 5670
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5674
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5679
    [TRAINER_PBL_DESIREE] =
    {
#line 5680
        .trainerName = _("STEVEN"),
#line 5681
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5682
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5684
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5686
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5690
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5689
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5688
            .lvl = 42,
#line 5687
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5691
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5696
    [TRAINER_PBL_HOWARD] =
    {
#line 5697
        .trainerName = _("STEVEN"),
#line 5698
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5699
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5701
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5703
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5707
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5706
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5705
            .lvl = 42,
#line 5704
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5708
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5713
    [TRAINER_PBL_ELOISE] =
    {
#line 5714
        .trainerName = _("STEVEN"),
#line 5715
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5716
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5718
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5720
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5724
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5723
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5722
            .lvl = 42,
#line 5721
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5725
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5730
    [TRAINER_PBL_ALLY_AND_EMMY] =
    {
#line 5731
        .trainerName = _("STEVEN"),
#line 5732
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5733
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5735
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5737
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5741
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5740
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5739
            .lvl = 42,
#line 5738
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5742
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5747
    [TRAINER_PBL_AMIR] =
    {
#line 5748
        .trainerName = _("STEVEN"),
#line 5749
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5750
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5752
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5754
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5758
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5757
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5756
            .lvl = 42,
#line 5755
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5759
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5764
    [TRAINER_PBL_GETHIN] =
    {
#line 5765
        .trainerName = _("STEVEN"),
#line 5766
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5767
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5769
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5771
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5775
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5774
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5773
            .lvl = 42,
#line 5772
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5776
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5781
    [TRAINER_PBL_BERNARD] =
    {
#line 5782
        .trainerName = _("STEVEN"),
#line 5783
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5784
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5786
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5788
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5792
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5791
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5790
            .lvl = 42,
#line 5789
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5793
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5798
    [TRAINER_PBL_ELLIE] =
    {
#line 5799
        .trainerName = _("STEVEN"),
#line 5800
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5801
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5803
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5805
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5809
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5808
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5807
            .lvl = 42,
#line 5806
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5810
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5815
    [TRAINER_PBL_RUSTY] =
    {
#line 5816
        .trainerName = _("STEVEN"),
#line 5817
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5818
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5820
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5822
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5826
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5825
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5824
            .lvl = 42,
#line 5823
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5827
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5832
    [TRAINER_PBL_CODY] =
    {
#line 5833
        .trainerName = _("STEVEN"),
#line 5834
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5835
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5837
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5839
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5843
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5842
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5841
            .lvl = 42,
#line 5840
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5844
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5849
    [TRAINER_PBL_LEWIS] =
    {
#line 5850
        .trainerName = _("STEVEN"),
#line 5851
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5852
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5854
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5856
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5860
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5859
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5858
            .lvl = 42,
#line 5857
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5861
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5866
    [TRAINER_PBL_CORNELIUS] =
    {
#line 5867
        .trainerName = _("STEVEN"),
#line 5868
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5869
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5871
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5873
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5877
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5876
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5875
            .lvl = 42,
#line 5874
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5878
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5883
    [TRAINER_PBL_INEZ_AND_EMMA] =
    {
#line 5884
        .trainerName = _("STEVEN"),
#line 5885
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5886
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5888
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5890
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5894
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5893
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5892
            .lvl = 42,
#line 5891
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5895
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5900
    [TRAINER_PBL_HELEN] =
    {
#line 5901
        .trainerName = _("STEVEN"),
#line 5902
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5903
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5905
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5907
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5911
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5910
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5909
            .lvl = 42,
#line 5908
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5912
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5917
    [TRAINER_PBL_WESLEY] =
    {
#line 5918
        .trainerName = _("STEVEN"),
#line 5919
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5920
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5922
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5924
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5928
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5927
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5926
            .lvl = 42,
#line 5925
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5929
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5934
    [TRAINER_PBL_ALFREDO] =
    {
#line 5935
        .trainerName = _("STEVEN"),
#line 5936
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5937
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5939
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5941
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5945
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5944
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5943
            .lvl = 42,
#line 5942
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5946
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5951
    [TRAINER_PBL_IAN] =
    {
#line 5952
        .trainerName = _("STEVEN"),
#line 5953
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5954
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5956
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5958
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5962
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5961
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5960
            .lvl = 42,
#line 5959
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5963
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5968
    [TRAINER_PBL_AUDREY] =
    {
#line 5969
        .trainerName = _("STEVEN"),
#line 5970
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5971
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5973
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5975
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5979
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5978
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5977
            .lvl = 42,
#line 5976
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5980
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5985
    [TRAINER_PBL_LEVIATHAN13] =
    {
#line 5986
        .trainerName = _("STEVEN"),
#line 5987
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5988
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5990
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5992
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5996
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5995
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5994
            .lvl = 42,
#line 5993
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5997
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6002
    [TRAINER_PBL_EDGARDO] =
    {
#line 6003
        .trainerName = _("STEVEN"),
#line 6004
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6005
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6007
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6009
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6013
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6012
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6011
            .lvl = 42,
#line 6010
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6014
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6019
    [TRAINER_PBL_JEAN] =
    {
#line 6020
        .trainerName = _("STEVEN"),
#line 6021
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6022
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6024
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6026
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6030
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6029
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6028
            .lvl = 42,
#line 6027
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6031
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6036
    [TRAINER_PBL_ROSE] =
    {
#line 6037
        .trainerName = _("STEVEN"),
#line 6038
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6039
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6041
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6043
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6047
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6046
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6045
            .lvl = 42,
#line 6044
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6048
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6053
    [TRAINER_PBL_JENNIFER] =
    {
#line 6054
        .trainerName = _("STEVEN"),
#line 6055
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6056
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6058
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6060
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6064
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6063
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6062
            .lvl = 42,
#line 6061
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6065
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6070
    [TRAINER_PBL_MATTHEW] =
    {
#line 6071
        .trainerName = _("STEVEN"),
#line 6072
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6073
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6075
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6077
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6081
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6080
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6079
            .lvl = 42,
#line 6078
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6082
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6087
    [TRAINER_PBL_KERRY] =
    {
#line 6088
        .trainerName = _("STEVEN"),
#line 6089
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6090
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6092
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6094
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6098
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6097
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6096
            .lvl = 42,
#line 6095
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6099
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6104
    [TRAINER_PBL_ANNIE] =
    {
#line 6105
        .trainerName = _("STEVEN"),
#line 6106
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6107
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6109
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6111
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6115
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6114
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6113
            .lvl = 42,
#line 6112
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6116
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6121
    [TRAINER_PBL_CHRISTI] =
    {
#line 6122
        .trainerName = _("STEVEN"),
#line 6123
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6124
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6126
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6128
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6132
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6131
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6130
            .lvl = 42,
#line 6129
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6133
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6138
    [TRAINER_PBL_SPENCER] =
    {
#line 6139
        .trainerName = _("STEVEN"),
#line 6140
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6141
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6143
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6145
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6149
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6147
            .lvl = 42,
#line 6146
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6150
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6155
    [TRAINER_PBL_HAYWOOD] =
    {
#line 6156
        .trainerName = _("STEVEN"),
#line 6157
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6158
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6160
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6162
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6166
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6165
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6164
            .lvl = 42,
#line 6163
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6167
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6172
    [TRAINER_PBL_MONROE] =
    {
#line 6173
        .trainerName = _("STEVEN"),
#line 6174
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6175
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6177
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6179
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6183
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6182
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6181
            .lvl = 42,
#line 6180
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6184
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6189
    [TRAINER_PBL_DAVID] =
    {
#line 6190
        .trainerName = _("STEVEN"),
#line 6191
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6192
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6194
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6196
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6200
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6199
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6198
            .lvl = 42,
#line 6197
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6201
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6206
    [TRAINER_PBL_DOMINIK] =
    {
#line 6207
        .trainerName = _("STEVEN"),
#line 6208
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6209
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6211
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6213
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6217
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6216
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6215
            .lvl = 42,
#line 6214
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6218
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6223
    [TRAINER_PBL_DOUGLAS] =
    {
#line 6224
        .trainerName = _("STEVEN"),
#line 6225
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6226
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6228
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6230
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6234
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6233
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6232
            .lvl = 42,
#line 6231
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6235
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6240
    [TRAINER_PBL_NADINE] =
    {
#line 6241
        .trainerName = _("STEVEN"),
#line 6242
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6243
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6245
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6247
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6251
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6250
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6249
            .lvl = 42,
#line 6248
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6252
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6257
    [TRAINER_PBL_SANDY] =
    {
#line 6258
        .trainerName = _("STEVEN"),
#line 6259
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6260
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6262
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6264
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6268
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6266
            .lvl = 42,
#line 6265
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6269
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6274
    [TRAINER_PBL_SHELDON] =
    {
#line 6275
        .trainerName = _("STEVEN"),
#line 6276
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6277
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6279
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6281
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6285
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6284
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6283
            .lvl = 42,
#line 6282
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6286
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6291
    [TRAINER_PBL_LEVIATHAN14] =
    {
#line 6292
        .trainerName = _("STEVEN"),
#line 6293
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6294
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6296
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6298
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6302
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6301
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6300
            .lvl = 42,
#line 6299
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6303
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6308
    [TRAINER_PBL_LEVIATHAN12_BRUTAL] =
    {
#line 6309
        .trainerName = _("STEVEN"),
#line 6310
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6311
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6313
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6315
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6319
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6318
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6317
            .lvl = 42,
#line 6316
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6320
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6325
    [TRAINER_PBL_LEVIATHAN13_BRUTAL] =
    {
#line 6326
        .trainerName = _("STEVEN"),
#line 6327
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6328
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6330
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6332
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6336
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6335
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6334
            .lvl = 42,
#line 6333
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6337
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6342
    [TRAINER_PBL_LEVIATHAN14_BRUTAL] =
    {
#line 6343
        .trainerName = _("STEVEN"),
#line 6344
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6345
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6347
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6349
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6353
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6352
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6351
            .lvl = 42,
#line 6350
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6354
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6359
    [TRAINER_PBL_LEVIATHAN12] =
    {
#line 6360
        .trainerName = _("STEVEN"),
#line 6361
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6362
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6364
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6366
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6370
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6369
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6368
            .lvl = 42,
#line 6367
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6371
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
