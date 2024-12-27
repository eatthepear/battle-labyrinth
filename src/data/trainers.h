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
            },
            },
            {
#line 495
            .species = SPECIES_TAROUNTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 498
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 496
            .ability = ABILITY_INSOMNIA,
#line 497
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 499
                MOVE_TACKLE,
                MOVE_STRING_SHOT,
                MOVE_STRUGGLE_BUG,
                MOVE_ASSURANCE,
            },
            },
        },
    },
#line 504
    [TRAINER_PBL_HARPER] =
    {
#line 505
        .trainerName = _("Harper"),
#line 506
        .trainerClass = TRAINER_CLASS_LASS,
#line 507
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 508
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 510
        .doubleBattle = FALSE,
#line 509
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 511
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 513
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 514
            .ability = ABILITY_RATTLED,
#line 515
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 517
                MOVE_ASTONISH,
                MOVE_POUND,
                MOVE_SUPERSONIC,
                MOVE_ECHOED_VOICE,
            },
            },
            {
#line 522
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 525
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 523
            .ability = ABILITY_INSOMNIA,
#line 524
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 526
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_PECK,
                MOVE_CONFUSION,
            },
            },
            {
#line 531
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 532
            .ability = ABILITY_SAND_FORCE,
#line 533
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 535
                MOVE_SCRATCH,
                MOVE_SAND_ATTACK,
                MOVE_GROWL,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 540
    [TRAINER_PBL_ARTHUR] =
    {
#line 541
        .trainerName = _("Arthur"),
#line 542
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 543
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 544
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 546
        .doubleBattle = FALSE,
#line 545
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 547
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 549
            .species = SPECIES_YUNGOOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 552
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 550
            .ability = ABILITY_STRONG_JAW,
#line 551
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 553
                MOVE_TACKLE,
                MOVE_SAND_ATTACK,
                MOVE_LEER,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 558
            .species = SPECIES_PIKIPEK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 561
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 559
            .ability = ABILITY_SKILL_LINK,
#line 560
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 562
                MOVE_PECK,
                MOVE_GROWL,
                MOVE_MIRROR_MOVE,
            },
            },
            {
#line 566
            .species = SPECIES_NIDORAN_M,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 569
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 567
            .ability = ABILITY_POISON_POINT,
#line 568
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 570
                MOVE_PECK,
                MOVE_FOCUS_ENERGY,
                MOVE_POISON_STING,
                MOVE_DISABLE,
            },
            },
        },
    },
#line 575
    [TRAINER_PBL_SHAUN_LEVIATHAN_2] =
    {
#line 576
        .trainerName = _("Shaun"),
#line 577
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 578
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 579
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 581
        .doubleBattle = FALSE,
#line 580
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 583
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 582
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 585
            .species = SPECIES_BUNNELBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 585
            .heldItem = ITEM_ORAN_BERRY,
#line 588
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 586
            .ability = ABILITY_CHEEK_POUCH,
#line 587
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 589
                MOVE_DOUBLE_SLAP,
                MOVE_LEER,
                MOVE_DEFENSE_CURL,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 594
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 594
            .heldItem = ITEM_ORAN_BERRY,
#line 597
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 595
            .ability = ABILITY_CHEEK_POUCH,
#line 596
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 598
                MOVE_TACKLE,
                MOVE_BITE,
                MOVE_BIDE,
                MOVE_TEARFUL_LOOK,
            },
            },
            {
#line 603
            .species = SPECIES_SKWOVET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 603
            .heldItem = ITEM_ORAN_BERRY,
#line 606
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 604
            .ability = ABILITY_CHEEK_POUCH,
#line 605
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 607
                MOVE_TACKLE,
                MOVE_STUFF_CHEEKS,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
        },
    },
#line 612
    [TRAINER_PBL_SHAUN_LEVIATHAN_2_CHALLENGE] =
    {
#line 613
        .trainerName = _("Shaun"),
#line 614
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 615
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 616
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 618
        .doubleBattle = FALSE,
#line 617
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 620
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 619
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 622
            .species = SPECIES_BUNNELBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 622
            .heldItem = ITEM_ORAN_BERRY,
#line 625
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 623
            .ability = ABILITY_CHEEK_POUCH,
#line 624
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 626
                MOVE_DOUBLE_SLAP,
                MOVE_LEER,
                MOVE_DEFENSE_CURL,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 631
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 631
            .heldItem = ITEM_ORAN_BERRY,
#line 634
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 632
            .ability = ABILITY_CHEEK_POUCH,
#line 633
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 635
                MOVE_TACKLE,
                MOVE_BITE,
                MOVE_BIDE,
                MOVE_TEARFUL_LOOK,
            },
            },
            {
#line 640
            .species = SPECIES_SKWOVET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 640
            .heldItem = ITEM_ORAN_BERRY,
#line 643
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 641
            .ability = ABILITY_CHEEK_POUCH,
#line 642
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 644
                MOVE_TACKLE,
                MOVE_STUFF_CHEEKS,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 649
            .species = SPECIES_LECHONK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 649
            .heldItem = ITEM_ORAN_BERRY,
#line 652
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 650
            .ability = ABILITY_THICK_FAT,
#line 651
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 653
                MOVE_TACKLE,
                MOVE_DISARMING_VOICE,
                MOVE_STUFF_CHEEKS,
                MOVE_YAWN,
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
        .aiFlags = AI_FLAG_SMART_TRAINER,
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
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 908
            .heldItem = ITEM_ORAN_BERRY,
#line 911
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 909
            .ability = ABILITY_HUGE_POWER,
#line 910
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 912
                MOVE_ROLLOUT,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 915
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 915
            .heldItem = ITEM_ORAN_BERRY,
#line 918
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 916
            .ability = ABILITY_AFTERMATH,
#line 917
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 919
                MOVE_ROLLOUT,
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
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 1072
    [TRAINER_PBL_CHLOE_AND_KAYA] =
    {
#line 1073
        .trainerName = _("Chloe&Kaya"),
#line 1074
        .trainerClass = TRAINER_CLASS_TWINS,
#line 1075
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 1076
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1078
        .doubleBattle = TRUE,
#line 1077
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1080
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1083
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1081
            .ability = ABILITY_PRANKSTER,
#line 1082
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1084
                MOVE_FAIRY_WIND,
                MOVE_RAZOR_LEAF,
                MOVE_STUN_SPORE,
                MOVE_POISON_POWDER,
            },
            },
            {
#line 1089
            .species = SPECIES_PETILIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1092
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1090
            .ability = ABILITY_OWN_TEMPO,
#line 1091
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1093
                MOVE_ABSORB,
                MOVE_HELPING_HAND,
                MOVE_STUN_SPORE,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 1098
    [TRAINER_PBL_FRED] =
    {
#line 1099
        .trainerName = _("Fred"),
#line 1100
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 1101
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 1102
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1104
        .doubleBattle = FALSE,
#line 1103
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1105
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1107
            .species = SPECIES_GOSSIFLEUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1110
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1108
            .ability = ABILITY_COTTON_DOWN,
#line 1109
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1111
                MOVE_GRASS_WHISTLE,
                MOVE_RAPID_SPIN,
                MOVE_RAZOR_LEAF,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 1116
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1119
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1117
            .ability = ABILITY_INTIMIDATE,
#line 1118
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1120
                MOVE_GLARE,
                MOVE_BITE,
                MOVE_ACID,
                MOVE_DISABLE,
            },
            },
            {
#line 1125
            .species = SPECIES_BONSLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1128
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1126
            .ability = ABILITY_STURDY,
#line 1127
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1129
                MOVE_TEARFUL_LOOK,
                MOVE_ROCK_THROW,
                MOVE_LOW_KICK,
                MOVE_BLOCK,
            },
            },
            {
#line 1134
            .species = SPECIES_PANCHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1137
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1135
            .ability = ABILITY_IRON_FIST,
#line 1136
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1138
                MOVE_SEISMIC_TOSS,
                MOVE_COMET_PUNCH,
                MOVE_KARATE_CHOP,
                MOVE_TAUNT,
            },
            },
        },
    },
#line 1143
    [TRAINER_PBL_LUCIA] =
    {
#line 1144
        .trainerName = _("Lucia"),
#line 1145
        .trainerClass = TRAINER_CLASS_FAIRY_TALE_GIRL,
#line 1146
        .trainerPic = TRAINER_PIC_FAIRY_TALE_GIRL,
        .encounterMusic_gender =
#line 1147
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1149
        .doubleBattle = FALSE,
#line 1148
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1150
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1152
            .species = SPECIES_MORELULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1155
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1153
            .ability = ABILITY_EFFECT_SPORE,
#line 1154
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1156
                MOVE_ABSORB,
                MOVE_ASTONISH,
                MOVE_CONFUSE_RAY,
                MOVE_INGRAIN,
            },
            },
            {
#line 1161
            .species = SPECIES_SPRITZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1164
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1162
            .ability = ABILITY_HEALER,
#line 1163
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1165
                MOVE_FAIRY_WIND,
                MOVE_SWEET_KISS,
                MOVE_REFRESH,
                MOVE_DISARMING_VOICE,
            },
            },
            {
#line 1170
            .species = SPECIES_SWIRLIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1173
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1171
            .ability = ABILITY_SWEET_VEIL,
#line 1172
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1174
                MOVE_FAIRY_WIND,
                MOVE_YAWN,
                MOVE_COTTON_SPORE,
                MOVE_ROUND,
            },
            },
            {
#line 1179
            .species = SPECIES_MIME_JR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1182
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1180
            .ability = ABILITY_SOUNDPROOF,
#line 1181
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1183
                MOVE_TEETER_DANCE,
                MOVE_DOUBLE_SLAP,
                MOVE_CONFUSION,
                MOVE_FAKE_OUT,
            },
            },
        },
    },
#line 1188
    [TRAINER_PBL_ELLA_AND_BELLA_LEVIATHAN_4] =
    {
#line 1189
        .trainerName = _("Ella&Bella"),
#line 1190
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 1191
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 1192
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1194
        .doubleBattle = TRUE,
#line 1193
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1196
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 1195
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1198
            .species = SPECIES_NICKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1201
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1199
            .ability = ABILITY_UNBURDEN,
#line 1200
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1202
                MOVE_SNARL,
                MOVE_GROWL,
            },
            },
            {
#line 1205
            .species = SPECIES_LITLEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1208
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1206
            .ability = ABILITY_UNNERVE,
#line 1207
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1209
                MOVE_INCINERATE,
                MOVE_GROWL,
            },
            },
            {
#line 1212
            .species = SPECIES_STEENEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1212
            .heldItem = ITEM_ORAN_BERRY,
#line 1215
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1213
            .ability = ABILITY_OBLIVIOUS,
#line 1214
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1216
                MOVE_RAZOR_LEAF,
                MOVE_GRASS_WHISTLE,
            },
            },
            {
#line 1219
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1219
            .heldItem = ITEM_ORAN_BERRY,
#line 1222
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1220
            .ability = ABILITY_FRIEND_GUARD,
#line 1221
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1223
                MOVE_SWIFT,
                MOVE_DISARMING_VOICE,
            },
            },
        },
    },
#line 1226
    [TRAINER_PBL_ELLA_AND_BELLA_LEVIATHAN_4_CHALLENGE] =
    {
#line 1227
        .trainerName = _("Ella&Bella"),
#line 1228
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 1229
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 1230
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1232
        .doubleBattle = TRUE,
#line 1231
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 1234
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 1233
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1236
            .species = SPECIES_NICKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1239
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1237
            .ability = ABILITY_STAKEOUT,
#line 1238
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1240
                MOVE_SNARL,
                MOVE_QUICK_ATTACK,
                MOVE_GROWL,
            },
            },
            {
#line 1244
            .species = SPECIES_LITLEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1247
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1245
            .ability = ABILITY_UNNERVE,
#line 1246
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1248
                MOVE_INCINERATE,
                MOVE_ECHOED_VOICE,
                MOVE_GROWL,
            },
            },
            {
#line 1252
            .species = SPECIES_STEENEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1252
            .heldItem = ITEM_ORAN_BERRY,
#line 1255
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1253
            .ability = ABILITY_OBLIVIOUS,
#line 1254
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1256
                MOVE_RAZOR_LEAF,
                MOVE_RAPID_SPIN,
                MOVE_GRASS_WHISTLE,
            },
            },
            {
#line 1260
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1260
            .heldItem = ITEM_ORAN_BERRY,
#line 1263
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1261
            .ability = ABILITY_FRIEND_GUARD,
#line 1262
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1264
                MOVE_SWIFT,
                MOVE_DISARMING_VOICE,
                MOVE_SING,
            },
            },
        },
    },
#line 1268
    [TRAINER_PBL_ANNE_AND_JUNE] =
    {
#line 1269
        .trainerName = _("Anne&June"),
#line 1270
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 1271
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 1272
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1274
        .doubleBattle = TRUE,
#line 1273
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1276
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1279
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1277
            .ability = ABILITY_AFTERMATH,
#line 1278
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1280
                MOVE_SMOG,
                MOVE_SCREECH,
                MOVE_POISON_GAS,
                MOVE_BITE,
            },
            },
            {
#line 1285
            .species = SPECIES_GLAMEOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1288
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1286
            .ability = ABILITY_LIMBER,
#line 1287
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1289
                MOVE_CHARM,
                MOVE_QUICK_ATTACK,
                MOVE_FEINT_ATTACK,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 1294
            .species = SPECIES_GOTHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1297
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1295
            .ability = ABILITY_TELEPATHY,
#line 1296
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1298
                MOVE_CONFUSION,
                MOVE_DOUBLE_SLAP,
                MOVE_FAKE_OUT,
                MOVE_TICKLE,
            },
            },
            {
#line 1303
            .species = SPECIES_SOLOSIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1306
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1304
            .ability = ABILITY_MAGIC_GUARD,
#line 1305
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1307
                MOVE_CONFUSION,
                MOVE_NIGHT_SHADE,
                MOVE_ROLLOUT,
                MOVE_RECOVER,
            },
            },
        },
    },
#line 1312
    [TRAINER_PBL_NOVA_AND_CORA] =
    {
#line 1313
        .trainerName = _("Nova&Cora"),
#line 1314
        .trainerClass = TRAINER_CLASS_TWINS,
#line 1315
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 1316
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1318
        .doubleBattle = TRUE,
#line 1317
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1320
            .species = SPECIES_HATENNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1323
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1321
            .ability = ABILITY_HEALER,
#line 1322
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1324
                MOVE_PLAY_NICE,
                MOVE_LIFE_DEW,
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
            },
            },
            {
#line 1329
            .species = SPECIES_IMPIDIMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1332
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1330
            .ability = ABILITY_PICKPOCKET,
#line 1331
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1333
                MOVE_CONFIDE,
                MOVE_FLATTER,
                MOVE_FAKE_OUT,
                MOVE_ASSURANCE,
            },
            },
        },
    },
#line 1338
    [TRAINER_PBL_CLINTON] =
    {
#line 1339
        .trainerName = _("Clinton"),
#line 1340
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1341
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1342
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1344
        .doubleBattle = FALSE,
#line 1343
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1345
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1347
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1350
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1348
            .ability = ABILITY_TRACE,
#line 1349
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1351
                MOVE_CONFUSION,
                MOVE_SHADOW_SNEAK,
                MOVE_TELEPORT,
                MOVE_MAGICAL_LEAF,
            },
            },
            {
#line 1356
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1359
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1357
            .ability = ABILITY_WATER_ABSORB,
#line 1358
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1360
                MOVE_LEECH_SEED,
                MOVE_DISABLE,
                MOVE_MAGICAL_LEAF,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 1365
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1368
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1366
            .ability = ABILITY_FLAME_BODY,
#line 1367
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1369
                MOVE_YAWN,
                MOVE_ROCK_THROW,
                MOVE_CLEAR_SMOG,
                MOVE_INCINERATE,
            },
            },
            {
#line 1374
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1377
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1375
            .ability = ABILITY_THICK_FAT,
#line 1376
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1378
                MOVE_ICE_SHARD,
                MOVE_FAKE_OUT,
                MOVE_HEADBUTT,
                MOVE_WATER_GUN,
            },
            },
        },
    },
#line 1383
    [TRAINER_PBL_REBECCA] =
    {
#line 1384
        .trainerName = _("Rebecca"),
#line 1385
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 1386
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 1387
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1389
        .doubleBattle = FALSE,
#line 1388
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1390
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1392
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1395
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1393
            .ability = ABILITY_FLASH_FIRE,
#line 1394
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1396
                MOVE_BABY_DOLL_EYES,
                MOVE_DISABLE,
                MOVE_QUICK_ATTACK,
                MOVE_INCINERATE,
            },
            },
            {
#line 1401
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1404
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1402
            .ability = ABILITY_GRASS_PELT,
#line 1403
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1405
                MOVE_VINE_WHIP,
                MOVE_ROLLOUT,
                MOVE_LEECH_SEED,
                MOVE_RAZOR_LEAF,
            },
            },
            {
#line 1410
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1413
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1411
            .ability = ABILITY_HYPER_CUTTER,
#line 1412
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1414
                MOVE_ROCK_SMASH,
                MOVE_BUBBLE,
                MOVE_LEER,
                MOVE_DIZZY_PUNCH,
            },
            },
            {
#line 1419
            .species = SPECIES_PAWMI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1422
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1420
            .ability = ABILITY_STATIC,
#line 1421
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1423
                MOVE_THUNDER_SHOCK,
                MOVE_BITE,
                MOVE_FAKE_OUT,
                MOVE_SWEET_KISS,
            },
            },
        },
    },
#line 1428
    [TRAINER_PBL_RYAN] =
    {
#line 1429
        .trainerName = _("Ryan"),
#line 1430
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 1431
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 1432
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1434
        .doubleBattle = FALSE,
#line 1433
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1435
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1437
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1440
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1438
            .ability = ABILITY_FLASH_FIRE,
#line 1439
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1441
                MOVE_DEFENSE_CURL,
                MOVE_BUG_BITE,
                MOVE_ROLLOUT,
                MOVE_BITE,
            },
            },
            {
#line 1446
            .species = SPECIES_DEERLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1449
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1447
            .ability = ABILITY_SERENE_GRACE,
#line 1448
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1450
                MOVE_CHARM,
                MOVE_LEECH_SEED,
                MOVE_FEINT_ATTACK,
                MOVE_DOUBLE_KICK,
            },
            },
            {
#line 1455
            .species = SPECIES_STUFFUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1456
            .ability = ABILITY_FLUFFY,
#line 1457
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1459
                MOVE_BRUTAL_SWING,
                MOVE_BIDE,
                MOVE_FORCE_PALM,
                MOVE_STOMP,
            },
            },
            {
#line 1464
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1467
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1465
            .ability = ABILITY_STATIC,
#line 1466
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1468
                MOVE_QUICK_ATTACK,
                MOVE_SPARK,
                MOVE_BITE,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 1473
    [TRAINER_PBL_CAITLYN] =
    {
#line 1474
        .trainerName = _("Caitlyn"),
#line 1475
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1476
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 1477
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1479
        .doubleBattle = FALSE,
#line 1478
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1480
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1482
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1485
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1483
            .ability = ABILITY_INTIMIDATE,
#line 1484
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1486
                MOVE_BITE,
                MOVE_RAGE,
                MOVE_FAKE_TEARS,
                MOVE_COVET,
            },
            },
            {
#line 1491
            .species = SPECIES_PUMPKABOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1492
            .ability = ABILITY_PICKUP,
#line 1493
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1495
                MOVE_RAZOR_LEAF,
                MOVE_LEECH_SEED,
                MOVE_DISABLE,
                MOVE_SHADOW_SNEAK,
            },
            },
            {
#line 1500
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1503
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1501
            .ability = ABILITY_AFTERMATH,
#line 1502
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1504
                MOVE_DOUBLE_SLAP,
                MOVE_ROLLOUT,
                MOVE_SLUDGE,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 1509
            .species = SPECIES_ESPURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1512
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1510
            .ability = ABILITY_OWN_TEMPO,
#line 1511
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1513
                MOVE_TICKLE,
                MOVE_CONFUSION,
                MOVE_DISARMING_VOICE,
                MOVE_YAWN,
            },
            },
        },
    },
#line 1518
    [TRAINER_PBL_KENNETH] =
    {
#line 1519
        .trainerName = _("Kenneth"),
#line 1520
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 1521
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 1522
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1524
        .doubleBattle = FALSE,
#line 1523
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1525
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1527
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1530
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1528
            .ability = ABILITY_STURDY,
#line 1529
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1531
                MOVE_FLAIL,
                MOVE_ROLLOUT,
                MOVE_SLAM,
                MOVE_BULLDOZE,
            },
            },
            {
#line 1536
            .species = SPECIES_PHANTUMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1539
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1537
            .ability = ABILITY_NATURAL_CURE,
#line 1538
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1540
                MOVE_BRANCH_POKE,
                MOVE_LEECH_SEED,
                MOVE_DISABLE,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 1545
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1548
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1546
            .ability = ABILITY_CUD_CHEW,
#line 1547
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1549
                MOVE_MUD_SLAP,
                MOVE_ACID_SPRAY,
                MOVE_STUFF_CHEEKS,
                MOVE_SLUDGE,
            },
            },
            {
#line 1554
            .species = SPECIES_MUNNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1557
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1555
            .ability = ABILITY_SYNCHRONIZE,
#line 1556
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1558
                MOVE_LUCKY_CHANT,
                MOVE_HYPNOSIS,
                MOVE_IMPRISON,
                MOVE_PSYBEAM,
            },
            },
        },
    },
#line 1563
    [TRAINER_PBL_KEVIN] =
    {
#line 1564
        .trainerName = _("Kevin"),
#line 1565
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1566
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 1567
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1569
        .doubleBattle = FALSE,
#line 1568
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1570
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1572
            .species = SPECIES_GRUBBIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1575
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1573
            .ability = ABILITY_SWARM,
#line 1574
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1576
                MOVE_STRING_SHOT,
                MOVE_VISE_GRIP,
                MOVE_BUG_BITE,
                MOVE_BITE,
            },
            },
            {
#line 1581
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1582
            .ability = ABILITY_SWARM,
#line 1583
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1585
                MOVE_RAZOR_LEAF,
                MOVE_BUG_BITE,
                MOVE_SYNTHESIS,
                MOVE_FLAIL,
            },
            },
            {
#line 1590
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1593
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1591
            .ability = ABILITY_COMPOUND_EYES,
#line 1592
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1594
                MOVE_FURY_SWIPES,
                MOVE_BUG_BITE,
                MOVE_MUD_SLAP,
                MOVE_ABSORB,
            },
            },
            {
#line 1599
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1602
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1600
            .ability = ABILITY_POISON_POINT,
#line 1601
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1603
                MOVE_SCREECH,
                MOVE_BUG_BITE,
                MOVE_BITE,
                MOVE_TWINEEDLE,
            },
            },
        },
    },
#line 1608
    [TRAINER_PBL_MARIA_LEVIATHAN_5] =
    {
#line 1609
        .trainerName = _("Maria"),
#line 1610
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 1611
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 1612
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1614
        .doubleBattle = FALSE,
#line 1613
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1616
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 1615
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1618
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1618
            .heldItem = ITEM_EVIOLITE,
#line 1621
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1619
            .ability = ABILITY_SERENE_GRACE,
#line 1620
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1622
                MOVE_HEADBUTT,
                MOVE_ANCIENT_POWER,
                MOVE_GLARE,
            },
            },
        },
    },
#line 1626
    [TRAINER_PBL_MARIA_LEVIATHAN_5_BRUTAL] =
    {
#line 1627
        .trainerName = _("Maria"),
#line 1628
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 1629
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 1631
=======
        .encounterMusic_gender = 
#line 1630
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1632
        .doubleBattle = FALSE,
#line 1631
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 1634
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 1633
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1636
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1636
            .heldItem = ITEM_EVIOLITE,
#line 1640
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1637
            .ability = ABILITY_SERENE_GRACE,
#line 1639
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 1638
            .teraType = TYPE_NORMAL,
            .moves = {
#line 1641
                MOVE_HEADBUTT,
                MOVE_ANCIENT_POWER,
                MOVE_GLARE,
                MOVE_ROOST,
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
<<<<<<< HEAD
        .encounterMusic_gender =
#line 1652
=======
        .encounterMusic_gender = 
#line 1650
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
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
<<<<<<< HEAD
        .encounterMusic_gender =
#line 1696
=======
        .encounterMusic_gender = 
#line 1694
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
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
<<<<<<< HEAD
        .encounterMusic_gender =
#line 1732
=======
        .encounterMusic_gender = 
#line 1730
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
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
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1747
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1745
            .ability = ABILITY_LEAF_GUARD,
#line 1746
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1748
                MOVE_SLEEP_POWDER,
                MOVE_MEGA_DRAIN,
                MOVE_HELPING_HAND,
                MOVE_WORRY_SEED,
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
<<<<<<< HEAD
        .encounterMusic_gender =
#line 1777
=======
        .encounterMusic_gender = 
#line 1775
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
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
<<<<<<< HEAD
        .encounterMusic_gender =
#line 1813
=======
        .encounterMusic_gender = 
#line 1811
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
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
<<<<<<< HEAD
        .encounterMusic_gender =
#line 1858
=======
        .encounterMusic_gender = 
#line 1856
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
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
            .species = SPECIES_TYROGUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1903
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1901
            .ability = ABILITY_GUTS,
#line 1902
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1904
                MOVE_MACH_PUNCH,
                MOVE_RAPID_SPIN,
                MOVE_COUNTER,
                MOVE_VACUUM_WAVE,
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
<<<<<<< HEAD
        .encounterMusic_gender =
#line 1915
=======
        .encounterMusic_gender = 
#line 1913
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
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
<<<<<<< HEAD
        .encounterMusic_gender =
#line 1941
=======
        .encounterMusic_gender = 
#line 1939
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
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
#line 1944
            .heldItem = ITEM_ORAN_BERRY,
#line 1947
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1945
            .ability = ABILITY_GOOEY,
#line 1946
            .lvl = 16,
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
#line 1953
            .heldItem = ITEM_ORAN_BERRY,
#line 1956
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1954
            .ability = ABILITY_HYDRATION,
#line 1955
            .lvl = 16,
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
#line 1962
            .heldItem = ITEM_ORAN_BERRY,
#line 1965
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1963
            .ability = ABILITY_SWIFT_SWIM,
#line 1964
            .lvl = 16,
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
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1972
            .ability = ABILITY_REGENERATOR,
#line 1973
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1975
                MOVE_WATER_PULSE,
                MOVE_HORN_ATTACK,
                MOVE_PECK,
                MOVE_AQUA_RING,
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
<<<<<<< HEAD
        .encounterMusic_gender =
#line 1986
=======
        .encounterMusic_gender = 
#line 1984
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
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
            .lvl = 16,
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
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1998
            .ability = ABILITY_SWIFT_SWIM,
#line 1999
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2001
                MOVE_CHILLING_WATER,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 2004
    [TRAINER_PBL_ZACK_AND_COBY_LEVIATHAN_6_CHALLENGE] =
    {
#line 2005
        .trainerName = _("Zack&Coby"),
#line 2006
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 2007
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2010
=======
        .encounterMusic_gender = 
#line 2008
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2010
        .doubleBattle = TRUE,
#line 2009
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 2012
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2011
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2014
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2014
            .heldItem = ITEM_ORAN_BERRY,
#line 2017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2015
            .ability = ABILITY_SWIFT_SWIM,
#line 2016
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2018
                MOVE_CHILLING_WATER,
                MOVE_DRAINING_KISS,
                MOVE_HEAL_PULSE,
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
            .ability = ABILITY_SWIFT_SWIM,
#line 2024
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2026
                MOVE_CHILLING_WATER,
                MOVE_TAILWIND,
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 2031
    [TRAINER_PBL_MILLIE] =
    {
#line 2032
        .trainerName = _("Millie"),
#line 2033
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 2034
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2037
=======
        .encounterMusic_gender = 
#line 2035
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2037
        .doubleBattle = FALSE,
#line 2036
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2038
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2040
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2043
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2041
            .ability = ABILITY_INNER_FOCUS,
#line 2042
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2044
                MOVE_FAKE_OUT,
                MOVE_FORCE_PALM,
                MOVE_ME_FIRST,
                MOVE_VITAL_THROW,
            },
            },
            {
#line 2049
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2052
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2050
            .ability = ABILITY_VITAL_SPIRIT,
#line 2051
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2053
                MOVE_SWAGGER,
                MOVE_RETALIATE,
                MOVE_KARATE_CHOP,
                MOVE_ASSURANCE,
            },
            },
            {
#line 2058
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2061
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2059
            .ability = ABILITY_PURE_POWER,
#line 2060
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2062
                MOVE_FEINT,
                MOVE_SECRET_POWER,
                MOVE_FORCE_PALM,
                MOVE_PSYBEAM,
            },
            },
            {
#line 2067
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2070
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2068
            .ability = ABILITY_IRON_FIST,
#line 2069
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2071
                MOVE_ROCK_THROW,
                MOVE_WAKE_UP_SLAP,
                MOVE_CHIP_AWAY,
                MOVE_MACH_PUNCH,
            },
            },
        },
    },
#line 2076
    [TRAINER_PBL_JAMAL] =
    {
#line 2077
        .trainerName = _("Jamal"),
#line 2078
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2079
        .trainerPic = TRAINER_PIC_CAMPER,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2082
=======
        .encounterMusic_gender = 
#line 2080
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2082
        .doubleBattle = FALSE,
#line 2081
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2083
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2085
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2088
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2086
            .ability = ABILITY_OBLIVIOUS,
#line 2087
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2089
                MOVE_BULLDOZE,
                MOVE_YAWN,
                MOVE_FLAME_WHEEL,
                MOVE_MAGNITUDE,
            },
            },
            {
#line 2094
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2097
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2095
            .ability = ABILITY_INNER_FOCUS,
#line 2096
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2098
                MOVE_POISON_FANG,
                MOVE_QUICK_GUARD,
                MOVE_WING_ATTACK,
                MOVE_SWIFT,
            },
            },
            {
#line 2103
            .species = SPECIES_FOMANTIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2106
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2104
            .ability = ABILITY_LEAF_GUARD,
#line 2105
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2107
                MOVE_WORRY_SEED,
                MOVE_RAZOR_LEAF,
                MOVE_SYNTHESIS,
                MOVE_SLASH,
            },
            },
            {
#line 2112
            .species = SPECIES_BUIZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2115
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2113
            .ability = ABILITY_WATER_VEIL,
#line 2114
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2116
                MOVE_BITE,
                MOVE_AQUA_JET,
                MOVE_SONIC_BOOM,
                MOVE_PURSUIT,
            },
            },
        },
    },
#line 2121
    [TRAINER_PBL_PAIGE] =
    {
#line 2122
        .trainerName = _("Paige"),
#line 2123
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 2124
        .trainerPic = TRAINER_PIC_AROMA_LADY,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2127
=======
        .encounterMusic_gender = 
#line 2125
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2127
        .doubleBattle = FALSE,
#line 2126
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2128
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2130
            .species = SPECIES_COMBEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2133
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2131
            .ability = ABILITY_HONEY_GATHER,
#line 2132
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2134
                MOVE_GUST,
                MOVE_SWEET_SCENT,
                MOVE_STRUGGLE_BUG,
                MOVE_BUG_BITE,
            },
            },
            {
#line 2139
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2140
            .ability = ABILITY_CHLOROPHYLL,
#line 2141
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2143
                MOVE_CONFUSION,
                MOVE_MEGA_DRAIN,
                MOVE_POISON_POWDER,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 2148
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2151
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2149
            .ability = ABILITY_EFFECT_SPORE,
#line 2150
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2152
                MOVE_HEADBUTT,
                MOVE_MEGA_DRAIN,
                MOVE_FAKE_TEARS,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 2157
            .species = SPECIES_CUTIEFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2160
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2158
            .ability = ABILITY_SHIELD_DUST,
#line 2159
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2161
                MOVE_STRUGGLE_BUG,
                MOVE_STUN_SPORE,
                MOVE_SWITCHEROO,
                MOVE_DRAINING_KISS,
            },
            },
        },
    },
#line 2166
    [TRAINER_PBL_SETH] =
    {
#line 2167
        .trainerName = _("Seth"),
#line 2168
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2169
        .trainerPic = TRAINER_PIC_RICH_BOY,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2172
=======
        .encounterMusic_gender = 
#line 2170
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2172
        .doubleBattle = FALSE,
#line 2171
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2173
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2175
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2178
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2176
            .ability = ABILITY_PRANKSTER,
#line 2177
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2179
                MOVE_FLATTER,
                MOVE_SPARK,
                MOVE_SWIFT,
                MOVE_NUZZLE,
            },
            },
            {
#line 2184
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2187
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2185
            .ability = ABILITY_QUICK_FEET,
#line 2186
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2188
                MOVE_YAWN,
                MOVE_COVET,
                MOVE_METAL_CLAW,
                MOVE_CHIP_AWAY,
            },
            },
            {
#line 2193
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2196
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2194
            .ability = ABILITY_PICKUP,
#line 2195
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2197
                MOVE_FAKE_OUT,
                MOVE_ASTONISH,
                MOVE_QUICK_GUARD,
                MOVE_SLAM,
            },
            },
            {
#line 2202
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2205
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2203
            .ability = ABILITY_UNBURDEN,
#line 2204
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2206
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
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2217
=======
        .encounterMusic_gender = 
#line 2215
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
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
#line 2238
    [TRAINER_PBL_PETER] =
    {
#line 2239
        .trainerName = _("Peter"),
#line 2240
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 2241
        .trainerPic = TRAINER_PIC_YOUNGSTER,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2244
=======
        .encounterMusic_gender = 
#line 2242
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2244
        .doubleBattle = FALSE,
#line 2243
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2245
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2247
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2250
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2248
            .ability = ABILITY_CHLOROPHYLL,
#line 2249
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2251
                MOVE_CLEAR_SMOG,
                MOVE_RAZOR_LEAF,
                MOVE_ACID_SPRAY,
                MOVE_MAGICAL_LEAF,
            },
            },
            {
#line 2256
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2259
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2257
            .ability = ABILITY_SWIFT_SWIM,
#line 2258
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2260
                MOVE_STRUGGLE_BUG,
                MOVE_BUBBLE_BEAM,
                MOVE_PSYBEAM,
                MOVE_SIGNAL_BEAM,
            },
            },
        },
    },
#line 2265
    [TRAINER_PBL_WHITAKER] =
    {
#line 2266
        .trainerName = _("Whitaker"),
#line 2267
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 2268
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2271
=======
        .encounterMusic_gender = 
#line 2269
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 2271
        .doubleBattle = FALSE,
#line 2270
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2272
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2274
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2277
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2275
            .ability = ABILITY_SNIPER,
#line 2276
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2278
                MOVE_FURY_ATTACK,
                MOVE_QUICK_ATTACK,
                MOVE_WING_ATTACK,
                MOVE_PURSUIT,
            },
            },
            {
#line 2283
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2284
            .ability = ABILITY_MAGIC_BOUNCE,
#line 2285
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2287
                MOVE_NIGHT_SHADE,
                MOVE_REFRESH,
                MOVE_AIR_CUTTER,
                MOVE_OMINOUS_WIND,
            },
            },
            {
#line 2292
            .species = SPECIES_FLITTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2295
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2293
            .ability = ABILITY_FRISK,
#line 2294
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2296
                MOVE_DISARMING_VOICE,
                MOVE_BABY_DOLL_EYES,
                MOVE_PSYBEAM,
                MOVE_PLUCK,
            },
            },
            {
#line 2301
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2304
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2302
            .ability = ABILITY_SUPER_LUCK,
#line 2303
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2305
                MOVE_AERIAL_ACE,
                MOVE_QUICK_ATTACK,
                MOVE_FEATHER_DANCE,
                MOVE_AIR_CUTTER,
            },
            },
        },
    },
#line 2310
    [TRAINER_PBL_BETTY_LEVIATHAN_7] =
    {
#line 2311
        .trainerName = _("Betty"),
#line 2312
        .trainerClass = TRAINER_CLASS_LADY,
#line 2313
        .trainerPic = TRAINER_PIC_LADY,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2316
=======
        .encounterMusic_gender = 
#line 2314
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2316
        .doubleBattle = TRUE,
#line 2315
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2318
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2317
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2320
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2320
            .heldItem = ITEM_SITRUS_BERRY,
#line 2323
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2321
            .ability = ABILITY_ANGER_SHELL,
#line 2322
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2324
                MOVE_ROCK_TOMB,
                MOVE_METAL_CLAW,
                MOVE_ROCK_SMASH,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 2329
            .species = SPECIES_DEDENNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2329
            .heldItem = ITEM_SITRUS_BERRY,
#line 2332
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2330
            .ability = ABILITY_CHEEK_POUCH,
#line 2331
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2333
                MOVE_PARABOLIC_CHARGE,
                MOVE_DRAINING_KISS,
                MOVE_NUZZLE,
                MOVE_CHARGE_BEAM,
            },
            },
        },
    },
#line 2338
    [TRAINER_PBL_BETTY_LEVIATHAN_7_CHALLENGE] =
    {
#line 2339
        .trainerName = _("Betty"),
#line 2340
        .trainerClass = TRAINER_CLASS_LADY,
#line 2341
        .trainerPic = TRAINER_PIC_LADY,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2344
=======
        .encounterMusic_gender = 
#line 2342
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2344
        .doubleBattle = TRUE,
#line 2343
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 2346
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2345
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2348
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2348
            .heldItem = ITEM_SITRUS_BERRY,
#line 2351
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2349
            .ability = ABILITY_ANGER_SHELL,
#line 2350
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2352
                MOVE_ROCK_TOMB,
                MOVE_METAL_CLAW,
                MOVE_ROCK_SMASH,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 2357
            .species = SPECIES_DEDENNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2357
            .heldItem = ITEM_SITRUS_BERRY,
#line 2360
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2358
            .ability = ABILITY_CHEEK_POUCH,
#line 2359
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2361
                MOVE_PARABOLIC_CHARGE,
                MOVE_DRAINING_KISS,
                MOVE_NUZZLE,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 2366
            .species = SPECIES_DRAMPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2366
            .heldItem = ITEM_SITRUS_BERRY,
#line 2369
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2367
            .ability = ABILITY_BERSERK,
#line 2368
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2370
                MOVE_DRAGON_BREATH,
                MOVE_GLARE,
                MOVE_NATURAL_GIFT,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 2375
    [TRAINER_PBL_JIMMY] =
    {
#line 2376
        .trainerName = _("Jimmy"),
#line 2377
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 2378
        .trainerPic = TRAINER_PIC_COLLECTOR,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2381
=======
        .encounterMusic_gender = 
#line 2379
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2381
        .doubleBattle = FALSE,
#line 2380
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2382
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2384
            .species = SPECIES_NOIBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2387
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2385
            .ability = ABILITY_INFILTRATOR,
#line 2386
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2388
                MOVE_WING_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_BITE,
                MOVE_ROOST,
            },
            },
            {
#line 2393
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2396
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2394
            .ability = ABILITY_SWIFT_SWIM,
#line 2395
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2397
                MOVE_SPLASH,
                MOVE_TACKLE,
                MOVE_FLAIL,
            },
            },
            {
#line 2401
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2404
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2402
            .ability = ABILITY_CLEAR_BODY,
#line 2403
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2405
                MOVE_TACKLE,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 2408
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2411
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2409
            .ability = ABILITY_SAND_VEIL,
#line 2410
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2412
                MOVE_METAL_CLAW,
                MOVE_DRAGON_BREATH,
                MOVE_BITE,
                MOVE_BULLDOZE,
            },
            },
        },
    },
#line 2417
    [TRAINER_PBL_EMILIANO] =
    {
#line 2418
        .trainerName = _("Emiliano"),
#line 2419
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2420
        .trainerPic = TRAINER_PIC_HIKER,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2423
=======
        .encounterMusic_gender = 
#line 2421
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2423
        .doubleBattle = FALSE,
#line 2422
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2424
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2426
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2429
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2427
            .ability = ABILITY_STURDY,
#line 2428
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2430
                MOVE_METAL_CLAW,
                MOVE_ROCK_TOMB,
                MOVE_METAL_SOUND,
                MOVE_HEADBUTT,
            },
            },
            {
#line 2435
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2438
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2436
            .ability = ABILITY_STURDY,
#line 2437
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2439
                MOVE_SMACK_DOWN,
                MOVE_MUD_SLAP,
                MOVE_MAGNITUDE,
                MOVE_HEADBUTT,
            },
            },
            {
#line 2444
            .species = SPECIES_CUFANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2447
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2445
            .ability = ABILITY_SHEER_FORCE,
#line 2446
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2448
                MOVE_ROLLOUT,
                MOVE_STOMP,
                MOVE_BULLDOZE,
                MOVE_SLAM,
            },
            },
            {
#line 2453
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2456
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2454
            .ability = ABILITY_NO_GUARD,
#line 2455
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2457
                MOVE_SEISMIC_TOSS,
                MOVE_LOW_SWEEP,
                MOVE_STRENGTH,
                MOVE_VITAL_THROW,
            },
            },
        },
    },
#line 2462
    [TRAINER_PBL_BECKHAM] =
    {
#line 2463
        .trainerName = _("Beckham"),
#line 2464
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2465
        .trainerPic = TRAINER_PIC_POKEMANIAC,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2468
=======
        .encounterMusic_gender = 
#line 2466
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2468
        .doubleBattle = FALSE,
#line 2467
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2469
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2471
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2474
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2472
            .ability = ABILITY_OWN_TEMPO,
#line 2473
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2475
                MOVE_YAWN,
                MOVE_DISABLE,
                MOVE_CONFUSION,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 2480
            .species = SPECIES_SALANDIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2483
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2481
            .ability = ABILITY_CORROSION,
#line 2482
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2484
                MOVE_MUD_SLAP,
                MOVE_FAKE_OUT,
                MOVE_POISON_FANG,
                MOVE_INCINERATE,
            },
            },
            {
#line 2489
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2492
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2490
            .ability = ABILITY_BATTLE_ARMOR,
#line 2491
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2493
                MOVE_BONE_CLUB,
                MOVE_FOCUS_ENERGY,
                MOVE_DOUBLE_KICK,
                MOVE_BONE_RUSH,
            },
            },
            {
#line 2498
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2501
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2499
            .ability = ABILITY_UNAWARE,
#line 2500
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2502
                MOVE_DISABLE,
                MOVE_STOMP,
                MOVE_WRAP,
                MOVE_MAGNITUDE,
            },
            },
        },
    },
#line 2507
    [TRAINER_PBL_KAREN] =
    {
#line 2508
        .trainerName = _("Karen"),
#line 2509
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 2510
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2513
=======
        .encounterMusic_gender = 
#line 2511
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2513
        .doubleBattle = FALSE,
#line 2512
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2514
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2516
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2519
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2517
            .ability = ABILITY_CONTRARY,
#line 2518
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2520
                MOVE_SMELLING_SALTS,
                MOVE_FEINT_ATTACK,
                MOVE_PSYBEAM,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 2525
    [TRAINER_PBL_JAYDEN] =
    {
#line 2526
        .trainerName = _("Jayden"),
#line 2527
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2528
        .trainerPic = TRAINER_PIC_HIKER,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2531
=======
        .encounterMusic_gender = 
#line 2529
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2531
        .doubleBattle = FALSE,
#line 2530
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2532
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2534
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2537
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2535
            .ability = ABILITY_STURDY,
#line 2536
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2538
                MOVE_ROLLOUT,
                MOVE_MAGNITUDE,
                MOVE_SMACK_DOWN,
                MOVE_BULLDOZE,
            },
            },
            {
#line 2543
            .species = SPECIES_ROLYCOLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2544
            .ability = ABILITY_STEAM_ENGINE,
#line 2545
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2547
                MOVE_SMACK_DOWN,
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_INCINERATE,
            },
            },
            {
#line 2552
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2555
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2553
            .ability = ABILITY_PURIFYING_SALT,
#line 2554
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2556
                MOVE_MUD_SHOT,
                MOVE_HEADBUTT,
                MOVE_SMACK_DOWN,
                MOVE_RECOVER,
            },
            },
            {
#line 2561
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2564
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2562
            .ability = ABILITY_SOLID_ROCK,
#line 2563
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2565
                MOVE_STRUGGLE_BUG,
                MOVE_ACID,
                MOVE_ROCK_THROW,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 2570
    [TRAINER_PBL_NEIL] =
    {
#line 2571
        .trainerName = _("Neil"),
#line 2572
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 2573
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2576
=======
        .encounterMusic_gender = 
#line 2574
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2576
        .doubleBattle = FALSE,
#line 2575
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2577
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2579
            .species = SPECIES_RELLOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2580
            .ability = ABILITY_COMPOUND_EYES,
#line 2581
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2583
                MOVE_STRUGGLE_BUG,
                MOVE_MUD_SHOT,
                MOVE_BUG_BITE,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 2588
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2591
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2589
            .ability = ABILITY_LEVITATE,
#line 2590
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2592
                MOVE_ROCK_TOMB,
                MOVE_RAPID_SPIN,
                MOVE_ANCIENT_POWER,
                MOVE_PSYBEAM,
            },
            },
            {
#line 2597
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2600
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2598
            .ability = ABILITY_MUMMY,
#line 2599
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2601
                MOVE_IMPRISON,
                MOVE_HEX,
                MOVE_CURSE,
                MOVE_FAKE_TEARS,
            },
            },
            {
#line 2606
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2609
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2607
            .ability = ABILITY_PLUS,
#line 2608
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2610
                MOVE_CHARGE,
                MOVE_METAL_SOUND,
                MOVE_SCREECH,
                MOVE_MIRROR_SHOT,
            },
            },
        },
    },
#line 2615
    [TRAINER_PBL_TAMARA] =
    {
#line 2616
        .trainerName = _("Tamara"),
#line 2617
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 2618
        .trainerPic = TRAINER_PIC_PICNICKER,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2621
=======
        .encounterMusic_gender = 
#line 2619
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2621
        .doubleBattle = FALSE,
#line 2620
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2622
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2624
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2627
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2625
            .ability = ABILITY_STORM_DRAIN,
#line 2626
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2628
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_HIDDEN_POWER,
                MOVE_SLUDGE,
            },
            },
            {
#line 2633
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2636
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2634
            .ability = ABILITY_SERENE_GRACE,
#line 2635
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2637
                MOVE_HEART_STAMP,
                MOVE_FLATTER,
                MOVE_ASSURANCE,
                MOVE_AIR_CUTTER,
            },
            },
            {
#line 2642
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2645
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2643
            .ability = ABILITY_INSOMNIA,
#line 2644
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2646
                MOVE_POISON_GAS,
                MOVE_HEADBUTT,
                MOVE_WAKE_UP_SLAP,
                MOVE_PSYBEAM,
            },
            },
            {
#line 2651
            .species = SPECIES_ROCKRUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2652
            .ability = ABILITY_VITAL_SPIRIT,
#line 2653
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2655
                MOVE_BITE,
                MOVE_ROAR,
                MOVE_ROCK_TOMB,
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 2660
    [TRAINER_PBL_ALISTAIR_LEVIATHAN_8] =
    {
#line 2661
        .trainerName = _("Alistair"),
#line 2662
        .trainerClass = TRAINER_CLASS_ROUGHNECK,
#line 2663
        .trainerPic = TRAINER_PIC_ROUGHNECK,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2666
=======
        .encounterMusic_gender = 
#line 2664
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2666
        .doubleBattle = FALSE,
#line 2665
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2668
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2667
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2670
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2670
            .heldItem = ITEM_POISON_BARB,
#line 2673
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2671
            .ability = ABILITY_POISON_TOUCH,
#line 2672
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2674
                MOVE_SLUDGE,
                MOVE_POISON_GAS,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2679
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2679
            .heldItem = ITEM_SHARP_BEAK,
#line 2682
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2680
            .ability = ABILITY_AFTERMATH,
#line 2681
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2683
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_DEFOG,
            },
            },
            {
#line 2688
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2688
            .heldItem = ITEM_BLACK_BELT,
#line 2691
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2689
            .ability = ABILITY_POISON_TOUCH,
#line 2690
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2692
                MOVE_VENOSHOCK,
                MOVE_VACUUM_WAVE,
                MOVE_FAKE_OUT,
                MOVE_THIEF,
            },
            },
            {
#line 2697
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2697
            .heldItem = ITEM_SITRUS_BERRY,
#line 2700
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2698
            .ability = ABILITY_STRONG_JAW,
#line 2699
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2701
                MOVE_BITE,
                MOVE_THUNDER_FANG,
                MOVE_FIRE_FANG,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 2706
    [TRAINER_PBL_ALISTAIR_LEVIATHAN_8_CHALLENGE] =
    {
#line 2707
        .trainerName = _("Alistair"),
#line 2708
        .trainerClass = TRAINER_CLASS_ROUGHNECK,
#line 2709
        .trainerPic = TRAINER_PIC_ROUGHNECK,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2712
=======
        .encounterMusic_gender = 
#line 2710
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2712
        .doubleBattle = FALSE,
#line 2711
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 2714
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2713
        .randomLead = FALSE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2716
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2716
            .heldItem = ITEM_POISON_BARB,
#line 2719
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2717
            .ability = ABILITY_POISON_TOUCH,
#line 2718
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2720
                MOVE_SLUDGE,
                MOVE_POISON_GAS,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2725
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2725
            .heldItem = ITEM_SHARP_BEAK,
#line 2728
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2726
            .ability = ABILITY_AFTERMATH,
#line 2727
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2729
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_DEFOG,
            },
            },
            {
#line 2734
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2734
            .heldItem = ITEM_BLACK_BELT,
#line 2737
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2735
            .ability = ABILITY_POISON_TOUCH,
#line 2736
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2738
                MOVE_VENOSHOCK,
                MOVE_VACUUM_WAVE,
                MOVE_FAKE_OUT,
                MOVE_THIEF,
            },
            },
            {
#line 2743
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2743
            .heldItem = ITEM_SITRUS_BERRY,
#line 2746
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2744
            .ability = ABILITY_STRONG_JAW,
#line 2745
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2747
                MOVE_BITE,
                MOVE_THUNDER_FANG,
                MOVE_FIRE_FANG,
                MOVE_ICE_FANG,
            },
            },
            {
#line 2752
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2752
            .heldItem = ITEM_EVIOLITE,
#line 2755
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2753
            .ability = ABILITY_SAP_SIPPER,
#line 2754
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2756
                MOVE_DOUBLE_HIT,
                MOVE_PSYBEAM,
                MOVE_CHARGE_BEAM,
                MOVE_TRAILBLAZE,
            },
            },
        },
    },
#line 2761
    [TRAINER_PBL_COOPER] =
    {
#line 2762
        .trainerName = _("Cooper"),
#line 2763
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 2764
        .trainerPic = TRAINER_PIC_NINJA_BOY,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2767
=======
        .encounterMusic_gender = 
#line 2765
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2767
        .doubleBattle = FALSE,
#line 2766
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2768
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2770
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2773
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2771
            .ability = ABILITY_EFFECT_SPORE,
#line 2772
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2774
                MOVE_GASTRO_ACID,
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 2779
            .species = SPECIES_SKORUPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2780
            .ability = ABILITY_SNIPER,
#line 2781
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2783
                MOVE_POISON_FANG,
                MOVE_BUG_BITE,
                MOVE_FEINT_ATTACK,
                MOVE_HONE_CLAWS,
            },
            },
            {
#line 2788
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2791
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2789
            .ability = ABILITY_LEVITATE,
#line 2790
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2792
                MOVE_SLUDGE,
                MOVE_STOCKPILE,
                MOVE_SPIT_UP,
                MOVE_SWALLOW,
            },
            },
            {
#line 2797
            .species = SPECIES_VENONAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2800
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2798
            .ability = ABILITY_COMPOUND_EYES,
#line 2799
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2801
                MOVE_STRUGGLE_BUG,
                MOVE_POISON_POWDER,
                MOVE_PSYBEAM,
                MOVE_STUN_SPORE,
            },
            },
        },
    },
#line 2806
    [TRAINER_PBL_CARMINE] =
    {
#line 2807
        .trainerName = _("Carmine"),
#line 2808
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 2809
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2812
=======
        .encounterMusic_gender = 
#line 2810
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2812
        .doubleBattle = FALSE,
#line 2811
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2813
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2815
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2816
            .ability = ABILITY_MOTOR_DRIVE,
#line 2817
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2819
                MOVE_SHOCK_WAVE,
                MOVE_CHARGE_BEAM,
                MOVE_AERIAL_ACE,
                MOVE_ENCORE,
            },
            },
        },
    },
#line 2824
    [TRAINER_PBL_JONATHAN] =
    {
#line 2825
        .trainerName = _("Jonathan"),
#line 2826
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 2827
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2830
=======
        .encounterMusic_gender = 
#line 2828
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2830
        .doubleBattle = FALSE,
#line 2829
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2831
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2833
            .species = SPECIES_NYMBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2836
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2834
            .ability = ABILITY_SWARM,
#line 2835
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2837
                MOVE_DOUBLE_KICK,
                MOVE_SCREECH,
                MOVE_BUG_BITE,
                MOVE_FEINT,
            },
            },
            {
#line 2842
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2845
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2843
            .ability = ABILITY_STURDY,
#line 2844
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2846
                MOVE_BUG_BITE,
                MOVE_PAYBACK,
                MOVE_RAPID_SPIN,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 2851
            .species = SPECIES_SHELMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2854
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2852
            .ability = ABILITY_SHELL_ARMOR,
#line 2853
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2855
                MOVE_MUD_SLAP,
                MOVE_STRUGGLE_BUG,
                MOVE_MEGA_DRAIN,
                MOVE_RECOVER,
            },
            },
            {
#line 2860
            .species = SPECIES_KARRABLAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2863
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2861
            .ability = ABILITY_SWARM,
#line 2862
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2864
                MOVE_FEINT_ATTACK,
                MOVE_BUG_BITE,
                MOVE_SLASH,
                MOVE_RECOVER,
            },
            },
        },
    },
#line 2869
    [TRAINER_PBL_CALVIN] =
    {
#line 2870
        .trainerName = _("Calvin"),
#line 2871
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 2872
        .trainerPic = TRAINER_PIC_FISHERMAN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2875
=======
        .encounterMusic_gender = 
#line 2873
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2875
        .doubleBattle = FALSE,
#line 2874
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2876
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2878
            .species = SPECIES_ARROKUDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2881
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2879
            .ability = ABILITY_PROPELLER_TAIL,
#line 2880
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2882
                MOVE_AQUA_JET,
                MOVE_BITE,
                MOVE_FOCUS_ENERGY,
                MOVE_LASER_FOCUS,
            },
            },
            {
#line 2887
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2890
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2888
            .ability = ABILITY_WATER_ABSORB,
#line 2889
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2891
                MOVE_MUD_SHOT,
                MOVE_BUBBLE_BEAM,
                MOVE_ENDEAVOR,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 2896
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2899
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2897
            .ability = ABILITY_SNIPER,
#line 2898
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2900
                MOVE_FOCUS_ENERGY,
                MOVE_BUBBLE_BEAM,
                MOVE_PSYBEAM,
                MOVE_AURORA_BEAM,
            },
            },
            {
#line 2905
            .species = SPECIES_TYMPOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2908
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2906
            .ability = ABILITY_WATER_ABSORB,
#line 2907
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2909
                MOVE_UPROAR,
                MOVE_BUBBLE_BEAM,
                MOVE_MUD_BOMB,
                MOVE_AQUA_RING,
            },
            },
        },
    },
#line 2914
    [TRAINER_PBL_LUIS] =
    {
#line 2915
        .trainerName = _("Luis"),
#line 2916
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 2917
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2920
=======
        .encounterMusic_gender = 
#line 2918
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2920
        .doubleBattle = FALSE,
#line 2919
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2921
        .randomLead = TRUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2923
            .species = SPECIES_CHARCADET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2926
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2924
            .ability = ABILITY_FLASH_FIRE,
#line 2925
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2927
                MOVE_NIGHT_SHADE,
                MOVE_INCINERATE,
                MOVE_WILL_O_WISP,
                MOVE_FLAME_CHARGE,
            },
            },
            {
#line 2932
            .species = SPECIES_CAPSAKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2935
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2933
            .ability = ABILITY_CHLOROPHYLL,
#line 2934
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2936
                MOVE_LEECH_SEED,
                MOVE_RAZOR_LEAF,
                MOVE_WORRY_SEED,
                MOVE_HEADBUTT,
            },
            },
            {
#line 2941
            .species = SPECIES_WIMPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2944
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2942
            .ability = ABILITY_WIMP_OUT,
#line 2943
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2945
                MOVE_STRUGGLE_BUG,
                MOVE_SAND_ATTACK,
                MOVE_HARDEN,
                MOVE_AQUA_JET,
            },
            },
            {
#line 2950
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2953
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2951
            .ability = ABILITY_LEVITATE,
#line 2952
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2954
                MOVE_TACKLE,
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 2959
            .species = SPECIES_TOXEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2960
            .ability = ABILITY_STATIC,
#line 2961
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2963
                MOVE_GROWL,
                MOVE_ACID,
                MOVE_NUZZLE,
                MOVE_TEARFUL_LOOK,
            },
            },
            {
#line 2968
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2971
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2969
            .ability = ABILITY_NATURAL_CURE,
#line 2970
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2972
                MOVE_ROUND,
                MOVE_HAZE,
                MOVE_FEATHER_DANCE,
                MOVE_DRAGON_BREATH,
            },
            },
        },
    },
#line 2977
    [TRAINER_PBL_ARI] =
    {
#line 2978
        .trainerName = _("Ari"),
#line 2979
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 2980
        .trainerPic = TRAINER_PIC_CAMPER,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2983
=======
        .encounterMusic_gender = 
#line 2981
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2983
        .doubleBattle = FALSE,
#line 2982
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 2984
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2986
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2988
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2987
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2990
    [TRAINER_PBL_BERTHA] =
    {
#line 2991
        .trainerName = _("Bertha"),
#line 2992
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 2993
        .trainerPic = TRAINER_PIC_PICNICKER,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 2996
=======
        .encounterMusic_gender = 
#line 2994
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2996
        .doubleBattle = FALSE,
#line 2995
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 2997
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2999
            .species = SPECIES_MORPEKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3001
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3000
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3003
    [TRAINER_PBL_CASSANDRA] =
    {
#line 3004
        .trainerName = _("Cassandra"),
#line 3005
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3006
        .trainerPic = TRAINER_PIC_POKEFAN_F,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3009
=======
        .encounterMusic_gender = 
#line 3007
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3009
        .doubleBattle = FALSE,
#line 3008
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3010
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3012
            .species = SPECIES_CARNIVINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3013
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3016
    [TRAINER_PBL_DOMINIC] =
    {
#line 3017
        .trainerName = _("Dominic"),
#line 3018
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3019
        .trainerPic = TRAINER_PIC_POKEFAN_M,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3022
=======
        .encounterMusic_gender = 
#line 3020
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3022
        .doubleBattle = FALSE,
#line 3021
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3023
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3025
            .species = SPECIES_STUNFISK_GALAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3027
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3026
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3029
    [TRAINER_PBL_ERICA] =
    {
#line 3030
        .trainerName = _("Erica"),
#line 3031
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3032
        .trainerPic = TRAINER_PIC_EXPERT_F,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3035
=======
        .encounterMusic_gender = 
#line 3033
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3035
        .doubleBattle = FALSE,
#line 3034
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3036
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3038
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3040
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3039
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3042
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3044
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3043
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3046
    [TRAINER_PBL_KYLE] =
    {
#line 3047
        .trainerName = _("STEVEN"),
#line 3048
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3049
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3053
=======
        .encounterMusic_gender = 
#line 3051
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3053
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3057
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3056
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3055
            .lvl = 42,
#line 3054
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3058
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3063
    [TRAINER_PBL_BELLE] =
    {
#line 3064
        .trainerName = _("STEVEN"),
#line 3065
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3066
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3070
=======
        .encounterMusic_gender = 
#line 3068
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3070
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3074
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3073
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3072
            .lvl = 42,
#line 3071
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3075
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3080
    [TRAINER_PBL_DEWEY] =
    {
#line 3081
        .trainerName = _("STEVEN"),
#line 3082
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3083
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3087
=======
        .encounterMusic_gender = 
#line 3085
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3087
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3091
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3090
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3089
            .lvl = 42,
#line 3088
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3092
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3097
    [TRAINER_PBL_PEARLIE] =
    {
#line 3098
        .trainerName = _("STEVEN"),
#line 3099
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3100
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3104
=======
        .encounterMusic_gender = 
#line 3102
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3104
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3108
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3107
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3106
            .lvl = 42,
#line 3105
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3109
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3114
    [TRAINER_PBL_ERNEST] =
    {
#line 3115
        .trainerName = _("STEVEN"),
#line 3116
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3117
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3121
=======
        .encounterMusic_gender = 
#line 3119
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3121
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3125
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3124
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3123
            .lvl = 42,
#line 3122
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3126
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3131
    [TRAINER_PBL_ALANA] =
    {
#line 3132
        .trainerName = _("STEVEN"),
#line 3133
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3134
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3138
=======
        .encounterMusic_gender = 
#line 3136
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3138
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3142
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3141
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3140
            .lvl = 42,
#line 3139
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3143
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3148
    [TRAINER_PBL_SUSAN] =
    {
#line 3149
        .trainerName = _("STEVEN"),
#line 3150
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3151
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3155
=======
        .encounterMusic_gender = 
#line 3153
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3155
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3159
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3158
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3157
            .lvl = 42,
#line 3156
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3160
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3165
    [TRAINER_PBL_CONRAD] =
    {
#line 3166
        .trainerName = _("STEVEN"),
#line 3167
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3168
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3172
=======
        .encounterMusic_gender = 
#line 3170
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3172
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3176
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3175
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3174
            .lvl = 42,
#line 3173
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3177
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3182
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9] =
    {
#line 3183
        .trainerName = _("STEVEN"),
#line 3184
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3185
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3189
=======
        .encounterMusic_gender = 
#line 3187
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3189
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3193
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3192
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3191
            .lvl = 42,
#line 3190
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3194
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3199
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9_BRUTAL] =
    {
#line 3200
        .trainerName = _("STEVEN"),
#line 3201
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3202
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3206
=======
        .encounterMusic_gender = 
#line 3204
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3206
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3210
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3209
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3208
            .lvl = 42,
#line 3207
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3211
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3216
    [TRAINER_PBL_JEANETTE] =
    {
#line 3217
        .trainerName = _("STEVEN"),
#line 3218
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3219
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3223
=======
        .encounterMusic_gender = 
#line 3221
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3223
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3227
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3226
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3225
            .lvl = 42,
#line 3224
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3228
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3233
    [TRAINER_PBL_EMMA_AND_LEO] =
    {
#line 3234
        .trainerName = _("STEVEN"),
#line 3235
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3236
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3240
=======
        .encounterMusic_gender = 
#line 3238
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3240
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3244
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3242
            .lvl = 42,
#line 3241
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3245
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3250
    [TRAINER_PBL_JOEL] =
    {
#line 3251
        .trainerName = _("STEVEN"),
#line 3252
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3253
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3257
=======
        .encounterMusic_gender = 
#line 3255
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3257
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3261
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3260
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3259
            .lvl = 42,
#line 3258
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3262
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3267
    [TRAINER_PBL_MARION] =
    {
#line 3268
        .trainerName = _("STEVEN"),
#line 3269
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3270
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3274
=======
        .encounterMusic_gender = 
#line 3272
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3274
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3278
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3277
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3276
            .lvl = 42,
#line 3275
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3279
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3284
    [TRAINER_PBL_REGINA] =
    {
#line 3285
        .trainerName = _("STEVEN"),
#line 3286
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3287
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3291
=======
        .encounterMusic_gender = 
#line 3289
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3291
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3295
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3294
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3293
            .lvl = 42,
#line 3292
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3296
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3301
    [TRAINER_PBL_NEWTON_LEVIATHAN_10] =
    {
#line 3302
        .trainerName = _("STEVEN"),
#line 3303
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3304
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3308
=======
        .encounterMusic_gender = 
#line 3306
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3308
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3312
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3311
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3310
            .lvl = 42,
#line 3309
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3313
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3318
    [TRAINER_PBL_NEWTON_LEVIATHAN_10_BRUTAL] =
    {
#line 3319
        .trainerName = _("STEVEN"),
#line 3320
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3321
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3325
=======
        .encounterMusic_gender = 
#line 3323
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3325
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3329
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3328
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3327
            .lvl = 42,
#line 3326
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3330
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3335
    [TRAINER_PBL_ESSENCE] =
    {
#line 3336
        .trainerName = _("STEVEN"),
#line 3337
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3338
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3342
=======
        .encounterMusic_gender = 
#line 3340
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3342
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3346
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3345
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3344
            .lvl = 42,
#line 3343
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3347
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3352
    [TRAINER_PBL_DOLORES] =
    {
#line 3353
        .trainerName = _("STEVEN"),
#line 3354
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3355
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3359
=======
        .encounterMusic_gender = 
#line 3357
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3359
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3363
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3362
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3361
            .lvl = 42,
#line 3360
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3364
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3369
    [TRAINER_PBL_JULIE] =
    {
#line 3370
        .trainerName = _("STEVEN"),
#line 3371
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3372
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3376
=======
        .encounterMusic_gender = 
#line 3374
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3376
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3380
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3379
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3378
            .lvl = 42,
#line 3377
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3381
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3386
    [TRAINER_PBL_ROMULUS] =
    {
#line 3387
        .trainerName = _("STEVEN"),
#line 3388
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3389
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3393
=======
        .encounterMusic_gender = 
#line 3391
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3393
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3397
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3396
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3395
            .lvl = 42,
#line 3394
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3398
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3403
    [TRAINER_PBL_TREVOR] =
    {
#line 3404
        .trainerName = _("STEVEN"),
#line 3405
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3406
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3410
=======
        .encounterMusic_gender = 
#line 3408
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3410
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3414
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3413
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3412
            .lvl = 42,
#line 3411
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3415
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3420
    [TRAINER_PBL_FEDERICO] =
    {
#line 3421
        .trainerName = _("STEVEN"),
#line 3422
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3423
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3427
=======
        .encounterMusic_gender = 
#line 3425
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3427
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3431
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3430
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3429
            .lvl = 42,
#line 3428
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3432
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3437
    [TRAINER_PBL_GENIE] =
    {
#line 3438
        .trainerName = _("STEVEN"),
#line 3439
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3440
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3444
=======
        .encounterMusic_gender = 
#line 3442
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3444
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3448
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3447
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3446
            .lvl = 42,
#line 3445
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3449
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3454
    [TRAINER_PBL_HILDA] =
    {
#line 3455
        .trainerName = _("STEVEN"),
#line 3456
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3457
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3461
=======
        .encounterMusic_gender = 
#line 3459
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3461
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3465
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3464
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3463
            .lvl = 42,
#line 3462
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3466
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3471
    [TRAINER_PBL_KINLEY] =
    {
#line 3472
        .trainerName = _("STEVEN"),
#line 3473
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3474
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3478
=======
        .encounterMusic_gender = 
#line 3476
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3478
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3482
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3481
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3480
            .lvl = 42,
#line 3479
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3483
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3488
    [TRAINER_PBL_VIOLET] =
    {
#line 3489
        .trainerName = _("STEVEN"),
#line 3490
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3491
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3495
=======
        .encounterMusic_gender = 
#line 3493
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3495
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3499
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3498
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3497
            .lvl = 42,
#line 3496
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3500
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3505
    [TRAINER_PBL_WANDA] =
    {
#line 3506
        .trainerName = _("STEVEN"),
#line 3507
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3508
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3512
=======
        .encounterMusic_gender = 
#line 3510
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3512
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3516
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3515
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3514
            .lvl = 42,
#line 3513
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3517
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3522
    [TRAINER_PBL_AMBER_AND_KIM] =
    {
#line 3523
        .trainerName = _("STEVEN"),
#line 3524
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3525
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3529
=======
        .encounterMusic_gender = 
#line 3527
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3529
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3533
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3532
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3531
            .lvl = 42,
#line 3530
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3534
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3539
    [TRAINER_PBL_JAN_AND_ERIN] =
    {
#line 3540
        .trainerName = _("STEVEN"),
#line 3541
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3542
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3546
=======
        .encounterMusic_gender = 
#line 3544
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3546
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3550
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3549
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3548
            .lvl = 42,
#line 3547
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3551
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3556
    [TRAINER_PBL_STEVE] =
    {
#line 3557
        .trainerName = _("STEVEN"),
#line 3558
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3559
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3563
=======
        .encounterMusic_gender = 
#line 3561
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3563
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3567
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3566
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3565
            .lvl = 42,
#line 3564
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3568
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3573
    [TRAINER_PBL_GOULD] =
    {
#line 3574
        .trainerName = _("STEVEN"),
#line 3575
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3576
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3580
=======
        .encounterMusic_gender = 
#line 3578
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3580
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3584
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3583
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3582
            .lvl = 42,
#line 3581
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3585
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3590
    [TRAINER_PBL_MENDEL] =
    {
#line 3591
        .trainerName = _("STEVEN"),
#line 3592
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3593
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3597
=======
        .encounterMusic_gender = 
#line 3595
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3597
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3601
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3600
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3599
            .lvl = 42,
#line 3598
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3602
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3607
    [TRAINER_PBL_DARWIN] =
    {
#line 3608
        .trainerName = _("STEVEN"),
#line 3609
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3610
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3614
=======
        .encounterMusic_gender = 
#line 3612
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3614
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3618
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3617
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3616
            .lvl = 42,
#line 3615
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3619
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3624
    [TRAINER_PBL_JENNY_LEVIATHAN_11] =
    {
#line 3625
        .trainerName = _("STEVEN"),
#line 3626
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3627
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3631
=======
        .encounterMusic_gender = 
#line 3629
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3631
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3635
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3634
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3633
            .lvl = 42,
#line 3632
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3636
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3641
    [TRAINER_PBL_JENNY_LEVIATHAN_11_BRUTAL] =
    {
#line 3642
        .trainerName = _("STEVEN"),
#line 3643
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3644
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3648
=======
        .encounterMusic_gender = 
#line 3646
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3648
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3652
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3651
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3650
            .lvl = 42,
#line 3649
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3653
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3658
    [TRAINER_PBL_BART] =
    {
#line 3659
        .trainerName = _("STEVEN"),
#line 3660
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3661
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3665
=======
        .encounterMusic_gender = 
#line 3663
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3665
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3669
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3668
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3667
            .lvl = 42,
#line 3666
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3670
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3675
    [TRAINER_PBL_NIGEL] =
    {
#line 3676
        .trainerName = _("STEVEN"),
#line 3677
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3678
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3682
=======
        .encounterMusic_gender = 
#line 3680
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3682
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3686
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3685
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3684
            .lvl = 42,
#line 3683
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3687
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3692
    [TRAINER_PBL_LOLA] =
    {
#line 3693
        .trainerName = _("STEVEN"),
#line 3694
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3695
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3699
=======
        .encounterMusic_gender = 
#line 3697
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3699
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3703
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3702
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3701
            .lvl = 42,
#line 3700
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3704
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3709
    [TRAINER_PBL_CHARLIE] =
    {
#line 3710
        .trainerName = _("STEVEN"),
#line 3711
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3712
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3716
=======
        .encounterMusic_gender = 
#line 3714
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3716
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3720
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3719
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3718
            .lvl = 42,
#line 3717
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3721
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3726
    [TRAINER_PBL_RANDOLPH] =
    {
#line 3727
        .trainerName = _("STEVEN"),
#line 3728
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3729
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3733
=======
        .encounterMusic_gender = 
#line 3731
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3733
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3737
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3736
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3735
            .lvl = 42,
#line 3734
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3738
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3743
    [TRAINER_PBL_TODD] =
    {
#line 3744
        .trainerName = _("STEVEN"),
#line 3745
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3746
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3750
=======
        .encounterMusic_gender = 
#line 3748
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3750
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3754
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3753
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3752
            .lvl = 42,
#line 3751
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3755
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3760
    [TRAINER_PBL_RUSSELL] =
    {
#line 3761
        .trainerName = _("STEVEN"),
#line 3762
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3763
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3767
=======
        .encounterMusic_gender = 
#line 3765
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3767
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3771
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3770
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3769
            .lvl = 42,
#line 3768
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3772
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3777
    [TRAINER_PBL_OTIS] =
    {
#line 3778
        .trainerName = _("STEVEN"),
#line 3779
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3780
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3784
=======
        .encounterMusic_gender = 
#line 3782
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3784
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3788
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3787
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3786
            .lvl = 42,
#line 3785
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3789
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3794
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12] =
    {
#line 3795
        .trainerName = _("STEVEN"),
#line 3796
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3797
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3801
=======
        .encounterMusic_gender = 
#line 3799
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3801
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3805
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3804
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3803
            .lvl = 42,
#line 3802
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3806
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3811
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12_BRUTAL] =
    {
#line 3812
        .trainerName = _("STEVEN"),
#line 3813
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3814
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3818
=======
        .encounterMusic_gender = 
#line 3816
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3818
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3822
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3821
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3820
            .lvl = 42,
#line 3819
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3823
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3828
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13] =
    {
#line 3829
        .trainerName = _("STEVEN"),
#line 3830
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3831
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3835
=======
        .encounterMusic_gender = 
#line 3833
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3835
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3839
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3838
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3837
            .lvl = 42,
#line 3836
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3840
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3845
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13_BRUTAL] =
    {
#line 3846
        .trainerName = _("STEVEN"),
#line 3847
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3848
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3852
=======
        .encounterMusic_gender = 
#line 3850
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3852
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3856
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3855
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3854
            .lvl = 42,
#line 3853
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3857
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3862
    [TRAINER_PBL_IONA] =
    {
#line 3863
        .trainerName = _("STEVEN"),
#line 3864
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3865
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3869
=======
        .encounterMusic_gender = 
#line 3867
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3869
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3873
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3872
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3871
            .lvl = 42,
#line 3870
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3874
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3879
    [TRAINER_PBL_BERKE] =
    {
#line 3880
        .trainerName = _("STEVEN"),
#line 3881
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3882
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3886
=======
        .encounterMusic_gender = 
#line 3884
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3886
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3890
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3889
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3888
            .lvl = 42,
#line 3887
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3891
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3896
    [TRAINER_PBL_TANISHA] =
    {
#line 3897
        .trainerName = _("STEVEN"),
#line 3898
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3899
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3903
=======
        .encounterMusic_gender = 
#line 3901
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3903
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3907
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3906
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3905
            .lvl = 42,
#line 3904
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3908
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3913
    [TRAINER_PBL_ROBERT] =
    {
#line 3914
        .trainerName = _("STEVEN"),
#line 3915
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3916
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3920
=======
        .encounterMusic_gender = 
#line 3918
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3920
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3924
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3923
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3922
            .lvl = 42,
#line 3921
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3925
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3930
    [TRAINER_PBL_CHRIS] =
    {
#line 3931
        .trainerName = _("STEVEN"),
#line 3932
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3933
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3937
=======
        .encounterMusic_gender = 
#line 3935
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3937
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3941
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3940
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3939
            .lvl = 42,
#line 3938
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3942
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3947
    [TRAINER_PBL_ANGUS] =
    {
#line 3948
        .trainerName = _("STEVEN"),
#line 3949
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3950
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3954
=======
        .encounterMusic_gender = 
#line 3952
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3954
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3958
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3957
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3956
            .lvl = 42,
#line 3955
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3959
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3964
    [TRAINER_PBL_LILY_LEVIATHAN_14] =
    {
#line 3965
        .trainerName = _("STEVEN"),
#line 3966
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3967
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3971
=======
        .encounterMusic_gender = 
#line 3969
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3971
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3975
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3974
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3973
            .lvl = 42,
#line 3972
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3976
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3981
    [TRAINER_PBL_LILY_LEVIATHAN_14_BRUTAL] =
    {
#line 3982
        .trainerName = _("STEVEN"),
#line 3983
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3984
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 3988
=======
        .encounterMusic_gender = 
#line 3986
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3988
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3992
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3991
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3990
            .lvl = 42,
#line 3989
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3993
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3998
    [TRAINER_PBL_AXLE] =
    {
#line 3999
        .trainerName = _("STEVEN"),
#line 4000
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4001
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4005
=======
        .encounterMusic_gender = 
#line 4003
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4005
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4009
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4008
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4007
            .lvl = 42,
#line 4006
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4010
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4015
    [TRAINER_PBL_RAFAEL] =
    {
#line 4016
        .trainerName = _("STEVEN"),
#line 4017
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4018
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4022
=======
        .encounterMusic_gender = 
#line 4020
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4022
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4026
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4025
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4024
            .lvl = 42,
#line 4023
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4027
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4032
    [TRAINER_PBL_GEORGINA] =
    {
#line 4033
        .trainerName = _("STEVEN"),
#line 4034
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4035
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4039
=======
        .encounterMusic_gender = 
#line 4037
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4039
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4043
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4042
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4041
            .lvl = 42,
#line 4040
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4044
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4049
    [TRAINER_PBL_MIA_LEVIATHAN_15] =
    {
#line 4050
        .trainerName = _("STEVEN"),
#line 4051
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4052
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4056
=======
        .encounterMusic_gender = 
#line 4054
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4056
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4060
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4059
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4058
            .lvl = 42,
#line 4057
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4061
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4066
    [TRAINER_PBL_MIA_LEVIATHAN_15_BRUTAL] =
    {
#line 4067
        .trainerName = _("STEVEN"),
#line 4068
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4069
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4073
=======
        .encounterMusic_gender = 
#line 4071
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4073
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4077
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4076
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4075
            .lvl = 42,
#line 4074
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4078
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4083
    [TRAINER_PBL_DORIS] =
    {
#line 4084
        .trainerName = _("STEVEN"),
#line 4085
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4086
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4090
=======
        .encounterMusic_gender = 
#line 4088
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4090
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4094
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4093
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4092
            .lvl = 42,
#line 4091
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4095
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4100
    [TRAINER_PBL_HOMER] =
    {
#line 4101
        .trainerName = _("STEVEN"),
#line 4102
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4103
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4107
=======
        .encounterMusic_gender = 
#line 4105
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4107
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4111
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4110
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4109
            .lvl = 42,
#line 4108
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4112
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4117
    [TRAINER_PBL_JOHN] =
    {
#line 4118
        .trainerName = _("STEVEN"),
#line 4119
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4120
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4124
=======
        .encounterMusic_gender = 
#line 4122
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4124
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4128
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4127
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4126
            .lvl = 42,
#line 4125
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4129
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4134
    [TRAINER_PBL_GLENN] =
    {
#line 4135
        .trainerName = _("STEVEN"),
#line 4136
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4137
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4141
=======
        .encounterMusic_gender = 
#line 4139
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4141
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4145
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4144
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4143
            .lvl = 42,
#line 4142
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4146
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4151
    [TRAINER_PBL_JAY] =
    {
#line 4152
        .trainerName = _("STEVEN"),
#line 4153
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4154
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4158
=======
        .encounterMusic_gender = 
#line 4156
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4158
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4162
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4161
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4160
            .lvl = 42,
#line 4159
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4163
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4168
    [TRAINER_PBL_TYLER] =
    {
#line 4169
        .trainerName = _("STEVEN"),
#line 4170
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4171
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4175
=======
        .encounterMusic_gender = 
#line 4173
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4175
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4179
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4178
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4177
            .lvl = 42,
#line 4176
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4180
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4185
    [TRAINER_PBL_TERRENCE] =
    {
#line 4186
        .trainerName = _("STEVEN"),
#line 4187
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4188
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4192
=======
        .encounterMusic_gender = 
#line 4190
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4192
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4196
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4195
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4194
            .lvl = 42,
#line 4193
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4197
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4202
    [TRAINER_PBL_MARTY] =
    {
#line 4203
        .trainerName = _("STEVEN"),
#line 4204
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4205
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4209
=======
        .encounterMusic_gender = 
#line 4207
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4209
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4213
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4212
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4211
            .lvl = 42,
#line 4210
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4214
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4219
    [TRAINER_PBL_KARI] =
    {
#line 4220
        .trainerName = _("STEVEN"),
#line 4221
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4222
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4226
=======
        .encounterMusic_gender = 
#line 4224
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4226
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4230
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4228
            .lvl = 42,
#line 4227
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4231
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4236
    [TRAINER_PBL_ABRAHAM] =
    {
#line 4237
        .trainerName = _("STEVEN"),
#line 4238
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4239
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4243
=======
        .encounterMusic_gender = 
#line 4241
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4243
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4247
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4246
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4245
            .lvl = 42,
#line 4244
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4248
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4253
    [TRAINER_PBL_MELINDA] =
    {
#line 4254
        .trainerName = _("STEVEN"),
#line 4255
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4256
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4260
=======
        .encounterMusic_gender = 
#line 4258
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4260
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4264
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4263
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4262
            .lvl = 42,
#line 4261
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4265
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4270
    [TRAINER_PBL_EMILIO] =
    {
#line 4271
        .trainerName = _("STEVEN"),
#line 4272
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4273
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4277
=======
        .encounterMusic_gender = 
#line 4275
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4277
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4281
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4280
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4279
            .lvl = 42,
#line 4278
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4282
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4287
    [TRAINER_PBL_REX] =
    {
#line 4288
        .trainerName = _("STEVEN"),
#line 4289
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4290
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4294
=======
        .encounterMusic_gender = 
#line 4292
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4294
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4298
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4297
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4296
            .lvl = 42,
#line 4295
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4299
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4304
    [TRAINER_PBL_LOUIS] =
    {
#line 4305
        .trainerName = _("STEVEN"),
#line 4306
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4307
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4311
=======
        .encounterMusic_gender = 
#line 4309
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4311
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4315
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4314
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4313
            .lvl = 42,
#line 4312
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4316
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4321
    [TRAINER_PBL_LEROY] =
    {
#line 4322
        .trainerName = _("STEVEN"),
#line 4323
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4324
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4328
=======
        .encounterMusic_gender = 
#line 4326
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4328
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4332
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4331
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4330
            .lvl = 42,
#line 4329
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4333
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4338
    [TRAINER_PBL_ELTON] =
    {
#line 4339
        .trainerName = _("STEVEN"),
#line 4340
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4341
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4345
=======
        .encounterMusic_gender = 
#line 4343
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4345
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4349
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4348
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4347
            .lvl = 42,
#line 4346
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4350
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4355
    [TRAINER_PBL_WILLIE] =
    {
#line 4356
        .trainerName = _("STEVEN"),
#line 4357
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4358
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4362
=======
        .encounterMusic_gender = 
#line 4360
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4362
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4366
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4365
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4364
            .lvl = 42,
#line 4363
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4367
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4372
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16] =
    {
#line 4373
        .trainerName = _("STEVEN"),
#line 4374
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4375
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4379
=======
        .encounterMusic_gender = 
#line 4377
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4379
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4383
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4382
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4381
            .lvl = 42,
#line 4380
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4384
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4389
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16_BRUTAL] =
    {
#line 4390
        .trainerName = _("STEVEN"),
#line 4391
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4392
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4396
=======
        .encounterMusic_gender = 
#line 4394
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4396
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4400
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4399
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4398
            .lvl = 42,
#line 4397
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4401
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4406
    [TRAINER_PBL_PIRATE_1] =
    {
#line 4407
        .trainerName = _("STEVEN"),
#line 4408
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4409
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4413
=======
        .encounterMusic_gender = 
#line 4411
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4413
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4417
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4416
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4415
            .lvl = 42,
#line 4414
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4418
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4423
    [TRAINER_PBL_PIRATE_2] =
    {
#line 4424
        .trainerName = _("STEVEN"),
#line 4425
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4426
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4430
=======
        .encounterMusic_gender = 
#line 4428
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4430
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4434
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4433
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4432
            .lvl = 42,
#line 4431
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4435
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4440
    [TRAINER_PBL_PIRATE_3] =
    {
#line 4441
        .trainerName = _("STEVEN"),
#line 4442
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4443
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4447
=======
        .encounterMusic_gender = 
#line 4445
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4447
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4451
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4450
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4449
            .lvl = 42,
#line 4448
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4452
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4457
    [TRAINER_PBL_PIRATE_4] =
    {
#line 4458
        .trainerName = _("STEVEN"),
#line 4459
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4460
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4464
=======
        .encounterMusic_gender = 
#line 4462
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4464
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4468
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4467
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4466
            .lvl = 42,
#line 4465
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4469
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4474
    [TRAINER_PBL_SHAWN] =
    {
#line 4475
        .trainerName = _("STEVEN"),
#line 4476
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4477
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4481
=======
        .encounterMusic_gender = 
#line 4479
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4481
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4485
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4484
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4483
            .lvl = 42,
#line 4482
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4486
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4491
    [TRAINER_PBL_FERNANDO] =
    {
#line 4492
        .trainerName = _("STEVEN"),
#line 4493
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4494
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4498
=======
        .encounterMusic_gender = 
#line 4496
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4498
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4502
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4501
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4500
            .lvl = 42,
#line 4499
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4503
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4508
    [TRAINER_PBL_KANE] =
    {
#line 4509
        .trainerName = _("STEVEN"),
#line 4510
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4511
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4515
=======
        .encounterMusic_gender = 
#line 4513
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4515
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4519
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4518
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4517
            .lvl = 42,
#line 4516
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4520
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4525
    [TRAINER_PBL_KIRK] =
    {
#line 4526
        .trainerName = _("STEVEN"),
#line 4527
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4528
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4532
=======
        .encounterMusic_gender = 
#line 4530
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4532
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4536
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4535
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4534
            .lvl = 42,
#line 4533
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4537
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4542
    [TRAINER_PBL_DALTON] =
    {
#line 4543
        .trainerName = _("STEVEN"),
#line 4544
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4545
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4549
=======
        .encounterMusic_gender = 
#line 4547
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4549
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4553
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4552
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4551
            .lvl = 42,
#line 4550
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4554
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4559
    [TRAINER_PBL_LEE] =
    {
#line 4560
        .trainerName = _("STEVEN"),
#line 4561
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4562
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4566
=======
        .encounterMusic_gender = 
#line 4564
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4566
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4570
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4569
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4568
            .lvl = 42,
#line 4567
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4571
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4576
    [TRAINER_PBL_BLANCHE] =
    {
#line 4577
        .trainerName = _("STEVEN"),
#line 4578
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4579
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4583
=======
        .encounterMusic_gender = 
#line 4581
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4583
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4587
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4586
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4585
            .lvl = 42,
#line 4584
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4588
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4593
    [TRAINER_PBL_TROY] =
    {
#line 4594
        .trainerName = _("STEVEN"),
#line 4595
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4596
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4600
=======
        .encounterMusic_gender = 
#line 4598
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4600
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4604
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4603
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4602
            .lvl = 42,
#line 4601
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4605
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4610
    [TRAINER_PBL_ABED] =
    {
#line 4611
        .trainerName = _("STEVEN"),
#line 4612
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4613
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4617
=======
        .encounterMusic_gender = 
#line 4615
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4617
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4621
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4620
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4619
            .lvl = 42,
#line 4618
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4622
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4627
    [TRAINER_PBL_TROY_BRUTAL] =
    {
#line 4628
        .trainerName = _("STEVEN"),
#line 4629
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4630
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4634
=======
        .encounterMusic_gender = 
#line 4632
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4634
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4638
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4637
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4636
            .lvl = 42,
#line 4635
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4639
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4644
    [TRAINER_PBL_ABED_BRUTAL] =
    {
#line 4645
        .trainerName = _("STEVEN"),
#line 4646
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4647
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4651
=======
        .encounterMusic_gender = 
#line 4649
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4651
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4655
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4654
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4653
            .lvl = 42,
#line 4652
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4656
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4661
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17] =
    {
#line 4662
        .trainerName = _("STEVEN"),
#line 4663
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4664
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4668
=======
        .encounterMusic_gender = 
#line 4666
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4668
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4672
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4671
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4670
            .lvl = 42,
#line 4669
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4673
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4678
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17_BRUTAL] =
    {
#line 4679
        .trainerName = _("STEVEN"),
#line 4680
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4681
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4685
=======
        .encounterMusic_gender = 
#line 4683
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4685
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4689
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4688
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4687
            .lvl = 42,
#line 4686
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4690
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4695
    [TRAINER_PBL_ANITA] =
    {
#line 4696
        .trainerName = _("STEVEN"),
#line 4697
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4698
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4702
=======
        .encounterMusic_gender = 
#line 4700
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4702
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4706
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4705
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4704
            .lvl = 42,
#line 4703
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4707
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4712
    [TRAINER_PBL_DESIREE] =
    {
#line 4713
        .trainerName = _("STEVEN"),
#line 4714
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4715
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4719
=======
        .encounterMusic_gender = 
#line 4717
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4719
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4723
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4722
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4721
            .lvl = 42,
#line 4720
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4724
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4729
    [TRAINER_PBL_HOWARD] =
    {
#line 4730
        .trainerName = _("STEVEN"),
#line 4731
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4732
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4736
=======
        .encounterMusic_gender = 
#line 4734
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4736
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4740
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4739
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4738
            .lvl = 42,
#line 4737
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4741
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4746
    [TRAINER_PBL_ELOISE] =
    {
#line 4747
        .trainerName = _("STEVEN"),
#line 4748
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4749
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4753
=======
        .encounterMusic_gender = 
#line 4751
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4753
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4757
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4756
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4755
            .lvl = 42,
#line 4754
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4758
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4763
    [TRAINER_PBL_ALLY_AND_EMMY] =
    {
#line 4764
        .trainerName = _("STEVEN"),
#line 4765
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4766
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4770
=======
        .encounterMusic_gender = 
#line 4768
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4770
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4774
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4773
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4772
            .lvl = 42,
#line 4771
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4775
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4780
    [TRAINER_PBL_AMIR] =
    {
#line 4781
        .trainerName = _("STEVEN"),
#line 4782
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4783
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4787
=======
        .encounterMusic_gender = 
#line 4785
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4787
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4791
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4790
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4789
            .lvl = 42,
#line 4788
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4792
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4797
    [TRAINER_PBL_GETHIN] =
    {
#line 4798
        .trainerName = _("STEVEN"),
#line 4799
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4800
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4804
=======
        .encounterMusic_gender = 
#line 4802
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4804
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4808
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4807
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4806
            .lvl = 42,
#line 4805
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4809
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4814
    [TRAINER_PBL_BERNARD] =
    {
#line 4815
        .trainerName = _("STEVEN"),
#line 4816
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4817
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4821
=======
        .encounterMusic_gender = 
#line 4819
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4821
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4825
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4824
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4823
            .lvl = 42,
#line 4822
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4826
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4831
    [TRAINER_PBL_ELLIE] =
    {
#line 4832
        .trainerName = _("STEVEN"),
#line 4833
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4834
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4838
=======
        .encounterMusic_gender = 
#line 4836
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4838
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4842
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4841
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4840
            .lvl = 42,
#line 4839
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4843
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4848
    [TRAINER_PBL_RUSTY] =
    {
#line 4849
        .trainerName = _("STEVEN"),
#line 4850
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4851
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4855
=======
        .encounterMusic_gender = 
#line 4853
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4855
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4859
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4858
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4857
            .lvl = 42,
#line 4856
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4860
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4865
    [TRAINER_PBL_CODY] =
    {
#line 4866
        .trainerName = _("STEVEN"),
#line 4867
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4868
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4872
=======
        .encounterMusic_gender = 
#line 4870
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4872
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4876
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4875
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4874
            .lvl = 42,
#line 4873
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4877
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4882
    [TRAINER_PBL_LEWIS] =
    {
#line 4883
        .trainerName = _("STEVEN"),
#line 4884
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4885
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4889
=======
        .encounterMusic_gender = 
#line 4887
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4889
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4893
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4892
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4891
            .lvl = 42,
#line 4890
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4894
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4899
    [TRAINER_PBL_CORNELIUS] =
    {
#line 4900
        .trainerName = _("STEVEN"),
#line 4901
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4902
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4906
=======
        .encounterMusic_gender = 
#line 4904
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4906
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4910
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4909
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4908
            .lvl = 42,
#line 4907
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4911
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4916
    [TRAINER_PBL_INEZ_AND_EMMA] =
    {
#line 4917
        .trainerName = _("STEVEN"),
#line 4918
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4919
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4923
=======
        .encounterMusic_gender = 
#line 4921
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4923
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4927
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4926
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4925
            .lvl = 42,
#line 4924
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4928
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4933
    [TRAINER_PBL_HELEN] =
    {
#line 4934
        .trainerName = _("STEVEN"),
#line 4935
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4936
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4940
=======
        .encounterMusic_gender = 
#line 4938
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4940
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4944
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4943
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4942
            .lvl = 42,
#line 4941
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4945
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4950
    [TRAINER_PBL_WESLEY] =
    {
#line 4951
        .trainerName = _("STEVEN"),
#line 4952
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4953
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4957
=======
        .encounterMusic_gender = 
#line 4955
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4957
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4961
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4960
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4959
            .lvl = 42,
#line 4958
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4962
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4967
    [TRAINER_PBL_ALFREDO] =
    {
#line 4968
        .trainerName = _("STEVEN"),
#line 4969
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4970
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4974
=======
        .encounterMusic_gender = 
#line 4972
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4974
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4978
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4977
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4976
            .lvl = 42,
#line 4975
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4979
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4984
    [TRAINER_PBL_IAN] =
    {
#line 4985
        .trainerName = _("STEVEN"),
#line 4986
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4987
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 4991
=======
        .encounterMusic_gender = 
#line 4989
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4991
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4995
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4994
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4993
            .lvl = 42,
#line 4992
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4996
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5001
    [TRAINER_PBL_AUDREY] =
    {
#line 5002
        .trainerName = _("STEVEN"),
#line 5003
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5004
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5008
=======
        .encounterMusic_gender = 
#line 5006
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5008
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5012
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5011
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5010
            .lvl = 42,
#line 5009
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5013
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5018
    [TRAINER_PBL_LEVIATHAN13] =
    {
#line 5019
        .trainerName = _("STEVEN"),
#line 5020
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5021
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5025
=======
        .encounterMusic_gender = 
#line 5023
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5025
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5029
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5028
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5027
            .lvl = 42,
#line 5026
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5030
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5035
    [TRAINER_PBL_EDGARDO] =
    {
#line 5036
        .trainerName = _("STEVEN"),
#line 5037
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5038
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5042
=======
        .encounterMusic_gender = 
#line 5040
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5042
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5046
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5045
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5044
            .lvl = 42,
#line 5043
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5047
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5052
    [TRAINER_PBL_JEAN] =
    {
#line 5053
        .trainerName = _("STEVEN"),
#line 5054
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5055
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5059
=======
        .encounterMusic_gender = 
#line 5057
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5059
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5063
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5062
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5061
            .lvl = 42,
#line 5060
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5064
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5069
    [TRAINER_PBL_ROSE] =
    {
#line 5070
        .trainerName = _("STEVEN"),
#line 5071
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5072
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5076
=======
        .encounterMusic_gender = 
#line 5074
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5076
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5080
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5079
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5078
            .lvl = 42,
#line 5077
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5081
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5086
    [TRAINER_PBL_JENNIFER] =
    {
#line 5087
        .trainerName = _("STEVEN"),
#line 5088
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5089
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5093
=======
        .encounterMusic_gender = 
#line 5091
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5093
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5097
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5096
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5095
            .lvl = 42,
#line 5094
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5098
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5103
    [TRAINER_PBL_MATTHEW] =
    {
#line 5104
        .trainerName = _("STEVEN"),
#line 5105
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5106
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5110
=======
        .encounterMusic_gender = 
#line 5108
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5110
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5114
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5113
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5112
            .lvl = 42,
#line 5111
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5115
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5120
    [TRAINER_PBL_KERRY] =
    {
#line 5121
        .trainerName = _("STEVEN"),
#line 5122
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5123
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5127
=======
        .encounterMusic_gender = 
#line 5125
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5127
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5131
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5130
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5129
            .lvl = 42,
#line 5128
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5132
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5137
    [TRAINER_PBL_ANNIE] =
    {
#line 5138
        .trainerName = _("STEVEN"),
#line 5139
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5140
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5144
=======
        .encounterMusic_gender = 
#line 5142
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5144
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5148
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5146
            .lvl = 42,
#line 5145
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5149
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5154
    [TRAINER_PBL_CHRISTI] =
    {
#line 5155
        .trainerName = _("STEVEN"),
#line 5156
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5157
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5161
=======
        .encounterMusic_gender = 
#line 5159
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5161
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5165
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5163
            .lvl = 42,
#line 5162
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5166
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5171
    [TRAINER_PBL_SPENCER] =
    {
#line 5172
        .trainerName = _("STEVEN"),
#line 5173
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5174
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5178
=======
        .encounterMusic_gender = 
#line 5176
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5178
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5182
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5181
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5180
            .lvl = 42,
#line 5179
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5183
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5188
    [TRAINER_PBL_HAYWOOD] =
    {
#line 5189
        .trainerName = _("STEVEN"),
#line 5190
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5191
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5195
=======
        .encounterMusic_gender = 
#line 5193
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5195
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5199
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5198
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5197
            .lvl = 42,
#line 5196
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5200
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5205
    [TRAINER_PBL_MONROE] =
    {
#line 5206
        .trainerName = _("STEVEN"),
#line 5207
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5208
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5212
=======
        .encounterMusic_gender = 
#line 5210
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5212
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5216
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5215
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5214
            .lvl = 42,
#line 5213
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5217
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5222
    [TRAINER_PBL_DAVID] =
    {
#line 5223
        .trainerName = _("STEVEN"),
#line 5224
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5225
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5229
=======
        .encounterMusic_gender = 
#line 5227
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5229
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5233
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5232
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5231
            .lvl = 42,
#line 5230
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5234
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5239
    [TRAINER_PBL_DOMINIK] =
    {
#line 5240
        .trainerName = _("STEVEN"),
#line 5241
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5242
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5246
=======
        .encounterMusic_gender = 
#line 5244
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5246
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5250
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5249
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5248
            .lvl = 42,
#line 5247
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5251
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5256
    [TRAINER_PBL_DOUGLAS] =
    {
#line 5257
        .trainerName = _("STEVEN"),
#line 5258
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5259
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5263
=======
        .encounterMusic_gender = 
#line 5261
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5263
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5267
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5266
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5265
            .lvl = 42,
#line 5264
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5268
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5273
    [TRAINER_PBL_NADINE] =
    {
#line 5274
        .trainerName = _("STEVEN"),
#line 5275
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5276
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5280
=======
        .encounterMusic_gender = 
#line 5278
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5280
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5284
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5283
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5282
            .lvl = 42,
#line 5281
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5285
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5290
    [TRAINER_PBL_SANDY] =
    {
#line 5291
        .trainerName = _("STEVEN"),
#line 5292
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5293
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5297
=======
        .encounterMusic_gender = 
#line 5295
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5297
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5301
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5300
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5299
            .lvl = 42,
#line 5298
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5302
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5307
    [TRAINER_PBL_SHELDON] =
    {
#line 5308
        .trainerName = _("STEVEN"),
#line 5309
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5310
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5314
=======
        .encounterMusic_gender = 
#line 5312
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5314
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5318
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5317
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5316
            .lvl = 42,
#line 5315
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5319
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5324
    [TRAINER_PBL_LEVIATHAN14] =
    {
#line 5325
        .trainerName = _("STEVEN"),
#line 5326
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5327
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5331
=======
        .encounterMusic_gender = 
#line 5329
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5331
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5335
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5334
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5333
            .lvl = 42,
#line 5332
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5336
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5341
    [TRAINER_PBL_LEVIATHAN12_BRUTAL] =
    {
#line 5342
        .trainerName = _("STEVEN"),
#line 5343
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5344
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5348
=======
        .encounterMusic_gender = 
#line 5346
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5348
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5352
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5351
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5350
            .lvl = 42,
#line 5349
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5353
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5358
    [TRAINER_PBL_LEVIATHAN13_BRUTAL] =
    {
#line 5359
        .trainerName = _("STEVEN"),
#line 5360
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5361
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5365
=======
        .encounterMusic_gender = 
#line 5363
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5365
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5369
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5368
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5367
            .lvl = 42,
#line 5366
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5370
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5375
    [TRAINER_PBL_LEVIATHAN14_BRUTAL] =
    {
#line 5376
        .trainerName = _("STEVEN"),
#line 5377
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5378
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5382
=======
        .encounterMusic_gender = 
#line 5380
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5382
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5386
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5385
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5384
            .lvl = 42,
#line 5383
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5387
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5392
    [TRAINER_PBL_LEVIATHAN12] =
    {
#line 5393
        .trainerName = _("STEVEN"),
#line 5394
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5395
        .trainerPic = TRAINER_PIC_STEVEN,
<<<<<<< HEAD
        .encounterMusic_gender =
#line 5399
=======
        .encounterMusic_gender = 
#line 5397
>>>>>>> 28af2b3389 ([PBL] maria leviathan edit)
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5399
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5403
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5402
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5401
            .lvl = 42,
#line 5400
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5404
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
