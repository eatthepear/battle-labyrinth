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
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 1627
    [TRAINER_PBL_MARIA_LEVIATHAN_5_BRUTAL] =
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
        .aiFlags = AI_FLAG_SMART_TRAINER,
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
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1637
            .heldItem = ITEM_EVIOLITE,
#line 1642
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1638
            .ability = ABILITY_SERENE_GRACE,
#line 1641
            .lvl = 16,
#line 1640
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 1639
            .teraType = TYPE_NORMAL,
            .moves = {
#line 1643
                MOVE_HEADBUTT,
                MOVE_ANCIENT_POWER,
                MOVE_GLARE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 1648
    [TRAINER_PBL_GILBERT] =
    {
#line 1649
        .trainerName = _("Gilbert"),
#line 1650
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 1651
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 1652
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1654
        .doubleBattle = FALSE,
#line 1653
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1655
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1657
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1660
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1658
            .ability = ABILITY_SWIFT_SWIM,
#line 1659
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1661
                MOVE_SPLASH,
                MOVE_TACKLE,
                MOVE_FLAIL,
            },
            },
            {
#line 1665
            .species = SPECIES_FINNEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1668
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1666
            .ability = ABILITY_STORM_DRAIN,
#line 1667
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1669
                MOVE_SWEET_KISS,
                MOVE_TICKLE,
                MOVE_WATER_PULSE,
                MOVE_TAILWIND,
            },
            },
            {
#line 1674
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1677
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1675
            .ability = ABILITY_SHEER_FORCE,
#line 1676
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1678
                MOVE_MUD_SHOT,
                MOVE_STOMP,
                MOVE_BUBBLE_BEAM,
                MOVE_SLAM,
            },
            },
            {
#line 1683
            .species = SPECIES_CHEWTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1686
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1684
            .ability = ABILITY_STRONG_JAW,
#line 1685
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1687
                MOVE_WATER_GUN,
                MOVE_BITE,
                MOVE_HEADBUTT,
                MOVE_GASTRO_ACID,
            },
            },
        },
    },
#line 1692
    [TRAINER_PBL_MELANIE] =
    {
#line 1693
        .trainerName = _("Melanie"),
#line 1694
        .trainerClass = TRAINER_CLASS_LASS,
#line 1695
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 1696
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1698
        .doubleBattle = FALSE,
#line 1697
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1699
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1701
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1704
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1702
            .ability = ABILITY_SAP_SIPPER,
#line 1703
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1705
                MOVE_THUNDER_WAVE,
                MOVE_SHOCK_WAVE,
                MOVE_STOMP,
                MOVE_CHARGE,
            },
            },
            {
#line 1710
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1713
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1711
            .ability = ABILITY_FLAME_BODY,
#line 1712
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1714
                MOVE_QUICK_ATTACK,
                MOVE_DOUBLE_KICK,
                MOVE_FIRE_SPIN,
                MOVE_FLAME_WHEEL,
            },
            },
            {
#line 1719
            .species = SPECIES_MUDBRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1722
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1720
            .ability = ABILITY_STAMINA,
#line 1721
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1723
                MOVE_SMACK_DOWN,
                MOVE_BULLDOZE,
                MOVE_DOUBLE_KICK,
                MOVE_STOMP,
            },
            },
        },
    },
#line 1728
    [TRAINER_PBL_CONSTANCE] =
    {
#line 1729
        .trainerName = _("Constance"),
#line 1730
        .trainerClass = TRAINER_CLASS_LADY,
#line 1731
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1732
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1734
        .doubleBattle = FALSE,
#line 1733
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1735
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1737
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1740
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1738
            .ability = ABILITY_TECHNICIAN,
#line 1739
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1741
                MOVE_HELPING_HAND,
                MOVE_DOUBLE_SLAP,
                MOVE_TICKLE,
                MOVE_SWIFT,
            },
            },
            {
#line 1746
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1747
            .ability = ABILITY_LEAF_GUARD,
#line 1748
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1750
                MOVE_SLEEP_POWDER,
                MOVE_MEGA_DRAIN,
                MOVE_HELPING_HAND,
                MOVE_WORRY_SEED,
            },
            },
            {
#line 1755
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1758
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1756
            .ability = ABILITY_GUTS,
#line 1757
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1759
                MOVE_FAKE_OUT,
                MOVE_FORCE_PALM,
                MOVE_BULLET_PUNCH,
                MOVE_SMELLING_SALTS,
            },
            },
            {
#line 1764
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1767
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1765
            .ability = ABILITY_THICK_FAT,
#line 1766
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1768
                MOVE_CONFUSE_RAY,
                MOVE_PAYBACK,
                MOVE_PSYBEAM,
                MOVE_TRICK,
            },
            },
        },
    },
#line 1773
    [TRAINER_PBL_FRANK] =
    {
#line 1774
        .trainerName = _("Frank"),
#line 1775
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 1776
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 1777
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1779
        .doubleBattle = FALSE,
#line 1778
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1780
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1782
            .species = SPECIES_FLABEBE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1783
            .ability = ABILITY_FLOWER_VEIL,
#line 1784
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1786
                MOVE_TEARFUL_LOOK,
                MOVE_LUCKY_CHANT,
                MOVE_SYNTHESIS,
                MOVE_RAZOR_LEAF,
            },
            },
            {
#line 1791
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1792
            .ability = ABILITY_INTIMIDATE,
#line 1793
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1795
                MOVE_BITE,
                MOVE_HELPING_HAND,
                MOVE_DOUBLE_KICK,
                MOVE_FLAME_WHEEL,
            },
            },
            {
#line 1800
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1803
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1801
            .ability = ABILITY_TRUANT,
#line 1802
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1804
                MOVE_SNORE,
                MOVE_SLASH,
                MOVE_FEINT_ATTACK,
                MOVE_SLACK_OFF,
            },
            },
        },
    },
#line 1809
    [TRAINER_PBL_DUDLEY] =
    {
#line 1810
        .trainerName = _("Dudley"),
#line 1811
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 1812
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 1813
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1815
        .doubleBattle = FALSE,
#line 1814
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1816
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1818
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1821
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1819
            .ability = ABILITY_KEEN_EYE,
#line 1820
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1822
                MOVE_TWISTER,
                MOVE_AQUA_RING,
                MOVE_WING_ATTACK,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1827
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1830
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1828
            .ability = ABILITY_SCRAPPY,
#line 1829
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1831
                MOVE_FOCUS_ENERGY,
                MOVE_WING_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_RAGE,
            },
            },
            {
#line 1836
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1839
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1837
            .ability = ABILITY_WIND_POWER,
#line 1838
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1840
                MOVE_THUNDER_SHOCK,
                MOVE_UPROAR,
                MOVE_FEATHER_DANCE,
                MOVE_PLUCK,
            },
            },
            {
#line 1845
            .species = SPECIES_ROOKIDEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1848
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1846
            .ability = ABILITY_BIG_PECKS,
#line 1847
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1849
                MOVE_POWER_TRIP,
                MOVE_FURY_ATTACK,
                MOVE_ROCK_SMASH,
                MOVE_PLUCK,
            },
            },
        },
    },
#line 1854
    [TRAINER_PBL_DAISY] =
    {
#line 1855
        .trainerName = _("Daisy"),
#line 1856
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 1857
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 1858
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1860
        .doubleBattle = FALSE,
#line 1859
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1861
        .randomLead = TRUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1863
            .species = SPECIES_SMEARGLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1866
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1864
            .ability = ABILITY_TECHNICIAN,
#line 1865
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1867
                MOVE_SKETCH,
            },
            },
            {
#line 1869
            .species = SPECIES_APPLIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1872
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1870
            .ability = ABILITY_RIPEN,
#line 1871
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1873
                MOVE_ASTONISH,
                MOVE_WITHDRAW,
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
            },
            },
            {
#line 1878
            .species = SPECIES_MILCERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1881
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1879
            .ability = ABILITY_SWEET_VEIL,
#line 1880
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1882
                MOVE_BABY_DOLL_EYES,
                MOVE_CHARM,
                MOVE_SWEET_KISS,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 1887
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1890
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1888
            .ability = ABILITY_SYNCHRONIZE,
#line 1889
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1891
                MOVE_TELEPORT,
            },
            },
            {
#line 1893
            .species = SPECIES_CLEFFA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1896
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1894
            .ability = ABILITY_CUTE_CHARM,
#line 1895
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1897
                MOVE_DISARMING_VOICE,
                MOVE_CHARM,
                MOVE_ENCORE,
                MOVE_WISH,
            },
            },
            {
#line 1902
            .species = SPECIES_TYROGUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1905
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1903
            .ability = ABILITY_GUTS,
#line 1904
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1906
                MOVE_MACH_PUNCH,
                MOVE_RAPID_SPIN,
                MOVE_COUNTER,
                MOVE_VACUUM_WAVE,
            },
            },
        },
    },
#line 1911
    [TRAINER_PBL_VIC_AND_DELL] =
    {
#line 1912
        .trainerName = _("Vic&Dell"),
#line 1913
        .trainerClass = TRAINER_CLASS_TWINS,
#line 1914
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 1915
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1917
        .doubleBattle = TRUE,
#line 1916
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1919
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1922
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1920
            .ability = ABILITY_PLUS,
#line 1921
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1923
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_CHARM,
                MOVE_ELECTRO_BALL,
            },
            },
            {
#line 1928
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1931
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1929
            .ability = ABILITY_MINUS,
#line 1930
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1932
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_CHARM,
                MOVE_ELECTRO_BALL,
            },
            },
        },
    },
#line 1937
    [TRAINER_PBL_MINA] =
    {
#line 1938
        .trainerName = _("Nina"),
#line 1939
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 1940
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 1941
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1943
        .doubleBattle = FALSE,
#line 1942
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1944
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1946
            .species = SPECIES_WIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1946
            .heldItem = ITEM_ORAN_BERRY,
#line 1949
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1947
            .ability = ABILITY_GOOEY,
#line 1948
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1950
                MOVE_AQUA_JET,
                MOVE_WATER_PULSE,
                MOVE_SLAM,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 1955
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1955
            .heldItem = ITEM_ORAN_BERRY,
#line 1958
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1956
            .ability = ABILITY_HYDRATION,
#line 1957
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1959
                MOVE_MAGNITUDE,
                MOVE_WATER_PULSE,
                MOVE_MUD_BOMB,
                MOVE_REST,
            },
            },
            {
#line 1964
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1964
            .heldItem = ITEM_ORAN_BERRY,
#line 1967
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1965
            .ability = ABILITY_SWIFT_SWIM,
#line 1966
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1968
                MOVE_WATER_PULSE,
                MOVE_HORN_ATTACK,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
            {
#line 1973
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1973
            .heldItem = ITEM_ORAN_BERRY,
#line 1976
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1974
            .ability = ABILITY_REGENERATOR,
#line 1975
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1977
                MOVE_WATER_PULSE,
                MOVE_HORN_ATTACK,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
        },
    },
#line 1982
    [TRAINER_PBL_ZACK_AND_COBY_LEVIATHAN_6] =
    {
#line 1983
        .trainerName = _("Zack&Coby"),
#line 1984
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 1985
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 1986
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1988
        .doubleBattle = TRUE,
#line 1987
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1990
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 1989
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1992
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1992
            .heldItem = ITEM_ORAN_BERRY,
#line 1995
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1993
            .ability = ABILITY_SWIFT_SWIM,
#line 1994
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1996
                MOVE_CHILLING_WATER,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 1999
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1999
            .heldItem = ITEM_ORAN_BERRY,
#line 2002
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2000
            .ability = ABILITY_SWIFT_SWIM,
#line 2001
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2003
                MOVE_CHILLING_WATER,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 2006
    [TRAINER_PBL_ZACK_AND_COBY_LEVIATHAN_6_CHALLENGE] =
    {
#line 2007
        .trainerName = _("Zack&Coby"),
#line 2008
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 2009
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 2010
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2012
        .doubleBattle = TRUE,
#line 2011
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 2014
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2013
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2016
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2016
            .heldItem = ITEM_ORAN_BERRY,
#line 2019
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2017
            .ability = ABILITY_SWIFT_SWIM,
#line 2018
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2020
                MOVE_CHILLING_WATER,
                MOVE_DRAINING_KISS,
                MOVE_HEAL_PULSE,
            },
            },
            {
#line 2024
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2024
            .heldItem = ITEM_ORAN_BERRY,
#line 2027
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 30, 30),
#line 2025
            .ability = ABILITY_SWIFT_SWIM,
#line 2026
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2028
                MOVE_CHILLING_WATER,
                MOVE_TAILWIND,
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 2033
    [TRAINER_PBL_MILLIE] =
    {
#line 2034
        .trainerName = _("Millie"),
#line 2035
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 2036
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 2037
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2039
        .doubleBattle = FALSE,
#line 2038
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2040
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2042
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2045
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2043
            .ability = ABILITY_INNER_FOCUS,
#line 2044
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2046
                MOVE_FAKE_OUT,
                MOVE_FORCE_PALM,
                MOVE_ME_FIRST,
                MOVE_VITAL_THROW,
            },
            },
            {
#line 2051
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2054
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2052
            .ability = ABILITY_VITAL_SPIRIT,
#line 2053
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2055
                MOVE_SWAGGER,
                MOVE_RETALIATE,
                MOVE_KARATE_CHOP,
                MOVE_ASSURANCE,
            },
            },
            {
#line 2060
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2063
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2061
            .ability = ABILITY_PURE_POWER,
#line 2062
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2064
                MOVE_FEINT,
                MOVE_SECRET_POWER,
                MOVE_FORCE_PALM,
                MOVE_PSYBEAM,
            },
            },
            {
#line 2069
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2072
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2070
            .ability = ABILITY_IRON_FIST,
#line 2071
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2073
                MOVE_ROCK_THROW,
                MOVE_WAKE_UP_SLAP,
                MOVE_CHIP_AWAY,
                MOVE_MACH_PUNCH,
            },
            },
        },
    },
#line 2078
    [TRAINER_PBL_JAMAL] =
    {
#line 2079
        .trainerName = _("Jamal"),
#line 2080
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2081
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2082
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2084
        .doubleBattle = FALSE,
#line 2083
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2085
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2087
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2090
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2088
            .ability = ABILITY_OBLIVIOUS,
#line 2089
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2091
                MOVE_BULLDOZE,
                MOVE_YAWN,
                MOVE_FLAME_WHEEL,
                MOVE_MAGNITUDE,
            },
            },
            {
#line 2096
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2099
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2097
            .ability = ABILITY_INNER_FOCUS,
#line 2098
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2100
                MOVE_POISON_FANG,
                MOVE_QUICK_GUARD,
                MOVE_WING_ATTACK,
                MOVE_SWIFT,
            },
            },
            {
#line 2105
            .species = SPECIES_FOMANTIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2108
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2106
            .ability = ABILITY_LEAF_GUARD,
#line 2107
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2109
                MOVE_WORRY_SEED,
                MOVE_RAZOR_LEAF,
                MOVE_SYNTHESIS,
                MOVE_SLASH,
            },
            },
            {
#line 2114
            .species = SPECIES_BUIZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2117
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2115
            .ability = ABILITY_WATER_VEIL,
#line 2116
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2118
                MOVE_BITE,
                MOVE_AQUA_JET,
                MOVE_SONIC_BOOM,
                MOVE_PURSUIT,
            },
            },
        },
    },
#line 2123
    [TRAINER_PBL_PAIGE] =
    {
#line 2124
        .trainerName = _("Paige"),
#line 2125
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 2126
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 2127
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2129
        .doubleBattle = FALSE,
#line 2128
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2130
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2132
            .species = SPECIES_COMBEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2135
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2133
            .ability = ABILITY_HONEY_GATHER,
#line 2134
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2136
                MOVE_GUST,
                MOVE_SWEET_SCENT,
                MOVE_STRUGGLE_BUG,
                MOVE_BUG_BITE,
            },
            },
            {
#line 2141
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2144
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2142
            .ability = ABILITY_CHLOROPHYLL,
#line 2143
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2145
                MOVE_CONFUSION,
                MOVE_MEGA_DRAIN,
                MOVE_POISON_POWDER,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 2150
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2153
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2151
            .ability = ABILITY_EFFECT_SPORE,
#line 2152
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2154
                MOVE_HEADBUTT,
                MOVE_MEGA_DRAIN,
                MOVE_FAKE_TEARS,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 2159
            .species = SPECIES_CUTIEFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2160
            .ability = ABILITY_SHIELD_DUST,
#line 2161
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2163
                MOVE_STRUGGLE_BUG,
                MOVE_STUN_SPORE,
                MOVE_SWITCHEROO,
                MOVE_DRAINING_KISS,
            },
            },
        },
    },
#line 2168
    [TRAINER_PBL_SETH] =
    {
#line 2169
        .trainerName = _("Seth"),
#line 2170
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2171
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 2172
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2174
        .doubleBattle = FALSE,
#line 2173
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2175
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2177
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2180
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2178
            .ability = ABILITY_PRANKSTER,
#line 2179
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2181
                MOVE_FLATTER,
                MOVE_SPARK,
                MOVE_SWIFT,
                MOVE_NUZZLE,
            },
            },
            {
#line 2186
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2189
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2187
            .ability = ABILITY_QUICK_FEET,
#line 2188
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2190
                MOVE_YAWN,
                MOVE_COVET,
                MOVE_METAL_CLAW,
                MOVE_CHIP_AWAY,
            },
            },
            {
#line 2195
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2198
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2196
            .ability = ABILITY_PICKUP,
#line 2197
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2199
                MOVE_FAKE_OUT,
                MOVE_ASTONISH,
                MOVE_QUICK_GUARD,
                MOVE_SLAM,
            },
            },
            {
#line 2204
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2207
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2205
            .ability = ABILITY_UNBURDEN,
#line 2206
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2208
                MOVE_SWITCHEROO,
                MOVE_POISON_FANG,
                MOVE_SUPER_FANG,
                MOVE_FLATTER,
            },
            },
        },
    },
#line 2213
    [TRAINER_PBL_CONNIE] =
    {
#line 2214
        .trainerName = _("Connie"),
#line 2215
        .trainerClass = TRAINER_CLASS_LASS,
#line 2216
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 2217
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2219
        .doubleBattle = FALSE,
#line 2218
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2220
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2222
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2225
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2223
            .ability = ABILITY_CHLOROPHYLL,
#line 2224
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2226
                MOVE_LEECH_SEED,
                MOVE_RAZOR_LEAF,
                MOVE_SECRET_POWER,
                MOVE_MEGA_DRAIN,
            },
            },
            {
#line 2231
            .species = SPECIES_DEWPIDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2234
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2232
            .ability = ABILITY_WATER_BUBBLE,
#line 2233
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2235
                MOVE_AQUA_RING,
                MOVE_SPIDER_WEB,
                MOVE_BUG_BITE,
                MOVE_BUBBLE_BEAM,
            },
            },
        },
    },
#line 2240
    [TRAINER_PBL_PETER] =
    {
#line 2241
        .trainerName = _("Peter"),
#line 2242
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 2243
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 2244
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2246
        .doubleBattle = FALSE,
#line 2245
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2247
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2249
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2252
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2250
            .ability = ABILITY_CHLOROPHYLL,
#line 2251
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2253
                MOVE_CLEAR_SMOG,
                MOVE_RAZOR_LEAF,
                MOVE_ACID_SPRAY,
                MOVE_MAGICAL_LEAF,
            },
            },
            {
#line 2258
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2261
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2259
            .ability = ABILITY_SWIFT_SWIM,
#line 2260
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2262
                MOVE_STRUGGLE_BUG,
                MOVE_BUBBLE_BEAM,
                MOVE_PSYBEAM,
                MOVE_SIGNAL_BEAM,
            },
            },
        },
    },
#line 2267
    [TRAINER_PBL_WHITAKER] =
    {
#line 2268
        .trainerName = _("Whitaker"),
#line 2269
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 2270
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 2271
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 2273
        .doubleBattle = FALSE,
#line 2272
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2274
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2276
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2279
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2277
            .ability = ABILITY_SNIPER,
#line 2278
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2280
                MOVE_FURY_ATTACK,
                MOVE_QUICK_ATTACK,
                MOVE_WING_ATTACK,
                MOVE_PURSUIT,
            },
            },
            {
#line 2285
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2288
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2286
            .ability = ABILITY_MAGIC_BOUNCE,
#line 2287
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2289
                MOVE_NIGHT_SHADE,
                MOVE_REFRESH,
                MOVE_AIR_CUTTER,
                MOVE_OMINOUS_WIND,
            },
            },
            {
#line 2294
            .species = SPECIES_FLITTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2297
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2295
            .ability = ABILITY_FRISK,
#line 2296
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2298
                MOVE_DISARMING_VOICE,
                MOVE_BABY_DOLL_EYES,
                MOVE_PSYBEAM,
                MOVE_PLUCK,
            },
            },
            {
#line 2303
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2306
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2304
            .ability = ABILITY_SUPER_LUCK,
#line 2305
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2307
                MOVE_AERIAL_ACE,
                MOVE_QUICK_ATTACK,
                MOVE_FEATHER_DANCE,
                MOVE_AIR_CUTTER,
            },
            },
        },
    },
#line 2312
    [TRAINER_PBL_BETTY_LEVIATHAN_7] =
    {
#line 2313
        .trainerName = _("Betty"),
#line 2314
        .trainerClass = TRAINER_CLASS_LADY,
#line 2315
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 2316
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2318
        .doubleBattle = TRUE,
#line 2317
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2320
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2319
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2322
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2322
            .heldItem = ITEM_SITRUS_BERRY,
#line 2325
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2323
            .ability = ABILITY_ANGER_SHELL,
#line 2324
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2326
                MOVE_ROCK_TOMB,
                MOVE_METAL_CLAW,
                MOVE_ROCK_SMASH,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 2331
            .species = SPECIES_DEDENNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2331
            .heldItem = ITEM_SITRUS_BERRY,
#line 2334
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2332
            .ability = ABILITY_CHEEK_POUCH,
#line 2333
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2335
                MOVE_PARABOLIC_CHARGE,
                MOVE_DRAINING_KISS,
                MOVE_NUZZLE,
                MOVE_CHARGE_BEAM,
            },
            },
        },
    },
#line 2340
    [TRAINER_PBL_BETTY_LEVIATHAN_7_CHALLENGE] =
    {
#line 2341
        .trainerName = _("Betty"),
#line 2342
        .trainerClass = TRAINER_CLASS_LADY,
#line 2343
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 2344
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2346
        .doubleBattle = TRUE,
#line 2345
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 2348
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2347
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2350
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2350
            .heldItem = ITEM_SITRUS_BERRY,
#line 2353
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2351
            .ability = ABILITY_ANGER_SHELL,
#line 2352
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2354
                MOVE_ROCK_TOMB,
                MOVE_METAL_CLAW,
                MOVE_ROCK_SMASH,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 2359
            .species = SPECIES_DEDENNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2359
            .heldItem = ITEM_SITRUS_BERRY,
#line 2362
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2360
            .ability = ABILITY_CHEEK_POUCH,
#line 2361
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2363
                MOVE_PARABOLIC_CHARGE,
                MOVE_DRAINING_KISS,
                MOVE_NUZZLE,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 2368
            .species = SPECIES_DRAMPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2368
            .heldItem = ITEM_SITRUS_BERRY,
#line 2371
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2369
            .ability = ABILITY_BERSERK,
#line 2370
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2372
                MOVE_DRAGON_BREATH,
                MOVE_GLARE,
                MOVE_NATURAL_GIFT,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 2377
    [TRAINER_PBL_JIMMY] =
    {
#line 2378
        .trainerName = _("Jimmy"),
#line 2379
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 2380
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 2381
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2383
        .doubleBattle = FALSE,
#line 2382
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2384
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2386
            .species = SPECIES_NOIBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2389
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2387
            .ability = ABILITY_INFILTRATOR,
#line 2388
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2390
                MOVE_WING_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_BITE,
                MOVE_ROOST,
            },
            },
            {
#line 2395
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2396
            .ability = ABILITY_SWIFT_SWIM,
#line 2397
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2399
                MOVE_SPLASH,
                MOVE_TACKLE,
                MOVE_FLAIL,
            },
            },
            {
#line 2403
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2404
            .ability = ABILITY_CLEAR_BODY,
#line 2405
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2407
                MOVE_TACKLE,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 2410
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2413
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2411
            .ability = ABILITY_SAND_VEIL,
#line 2412
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2414
                MOVE_METAL_CLAW,
                MOVE_DRAGON_BREATH,
                MOVE_BITE,
                MOVE_BULLDOZE,
            },
            },
        },
    },
#line 2419
    [TRAINER_PBL_EMILIANO] =
    {
#line 2420
        .trainerName = _("Emiliano"),
#line 2421
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2422
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 2423
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2425
        .doubleBattle = FALSE,
#line 2424
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2426
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2428
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2431
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2429
            .ability = ABILITY_STURDY,
#line 2430
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2432
                MOVE_METAL_CLAW,
                MOVE_ROCK_TOMB,
                MOVE_METAL_SOUND,
                MOVE_HEADBUTT,
            },
            },
            {
#line 2437
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2440
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2438
            .ability = ABILITY_STURDY,
#line 2439
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2441
                MOVE_SMACK_DOWN,
                MOVE_MUD_SLAP,
                MOVE_MAGNITUDE,
                MOVE_HEADBUTT,
            },
            },
            {
#line 2446
            .species = SPECIES_CUFANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2449
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2447
            .ability = ABILITY_SHEER_FORCE,
#line 2448
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2450
                MOVE_ROLLOUT,
                MOVE_STOMP,
                MOVE_BULLDOZE,
                MOVE_SLAM,
            },
            },
            {
#line 2455
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2456
            .ability = ABILITY_NO_GUARD,
#line 2457
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2459
                MOVE_SEISMIC_TOSS,
                MOVE_LOW_SWEEP,
                MOVE_STRENGTH,
                MOVE_VITAL_THROW,
            },
            },
        },
    },
#line 2464
    [TRAINER_PBL_BECKHAM] =
    {
#line 2465
        .trainerName = _("Beckham"),
#line 2466
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2467
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2468
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2470
        .doubleBattle = FALSE,
#line 2469
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2471
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2473
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2476
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2474
            .ability = ABILITY_OWN_TEMPO,
#line 2475
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2477
                MOVE_YAWN,
                MOVE_DISABLE,
                MOVE_CONFUSION,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 2482
            .species = SPECIES_SALANDIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2485
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2483
            .ability = ABILITY_CORROSION,
#line 2484
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2486
                MOVE_MUD_SLAP,
                MOVE_FAKE_OUT,
                MOVE_POISON_FANG,
                MOVE_INCINERATE,
            },
            },
            {
#line 2491
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2492
            .ability = ABILITY_BATTLE_ARMOR,
#line 2493
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2495
                MOVE_BONE_CLUB,
                MOVE_FOCUS_ENERGY,
                MOVE_DOUBLE_KICK,
                MOVE_BONE_RUSH,
            },
            },
            {
#line 2500
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2503
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2501
            .ability = ABILITY_UNAWARE,
#line 2502
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2504
                MOVE_DISABLE,
                MOVE_STOMP,
                MOVE_WRAP,
                MOVE_MAGNITUDE,
            },
            },
        },
    },
#line 2509
    [TRAINER_PBL_KAREN] =
    {
#line 2510
        .trainerName = _("Karen"),
#line 2511
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 2512
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 2513
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2515
        .doubleBattle = FALSE,
#line 2514
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2516
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2518
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2521
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2519
            .ability = ABILITY_CONTRARY,
#line 2520
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2522
                MOVE_SMELLING_SALTS,
                MOVE_FEINT_ATTACK,
                MOVE_PSYBEAM,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 2527
    [TRAINER_PBL_JAYDEN] =
    {
#line 2528
        .trainerName = _("Jayden"),
#line 2529
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2530
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 2531
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2533
        .doubleBattle = FALSE,
#line 2532
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2534
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2536
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2539
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2537
            .ability = ABILITY_STURDY,
#line 2538
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2540
                MOVE_ROLLOUT,
                MOVE_MAGNITUDE,
                MOVE_SMACK_DOWN,
                MOVE_BULLDOZE,
            },
            },
            {
#line 2545
            .species = SPECIES_ROLYCOLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2548
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2546
            .ability = ABILITY_STEAM_ENGINE,
#line 2547
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2549
                MOVE_SMACK_DOWN,
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_INCINERATE,
            },
            },
            {
#line 2554
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2557
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2555
            .ability = ABILITY_PURIFYING_SALT,
#line 2556
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2558
                MOVE_MUD_SHOT,
                MOVE_HEADBUTT,
                MOVE_SMACK_DOWN,
                MOVE_RECOVER,
            },
            },
            {
#line 2563
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2566
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2564
            .ability = ABILITY_SOLID_ROCK,
#line 2565
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2567
                MOVE_STRUGGLE_BUG,
                MOVE_ACID,
                MOVE_ROCK_THROW,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 2572
    [TRAINER_PBL_NEIL] =
    {
#line 2573
        .trainerName = _("Neil"),
#line 2574
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 2575
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 2576
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2578
        .doubleBattle = FALSE,
#line 2577
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2579
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2581
            .species = SPECIES_RELLOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2582
            .ability = ABILITY_COMPOUND_EYES,
#line 2583
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2585
                MOVE_STRUGGLE_BUG,
                MOVE_MUD_SHOT,
                MOVE_BUG_BITE,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 2590
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2593
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2591
            .ability = ABILITY_LEVITATE,
#line 2592
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2594
                MOVE_ROCK_TOMB,
                MOVE_RAPID_SPIN,
                MOVE_ANCIENT_POWER,
                MOVE_PSYBEAM,
            },
            },
            {
#line 2599
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2602
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2600
            .ability = ABILITY_MUMMY,
#line 2601
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2603
                MOVE_IMPRISON,
                MOVE_HEX,
                MOVE_CURSE,
                MOVE_FAKE_TEARS,
            },
            },
            {
#line 2608
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2611
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2609
            .ability = ABILITY_PLUS,
#line 2610
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2612
                MOVE_CHARGE,
                MOVE_METAL_SOUND,
                MOVE_SCREECH,
                MOVE_MIRROR_SHOT,
            },
            },
        },
    },
#line 2617
    [TRAINER_PBL_TAMARA] =
    {
#line 2618
        .trainerName = _("Tamara"),
#line 2619
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 2620
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 2621
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2623
        .doubleBattle = FALSE,
#line 2622
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2624
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2626
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2629
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2627
            .ability = ABILITY_STORM_DRAIN,
#line 2628
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2630
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_HIDDEN_POWER,
                MOVE_SLUDGE,
            },
            },
            {
#line 2635
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2638
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2636
            .ability = ABILITY_SERENE_GRACE,
#line 2637
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2639
                MOVE_HEART_STAMP,
                MOVE_FLATTER,
                MOVE_ASSURANCE,
                MOVE_AIR_CUTTER,
            },
            },
            {
#line 2644
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2647
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2645
            .ability = ABILITY_INSOMNIA,
#line 2646
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2648
                MOVE_POISON_GAS,
                MOVE_HEADBUTT,
                MOVE_WAKE_UP_SLAP,
                MOVE_PSYBEAM,
            },
            },
            {
#line 2653
            .species = SPECIES_ROCKRUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2656
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2654
            .ability = ABILITY_VITAL_SPIRIT,
#line 2655
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2657
                MOVE_BITE,
                MOVE_ROAR,
                MOVE_ROCK_TOMB,
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 2662
    [TRAINER_PBL_ALISTAIR_LEVIATHAN_8] =
    {
#line 2663
        .trainerName = _("Alistair"),
#line 2664
        .trainerClass = TRAINER_CLASS_ROUGHNECK,
#line 2665
        .trainerPic = TRAINER_PIC_ROUGHNECK,
        .encounterMusic_gender =
#line 2666
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2668
        .doubleBattle = FALSE,
#line 2667
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2670
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2669
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2672
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2672
            .heldItem = ITEM_POISON_BARB,
#line 2675
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2673
            .ability = ABILITY_POISON_TOUCH,
#line 2674
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2676
                MOVE_SLUDGE,
                MOVE_POISON_GAS,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2681
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2681
            .heldItem = ITEM_SHARP_BEAK,
#line 2684
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2682
            .ability = ABILITY_AFTERMATH,
#line 2683
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2685
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_DEFOG,
            },
            },
            {
#line 2690
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2690
            .heldItem = ITEM_BLACK_BELT,
#line 2693
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2691
            .ability = ABILITY_POISON_TOUCH,
#line 2692
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2694
                MOVE_VENOSHOCK,
                MOVE_VACUUM_WAVE,
                MOVE_FAKE_OUT,
                MOVE_THIEF,
            },
            },
            {
#line 2699
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2699
            .heldItem = ITEM_SITRUS_BERRY,
#line 2702
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2700
            .ability = ABILITY_STRONG_JAW,
#line 2701
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2703
                MOVE_BITE,
                MOVE_THUNDER_FANG,
                MOVE_FIRE_FANG,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 2708
    [TRAINER_PBL_ALISTAIR_LEVIATHAN_8_CHALLENGE] =
    {
#line 2709
        .trainerName = _("Alistair"),
#line 2710
        .trainerClass = TRAINER_CLASS_ROUGHNECK,
#line 2711
        .trainerPic = TRAINER_PIC_ROUGHNECK,
        .encounterMusic_gender =
#line 2712
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2714
        .doubleBattle = FALSE,
#line 2713
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 2716
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2715
        .randomLead = FALSE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2718
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2718
            .heldItem = ITEM_POISON_BARB,
#line 2721
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2719
            .ability = ABILITY_POISON_TOUCH,
#line 2720
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2722
                MOVE_SLUDGE,
                MOVE_POISON_GAS,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2727
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2727
            .heldItem = ITEM_SHARP_BEAK,
#line 2730
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2728
            .ability = ABILITY_AFTERMATH,
#line 2729
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2731
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_DEFOG,
            },
            },
            {
#line 2736
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2736
            .heldItem = ITEM_BLACK_BELT,
#line 2739
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2737
            .ability = ABILITY_POISON_TOUCH,
#line 2738
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2740
                MOVE_VENOSHOCK,
                MOVE_VACUUM_WAVE,
                MOVE_FAKE_OUT,
                MOVE_THIEF,
            },
            },
            {
#line 2745
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2745
            .heldItem = ITEM_SITRUS_BERRY,
#line 2748
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2746
            .ability = ABILITY_STRONG_JAW,
#line 2747
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2749
                MOVE_BITE,
                MOVE_THUNDER_FANG,
                MOVE_FIRE_FANG,
                MOVE_ICE_FANG,
            },
            },
            {
#line 2754
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2754
            .heldItem = ITEM_EVIOLITE,
#line 2757
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2755
            .ability = ABILITY_SAP_SIPPER,
#line 2756
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2758
                MOVE_DOUBLE_HIT,
                MOVE_PSYBEAM,
                MOVE_CHARGE_BEAM,
                MOVE_TRAILBLAZE,
            },
            },
        },
    },
#line 2763
    [TRAINER_PBL_COOPER] =
    {
#line 2764
        .trainerName = _("Cooper"),
#line 2765
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 2766
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 2767
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2769
        .doubleBattle = FALSE,
#line 2768
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2770
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2772
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2773
            .ability = ABILITY_EFFECT_SPORE,
#line 2774
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2776
                MOVE_GASTRO_ACID,
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 2781
            .species = SPECIES_SKORUPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2784
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2782
            .ability = ABILITY_SNIPER,
#line 2783
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2785
                MOVE_POISON_FANG,
                MOVE_BUG_BITE,
                MOVE_FEINT_ATTACK,
                MOVE_HONE_CLAWS,
            },
            },
            {
#line 2790
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2791
            .ability = ABILITY_LEVITATE,
#line 2792
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2794
                MOVE_SLUDGE,
                MOVE_STOCKPILE,
                MOVE_SPIT_UP,
                MOVE_SWALLOW,
            },
            },
            {
#line 2799
            .species = SPECIES_VENONAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2800
            .ability = ABILITY_COMPOUND_EYES,
#line 2801
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2803
                MOVE_STRUGGLE_BUG,
                MOVE_POISON_POWDER,
                MOVE_PSYBEAM,
                MOVE_STUN_SPORE,
            },
            },
        },
    },
#line 2808
    [TRAINER_PBL_CARMINE] =
    {
#line 2809
        .trainerName = _("Carmine"),
#line 2810
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 2811
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 2812
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2814
        .doubleBattle = FALSE,
#line 2813
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2815
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2817
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2820
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2818
            .ability = ABILITY_MOTOR_DRIVE,
#line 2819
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2821
                MOVE_SHOCK_WAVE,
                MOVE_CHARGE_BEAM,
                MOVE_AERIAL_ACE,
                MOVE_ENCORE,
            },
            },
        },
    },
#line 2826
    [TRAINER_PBL_JONATHAN] =
    {
#line 2827
        .trainerName = _("Jonathan"),
#line 2828
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 2829
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 2830
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2832
        .doubleBattle = FALSE,
#line 2831
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2833
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2835
            .species = SPECIES_NYMBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2836
            .ability = ABILITY_SWARM,
#line 2837
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2839
                MOVE_DOUBLE_KICK,
                MOVE_SCREECH,
                MOVE_BUG_BITE,
                MOVE_FEINT,
            },
            },
            {
#line 2844
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2847
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2845
            .ability = ABILITY_STURDY,
#line 2846
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2848
                MOVE_BUG_BITE,
                MOVE_PAYBACK,
                MOVE_RAPID_SPIN,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 2853
            .species = SPECIES_SHELMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2856
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2854
            .ability = ABILITY_SHELL_ARMOR,
#line 2855
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2857
                MOVE_MUD_SLAP,
                MOVE_STRUGGLE_BUG,
                MOVE_MEGA_DRAIN,
                MOVE_RECOVER,
            },
            },
            {
#line 2862
            .species = SPECIES_KARRABLAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2865
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2863
            .ability = ABILITY_SWARM,
#line 2864
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2866
                MOVE_FEINT_ATTACK,
                MOVE_BUG_BITE,
                MOVE_SLASH,
                MOVE_RECOVER,
            },
            },
        },
    },
#line 2871
    [TRAINER_PBL_CALVIN] =
    {
#line 2872
        .trainerName = _("Calvin"),
#line 2873
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 2874
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 2875
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2877
        .doubleBattle = FALSE,
#line 2876
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2878
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2880
            .species = SPECIES_ARROKUDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2883
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2881
            .ability = ABILITY_PROPELLER_TAIL,
#line 2882
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2884
                MOVE_AQUA_JET,
                MOVE_BITE,
                MOVE_FOCUS_ENERGY,
                MOVE_LASER_FOCUS,
            },
            },
            {
#line 2889
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2892
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2890
            .ability = ABILITY_WATER_ABSORB,
#line 2891
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2893
                MOVE_MUD_SHOT,
                MOVE_BUBBLE_BEAM,
                MOVE_ENDEAVOR,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 2898
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2901
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2899
            .ability = ABILITY_SNIPER,
#line 2900
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2902
                MOVE_FOCUS_ENERGY,
                MOVE_BUBBLE_BEAM,
                MOVE_PSYBEAM,
                MOVE_AURORA_BEAM,
            },
            },
            {
#line 2907
            .species = SPECIES_TYMPOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2910
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2908
            .ability = ABILITY_WATER_ABSORB,
#line 2909
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2911
                MOVE_UPROAR,
                MOVE_BUBBLE_BEAM,
                MOVE_MUD_BOMB,
                MOVE_AQUA_RING,
            },
            },
        },
    },
#line 2916
    [TRAINER_PBL_LUIS] =
    {
#line 2917
        .trainerName = _("Luis"),
#line 2918
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 2919
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 2920
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2922
        .doubleBattle = FALSE,
#line 2921
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2923
        .randomLead = TRUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2925
            .species = SPECIES_CHARCADET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2928
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2926
            .ability = ABILITY_FLASH_FIRE,
#line 2927
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2929
                MOVE_NIGHT_SHADE,
                MOVE_INCINERATE,
                MOVE_WILL_O_WISP,
                MOVE_FLAME_CHARGE,
            },
            },
            {
#line 2934
            .species = SPECIES_CAPSAKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2937
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2935
            .ability = ABILITY_CHLOROPHYLL,
#line 2936
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2938
                MOVE_LEECH_SEED,
                MOVE_RAZOR_LEAF,
                MOVE_WORRY_SEED,
                MOVE_HEADBUTT,
            },
            },
            {
#line 2943
            .species = SPECIES_WIMPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2946
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2944
            .ability = ABILITY_WIMP_OUT,
#line 2945
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2947
                MOVE_STRUGGLE_BUG,
                MOVE_SAND_ATTACK,
                MOVE_HARDEN,
                MOVE_AQUA_JET,
            },
            },
            {
#line 2952
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2955
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2953
            .ability = ABILITY_LEVITATE,
#line 2954
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2956
                MOVE_TACKLE,
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 2961
            .species = SPECIES_TOXEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2964
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2962
            .ability = ABILITY_STATIC,
#line 2963
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2965
                MOVE_GROWL,
                MOVE_ACID,
                MOVE_NUZZLE,
                MOVE_TEARFUL_LOOK,
            },
            },
            {
#line 2970
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2973
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2971
            .ability = ABILITY_NATURAL_CURE,
#line 2972
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2974
                MOVE_ROUND,
                MOVE_HAZE,
                MOVE_FEATHER_DANCE,
                MOVE_DRAGON_BREATH,
            },
            },
        },
    },
#line 2979
    [TRAINER_PBL_ARI] =
    {
#line 2980
        .trainerName = _("Ari"),
#line 2981
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 2982
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2983
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2985
        .doubleBattle = FALSE,
#line 2984
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 2986
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2988
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2990
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2989
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2992
    [TRAINER_PBL_BERTHA] =
    {
#line 2993
        .trainerName = _("Bertha"),
#line 2994
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 2995
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 2996
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2998
        .doubleBattle = FALSE,
#line 2997
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 2999
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3001
            .species = SPECIES_MORPEKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3003
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3002
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3005
    [TRAINER_PBL_CASSANDRA] =
    {
#line 3006
        .trainerName = _("Cassandra"),
#line 3007
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3008
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3009
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3011
        .doubleBattle = FALSE,
#line 3010
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3012
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3014
            .species = SPECIES_CARNIVINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3016
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3015
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3018
    [TRAINER_PBL_DOMINIC] =
    {
#line 3019
        .trainerName = _("Dominic"),
#line 3020
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3021
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3022
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3024
        .doubleBattle = FALSE,
#line 3023
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3025
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3027
            .species = SPECIES_STUNFISK_GALAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3029
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3028
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3031
    [TRAINER_PBL_ERICA] =
    {
#line 3032
        .trainerName = _("Erica"),
#line 3033
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3034
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3035
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3037
        .doubleBattle = FALSE,
#line 3036
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3038
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3040
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3041
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3044
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3045
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3048
    [TRAINER_PBL_KYLE] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3058
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_BELLE] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3075
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_DEWEY] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3092
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_PEARLIE] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3109
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_ERNEST] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3126
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_ALANA] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3143
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_SUSAN] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3160
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_CONRAD] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3177
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3194
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9_BRUTAL] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3211
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_JEANETTE] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3228
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_EMMA_AND_LEO] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3245
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_JOEL] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3262
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_MARION] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3279
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_REGINA] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3296
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_NEWTON_LEVIATHAN_10] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3313
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_NEWTON_LEVIATHAN_10_BRUTAL] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3330
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_ESSENCE] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3347
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_DOLORES] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3364
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_JULIE] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3381
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_ROMULUS] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3398
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_TREVOR] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3415
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_FEDERICO] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3432
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_GENIE] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3449
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_HILDA] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3466
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_KINLEY] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3483
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_VIOLET] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_WANDA] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3517
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_AMBER_AND_KIM] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3534
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_JAN_AND_ERIN] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3551
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_STEVE] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3568
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_GOULD] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3585
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_MENDEL] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3602
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_DARWIN] =
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
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3619
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
#line 3626
    [TRAINER_PBL_JENNY_LEVIATHAN_11] =
    {
#line 3627
        .trainerName = _("STEVEN"),
#line 3628
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3629
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3631
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3633
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3637
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3635
            .lvl = 42,
#line 3634
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3638
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3643
    [TRAINER_PBL_JENNY_LEVIATHAN_11_BRUTAL] =
    {
#line 3644
        .trainerName = _("STEVEN"),
#line 3645
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3646
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3648
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3650
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3654
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3653
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3652
            .lvl = 42,
#line 3651
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3655
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3660
    [TRAINER_PBL_BART] =
    {
#line 3661
        .trainerName = _("STEVEN"),
#line 3662
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3663
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3665
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3667
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3671
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3670
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3669
            .lvl = 42,
#line 3668
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3672
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3677
    [TRAINER_PBL_NIGEL] =
    {
#line 3678
        .trainerName = _("STEVEN"),
#line 3679
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3680
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3682
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3684
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3688
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3687
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3686
            .lvl = 42,
#line 3685
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3689
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3694
    [TRAINER_PBL_LOLA] =
    {
#line 3695
        .trainerName = _("STEVEN"),
#line 3696
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3697
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3699
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3701
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3705
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3704
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3703
            .lvl = 42,
#line 3702
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3706
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3711
    [TRAINER_PBL_CHARLIE] =
    {
#line 3712
        .trainerName = _("STEVEN"),
#line 3713
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3714
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3716
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3718
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3722
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3721
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3720
            .lvl = 42,
#line 3719
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3723
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3728
    [TRAINER_PBL_RANDOLPH] =
    {
#line 3729
        .trainerName = _("STEVEN"),
#line 3730
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3731
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3733
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3735
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3739
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3738
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3737
            .lvl = 42,
#line 3736
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3740
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3745
    [TRAINER_PBL_TODD] =
    {
#line 3746
        .trainerName = _("STEVEN"),
#line 3747
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3748
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3750
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3752
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3756
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3755
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3754
            .lvl = 42,
#line 3753
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3757
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3762
    [TRAINER_PBL_RUSSELL] =
    {
#line 3763
        .trainerName = _("STEVEN"),
#line 3764
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3765
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3767
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3769
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3773
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3772
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3771
            .lvl = 42,
#line 3770
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3774
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3779
    [TRAINER_PBL_OTIS] =
    {
#line 3780
        .trainerName = _("STEVEN"),
#line 3781
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3782
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3784
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3786
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3790
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3789
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3788
            .lvl = 42,
#line 3787
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3791
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3796
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12] =
    {
#line 3797
        .trainerName = _("STEVEN"),
#line 3798
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3799
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3801
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3803
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3807
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3806
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3805
            .lvl = 42,
#line 3804
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3808
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3813
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12_BRUTAL] =
    {
#line 3814
        .trainerName = _("STEVEN"),
#line 3815
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3816
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3818
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3820
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3824
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3823
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3822
            .lvl = 42,
#line 3821
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3825
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3830
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13] =
    {
#line 3831
        .trainerName = _("STEVEN"),
#line 3832
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3833
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3835
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3837
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3841
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3840
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3839
            .lvl = 42,
#line 3838
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3842
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3847
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13_BRUTAL] =
    {
#line 3848
        .trainerName = _("STEVEN"),
#line 3849
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3850
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3852
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3854
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3858
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3857
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3856
            .lvl = 42,
#line 3855
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3859
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3864
    [TRAINER_PBL_IONA] =
    {
#line 3865
        .trainerName = _("STEVEN"),
#line 3866
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3867
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3869
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3871
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3875
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3874
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3873
            .lvl = 42,
#line 3872
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3876
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3881
    [TRAINER_PBL_BERKE] =
    {
#line 3882
        .trainerName = _("STEVEN"),
#line 3883
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3884
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3886
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3888
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3892
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3891
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3890
            .lvl = 42,
#line 3889
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3893
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3898
    [TRAINER_PBL_TANISHA] =
    {
#line 3899
        .trainerName = _("STEVEN"),
#line 3900
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3901
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3903
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3905
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3909
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3908
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3907
            .lvl = 42,
#line 3906
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3910
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3915
    [TRAINER_PBL_ROBERT] =
    {
#line 3916
        .trainerName = _("STEVEN"),
#line 3917
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3918
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3920
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3922
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3926
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3925
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3924
            .lvl = 42,
#line 3923
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3927
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3932
    [TRAINER_PBL_CHRIS] =
    {
#line 3933
        .trainerName = _("STEVEN"),
#line 3934
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3935
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3937
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3939
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3943
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3942
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3941
            .lvl = 42,
#line 3940
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3944
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3949
    [TRAINER_PBL_ANGUS] =
    {
#line 3950
        .trainerName = _("STEVEN"),
#line 3951
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3952
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3954
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3956
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3960
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3959
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3958
            .lvl = 42,
#line 3957
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3961
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3966
    [TRAINER_PBL_LILY_LEVIATHAN_14] =
    {
#line 3967
        .trainerName = _("STEVEN"),
#line 3968
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3969
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3971
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3973
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3977
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3976
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3975
            .lvl = 42,
#line 3974
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3978
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3983
    [TRAINER_PBL_LILY_LEVIATHAN_14_BRUTAL] =
    {
#line 3984
        .trainerName = _("STEVEN"),
#line 3985
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3986
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3988
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3990
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3994
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3993
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3992
            .lvl = 42,
#line 3991
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3995
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4000
    [TRAINER_PBL_AXLE] =
    {
#line 4001
        .trainerName = _("STEVEN"),
#line 4002
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4003
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4005
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4007
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4011
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4010
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4009
            .lvl = 42,
#line 4008
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4012
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4017
    [TRAINER_PBL_RAFAEL] =
    {
#line 4018
        .trainerName = _("STEVEN"),
#line 4019
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4020
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4022
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4024
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4028
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4027
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4026
            .lvl = 42,
#line 4025
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4029
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4034
    [TRAINER_PBL_GEORGINA] =
    {
#line 4035
        .trainerName = _("STEVEN"),
#line 4036
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4037
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4039
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4041
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4045
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4044
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4043
            .lvl = 42,
#line 4042
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4046
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4051
    [TRAINER_PBL_MIA_LEVIATHAN_15] =
    {
#line 4052
        .trainerName = _("STEVEN"),
#line 4053
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4054
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4056
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4058
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4062
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4061
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4060
            .lvl = 42,
#line 4059
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4063
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4068
    [TRAINER_PBL_MIA_LEVIATHAN_15_BRUTAL] =
    {
#line 4069
        .trainerName = _("STEVEN"),
#line 4070
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4071
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4073
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4075
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4079
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4078
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4077
            .lvl = 42,
#line 4076
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4080
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4085
    [TRAINER_PBL_DORIS] =
    {
#line 4086
        .trainerName = _("STEVEN"),
#line 4087
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4088
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4090
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4092
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4096
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4095
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4094
            .lvl = 42,
#line 4093
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4097
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4102
    [TRAINER_PBL_HOMER] =
    {
#line 4103
        .trainerName = _("STEVEN"),
#line 4104
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4105
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4107
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4109
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4113
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4112
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4111
            .lvl = 42,
#line 4110
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4114
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4119
    [TRAINER_PBL_JOHN] =
    {
#line 4120
        .trainerName = _("STEVEN"),
#line 4121
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4122
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4124
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4126
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4130
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4129
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4128
            .lvl = 42,
#line 4127
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4131
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4136
    [TRAINER_PBL_GLENN] =
    {
#line 4137
        .trainerName = _("STEVEN"),
#line 4138
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4139
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4141
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4143
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4147
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4146
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4145
            .lvl = 42,
#line 4144
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4148
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4153
    [TRAINER_PBL_JAY] =
    {
#line 4154
        .trainerName = _("STEVEN"),
#line 4155
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4156
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4158
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4160
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4164
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4163
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4162
            .lvl = 42,
#line 4161
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4165
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4170
    [TRAINER_PBL_TYLER] =
    {
#line 4171
        .trainerName = _("STEVEN"),
#line 4172
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4173
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4175
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4177
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4181
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4180
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4179
            .lvl = 42,
#line 4178
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4182
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4187
    [TRAINER_PBL_TERRENCE] =
    {
#line 4188
        .trainerName = _("STEVEN"),
#line 4189
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4190
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4192
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4194
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4198
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4197
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4196
            .lvl = 42,
#line 4195
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4199
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4204
    [TRAINER_PBL_MARTY] =
    {
#line 4205
        .trainerName = _("STEVEN"),
#line 4206
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4207
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4209
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4211
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4215
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4214
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4213
            .lvl = 42,
#line 4212
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4216
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4221
    [TRAINER_PBL_KARI] =
    {
#line 4222
        .trainerName = _("STEVEN"),
#line 4223
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4224
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4226
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4228
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4232
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4231
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4230
            .lvl = 42,
#line 4229
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4233
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4238
    [TRAINER_PBL_ABRAHAM] =
    {
#line 4239
        .trainerName = _("STEVEN"),
#line 4240
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4241
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4243
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4245
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4249
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4248
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4247
            .lvl = 42,
#line 4246
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4250
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4255
    [TRAINER_PBL_MELINDA] =
    {
#line 4256
        .trainerName = _("STEVEN"),
#line 4257
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4258
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4260
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4262
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4266
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4265
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4264
            .lvl = 42,
#line 4263
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4267
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4272
    [TRAINER_PBL_EMILIO] =
    {
#line 4273
        .trainerName = _("STEVEN"),
#line 4274
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4275
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4277
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4279
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4283
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4282
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4281
            .lvl = 42,
#line 4280
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4284
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4289
    [TRAINER_PBL_REX] =
    {
#line 4290
        .trainerName = _("STEVEN"),
#line 4291
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4292
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4294
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4296
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4300
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4299
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4298
            .lvl = 42,
#line 4297
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4301
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4306
    [TRAINER_PBL_LOUIS] =
    {
#line 4307
        .trainerName = _("STEVEN"),
#line 4308
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4309
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4311
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4313
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4317
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4316
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4315
            .lvl = 42,
#line 4314
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4318
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4323
    [TRAINER_PBL_LEROY] =
    {
#line 4324
        .trainerName = _("STEVEN"),
#line 4325
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4326
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4328
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4330
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4334
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4333
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4332
            .lvl = 42,
#line 4331
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4335
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4340
    [TRAINER_PBL_ELTON] =
    {
#line 4341
        .trainerName = _("STEVEN"),
#line 4342
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4343
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4345
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4347
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4351
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4350
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4349
            .lvl = 42,
#line 4348
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4352
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4357
    [TRAINER_PBL_WILLIE] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4364
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4368
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4367
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4366
            .lvl = 42,
#line 4365
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4369
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4374
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16] =
    {
#line 4375
        .trainerName = _("STEVEN"),
#line 4376
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4377
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4379
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4381
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4385
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4384
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4383
            .lvl = 42,
#line 4382
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4386
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4391
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16_BRUTAL] =
    {
#line 4392
        .trainerName = _("STEVEN"),
#line 4393
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4394
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4396
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4398
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4402
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4401
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4400
            .lvl = 42,
#line 4399
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4403
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4408
    [TRAINER_PBL_PIRATE_1] =
    {
#line 4409
        .trainerName = _("STEVEN"),
#line 4410
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4411
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4413
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4415
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4419
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4418
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4417
            .lvl = 42,
#line 4416
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4420
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4425
    [TRAINER_PBL_PIRATE_2] =
    {
#line 4426
        .trainerName = _("STEVEN"),
#line 4427
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4428
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4430
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4432
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4436
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4435
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4434
            .lvl = 42,
#line 4433
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4437
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4442
    [TRAINER_PBL_PIRATE_3] =
    {
#line 4443
        .trainerName = _("STEVEN"),
#line 4444
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4445
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4447
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4449
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4453
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4451
            .lvl = 42,
#line 4450
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4454
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4459
    [TRAINER_PBL_PIRATE_4] =
    {
#line 4460
        .trainerName = _("STEVEN"),
#line 4461
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4462
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4464
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4466
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4470
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4469
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4468
            .lvl = 42,
#line 4467
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4471
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4476
    [TRAINER_PBL_SHAWN] =
    {
#line 4477
        .trainerName = _("STEVEN"),
#line 4478
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4479
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4481
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4483
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4487
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4486
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4485
            .lvl = 42,
#line 4484
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4488
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4493
    [TRAINER_PBL_FERNANDO] =
    {
#line 4494
        .trainerName = _("STEVEN"),
#line 4495
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4496
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4498
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4500
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4504
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4503
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4502
            .lvl = 42,
#line 4501
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4505
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4510
    [TRAINER_PBL_KANE] =
    {
#line 4511
        .trainerName = _("STEVEN"),
#line 4512
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4513
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4515
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4517
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4521
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4520
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4519
            .lvl = 42,
#line 4518
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4522
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4527
    [TRAINER_PBL_KIRK] =
    {
#line 4528
        .trainerName = _("STEVEN"),
#line 4529
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4530
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4532
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4534
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4538
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4537
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4536
            .lvl = 42,
#line 4535
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4539
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4544
    [TRAINER_PBL_DALTON] =
    {
#line 4545
        .trainerName = _("STEVEN"),
#line 4546
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4547
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4549
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4551
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4555
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4554
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4553
            .lvl = 42,
#line 4552
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4556
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4561
    [TRAINER_PBL_LEE] =
    {
#line 4562
        .trainerName = _("STEVEN"),
#line 4563
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4564
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4566
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4568
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4572
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4571
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4570
            .lvl = 42,
#line 4569
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4573
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4578
    [TRAINER_PBL_BLANCHE] =
    {
#line 4579
        .trainerName = _("STEVEN"),
#line 4580
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4581
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4583
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4585
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4589
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4588
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4587
            .lvl = 42,
#line 4586
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4590
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4595
    [TRAINER_PBL_TROY] =
    {
#line 4596
        .trainerName = _("STEVEN"),
#line 4597
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4598
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4600
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4602
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4606
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4605
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4604
            .lvl = 42,
#line 4603
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4607
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4612
    [TRAINER_PBL_ABED] =
    {
#line 4613
        .trainerName = _("STEVEN"),
#line 4614
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4615
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4617
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4619
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4623
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4622
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4621
            .lvl = 42,
#line 4620
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4624
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4629
    [TRAINER_PBL_TROY_BRUTAL] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4636
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4640
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4639
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4638
            .lvl = 42,
#line 4637
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4641
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4646
    [TRAINER_PBL_ABED_BRUTAL] =
    {
#line 4647
        .trainerName = _("STEVEN"),
#line 4648
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4649
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4651
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4653
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4657
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4656
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4655
            .lvl = 42,
#line 4654
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4658
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4663
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17] =
    {
#line 4664
        .trainerName = _("STEVEN"),
#line 4665
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4666
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4668
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4670
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4674
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4673
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4672
            .lvl = 42,
#line 4671
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4675
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4680
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17_BRUTAL] =
    {
#line 4681
        .trainerName = _("STEVEN"),
#line 4682
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4683
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4685
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4687
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4691
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4690
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4689
            .lvl = 42,
#line 4688
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4692
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4697
    [TRAINER_PBL_ANITA] =
    {
#line 4698
        .trainerName = _("STEVEN"),
#line 4699
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4700
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4702
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4704
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4708
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4707
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4706
            .lvl = 42,
#line 4705
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4709
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4714
    [TRAINER_PBL_DESIREE] =
    {
#line 4715
        .trainerName = _("STEVEN"),
#line 4716
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4717
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4719
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4721
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4725
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4724
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4723
            .lvl = 42,
#line 4722
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4726
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4731
    [TRAINER_PBL_HOWARD] =
    {
#line 4732
        .trainerName = _("STEVEN"),
#line 4733
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4734
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4736
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4738
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4742
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4741
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4740
            .lvl = 42,
#line 4739
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4743
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4748
    [TRAINER_PBL_ELOISE] =
    {
#line 4749
        .trainerName = _("STEVEN"),
#line 4750
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4751
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4753
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4755
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4759
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4758
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4757
            .lvl = 42,
#line 4756
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4760
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4765
    [TRAINER_PBL_ALLY_AND_EMMY] =
    {
#line 4766
        .trainerName = _("STEVEN"),
#line 4767
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4768
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4770
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4772
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4776
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4775
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4774
            .lvl = 42,
#line 4773
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4777
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4782
    [TRAINER_PBL_AMIR] =
    {
#line 4783
        .trainerName = _("STEVEN"),
#line 4784
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4785
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4787
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4789
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4793
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4792
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4791
            .lvl = 42,
#line 4790
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4794
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4799
    [TRAINER_PBL_GETHIN] =
    {
#line 4800
        .trainerName = _("STEVEN"),
#line 4801
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4802
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4804
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4806
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4810
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4809
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4808
            .lvl = 42,
#line 4807
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4811
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4816
    [TRAINER_PBL_BERNARD] =
    {
#line 4817
        .trainerName = _("STEVEN"),
#line 4818
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4819
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4821
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4823
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4827
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4826
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4825
            .lvl = 42,
#line 4824
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4828
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4833
    [TRAINER_PBL_ELLIE] =
    {
#line 4834
        .trainerName = _("STEVEN"),
#line 4835
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4836
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4838
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4840
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4844
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4843
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4842
            .lvl = 42,
#line 4841
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4845
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4850
    [TRAINER_PBL_RUSTY] =
    {
#line 4851
        .trainerName = _("STEVEN"),
#line 4852
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4853
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4855
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4857
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4861
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4860
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4859
            .lvl = 42,
#line 4858
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4862
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4867
    [TRAINER_PBL_CODY] =
    {
#line 4868
        .trainerName = _("STEVEN"),
#line 4869
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4870
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4872
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4874
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4878
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4877
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4876
            .lvl = 42,
#line 4875
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4879
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4884
    [TRAINER_PBL_LEWIS] =
    {
#line 4885
        .trainerName = _("STEVEN"),
#line 4886
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4887
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4889
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4891
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4895
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4894
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4893
            .lvl = 42,
#line 4892
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4896
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4901
    [TRAINER_PBL_CORNELIUS] =
    {
#line 4902
        .trainerName = _("STEVEN"),
#line 4903
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4904
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4906
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4908
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4912
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4911
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4910
            .lvl = 42,
#line 4909
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4913
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4918
    [TRAINER_PBL_INEZ_AND_EMMA] =
    {
#line 4919
        .trainerName = _("STEVEN"),
#line 4920
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4921
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4923
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4925
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4929
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4928
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4927
            .lvl = 42,
#line 4926
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4930
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4935
    [TRAINER_PBL_HELEN] =
    {
#line 4936
        .trainerName = _("STEVEN"),
#line 4937
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4938
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4940
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4942
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4946
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4945
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4944
            .lvl = 42,
#line 4943
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4947
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4952
    [TRAINER_PBL_WESLEY] =
    {
#line 4953
        .trainerName = _("STEVEN"),
#line 4954
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4955
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4957
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4959
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4963
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4962
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4961
            .lvl = 42,
#line 4960
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4964
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4969
    [TRAINER_PBL_ALFREDO] =
    {
#line 4970
        .trainerName = _("STEVEN"),
#line 4971
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4972
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4974
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4976
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4980
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4979
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4978
            .lvl = 42,
#line 4977
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4981
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4986
    [TRAINER_PBL_IAN] =
    {
#line 4987
        .trainerName = _("STEVEN"),
#line 4988
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4989
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4991
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4993
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4997
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4995
            .lvl = 42,
#line 4994
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4998
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5003
    [TRAINER_PBL_AUDREY] =
    {
#line 5004
        .trainerName = _("STEVEN"),
#line 5005
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5006
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5008
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5010
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5014
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5013
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5012
            .lvl = 42,
#line 5011
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5015
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5020
    [TRAINER_PBL_LEVIATHAN13] =
    {
#line 5021
        .trainerName = _("STEVEN"),
#line 5022
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5023
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5025
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5027
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5031
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5030
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5029
            .lvl = 42,
#line 5028
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5032
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5037
    [TRAINER_PBL_EDGARDO] =
    {
#line 5038
        .trainerName = _("STEVEN"),
#line 5039
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5040
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5042
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5044
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5048
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5047
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5046
            .lvl = 42,
#line 5045
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5049
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5054
    [TRAINER_PBL_JEAN] =
    {
#line 5055
        .trainerName = _("STEVEN"),
#line 5056
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5057
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5059
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5061
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5065
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5064
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5063
            .lvl = 42,
#line 5062
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5066
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5071
    [TRAINER_PBL_ROSE] =
    {
#line 5072
        .trainerName = _("STEVEN"),
#line 5073
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5074
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5076
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5078
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5082
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5081
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5080
            .lvl = 42,
#line 5079
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5083
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5088
    [TRAINER_PBL_JENNIFER] =
    {
#line 5089
        .trainerName = _("STEVEN"),
#line 5090
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5091
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5093
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5095
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5099
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5098
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5097
            .lvl = 42,
#line 5096
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5100
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5105
    [TRAINER_PBL_MATTHEW] =
    {
#line 5106
        .trainerName = _("STEVEN"),
#line 5107
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5108
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5110
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5112
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5116
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5115
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5114
            .lvl = 42,
#line 5113
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5117
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5122
    [TRAINER_PBL_KERRY] =
    {
#line 5123
        .trainerName = _("STEVEN"),
#line 5124
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5125
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5127
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5129
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5133
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5131
            .lvl = 42,
#line 5130
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5134
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5139
    [TRAINER_PBL_ANNIE] =
    {
#line 5140
        .trainerName = _("STEVEN"),
#line 5141
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5142
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5144
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5146
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5150
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5149
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5148
            .lvl = 42,
#line 5147
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5151
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5156
    [TRAINER_PBL_CHRISTI] =
    {
#line 5157
        .trainerName = _("STEVEN"),
#line 5158
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5159
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5161
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5163
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5167
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5166
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5165
            .lvl = 42,
#line 5164
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5168
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5173
    [TRAINER_PBL_SPENCER] =
    {
#line 5174
        .trainerName = _("STEVEN"),
#line 5175
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5176
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5178
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5180
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5184
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5183
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5182
            .lvl = 42,
#line 5181
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5185
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5190
    [TRAINER_PBL_HAYWOOD] =
    {
#line 5191
        .trainerName = _("STEVEN"),
#line 5192
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5193
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5195
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5197
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5201
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5200
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5199
            .lvl = 42,
#line 5198
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5202
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5207
    [TRAINER_PBL_MONROE] =
    {
#line 5208
        .trainerName = _("STEVEN"),
#line 5209
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5210
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5212
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5214
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5218
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5217
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5216
            .lvl = 42,
#line 5215
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5219
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5224
    [TRAINER_PBL_DAVID] =
    {
#line 5225
        .trainerName = _("STEVEN"),
#line 5226
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5227
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5229
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5231
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5235
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5234
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5233
            .lvl = 42,
#line 5232
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5236
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5241
    [TRAINER_PBL_DOMINIK] =
    {
#line 5242
        .trainerName = _("STEVEN"),
#line 5243
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5244
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5246
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5248
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5252
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5251
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5250
            .lvl = 42,
#line 5249
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5253
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5258
    [TRAINER_PBL_DOUGLAS] =
    {
#line 5259
        .trainerName = _("STEVEN"),
#line 5260
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5261
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5263
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5265
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5269
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5267
            .lvl = 42,
#line 5266
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5270
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5275
    [TRAINER_PBL_NADINE] =
    {
#line 5276
        .trainerName = _("STEVEN"),
#line 5277
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5278
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5280
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5282
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5286
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5285
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5284
            .lvl = 42,
#line 5283
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5287
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5292
    [TRAINER_PBL_SANDY] =
    {
#line 5293
        .trainerName = _("STEVEN"),
#line 5294
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5295
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5297
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5299
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5303
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5302
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5301
            .lvl = 42,
#line 5300
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5304
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5309
    [TRAINER_PBL_SHELDON] =
    {
#line 5310
        .trainerName = _("STEVEN"),
#line 5311
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5312
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5314
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5316
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5320
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5319
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5318
            .lvl = 42,
#line 5317
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5321
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5326
    [TRAINER_PBL_LEVIATHAN14] =
    {
#line 5327
        .trainerName = _("STEVEN"),
#line 5328
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5329
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5331
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5333
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5337
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5336
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5335
            .lvl = 42,
#line 5334
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5338
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5343
    [TRAINER_PBL_LEVIATHAN12_BRUTAL] =
    {
#line 5344
        .trainerName = _("STEVEN"),
#line 5345
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5346
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5348
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5350
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5354
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5353
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5352
            .lvl = 42,
#line 5351
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5355
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5360
    [TRAINER_PBL_LEVIATHAN13_BRUTAL] =
    {
#line 5361
        .trainerName = _("STEVEN"),
#line 5362
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5363
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5365
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5367
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5371
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5370
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5369
            .lvl = 42,
#line 5368
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5372
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5377
    [TRAINER_PBL_LEVIATHAN14_BRUTAL] =
    {
#line 5378
        .trainerName = _("STEVEN"),
#line 5379
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5380
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5382
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5384
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5388
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5387
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5386
            .lvl = 42,
#line 5385
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5389
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5394
    [TRAINER_PBL_LEVIATHAN12] =
    {
#line 5395
        .trainerName = _("STEVEN"),
#line 5396
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5397
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5399
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5401
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5405
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5404
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5403
            .lvl = 42,
#line 5402
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5406
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
