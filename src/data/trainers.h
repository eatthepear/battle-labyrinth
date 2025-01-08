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
        .aiFlags = AI_FLAG_SMART_TRAINER,
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
            .species = SPECIES_SKWOVET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 641
            .heldItem = ITEM_ORAN_BERRY,
#line 644
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 642
            .ability = ABILITY_CHEEK_POUCH,
#line 643
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 645
                MOVE_TACKLE,
                MOVE_STUFF_CHEEKS,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 650
            .species = SPECIES_LECHONK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 650
            .heldItem = ITEM_ORAN_BERRY,
#line 653
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 651
            .ability = ABILITY_THICK_FAT,
#line 652
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 654
                MOVE_TACKLE,
                MOVE_DISARMING_VOICE,
                MOVE_STUFF_CHEEKS,
                MOVE_YAWN,
            },
            },
        },
    },
#line 659
    [TRAINER_PBL_JEMMA] =
    {
#line 660
        .trainerName = _("Jemma"),
#line 661
        .trainerClass = TRAINER_CLASS_LASS,
#line 662
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 663
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 665
        .doubleBattle = FALSE,
#line 664
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 666
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 668
            .species = SPECIES_BOUNSWEET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 671
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 669
            .ability = ABILITY_OBLIVIOUS,
#line 670
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 672
                MOVE_PLAY_NICE,
                MOVE_AROMATIC_MIST,
                MOVE_ABSORB,
                MOVE_GRASS_WHISTLE,
            },
            },
            {
#line 677
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 680
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 678
            .ability = ABILITY_KEEN_EYE,
#line 679
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 681
                MOVE_TACKLE,
                MOVE_SAND_ATTACK,
                MOVE_GUST,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 686
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 689
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 687
            .ability = ABILITY_STATIC,
#line 688
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 690
                MOVE_GROWL,
                MOVE_CHARGE,
                MOVE_THUNDER_SHOCK,
                MOVE_COTTON_SPORE,
            },
            },
        },
    },
#line 695
    [TRAINER_PBL_PATRICK] =
    {
#line 696
        .trainerName = _("Patrick"),
#line 697
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 698
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 699
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 701
        .doubleBattle = FALSE,
#line 700
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 702
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 704
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 707
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 705
            .ability = ABILITY_SHED_SKIN,
#line 706
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 708
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
            {
#line 711
            .species = SPECIES_METAPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 712
            .ability = ABILITY_SHED_SKIN,
#line 713
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 715
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
            {
#line 718
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 721
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 719
            .ability = ABILITY_SHED_SKIN,
#line 720
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 722
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
            {
#line 725
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 728
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 726
            .ability = ABILITY_SHED_SKIN,
#line 727
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 729
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 732
    [TRAINER_PBL_ANNABELLE] =
    {
#line 733
        .trainerName = _("Annabelle"),
#line 734
        .trainerClass = TRAINER_CLASS_LADY,
#line 735
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 736
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 738
        .doubleBattle = FALSE,
#line 737
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 739
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 741
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 744
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 742
            .ability = ABILITY_TECHNICIAN,
#line 743
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 745
                MOVE_SCRATCH,
                MOVE_GROWL,
                MOVE_FEINT,
            },
            },
            {
#line 749
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 752
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 750
            .ability = ABILITY_POISON_POINT,
#line 751
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 753
                MOVE_ABSORB,
                MOVE_WORRY_SEED,
                MOVE_LIFE_DEW,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 758
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 761
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 759
            .ability = ABILITY_HUGE_POWER,
#line 760
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 762
                MOVE_SOAK,
                MOVE_REFRESH,
                MOVE_CHARM,
                MOVE_BUBBLE,
            },
            },
            {
#line 767
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 770
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 768
            .ability = ABILITY_LEVITATE,
#line 769
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 771
                MOVE_GROWL,
                MOVE_ASTONISH,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
        },
    },
#line 776
    [TRAINER_PBL_BORIS] =
    {
#line 777
        .trainerName = _("Boris"),
#line 778
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 779
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 780
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 782
        .doubleBattle = FALSE,
#line 781
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 783
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 785
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 788
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 786
            .ability = ABILITY_SWIFT_SWIM,
#line 787
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 789
                MOVE_ABSORB,
                MOVE_BUBBLE,
                MOVE_MIST,
                MOVE_ASTONISH,
            },
            },
            {
#line 794
            .species = SPECIES_FLETCHLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 797
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 795
            .ability = ABILITY_BIG_PECKS,
#line 796
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 798
                MOVE_GROWL,
                MOVE_PECK,
                MOVE_QUICK_ATTACK,
                MOVE_EMBER,
            },
            },
            {
#line 803
            .species = SPECIES_YAMPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 806
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 804
            .ability = ABILITY_BALL_FETCH,
#line 805
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 807
                MOVE_SAND_ATTACK,
                MOVE_NUZZLE,
                MOVE_SPARK,
                MOVE_CHARGE,
            },
            },
        },
    },
#line 812
    [TRAINER_PBL_RICHARD] =
    {
#line 813
        .trainerName = _("Richard"),
#line 814
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 815
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 816
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 818
        .doubleBattle = FALSE,
#line 817
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 819
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 821
            .species = SPECIES_WOOLOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 824
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 822
            .ability = ABILITY_FLUFFY,
#line 823
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 825
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_DEFENSE_CURL,
                MOVE_COPYCAT,
            },
            },
            {
#line 830
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 833
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 831
            .ability = ABILITY_STATIC,
#line 832
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 834
                MOVE_THUNDER_SHOCK,
                MOVE_SWEET_KISS,
                MOVE_FAKE_OUT,
                MOVE_CHARM,
            },
            },
            {
#line 839
            .species = SPECIES_SMOLIV,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 842
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 840
            .ability = ABILITY_EARLY_BIRD,
#line 841
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 843
                MOVE_TACKLE,
                MOVE_ABSORB,
                MOVE_HELPING_HAND,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 848
            .species = SPECIES_IGGLYBUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 851
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 849
            .ability = ABILITY_CUTE_CHARM,
#line 850
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 852
                MOVE_ECHOED_VOICE,
                MOVE_SWEET_KISS,
                MOVE_DISARMING_VOICE,
                MOVE_DISABLE,
            },
            },
        },
    },
#line 857
    [TRAINER_PBL_PHILLIPA_LEVIATHAN_3] =
    {
#line 858
        .trainerName = _("Phillipa"),
#line 859
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 860
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 861
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 863
        .doubleBattle = FALSE,
#line 862
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 865
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 864
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 867
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 870
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 868
            .ability = ABILITY_UNAWARE,
#line 869
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 871
                MOVE_ROLLOUT,
            },
            },
            {
#line 873
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 876
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 874
            .ability = ABILITY_SAND_RUSH,
#line 875
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 877
                MOVE_ROLLOUT,
            },
            },
            {
#line 879
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 879
            .heldItem = ITEM_ORAN_BERRY,
#line 882
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 880
            .ability = ABILITY_HUGE_POWER,
#line 881
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 883
                MOVE_ROLLOUT,
            },
            },
        },
    },
#line 885
    [TRAINER_PBL_PHILLIPA_LEVIATHAN_3_CHALLENGE] =
    {
#line 886
        .trainerName = _("Phillipa"),
#line 887
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 888
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 889
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 891
        .doubleBattle = FALSE,
#line 890
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 893
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 892
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 895
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 898
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 896
            .ability = ABILITY_UNAWARE,
#line 897
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 899
                MOVE_ROLLOUT,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 902
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 905
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 903
            .ability = ABILITY_SAND_RUSH,
#line 904
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 906
                MOVE_ROLLOUT,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 909
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 909
            .heldItem = ITEM_ORAN_BERRY,
#line 912
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 910
            .ability = ABILITY_HUGE_POWER,
#line 911
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 913
                MOVE_ROLLOUT,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 916
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 916
            .heldItem = ITEM_ORAN_BERRY,
#line 919
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 917
            .ability = ABILITY_AFTERMATH,
#line 918
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 920
                MOVE_ROLLOUT,
            },
            },
        },
    },
#line 922
    [TRAINER_PBL_HERMAN] =
    {
#line 923
        .trainerName = _("Herman"),
#line 924
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 925
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 926
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 928
        .doubleBattle = FALSE,
#line 927
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 929
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 931
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 934
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 932
            .ability = ABILITY_LIMBER,
#line 933
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 935
                MOVE_QUICK_ATTACK,
                MOVE_BABY_DOLL_EYES,
                MOVE_COPYCAT,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 940
            .species = SPECIES_DUCKLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 943
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 941
            .ability = ABILITY_BIG_PECKS,
#line 942
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 944
                MOVE_GUST,
                MOVE_AQUA_JET,
                MOVE_FEATHER_DANCE,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 949
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 952
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 950
            .ability = ABILITY_CHLOROPHYLL,
#line 951
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 953
                MOVE_ABSORB,
                MOVE_LEECH_SEED,
                MOVE_ROLLOUT,
                MOVE_GRASS_WHISTLE,
            },
            },
        },
    },
#line 958
    [TRAINER_PBL_RALPH] =
    {
#line 959
        .trainerName = _("Ralph"),
#line 960
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 961
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 962
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 964
        .doubleBattle = FALSE,
#line 963
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 965
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 967
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 970
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 968
            .ability = ABILITY_INTIMIDATE,
#line 969
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 971
                MOVE_CHARGE,
                MOVE_THUNDER_SHOCK,
                MOVE_QUICK_ATTACK,
                MOVE_BITE,
            },
            },
            {
#line 976
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 979
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 977
            .ability = ABILITY_FLASH_FIRE,
#line 978
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 980
                MOVE_EMBER,
                MOVE_SMOG,
                MOVE_TORMENT,
                MOVE_BITE,
            },
            },
            {
#line 985
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 988
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 986
            .ability = ABILITY_WATER_ABSORB,
#line 987
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 989
                MOVE_WATER_GUN,
                MOVE_MUD_SHOT,
                MOVE_YAWN,
                MOVE_SLAM,
            },
            },
        },
    },
#line 994
    [TRAINER_PBL_CALLIE] =
    {
#line 995
        .trainerName = _("Callie"),
#line 996
        .trainerClass = TRAINER_CLASS_LASS,
#line 997
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 998
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1000
        .doubleBattle = FALSE,
#line 999
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1001
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1003
            .species = SPECIES_LILLIPUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1006
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1004
            .ability = ABILITY_PICKUP,
#line 1005
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1007
                MOVE_TACKLE,
                MOVE_HELPING_HAND,
                MOVE_BITE,
                MOVE_YAWN,
            },
            },
            {
#line 1012
            .species = SPECIES_FIDOUGH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1015
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1013
            .ability = ABILITY_OWN_TEMPO,
#line 1014
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1016
                MOVE_TAIL_WHIP,
                MOVE_BITE,
                MOVE_YAWN,
                MOVE_COVET,
            },
            },
            {
#line 1021
            .species = SPECIES_MASCHIFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1024
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1022
            .ability = ABILITY_INTIMIDATE,
#line 1023
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1025
                MOVE_LICK,
                MOVE_SNARL,
                MOVE_SCARY_FACE,
                MOVE_BITE,
            },
            },
        },
    },
#line 1030
    [TRAINER_PBL_SANTIAGO] =
    {
#line 1031
        .trainerName = _("Santiago"),
#line 1032
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1033
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 1034
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1036
        .doubleBattle = FALSE,
#line 1035
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1037
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1039
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1040
            .ability = ABILITY_SWARM,
#line 1041
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1043
                MOVE_STRING_SHOT,
                MOVE_NIGHT_SHADE,
                MOVE_INFESTATION,
                MOVE_DISABLE,
            },
            },
            {
#line 1048
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1051
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1049
            .ability = ABILITY_SWARM,
#line 1050
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1052
                MOVE_SWIFT,
                MOVE_COMET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_ROOST,
            },
            },
            {
#line 1057
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1060
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1058
            .ability = ABILITY_EFFECT_SPORE,
#line 1059
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1061
                MOVE_POISON_POWDER,
                MOVE_ABSORB,
                MOVE_BUG_BITE,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 1066
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1069
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1067
            .ability = ABILITY_SHED_SKIN,
#line 1068
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1070
                MOVE_PROTECT,
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
            .species = SPECIES_GOSSIFLEUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1112
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1110
            .ability = ABILITY_COTTON_DOWN,
#line 1111
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1113
                MOVE_GRASS_WHISTLE,
                MOVE_RAPID_SPIN,
                MOVE_RAZOR_LEAF,
                MOVE_LEECH_SEED,
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
            .species = SPECIES_BONSLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1130
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1128
            .ability = ABILITY_STURDY,
#line 1129
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1131
                MOVE_TEARFUL_LOOK,
                MOVE_ROCK_THROW,
                MOVE_LOW_KICK,
                MOVE_BLOCK,
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
            .species = SPECIES_MORELULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1157
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1155
            .ability = ABILITY_EFFECT_SPORE,
#line 1156
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1158
                MOVE_ABSORB,
                MOVE_ASTONISH,
                MOVE_CONFUSE_RAY,
                MOVE_INGRAIN,
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
    [TRAINER_PBL_ELLA_AND_BELLA_LEVIATHAN_4_CHALLENGE] =
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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1278
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1281
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1279
            .ability = ABILITY_AFTERMATH,
#line 1280
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1282
                MOVE_SMOG,
                MOVE_SCREECH,
                MOVE_POISON_GAS,
                MOVE_BITE,
            },
            },
            {
#line 1287
            .species = SPECIES_GLAMEOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1288
            .ability = ABILITY_LIMBER,
#line 1289
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1291
                MOVE_CHARM,
                MOVE_QUICK_ATTACK,
                MOVE_FEINT_ATTACK,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 1296
            .species = SPECIES_GOTHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1299
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1297
            .ability = ABILITY_TELEPATHY,
#line 1298
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1300
                MOVE_CONFUSION,
                MOVE_DOUBLE_SLAP,
                MOVE_FAKE_OUT,
                MOVE_TICKLE,
            },
            },
            {
#line 1305
            .species = SPECIES_SOLOSIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1308
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1306
            .ability = ABILITY_MAGIC_GUARD,
#line 1307
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1309
                MOVE_CONFUSION,
                MOVE_NIGHT_SHADE,
                MOVE_ROLLOUT,
                MOVE_RECOVER,
            },
            },
        },
    },
#line 1314
    [TRAINER_PBL_NOVA_AND_CORA] =
    {
#line 1315
        .trainerName = _("Nova&Cora"),
#line 1316
        .trainerClass = TRAINER_CLASS_TWINS,
#line 1317
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 1318
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1320
        .doubleBattle = TRUE,
#line 1319
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1322
            .species = SPECIES_HATENNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1325
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1323
            .ability = ABILITY_HEALER,
#line 1324
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1326
                MOVE_PLAY_NICE,
                MOVE_LIFE_DEW,
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
            },
            },
            {
#line 1331
            .species = SPECIES_IMPIDIMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1334
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1332
            .ability = ABILITY_PICKPOCKET,
#line 1333
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1335
                MOVE_CONFIDE,
                MOVE_FLATTER,
                MOVE_FAKE_OUT,
                MOVE_ASSURANCE,
            },
            },
        },
    },
#line 1340
    [TRAINER_PBL_CLINTON] =
    {
#line 1341
        .trainerName = _("Clinton"),
#line 1342
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1343
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1344
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1346
        .doubleBattle = FALSE,
#line 1345
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1347
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
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
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1361
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1359
            .ability = ABILITY_WATER_ABSORB,
#line 1360
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1362
                MOVE_LEECH_SEED,
                MOVE_DISABLE,
                MOVE_MAGICAL_LEAF,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 1367
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1370
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1368
            .ability = ABILITY_FLAME_BODY,
#line 1369
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1371
                MOVE_YAWN,
                MOVE_ROCK_THROW,
                MOVE_CLEAR_SMOG,
                MOVE_INCINERATE,
            },
            },
            {
#line 1376
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1379
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1377
            .ability = ABILITY_THICK_FAT,
#line 1378
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1380
                MOVE_ICE_SHARD,
                MOVE_FAKE_OUT,
                MOVE_HEADBUTT,
                MOVE_WATER_GUN,
            },
            },
        },
    },
#line 1385
    [TRAINER_PBL_REBECCA] =
    {
#line 1386
        .trainerName = _("Rebecca"),
#line 1387
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 1388
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 1389
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1391
        .doubleBattle = FALSE,
#line 1390
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1392
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1394
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1397
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1395
            .ability = ABILITY_FLASH_FIRE,
#line 1396
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1398
                MOVE_BABY_DOLL_EYES,
                MOVE_DISABLE,
                MOVE_QUICK_ATTACK,
                MOVE_INCINERATE,
            },
            },
            {
#line 1403
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1404
            .ability = ABILITY_GRASS_PELT,
#line 1405
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1407
                MOVE_VINE_WHIP,
                MOVE_ROLLOUT,
                MOVE_LEECH_SEED,
                MOVE_RAZOR_LEAF,
            },
            },
            {
#line 1412
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1415
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1413
            .ability = ABILITY_HYPER_CUTTER,
#line 1414
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1416
                MOVE_ROCK_SMASH,
                MOVE_BUBBLE,
                MOVE_LEER,
                MOVE_DIZZY_PUNCH,
            },
            },
            {
#line 1421
            .species = SPECIES_PAWMI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1424
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1422
            .ability = ABILITY_STATIC,
#line 1423
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1425
                MOVE_THUNDER_SHOCK,
                MOVE_BITE,
                MOVE_FAKE_OUT,
                MOVE_SWEET_KISS,
            },
            },
        },
    },
#line 1430
    [TRAINER_PBL_RYAN] =
    {
#line 1431
        .trainerName = _("Ryan"),
#line 1432
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 1433
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 1434
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1436
        .doubleBattle = FALSE,
#line 1435
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1437
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1439
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1442
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1440
            .ability = ABILITY_FLASH_FIRE,
#line 1441
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1443
                MOVE_DEFENSE_CURL,
                MOVE_BUG_BITE,
                MOVE_ROLLOUT,
                MOVE_BITE,
            },
            },
            {
#line 1448
            .species = SPECIES_DEERLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1451
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1449
            .ability = ABILITY_SERENE_GRACE,
#line 1450
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1452
                MOVE_CHARM,
                MOVE_LEECH_SEED,
                MOVE_FEINT_ATTACK,
                MOVE_DOUBLE_KICK,
            },
            },
            {
#line 1457
            .species = SPECIES_STUFFUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1460
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1458
            .ability = ABILITY_FLUFFY,
#line 1459
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1461
                MOVE_BRUTAL_SWING,
                MOVE_BIDE,
                MOVE_FORCE_PALM,
                MOVE_STOMP,
            },
            },
            {
#line 1466
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1469
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1467
            .ability = ABILITY_STATIC,
#line 1468
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1470
                MOVE_QUICK_ATTACK,
                MOVE_SPARK,
                MOVE_BITE,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 1475
    [TRAINER_PBL_CAITLYN] =
    {
#line 1476
        .trainerName = _("Caitlyn"),
#line 1477
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1478
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 1479
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1481
        .doubleBattle = FALSE,
#line 1480
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1482
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1484
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1487
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1485
            .ability = ABILITY_INTIMIDATE,
#line 1486
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1488
                MOVE_BITE,
                MOVE_RAGE,
                MOVE_FAKE_TEARS,
                MOVE_COVET,
            },
            },
            {
#line 1493
            .species = SPECIES_PUMPKABOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1496
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1494
            .ability = ABILITY_PICKUP,
#line 1495
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1497
                MOVE_RAZOR_LEAF,
                MOVE_LEECH_SEED,
                MOVE_DISABLE,
                MOVE_SHADOW_SNEAK,
            },
            },
            {
#line 1502
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1505
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1503
            .ability = ABILITY_AFTERMATH,
#line 1504
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1506
                MOVE_DOUBLE_SLAP,
                MOVE_ROLLOUT,
                MOVE_SLUDGE,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 1511
            .species = SPECIES_ESPURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1514
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1512
            .ability = ABILITY_OWN_TEMPO,
#line 1513
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1515
                MOVE_TICKLE,
                MOVE_CONFUSION,
                MOVE_DISARMING_VOICE,
                MOVE_YAWN,
            },
            },
        },
    },
#line 1520
    [TRAINER_PBL_KENNETH] =
    {
#line 1521
        .trainerName = _("Kenneth"),
#line 1522
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 1523
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 1524
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1526
        .doubleBattle = FALSE,
#line 1525
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1527
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1529
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1532
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1530
            .ability = ABILITY_STURDY,
#line 1531
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1533
                MOVE_FLAIL,
                MOVE_ROLLOUT,
                MOVE_SLAM,
                MOVE_BULLDOZE,
            },
            },
            {
#line 1538
            .species = SPECIES_PHANTUMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1541
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1539
            .ability = ABILITY_NATURAL_CURE,
#line 1540
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1542
                MOVE_BRANCH_POKE,
                MOVE_LEECH_SEED,
                MOVE_DISABLE,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 1547
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1548
            .ability = ABILITY_CUD_CHEW,
#line 1549
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1551
                MOVE_MUD_SLAP,
                MOVE_ACID_SPRAY,
                MOVE_STUFF_CHEEKS,
                MOVE_SLUDGE,
            },
            },
            {
#line 1556
            .species = SPECIES_MUNNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1559
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1557
            .ability = ABILITY_SYNCHRONIZE,
#line 1558
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1560
                MOVE_LUCKY_CHANT,
                MOVE_HYPNOSIS,
                MOVE_IMPRISON,
                MOVE_PSYBEAM,
            },
            },
        },
    },
#line 1565
    [TRAINER_PBL_KEVIN] =
    {
#line 1566
        .trainerName = _("Kevin"),
#line 1567
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1568
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 1569
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1571
        .doubleBattle = FALSE,
#line 1570
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1572
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1574
            .species = SPECIES_GRUBBIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1577
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1575
            .ability = ABILITY_SWARM,
#line 1576
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1578
                MOVE_STRING_SHOT,
                MOVE_VISE_GRIP,
                MOVE_BUG_BITE,
                MOVE_BITE,
            },
            },
            {
#line 1583
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1584
            .ability = ABILITY_SWARM,
#line 1585
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1587
                MOVE_RAZOR_LEAF,
                MOVE_BUG_BITE,
                MOVE_SYNTHESIS,
                MOVE_FLAIL,
            },
            },
            {
#line 1592
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1595
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1593
            .ability = ABILITY_COMPOUND_EYES,
#line 1594
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1596
                MOVE_FURY_SWIPES,
                MOVE_BUG_BITE,
                MOVE_MUD_SLAP,
                MOVE_ABSORB,
            },
            },
            {
#line 1601
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1604
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1602
            .ability = ABILITY_POISON_POINT,
#line 1603
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1605
                MOVE_SCREECH,
                MOVE_BUG_BITE,
                MOVE_PROTECT,
                MOVE_TWINEEDLE,
            },
            },
        },
    },
#line 1610
    [TRAINER_PBL_MARIA_LEVIATHAN_5] =
    {
#line 1611
        .trainerName = _("Maria"),
#line 1612
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 1613
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 1614
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1616
        .doubleBattle = FALSE,
#line 1615
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1618
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 1617
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1620
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1620
            .heldItem = ITEM_EVIOLITE,
#line 1623
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1621
            .ability = ABILITY_SERENE_GRACE,
#line 1622
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1624
                MOVE_HEADBUTT,
                MOVE_ANCIENT_POWER,
                MOVE_GLARE,
            },
            },
        },
    },
#line 1628
    [TRAINER_PBL_MARIA_LEVIATHAN_5_CHALLENGE] =
    {
#line 1629
        .trainerName = _("Maria"),
#line 1630
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 1631
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 1632
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1634
        .doubleBattle = FALSE,
#line 1633
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 1636
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 1635
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1638
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1638
            .heldItem = ITEM_EVIOLITE,
#line 1642
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1639
            .ability = ABILITY_SERENE_GRACE,
#line 1641
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 1640
            .teraType = TYPE_NORMAL,
            .moves = {
#line 1643
                MOVE_HEADBUTT,
                MOVE_ANCIENT_POWER,
                MOVE_GLARE,
                MOVE_ROOST,
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
            .species = SPECIES_CETODDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1904
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1903
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1905
                MOVE_ECHOED_VOICE,
                MOVE_YAWN,
                MOVE_ICE_SHARD,
                MOVE_ENTRAINMENT,
            },
            },
        },
    },
#line 1910
    [TRAINER_PBL_VIC_AND_DELL] =
    {
#line 1911
        .trainerName = _("Vic&Dell"),
#line 1912
        .trainerClass = TRAINER_CLASS_TWINS,
#line 1913
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 1914
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1916
        .doubleBattle = TRUE,
#line 1915
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1918
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1921
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1919
            .ability = ABILITY_PLUS,
#line 1920
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1922
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_CHARM,
                MOVE_ELECTRO_BALL,
            },
            },
            {
#line 1927
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1930
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1928
            .ability = ABILITY_MINUS,
#line 1929
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1931
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_CHARM,
                MOVE_ELECTRO_BALL,
            },
            },
        },
    },
#line 1936
    [TRAINER_PBL_MINA] =
    {
#line 1937
        .trainerName = _("Nina"),
#line 1938
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 1939
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 1940
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1942
        .doubleBattle = FALSE,
#line 1941
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1943
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1945
            .species = SPECIES_WIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1945
            .heldItem = ITEM_ORAN_BERRY,
#line 1948
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1946
            .ability = ABILITY_GOOEY,
#line 1947
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1949
                MOVE_AQUA_JET,
                MOVE_WATER_PULSE,
                MOVE_SLAM,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 1954
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1954
            .heldItem = ITEM_ORAN_BERRY,
#line 1957
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1955
            .ability = ABILITY_HYDRATION,
#line 1956
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1958
                MOVE_MAGNITUDE,
                MOVE_WATER_PULSE,
                MOVE_MUD_BOMB,
                MOVE_REST,
            },
            },
            {
#line 1963
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1963
            .heldItem = ITEM_ORAN_BERRY,
#line 1966
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1964
            .ability = ABILITY_SWIFT_SWIM,
#line 1965
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1967
                MOVE_WATER_PULSE,
                MOVE_HORN_ATTACK,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
            {
#line 1972
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1972
            .heldItem = ITEM_ORAN_BERRY,
#line 1975
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1973
            .ability = ABILITY_REGENERATOR,
#line 1974
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1976
                MOVE_WATER_PULSE,
                MOVE_HORN_ATTACK,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
        },
    },
#line 1981
    [TRAINER_PBL_ZACK_AND_COBY_LEVIATHAN_6] =
    {
#line 1982
        .trainerName = _("Zack&Coby"),
#line 1983
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 1984
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 1985
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1987
        .doubleBattle = TRUE,
#line 1986
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1989
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 1988
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1991
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1991
            .heldItem = ITEM_ORAN_BERRY,
#line 1994
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1992
            .ability = ABILITY_SWIFT_SWIM,
#line 1993
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1995
                MOVE_CHILLING_WATER,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 1998
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1998
            .heldItem = ITEM_ORAN_BERRY,
#line 2001
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1999
            .ability = ABILITY_SWIFT_SWIM,
#line 2000
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2002
                MOVE_CHILLING_WATER,
                MOVE_TAILWIND,
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
        .aiFlags = AI_FLAG_SMART_TRAINER,
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
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2019
                MOVE_CHILLING_WATER,
                MOVE_DRAINING_KISS,
                MOVE_HEAL_PULSE,
            },
            },
            {
#line 2023
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2023
            .heldItem = ITEM_ORAN_BERRY,
#line 2026
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 30, 30),
#line 2024
            .ability = ABILITY_SWIFT_SWIM,
#line 2025
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2027
                MOVE_CHILLING_WATER,
                MOVE_TAILWIND,
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 2032
    [TRAINER_PBL_MILLIE] =
    {
#line 2033
        .trainerName = _("Millie"),
#line 2034
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 2035
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 2036
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2038
        .doubleBattle = FALSE,
#line 2037
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2039
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2041
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2044
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2042
            .ability = ABILITY_INNER_FOCUS,
#line 2043
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2045
                MOVE_FAKE_OUT,
                MOVE_FORCE_PALM,
                MOVE_ME_FIRST,
                MOVE_VITAL_THROW,
            },
            },
            {
#line 2050
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2053
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2051
            .ability = ABILITY_VITAL_SPIRIT,
#line 2052
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2054
                MOVE_SWAGGER,
                MOVE_RETALIATE,
                MOVE_KARATE_CHOP,
                MOVE_ASSURANCE,
            },
            },
            {
#line 2059
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2062
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2060
            .ability = ABILITY_PURE_POWER,
#line 2061
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2063
                MOVE_FEINT,
                MOVE_SECRET_POWER,
                MOVE_FORCE_PALM,
                MOVE_PSYBEAM,
            },
            },
            {
#line 2068
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2071
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2069
            .ability = ABILITY_IRON_FIST,
#line 2070
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2072
                MOVE_ROCK_THROW,
                MOVE_WAKE_UP_SLAP,
                MOVE_CHIP_AWAY,
                MOVE_MACH_PUNCH,
            },
            },
        },
    },
#line 2077
    [TRAINER_PBL_JAMAL] =
    {
#line 2078
        .trainerName = _("Jamal"),
#line 2079
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2080
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2081
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2083
        .doubleBattle = FALSE,
#line 2082
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2084
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2086
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2089
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2087
            .ability = ABILITY_OBLIVIOUS,
#line 2088
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2090
                MOVE_BULLDOZE,
                MOVE_YAWN,
                MOVE_FLAME_WHEEL,
                MOVE_MAGNITUDE,
            },
            },
            {
#line 2095
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2098
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2096
            .ability = ABILITY_INNER_FOCUS,
#line 2097
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2099
                MOVE_POISON_FANG,
                MOVE_QUICK_GUARD,
                MOVE_WING_ATTACK,
                MOVE_SWIFT,
            },
            },
            {
#line 2104
            .species = SPECIES_FOMANTIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2107
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2105
            .ability = ABILITY_LEAF_GUARD,
#line 2106
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2108
                MOVE_WORRY_SEED,
                MOVE_RAZOR_LEAF,
                MOVE_SYNTHESIS,
                MOVE_SLASH,
            },
            },
            {
#line 2113
            .species = SPECIES_BUIZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2116
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2114
            .ability = ABILITY_WATER_VEIL,
#line 2115
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2117
                MOVE_BITE,
                MOVE_AQUA_JET,
                MOVE_SONIC_BOOM,
                MOVE_PURSUIT,
            },
            },
        },
    },
#line 2122
    [TRAINER_PBL_PAIGE] =
    {
#line 2123
        .trainerName = _("Paige"),
#line 2124
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 2125
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 2126
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2128
        .doubleBattle = FALSE,
#line 2127
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2129
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2131
            .species = SPECIES_COMBEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2134
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2132
            .ability = ABILITY_HONEY_GATHER,
#line 2133
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2135
                MOVE_GUST,
                MOVE_SWEET_SCENT,
                MOVE_STRUGGLE_BUG,
                MOVE_BUG_BITE,
            },
            },
            {
#line 2140
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2143
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2141
            .ability = ABILITY_CHLOROPHYLL,
#line 2142
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2144
                MOVE_CONFUSION,
                MOVE_MEGA_DRAIN,
                MOVE_POISON_POWDER,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 2149
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2152
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2150
            .ability = ABILITY_EFFECT_SPORE,
#line 2151
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2153
                MOVE_HEADBUTT,
                MOVE_MEGA_DRAIN,
                MOVE_FAKE_TEARS,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 2158
            .species = SPECIES_CUTIEFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2161
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2159
            .ability = ABILITY_SHIELD_DUST,
#line 2160
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2162
                MOVE_STRUGGLE_BUG,
                MOVE_STUN_SPORE,
                MOVE_SWITCHEROO,
                MOVE_DRAINING_KISS,
            },
            },
        },
    },
#line 2167
    [TRAINER_PBL_SETH] =
    {
#line 2168
        .trainerName = _("Seth"),
#line 2169
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2170
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 2171
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2173
        .doubleBattle = FALSE,
#line 2172
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2174
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2176
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2177
            .ability = ABILITY_PRANKSTER,
#line 2178
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2180
                MOVE_FLATTER,
                MOVE_SPARK,
                MOVE_SWIFT,
                MOVE_NUZZLE,
            },
            },
            {
#line 2185
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2186
            .ability = ABILITY_QUICK_FEET,
#line 2187
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2189
                MOVE_YAWN,
                MOVE_COVET,
                MOVE_METAL_CLAW,
                MOVE_CHIP_AWAY,
            },
            },
            {
#line 2194
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2197
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2195
            .ability = ABILITY_PICKUP,
#line 2196
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2198
                MOVE_FAKE_OUT,
                MOVE_ASTONISH,
                MOVE_QUICK_GUARD,
                MOVE_SLAM,
            },
            },
            {
#line 2203
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2206
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2204
            .ability = ABILITY_UNBURDEN,
#line 2205
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2207
                MOVE_SWITCHEROO,
                MOVE_POISON_FANG,
                MOVE_SUPER_FANG,
                MOVE_FLATTER,
            },
            },
        },
    },
#line 2212
    [TRAINER_PBL_CONNIE] =
    {
#line 2213
        .trainerName = _("Connie"),
#line 2214
        .trainerClass = TRAINER_CLASS_LASS,
#line 2215
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 2216
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2218
        .doubleBattle = FALSE,
#line 2217
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2219
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2221
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2224
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2222
            .ability = ABILITY_CHLOROPHYLL,
#line 2223
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2225
                MOVE_LEECH_SEED,
                MOVE_RAZOR_LEAF,
                MOVE_SECRET_POWER,
                MOVE_MEGA_DRAIN,
            },
            },
            {
#line 2230
            .species = SPECIES_DEWPIDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2233
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2231
            .ability = ABILITY_WATER_BUBBLE,
#line 2232
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2234
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
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2321
            .heldItem = ITEM_SITRUS_BERRY,
#line 2324
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2322
            .ability = ABILITY_BERSERK,
#line 2323
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2325
                MOVE_AIR_CUTTER,
                MOVE_STRUGGLE_BUG,
                MOVE_MEGA_DRAIN,
                MOVE_STRING_SHOT,
            },
            },
            {
#line 2330
            .species = SPECIES_DEDENNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2330
            .heldItem = ITEM_SITRUS_BERRY,
#line 2333
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2331
            .ability = ABILITY_CHEEK_POUCH,
#line 2332
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2334
                MOVE_SHOCK_WAVE,
                MOVE_DRAINING_KISS,
                MOVE_NUZZLE,
                MOVE_CHARGE_BEAM,
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
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 2347
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2346
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2349
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2349
            .heldItem = ITEM_SITRUS_BERRY,
#line 2352
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2350
            .ability = ABILITY_BERSERK,
#line 2351
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2353
                MOVE_AIR_CUTTER,
                MOVE_STRUGGLE_BUG,
                MOVE_MEGA_DRAIN,
                MOVE_STRING_SHOT,
            },
            },
            {
#line 2358
            .species = SPECIES_DEDENNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2358
            .heldItem = ITEM_SITRUS_BERRY,
#line 2361
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2359
            .ability = ABILITY_CHEEK_POUCH,
#line 2360
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2362
                MOVE_SHOCK_WAVE,
                MOVE_DRAINING_KISS,
                MOVE_NUZZLE,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 2367
            .species = SPECIES_DRAMPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2367
            .heldItem = ITEM_SITRUS_BERRY,
#line 2370
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2368
            .ability = ABILITY_BERSERK,
#line 2369
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2371
                MOVE_DRAGON_BREATH,
                MOVE_GLARE,
                MOVE_NATURAL_GIFT,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 2376
    [TRAINER_PBL_JIMMY] =
    {
#line 2377
        .trainerName = _("Jimmy"),
#line 2378
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 2379
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 2380
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2382
        .doubleBattle = FALSE,
#line 2381
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2383
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2385
            .species = SPECIES_NOIBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2388
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2386
            .ability = ABILITY_INFILTRATOR,
#line 2387
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2389
                MOVE_WING_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_BITE,
                MOVE_ROOST,
            },
            },
            {
#line 2394
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2397
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2395
            .ability = ABILITY_SWIFT_SWIM,
#line 2396
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2398
                MOVE_SPLASH,
                MOVE_TACKLE,
                MOVE_FLAIL,
            },
            },
            {
#line 2402
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2405
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2403
            .ability = ABILITY_CLEAR_BODY,
#line 2404
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2406
                MOVE_TACKLE,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 2409
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2412
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2410
            .ability = ABILITY_SAND_VEIL,
#line 2411
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2413
                MOVE_METAL_CLAW,
                MOVE_DRAGON_BREATH,
                MOVE_BITE,
                MOVE_BULLDOZE,
            },
            },
        },
    },
#line 2418
    [TRAINER_PBL_EMILIANO] =
    {
#line 2419
        .trainerName = _("Emiliano"),
#line 2420
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2421
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 2422
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2424
        .doubleBattle = FALSE,
#line 2423
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2425
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2427
            .species = SPECIES_ONIX,
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
                MOVE_SAND_TOMB,
                MOVE_SCREECH,
                MOVE_SLAM,
            },
            },
            {
#line 2436
            .species = SPECIES_ROGGENROLA,
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
                MOVE_SMACK_DOWN,
                MOVE_MUD_SLAP,
                MOVE_MAGNITUDE,
                MOVE_HEADBUTT,
            },
            },
            {
#line 2445
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2448
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2446
            .ability = ABILITY_STURDY,
#line 2447
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2449
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_MAGNITUDE,
                MOVE_ROCK_BLAST,
            },
            },
            {
#line 2454
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2457
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2455
            .ability = ABILITY_NO_GUARD,
#line 2456
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2458
                MOVE_SEISMIC_TOSS,
                MOVE_LOW_SWEEP,
                MOVE_STRENGTH,
                MOVE_VITAL_THROW,
            },
            },
        },
    },
#line 2463
    [TRAINER_PBL_BECKHAM] =
    {
#line 2464
        .trainerName = _("Beckham"),
#line 2465
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2466
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2467
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2469
        .doubleBattle = FALSE,
#line 2468
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2470
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2472
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2475
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2473
            .ability = ABILITY_OWN_TEMPO,
#line 2474
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2476
                MOVE_YAWN,
                MOVE_DISABLE,
                MOVE_CONFUSION,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 2481
            .species = SPECIES_SALANDIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2482
            .ability = ABILITY_CORROSION,
#line 2483
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2485
                MOVE_MUD_SLAP,
                MOVE_FAKE_OUT,
                MOVE_POISON_FANG,
                MOVE_INCINERATE,
            },
            },
            {
#line 2490
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2493
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2491
            .ability = ABILITY_BATTLE_ARMOR,
#line 2492
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2494
                MOVE_BONE_CLUB,
                MOVE_FOCUS_ENERGY,
                MOVE_DOUBLE_KICK,
                MOVE_BONE_RUSH,
            },
            },
            {
#line 2499
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2502
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2500
            .ability = ABILITY_UNAWARE,
#line 2501
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2503
                MOVE_DISABLE,
                MOVE_STOMP,
                MOVE_WRAP,
                MOVE_MAGNITUDE,
            },
            },
        },
    },
#line 2508
    [TRAINER_PBL_KAREN] =
    {
#line 2509
        .trainerName = _("Karen"),
#line 2510
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 2511
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 2512
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2514
        .doubleBattle = FALSE,
#line 2513
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2515
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2517
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2520
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2518
            .ability = ABILITY_CONTRARY,
#line 2519
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2521
                MOVE_SMELLING_SALTS,
                MOVE_FEINT_ATTACK,
                MOVE_PSYBEAM,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 2526
    [TRAINER_PBL_JAYDEN] =
    {
#line 2527
        .trainerName = _("Jayden"),
#line 2528
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2529
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 2530
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2532
        .doubleBattle = FALSE,
#line 2531
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2533
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2535
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2536
            .ability = ABILITY_STURDY,
#line 2537
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2539
                MOVE_ROLLOUT,
                MOVE_MAGNITUDE,
                MOVE_SMACK_DOWN,
                MOVE_BULLDOZE,
            },
            },
            {
#line 2544
            .species = SPECIES_ROLYCOLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2547
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2545
            .ability = ABILITY_STEAM_ENGINE,
#line 2546
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2548
                MOVE_SMACK_DOWN,
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_INCINERATE,
            },
            },
            {
#line 2553
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2556
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2554
            .ability = ABILITY_PURIFYING_SALT,
#line 2555
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2557
                MOVE_MUD_SHOT,
                MOVE_HEADBUTT,
                MOVE_SMACK_DOWN,
                MOVE_RECOVER,
            },
            },
            {
#line 2562
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2565
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2563
            .ability = ABILITY_SOLID_ROCK,
#line 2564
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2566
                MOVE_STRUGGLE_BUG,
                MOVE_ACID,
                MOVE_ROCK_THROW,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 2571
    [TRAINER_PBL_NEIL] =
    {
#line 2572
        .trainerName = _("Neil"),
#line 2573
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 2574
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 2575
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2577
        .doubleBattle = FALSE,
#line 2576
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2578
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2580
            .species = SPECIES_RELLOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2583
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2581
            .ability = ABILITY_COMPOUND_EYES,
#line 2582
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2584
                MOVE_STRUGGLE_BUG,
                MOVE_MUD_SHOT,
                MOVE_BUG_BITE,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 2589
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2592
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2590
            .ability = ABILITY_LEVITATE,
#line 2591
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2593
                MOVE_ROCK_TOMB,
                MOVE_RAPID_SPIN,
                MOVE_ANCIENT_POWER,
                MOVE_PSYBEAM,
            },
            },
            {
#line 2598
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2601
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2599
            .ability = ABILITY_MUMMY,
#line 2600
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2602
                MOVE_IMPRISON,
                MOVE_HEX,
                MOVE_CURSE,
                MOVE_FAKE_TEARS,
            },
            },
            {
#line 2607
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2608
            .ability = ABILITY_PLUS,
#line 2609
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2611
                MOVE_CHARGE,
                MOVE_METAL_SOUND,
                MOVE_SCREECH,
                MOVE_MIRROR_SHOT,
            },
            },
        },
    },
#line 2616
    [TRAINER_PBL_TAMARA] =
    {
#line 2617
        .trainerName = _("Tamara"),
#line 2618
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 2619
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 2620
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2622
        .doubleBattle = FALSE,
#line 2621
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2623
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2625
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2628
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2626
            .ability = ABILITY_STORM_DRAIN,
#line 2627
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2629
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_HIDDEN_POWER,
                MOVE_SLUDGE,
            },
            },
            {
#line 2634
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2635
            .ability = ABILITY_SERENE_GRACE,
#line 2636
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2638
                MOVE_HEART_STAMP,
                MOVE_FLATTER,
                MOVE_ASSURANCE,
                MOVE_AIR_CUTTER,
            },
            },
            {
#line 2643
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2646
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2644
            .ability = ABILITY_INSOMNIA,
#line 2645
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2647
                MOVE_POISON_GAS,
                MOVE_HEADBUTT,
                MOVE_WAKE_UP_SLAP,
                MOVE_PSYBEAM,
            },
            },
            {
#line 2652
            .species = SPECIES_ROCKRUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2655
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2653
            .ability = ABILITY_VITAL_SPIRIT,
#line 2654
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2656
                MOVE_BITE,
                MOVE_ROAR,
                MOVE_ROCK_TOMB,
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 2661
    [TRAINER_PBL_ALISTAIR_LEVIATHAN_8] =
    {
#line 2662
        .trainerName = _("Alistair"),
#line 2663
        .trainerClass = TRAINER_CLASS_ROUGHNECK,
#line 2664
        .trainerPic = TRAINER_PIC_ROUGHNECK,
        .encounterMusic_gender =
#line 2665
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2667
        .doubleBattle = FALSE,
#line 2666
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2669
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2668
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2671
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2671
            .heldItem = ITEM_POISON_BARB,
#line 2674
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2672
            .ability = ABILITY_POISON_TOUCH,
#line 2673
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2675
                MOVE_SLUDGE,
                MOVE_POISON_GAS,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2680
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2680
            .heldItem = ITEM_SHARP_BEAK,
#line 2683
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2681
            .ability = ABILITY_AFTERMATH,
#line 2682
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2684
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_DEFOG,
            },
            },
            {
#line 2689
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2689
            .heldItem = ITEM_BLACK_BELT,
#line 2692
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2690
            .ability = ABILITY_POISON_TOUCH,
#line 2691
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2693
                MOVE_VENOSHOCK,
                MOVE_VACUUM_WAVE,
                MOVE_FAKE_OUT,
                MOVE_THIEF,
            },
            },
            {
#line 2698
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2698
            .heldItem = ITEM_SITRUS_BERRY,
#line 2701
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2699
            .ability = ABILITY_STRONG_JAW,
#line 2700
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2702
                MOVE_BITE,
                MOVE_THUNDER_FANG,
                MOVE_FIRE_FANG,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 2707
    [TRAINER_PBL_ALISTAIR_LEVIATHAN_8_CHALLENGE] =
    {
#line 2708
        .trainerName = _("Alistair"),
#line 2709
        .trainerClass = TRAINER_CLASS_ROUGHNECK,
#line 2710
        .trainerPic = TRAINER_PIC_ROUGHNECK,
        .encounterMusic_gender =
#line 2711
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2713
        .doubleBattle = FALSE,
#line 2712
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 2715
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2714
        .randomLead = FALSE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2717
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2717
            .heldItem = ITEM_POISON_BARB,
#line 2720
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2718
            .ability = ABILITY_POISON_TOUCH,
#line 2719
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2721
                MOVE_SLUDGE,
                MOVE_POISON_GAS,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2726
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2726
            .heldItem = ITEM_SHARP_BEAK,
#line 2729
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2727
            .ability = ABILITY_AFTERMATH,
#line 2728
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2730
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_DEFOG,
            },
            },
            {
#line 2735
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2735
            .heldItem = ITEM_BLACK_BELT,
#line 2738
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2736
            .ability = ABILITY_POISON_TOUCH,
#line 2737
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2739
                MOVE_VENOSHOCK,
                MOVE_VACUUM_WAVE,
                MOVE_FAKE_OUT,
                MOVE_THIEF,
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
            {
#line 2753
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2753
            .heldItem = ITEM_EVIOLITE,
#line 2756
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2754
            .ability = ABILITY_SAP_SIPPER,
#line 2755
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2757
                MOVE_DOUBLE_HIT,
                MOVE_PSYBEAM,
                MOVE_CHARGE_BEAM,
                MOVE_TRAILBLAZE,
            },
            },
        },
    },
#line 2762
    [TRAINER_PBL_COOPER] =
    {
#line 2763
        .trainerName = _("Cooper"),
#line 2764
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 2765
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 2766
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2768
        .doubleBattle = FALSE,
#line 2767
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2769
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2771
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2774
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2772
            .ability = ABILITY_EFFECT_SPORE,
#line 2773
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2775
                MOVE_GASTRO_ACID,
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 2780
            .species = SPECIES_SKORUPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2783
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2781
            .ability = ABILITY_SNIPER,
#line 2782
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2784
                MOVE_POISON_FANG,
                MOVE_BUG_BITE,
                MOVE_FEINT_ATTACK,
                MOVE_HONE_CLAWS,
            },
            },
            {
#line 2789
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2792
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2790
            .ability = ABILITY_LEVITATE,
#line 2791
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2793
                MOVE_SLUDGE,
                MOVE_STOCKPILE,
                MOVE_SPIT_UP,
                MOVE_SWALLOW,
            },
            },
            {
#line 2798
            .species = SPECIES_VENONAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2801
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2799
            .ability = ABILITY_COMPOUND_EYES,
#line 2800
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2802
                MOVE_STRUGGLE_BUG,
                MOVE_POISON_POWDER,
                MOVE_PSYBEAM,
                MOVE_STUN_SPORE,
            },
            },
        },
    },
#line 2807
    [TRAINER_PBL_CARMINE] =
    {
#line 2808
        .trainerName = _("Carmine"),
#line 2809
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 2810
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 2811
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2813
        .doubleBattle = FALSE,
#line 2812
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2814
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2816
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2819
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2817
            .ability = ABILITY_MOTOR_DRIVE,
#line 2818
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2820
                MOVE_SHOCK_WAVE,
                MOVE_CHARGE_BEAM,
                MOVE_AERIAL_ACE,
                MOVE_ENCORE,
            },
            },
        },
    },
#line 2825
    [TRAINER_PBL_JONATHAN] =
    {
#line 2826
        .trainerName = _("Jonathan"),
#line 2827
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 2828
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 2829
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2831
        .doubleBattle = FALSE,
#line 2830
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2832
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2834
            .species = SPECIES_NYMBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2837
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2835
            .ability = ABILITY_SWARM,
#line 2836
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2838
                MOVE_DOUBLE_KICK,
                MOVE_SCREECH,
                MOVE_BUG_BITE,
                MOVE_FEINT,
            },
            },
            {
#line 2843
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2846
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2844
            .ability = ABILITY_STURDY,
#line 2845
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2847
                MOVE_BUG_BITE,
                MOVE_PAYBACK,
                MOVE_RAPID_SPIN,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 2852
            .species = SPECIES_SHELMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2855
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2853
            .ability = ABILITY_SHELL_ARMOR,
#line 2854
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2856
                MOVE_MUD_SLAP,
                MOVE_STRUGGLE_BUG,
                MOVE_MEGA_DRAIN,
                MOVE_RECOVER,
            },
            },
            {
#line 2861
            .species = SPECIES_KARRABLAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2864
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2862
            .ability = ABILITY_SWARM,
#line 2863
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2865
                MOVE_FEINT_ATTACK,
                MOVE_BUG_BITE,
                MOVE_SLASH,
                MOVE_RECOVER,
            },
            },
        },
    },
#line 2870
    [TRAINER_PBL_CALVIN] =
    {
#line 2871
        .trainerName = _("Calvin"),
#line 2872
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 2873
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 2874
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2876
        .doubleBattle = FALSE,
#line 2875
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2877
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2879
            .species = SPECIES_ARROKUDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2882
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2880
            .ability = ABILITY_PROPELLER_TAIL,
#line 2881
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2883
                MOVE_AQUA_JET,
                MOVE_BITE,
                MOVE_FOCUS_ENERGY,
                MOVE_LASER_FOCUS,
            },
            },
            {
#line 2888
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2891
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2889
            .ability = ABILITY_WATER_ABSORB,
#line 2890
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2892
                MOVE_MUD_SHOT,
                MOVE_BUBBLE_BEAM,
                MOVE_ENDEAVOR,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 2897
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2898
            .ability = ABILITY_SNIPER,
#line 2899
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2901
                MOVE_FOCUS_ENERGY,
                MOVE_BUBBLE_BEAM,
                MOVE_PSYBEAM,
                MOVE_AURORA_BEAM,
            },
            },
            {
#line 2906
            .species = SPECIES_TYMPOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2909
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2907
            .ability = ABILITY_WATER_ABSORB,
#line 2908
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2910
                MOVE_UPROAR,
                MOVE_BUBBLE_BEAM,
                MOVE_MUD_BOMB,
                MOVE_AQUA_RING,
            },
            },
        },
    },
#line 2915
    [TRAINER_PBL_LUIS] =
    {
#line 2916
        .trainerName = _("Luis"),
#line 2917
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 2918
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 2919
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2921
        .doubleBattle = FALSE,
#line 2920
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2922
        .randomLead = TRUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2924
            .species = SPECIES_CHARCADET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2927
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2925
            .ability = ABILITY_FLASH_FIRE,
#line 2926
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2928
                MOVE_NIGHT_SHADE,
                MOVE_INCINERATE,
                MOVE_WILL_O_WISP,
                MOVE_FLAME_CHARGE,
            },
            },
            {
#line 2933
            .species = SPECIES_CAPSAKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2936
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2934
            .ability = ABILITY_CHLOROPHYLL,
#line 2935
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2937
                MOVE_LEECH_SEED,
                MOVE_RAZOR_LEAF,
                MOVE_WORRY_SEED,
                MOVE_HEADBUTT,
            },
            },
            {
#line 2942
            .species = SPECIES_WIMPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2945
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2943
            .ability = ABILITY_WIMP_OUT,
#line 2944
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2946
                MOVE_STRUGGLE_BUG,
                MOVE_SAND_ATTACK,
                MOVE_HARDEN,
                MOVE_AQUA_JET,
            },
            },
            {
#line 2951
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2954
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2952
            .ability = ABILITY_LEVITATE,
#line 2953
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2955
                MOVE_TACKLE,
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 2960
            .species = SPECIES_SNOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2963
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2961
            .ability = ABILITY_ICE_SCALES,
#line 2962
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2964
                MOVE_STRUGGLE_BUG,
                MOVE_POWDER_SNOW,
                MOVE_MIRROR_COAT,
                MOVE_FAIRY_WIND,
            },
            },
            {
#line 2969
            .species = SPECIES_TOXEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2972
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2970
            .ability = ABILITY_STATIC,
#line 2971
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2973
                MOVE_GROWL,
                MOVE_ACID,
                MOVE_NUZZLE,
                MOVE_TEARFUL_LOOK,
            },
            },
        },
    },
#line 2978
    [TRAINER_PBL_ARI] =
    {
#line 2979
        .trainerName = _("Ari"),
#line 2980
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 2981
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2982
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2984
        .doubleBattle = FALSE,
#line 2983
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2985
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2987
            .species = SPECIES_TANDEMAUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2990
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2988
            .ability = ABILITY_PICKUP,
#line 2989
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2991
                MOVE_SUPER_FANG,
            },
            },
            {
#line 2993
            .species = SPECIES_TADBULB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2996
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2994
            .ability = ABILITY_STATIC,
#line 2995
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2997
                MOVE_PARABOLIC_CHARGE,
            },
            },
            {
#line 2999
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3000
            .ability = ABILITY_RUN_AWAY,
#line 3001
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3003
                MOVE_DOUBLE_HIT,
            },
            },
        },
    },
#line 3005
    [TRAINER_PBL_BERTHA] =
    {
#line 3006
        .trainerName = _("Bertha"),
#line 3007
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3008
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 3009
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3011
        .doubleBattle = FALSE,
#line 3010
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3012
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3014
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3017
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3015
            .ability = ABILITY_STATIC,
#line 3016
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3018
                MOVE_MUD_SHOT,
                MOVE_SPARK,
            },
            },
        },
    },
#line 3021
    [TRAINER_PBL_CASSANDRA] =
    {
#line 3022
        .trainerName = _("Cassandra"),
#line 3023
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3024
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3025
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3027
        .doubleBattle = FALSE,
#line 3026
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3028
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3030
            .species = SPECIES_SQUAWKABILLY_GREEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3033
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3031
            .ability = ABILITY_INTIMIDATE,
#line 3032
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3034
                MOVE_AERIAL_ACE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3037
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3040
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3038
            .ability = ABILITY_PUNK_ROCK,
#line 3039
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3041
                MOVE_ROUND,
                MOVE_SING,
            },
            },
        },
    },
#line 3044
    [TRAINER_PBL_DOMINIC] =
    {
#line 3045
        .trainerName = _("Dominic"),
#line 3046
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3047
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3048
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3050
        .doubleBattle = FALSE,
#line 3049
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3051
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3053
            .species = SPECIES_CARNIVINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3056
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3054
            .ability = ABILITY_LEVITATE,
#line 3055
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3057
                MOVE_LEAF_TORNADO,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 3060
    [TRAINER_PBL_ERICA] =
    {
#line 3061
        .trainerName = _("Erica"),
#line 3062
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3063
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3064
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3066
        .doubleBattle = FALSE,
#line 3065
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3067
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3069
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3072
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3070
            .ability = ABILITY_GUTS,
#line 3071
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3073
                MOVE_RETALIATE,
                MOVE_REVENGE,
            },
            },
            {
#line 3076
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3079
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3077
            .ability = ABILITY_STURDY,
#line 3078
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3080
                MOVE_RETALIATE,
                MOVE_LOW_SWEEP,
            },
            },
        },
    },
#line 3083
    [TRAINER_PBL_ARI_CHALLENGE] =
    {
#line 3084
        .trainerName = _("Ari"),
#line 3085
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3086
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 3087
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3089
        .doubleBattle = FALSE,
#line 3088
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3090
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3092
            .species = SPECIES_TANDEMAUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3092
            .heldItem = ITEM_ORAN_BERRY,
#line 3095
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3093
            .ability = ABILITY_PICKUP,
#line 3094
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3096
                MOVE_DOUBLE_HIT,
                MOVE_SUPER_FANG,
            },
            },
            {
#line 3099
            .species = SPECIES_TADBULB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3099
            .heldItem = ITEM_ORAN_BERRY,
#line 3102
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3100
            .ability = ABILITY_STATIC,
#line 3101
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3103
                MOVE_PARABOLIC_CHARGE,
                MOVE_CHARGE_BEAM,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3107
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3107
            .heldItem = ITEM_ORAN_BERRY,
#line 3110
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3108
            .ability = ABILITY_RUN_AWAY,
#line 3109
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3111
                MOVE_DOUBLE_HIT,
                MOVE_PLUCK,
                MOVE_QUICK_ATTACK,
                MOVE_PURSUIT,
            },
            },
        },
    },
#line 3116
    [TRAINER_PBL_BERTHA_CHALLENGE] =
    {
#line 3117
        .trainerName = _("Bertha"),
#line 3118
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3119
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 3120
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3122
        .doubleBattle = FALSE,
#line 3121
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3123
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3125
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3125
            .heldItem = ITEM_SITRUS_BERRY,
#line 3128
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3126
            .ability = ABILITY_STATIC,
#line 3127
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3129
                MOVE_SPARK,
                MOVE_MUD_SHOT,
                MOVE_YAWN,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 3134
    [TRAINER_PBL_CASSANDRA_CHALLENGE] =
    {
#line 3135
        .trainerName = _("Cassandra"),
#line 3136
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3137
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3138
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3140
        .doubleBattle = FALSE,
#line 3139
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3141
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3143
            .species = SPECIES_SQUAWKABILLY_GREEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3143
            .heldItem = ITEM_SHARP_BEAK,
#line 3146
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3144
            .ability = ABILITY_INTIMIDATE,
#line 3145
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3147
                MOVE_PLUCK,
                MOVE_THIEF,
                MOVE_QUICK_ATTACK,
                MOVE_FURY_ATTACK,
            },
            },
            {
#line 3152
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3152
            .heldItem = ITEM_SITRUS_BERRY,
#line 3155
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3153
            .ability = ABILITY_PUNK_ROCK,
#line 3154
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3156
                MOVE_CHATTER,
                MOVE_ROUND,
                MOVE_THIEF,
                MOVE_ECHOED_VOICE,
            },
            },
        },
    },
#line 3161
    [TRAINER_PBL_DOMINIC_CHALLENGE] =
    {
#line 3162
        .trainerName = _("Dominic"),
#line 3163
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3164
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3165
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3167
        .doubleBattle = FALSE,
#line 3166
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3168
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3170
            .species = SPECIES_CARNIVINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3170
            .heldItem = ITEM_SITRUS_BERRY,
#line 3173
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3171
            .ability = ABILITY_LEVITATE,
#line 3172
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3174
                MOVE_LEAF_TORNADO,
                MOVE_LEECH_SEED,
                MOVE_TRAILBLAZE,
                MOVE_SYNTHESIS,
            },
            },
        },
    },
#line 3179
    [TRAINER_PBL_ERICA_CHALLENGE] =
    {
#line 3180
        .trainerName = _("Erica"),
#line 3181
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3182
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3183
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3185
        .doubleBattle = FALSE,
#line 3184
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3186
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3188
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3188
            .heldItem = ITEM_SITRUS_BERRY,
#line 3191
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3189
            .ability = ABILITY_GUTS,
#line 3190
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3192
                MOVE_RETALIATE,
                MOVE_REVENGE,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3197
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3197
            .heldItem = ITEM_SITRUS_BERRY,
#line 3200
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3198
            .ability = ABILITY_STURDY,
#line 3199
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3201
                MOVE_RETALIATE,
                MOVE_LOW_SWEEP,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 3206
    [TRAINER_PBL_ALANA] =
    {
#line 3207
        .trainerName = _("Alana"),
#line 3208
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 3209
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 3210
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3212
        .doubleBattle = FALSE,
#line 3211
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3213
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3215
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3217
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3216
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3219
            .species = SPECIES_HELIOPTILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3221
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3220
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3223
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3225
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3224
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3227
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3229
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3228
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3231
    [TRAINER_PBL_JACOB] =
    {
#line 3232
        .trainerName = _("Jacob"),
#line 3233
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 3234
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 3235
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3237
        .doubleBattle = FALSE,
#line 3236
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3238
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3240
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3242
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3241
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3244
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3246
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3245
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3248
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3250
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3249
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3252
            .species = SPECIES_TRUMBEAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3254
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3253
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3256
    [TRAINER_PBL_DEWEY] =
    {
#line 3257
        .trainerName = _("Dewey"),
#line 3258
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3259
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 3260
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3262
        .doubleBattle = FALSE,
#line 3261
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3263
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3265
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3267
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3266
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3269
            .species = SPECIES_TINKATINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3271
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3270
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3273
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3275
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3274
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3277
            .species = SPECIES_TOEDSCOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3279
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3278
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3281
    [TRAINER_PBL_ERNEST] =
    {
#line 3282
        .trainerName = _("Ernest"),
#line 3283
        .trainerClass = TRAINER_CLASS_HIKER,
#line 3284
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 3285
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3287
        .doubleBattle = FALSE,
#line 3286
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3288
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3290
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3292
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3291
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3294
            .species = SPECIES_CUFANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3297
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3295
            .ability = ABILITY_SHEER_FORCE,
#line 3296
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3298
                MOVE_BULLDOZE,
                MOVE_SLAM,
                MOVE_DIG,
                MOVE_WHIRLWIND,
            },
            },
            {
#line 3303
            .species = SPECIES_SILICOBRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3305
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3304
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3307
            .species = SPECIES_SANDYGAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3309
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3308
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3311
    [TRAINER_PBL_KYLE] =
    {
#line 3312
        .trainerName = _("Kyle"),
#line 3313
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 3314
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 3315
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3317
        .doubleBattle = FALSE,
#line 3316
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3318
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3320
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3322
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3321
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3324
            .species = SPECIES_RIOLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3326
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3325
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3328
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3329
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3332
            .species = SPECIES_LARVESTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3334
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3333
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3336
    [TRAINER_PBL_ELIAS] =
    {
#line 3337
        .trainerName = _("Elias"),
#line 3338
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 3339
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 3340
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3342
        .doubleBattle = FALSE,
#line 3341
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3343
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3345
            .species = SPECIES_GOOMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3347
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3346
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3349
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3351
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3350
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3353
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3355
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3354
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3357
            .species = SPECIES_JANGMO_O,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3359
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3358
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3361
    [TRAINER_PBL_PEARLIE] =
    {
#line 3362
        .trainerName = _("Pearlie"),
#line 3363
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 3364
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 3365
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3367
        .doubleBattle = FALSE,
#line 3366
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3368
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3370
            .species = SPECIES_PASSIMIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3372
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3371
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3374
    [TRAINER_PBL_SUSAN] =
    {
#line 3375
        .trainerName = _("Susan"),
#line 3376
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 3377
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 3378
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3380
        .doubleBattle = FALSE,
#line 3379
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3381
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3383
            .species = SPECIES_ORANGURU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3385
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3384
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3387
    [TRAINER_PBL_CONRAD] =
    {
#line 3388
        .trainerName = _("Ernest"),
#line 3389
        .trainerClass = TRAINER_CLASS_HIKER,
#line 3390
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 3391
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3393
        .doubleBattle = FALSE,
#line 3392
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3394
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3396
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3399
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3397
            .ability = ABILITY_STURDY,
#line 3398
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3400
                MOVE_METAL_SOUND,
                MOVE_METAL_CLAW,
                MOVE_ROCK_TOMB,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 3405
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3407
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3406
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3409
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3411
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3410
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3413
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3415
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3414
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3417
    [TRAINER_PBL_BRETT] =
    {
#line 3418
        .trainerName = _("Brett"),
#line 3419
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3420
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3421
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3423
        .doubleBattle = FALSE,
#line 3422
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3424
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3426
            .species = SPECIES_FINIZEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3428
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3427
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3430
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3432
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3431
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3434
            .species = SPECIES_BINACLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3436
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3435
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3438
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3440
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3439
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3442
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9] =
    {
#line 3443
        .trainerName = _("Adamina"),
#line 3444
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 3445
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 3446
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3448
        .doubleBattle = FALSE,
#line 3447
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3450
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 3449
        .randomLead = FALSE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3452
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3452
            .heldItem = ITEM_SILVER_POWDER,
#line 3455
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3453
            .ability = ABILITY_STURDY,
#line 3454
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3456
                MOVE_STEALTH_ROCK,
                MOVE_BUG_BITE,
                MOVE_ROCK_TOMB,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3461
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3461
            .heldItem = ITEM_HARD_STONE,
#line 3464
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3462
            .ability = ABILITY_ANGER_SHELL,
#line 3463
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3465
                MOVE_ROCK_TOMB,
                MOVE_BULLDOZE,
                MOVE_KNOCK_OFF,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 3470
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3470
            .heldItem = ITEM_BLACK_GLASSES,
#line 3473
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3471
            .ability = ABILITY_OVERCOAT,
#line 3472
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3474
                MOVE_PLUCK,
                MOVE_FEINT_ATTACK,
                MOVE_ROOST,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3479
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3479
            .heldItem = ITEM_MIRACLE_SEED,
#line 3482
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3480
            .ability = ABILITY_SAND_RUSH,
#line 3481
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3483
                MOVE_MEGA_DRAIN,
                MOVE_PIN_MISSILE,
                MOVE_BOUNCE,
                MOVE_GROWTH,
            },
            },
            {
#line 3488
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3488
            .heldItem = ITEM_SITRUS_BERRY,
#line 3491
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3489
            .ability = ABILITY_SAND_RUSH,
#line 3490
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3492
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
                MOVE_AERIAL_ACE,
                MOVE_COVET,
            },
            },
        },
    },
#line 3497
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9_CHALLENGE] =
    {
#line 3498
        .trainerName = _("Adamina"),
#line 3499
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 3500
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 3501
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3503
        .doubleBattle = FALSE,
#line 3502
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3505
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 3504
        .randomLead = FALSE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3507
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3507
            .heldItem = ITEM_SILVER_POWDER,
#line 3510
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3508
            .ability = ABILITY_STURDY,
#line 3509
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3511
                MOVE_STEALTH_ROCK,
                MOVE_BUG_BITE,
                MOVE_ROCK_TOMB,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3516
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3516
            .heldItem = ITEM_HARD_STONE,
#line 3519
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3517
            .ability = ABILITY_ANGER_SHELL,
#line 3518
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3520
                MOVE_ROCK_TOMB,
                MOVE_BULLDOZE,
                MOVE_KNOCK_OFF,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 3525
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3525
            .heldItem = ITEM_BLACK_GLASSES,
#line 3528
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3526
            .ability = ABILITY_OVERCOAT,
#line 3527
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3529
                MOVE_PLUCK,
                MOVE_FEINT_ATTACK,
                MOVE_ROOST,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3534
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3534
            .heldItem = ITEM_MIRACLE_SEED,
#line 3537
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3535
            .ability = ABILITY_SAND_RUSH,
#line 3536
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3538
                MOVE_MEGA_DRAIN,
                MOVE_PIN_MISSILE,
                MOVE_BOUNCE,
                MOVE_GROWTH,
            },
            },
            {
#line 3543
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3543
            .heldItem = ITEM_SITRUS_BERRY,
#line 3546
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3544
            .ability = ABILITY_SAND_RUSH,
#line 3545
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3547
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
                MOVE_AERIAL_ACE,
                MOVE_COVET,
            },
            },
            {
#line 3552
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3552
            .heldItem = ITEM_SITRUS_BERRY,
#line 3555
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3553
            .ability = ABILITY_MAGIC_GUARD,
#line 3554
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3556
                MOVE_PSYBEAM,
                MOVE_AIR_CUTTER,
                MOVE_ANCIENT_POWER,
                MOVE_ROOST,
            },
            },
        },
    },
#line 3561
    [TRAINER_PBL_JEANETTE] =
    {
#line 3562
        .trainerName = _("Jeanette"),
#line 3563
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 3564
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 3565
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3567
        .doubleBattle = FALSE,
#line 3566
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3568
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3570
            .species = SPECIES_GASTLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3572
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3571
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3574
            .species = SPECIES_FRILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3576
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3575
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3578
            .species = SPECIES_HONEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3579
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3582
            .species = SPECIES_GREAVARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3583
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3586
    [TRAINER_PBL_EMMA_AND_LEO] =
    {
#line 3587
        .trainerName = _("Emma&Leo"),
#line 3588
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 3589
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 3590
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3592
        .doubleBattle = TRUE,
#line 3591
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3593
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3595
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3597
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3596
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3599
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3601
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3600
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3603
    [TRAINER_PBL_JOEL] =
    {
#line 3604
        .trainerName = _("Joel"),
#line 3605
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3606
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3607
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3609
        .doubleBattle = FALSE,
#line 3608
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3610
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3612
            .species = SPECIES_BRONZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3614
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3613
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3616
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3618
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3617
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3620
            .species = SPECIES_POLTCHAGEIST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3622
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3621
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3624
            .species = SPECIES_INKAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3626
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3625
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3628
    [TRAINER_PBL_MARION] =
    {
#line 3629
        .trainerName = _("Marion"),
#line 3630
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3631
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3632
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3634
        .doubleBattle = FALSE,
#line 3633
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3635
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3637
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3639
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3638
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3641
            .species = SPECIES_SINISTEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3643
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3642
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3645
            .species = SPECIES_ELGYEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3647
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3646
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3649
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3651
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3650
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3653
    [TRAINER_PBL_REGINA] =
    {
#line 3654
        .trainerName = _("Regina"),
#line 3655
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 3656
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 3657
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3659
        .doubleBattle = FALSE,
#line 3658
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3660
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3662
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3664
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3663
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3666
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3668
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3667
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3670
            .species = SPECIES_GIMMIGHOUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3672
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3671
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3674
            .species = SPECIES_BRAMBLIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3676
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3675
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3678
    [TRAINER_PBL_NEWTON_LEVIATHAN_10] =
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
    [TRAINER_PBL_NEWTON_LEVIATHAN_10_CHALLENGE] =
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
    [TRAINER_PBL_ESSENCE] =
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
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3719
            .species = SPECIES_TOGEPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3721
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3720
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3723
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3725
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3724
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3727
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3729
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3728
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3731
            .species = SPECIES_SMOOCHUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3733
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3732
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3735
            .species = SPECIES_ELEKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3737
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3736
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3739
            .species = SPECIES_MAGBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3741
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3740
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3743
    [TRAINER_PBL_DOLORES] =
    {
#line 3744
        .trainerName = _("STEVEN"),
#line 3745
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3746
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3748
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3750
            .species = SPECIES_SNOVER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3752
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3751
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3754
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3756
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3755
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3758
            .species = SPECIES_CUBCHOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3760
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3759
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3762
            .species = SPECIES_SNORUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3763
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3766
    [TRAINER_PBL_JULIE] =
    {
#line 3767
        .trainerName = _("STEVEN"),
#line 3768
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3769
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3771
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3773
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3774
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3777
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3779
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3778
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3781
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3783
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3782
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3785
            .species = SPECIES_GLIMMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3787
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3786
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3789
    [TRAINER_PBL_ROMULUS] =
    {
#line 3790
        .trainerName = _("STEVEN"),
#line 3791
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3792
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3794
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3796
            .species = SPECIES_CLAUNCHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3797
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3800
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3801
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3804
            .species = SPECIES_MAREANIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3806
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3805
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3808
    [TRAINER_PBL_TREVOR] =
    {
#line 3809
        .trainerName = _("STEVEN"),
#line 3810
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3811
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3813
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3815
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3817
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3816
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3819
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3821
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3820
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3823
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3825
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3824
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3827
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3829
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3828
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3831
            .species = SPECIES_PAWMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3833
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3832
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3835
    [TRAINER_PBL_FEDERICO] =
    {
#line 3836
        .trainerName = _("STEVEN"),
#line 3837
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3838
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3840
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3842
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3844
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3843
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3846
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3848
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3847
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3850
            .species = SPECIES_MANTYKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3852
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3851
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3854
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3856
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3855
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3858
    [TRAINER_PBL_GENIE] =
    {
#line 3859
        .trainerName = _("STEVEN"),
#line 3860
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3861
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3863
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3865
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3867
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3866
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3869
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3871
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3870
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3873
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3875
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3874
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3877
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3878
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3881
    [TRAINER_PBL_HILDA] =
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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3888
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3890
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3889
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3892
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3894
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3893
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3896
            .species = SPECIES_SKRELP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3897
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3900
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3902
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3901
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3904
    [TRAINER_PBL_KINLEY] =
    {
#line 3905
        .trainerName = _("STEVEN"),
#line 3906
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3907
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3909
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3911
            .species = SPECIES_FRIGIBAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3913
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3912
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3915
            .species = SPECIES_DREEPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3917
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3916
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3919
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3921
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3920
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3923
            .species = SPECIES_ZORUA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3925
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3924
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3927
    [TRAINER_PBL_VIOLET] =
    {
#line 3928
        .trainerName = _("STEVEN"),
#line 3929
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3930
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3932
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3934
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3938
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3937
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3936
            .lvl = 42,
#line 3935
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3939
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3944
    [TRAINER_PBL_WANDA] =
    {
#line 3945
        .trainerName = _("STEVEN"),
#line 3946
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3947
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3949
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3951
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3955
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3954
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3953
            .lvl = 42,
#line 3952
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3956
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3961
    [TRAINER_PBL_AMBER_AND_KIM] =
    {
#line 3962
        .trainerName = _("STEVEN"),
#line 3963
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3964
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3966
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3968
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3972
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3971
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3970
            .lvl = 42,
#line 3969
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3973
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3978
    [TRAINER_PBL_JAN_AND_ERIN] =
    {
#line 3979
        .trainerName = _("STEVEN"),
#line 3980
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3981
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3983
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3985
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3989
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3988
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3987
            .lvl = 42,
#line 3986
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3990
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3995
    [TRAINER_PBL_STEVE] =
    {
#line 3996
        .trainerName = _("STEVEN"),
#line 3997
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3998
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4000
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4002
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4006
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4005
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4004
            .lvl = 42,
#line 4003
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4007
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4012
    [TRAINER_PBL_GOULD] =
    {
#line 4013
        .trainerName = _("STEVEN"),
#line 4014
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4015
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4017
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4019
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4023
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4022
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4021
            .lvl = 42,
#line 4020
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4024
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4029
    [TRAINER_PBL_MENDEL] =
    {
#line 4030
        .trainerName = _("STEVEN"),
#line 4031
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4032
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4034
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4036
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4040
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4039
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4038
            .lvl = 42,
#line 4037
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4041
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4046
    [TRAINER_PBL_DARWIN] =
    {
#line 4047
        .trainerName = _("STEVEN"),
#line 4048
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4049
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4051
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4053
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4057
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4056
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4055
            .lvl = 42,
#line 4054
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4058
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4063
    [TRAINER_PBL_JENNY_LEVIATHAN_11] =
    {
#line 4064
        .trainerName = _("STEVEN"),
#line 4065
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4066
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4068
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4070
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4074
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4073
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4072
            .lvl = 42,
#line 4071
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4075
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4080
    [TRAINER_PBL_JENNY_LEVIATHAN_11_CHALLENGE] =
    {
#line 4081
        .trainerName = _("STEVEN"),
#line 4082
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4083
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4085
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4087
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4091
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4090
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4089
            .lvl = 42,
#line 4088
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4092
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4097
    [TRAINER_PBL_BART] =
    {
#line 4098
        .trainerName = _("STEVEN"),
#line 4099
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4100
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4102
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4104
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4108
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4107
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4106
            .lvl = 42,
#line 4105
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4109
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4114
    [TRAINER_PBL_NIGEL] =
    {
#line 4115
        .trainerName = _("STEVEN"),
#line 4116
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4117
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4119
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4121
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4125
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4124
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4123
            .lvl = 42,
#line 4122
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4126
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4131
    [TRAINER_PBL_LOLA] =
    {
#line 4132
        .trainerName = _("STEVEN"),
#line 4133
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4134
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4136
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4138
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4142
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4141
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4140
            .lvl = 42,
#line 4139
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4143
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4148
    [TRAINER_PBL_CHARLIE] =
    {
#line 4149
        .trainerName = _("STEVEN"),
#line 4150
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4151
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4153
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4155
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4159
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4158
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4157
            .lvl = 42,
#line 4156
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4160
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4165
    [TRAINER_PBL_RANDOLPH] =
    {
#line 4166
        .trainerName = _("STEVEN"),
#line 4167
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4168
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4170
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4172
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4176
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4175
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4174
            .lvl = 42,
#line 4173
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4177
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4182
    [TRAINER_PBL_TODD] =
    {
#line 4183
        .trainerName = _("STEVEN"),
#line 4184
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4185
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4187
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4189
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4193
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4192
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4191
            .lvl = 42,
#line 4190
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4194
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4199
    [TRAINER_PBL_RUSSELL] =
    {
#line 4200
        .trainerName = _("STEVEN"),
#line 4201
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4202
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4204
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4206
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4210
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4209
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4208
            .lvl = 42,
#line 4207
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4211
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4216
    [TRAINER_PBL_OTIS] =
    {
#line 4217
        .trainerName = _("STEVEN"),
#line 4218
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4219
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4221
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4223
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4227
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4226
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4225
            .lvl = 42,
#line 4224
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4228
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4233
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12] =
    {
#line 4234
        .trainerName = _("STEVEN"),
#line 4235
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4236
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4238
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4240
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4244
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4242
            .lvl = 42,
#line 4241
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4245
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4250
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12_CHALLENGE] =
    {
#line 4251
        .trainerName = _("STEVEN"),
#line 4252
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4253
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4255
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4257
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4261
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4260
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4259
            .lvl = 42,
#line 4258
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4262
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4267
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13] =
    {
#line 4268
        .trainerName = _("STEVEN"),
#line 4269
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4270
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4272
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4274
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4278
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4277
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4276
            .lvl = 42,
#line 4275
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4279
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4284
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13_CHALLENGE] =
    {
#line 4285
        .trainerName = _("STEVEN"),
#line 4286
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4287
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4289
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4291
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4295
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4294
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4293
            .lvl = 42,
#line 4292
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4296
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4301
    [TRAINER_PBL_IONA] =
    {
#line 4302
        .trainerName = _("STEVEN"),
#line 4303
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4304
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4306
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4308
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4312
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4311
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4310
            .lvl = 42,
#line 4309
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4313
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4318
    [TRAINER_PBL_BERKE] =
    {
#line 4319
        .trainerName = _("STEVEN"),
#line 4320
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4321
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4323
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4325
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4329
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4328
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4327
            .lvl = 42,
#line 4326
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4330
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4335
    [TRAINER_PBL_TANISHA] =
    {
#line 4336
        .trainerName = _("STEVEN"),
#line 4337
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4338
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4340
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4342
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4346
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4345
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4344
            .lvl = 42,
#line 4343
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4347
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4352
    [TRAINER_PBL_ROBERT] =
    {
#line 4353
        .trainerName = _("STEVEN"),
#line 4354
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4355
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4357
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4359
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4363
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4362
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4361
            .lvl = 42,
#line 4360
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4364
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4369
    [TRAINER_PBL_CHRIS] =
    {
#line 4370
        .trainerName = _("STEVEN"),
#line 4371
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4372
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4374
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4376
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4380
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4379
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4378
            .lvl = 42,
#line 4377
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4381
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4386
    [TRAINER_PBL_ANGUS] =
    {
#line 4387
        .trainerName = _("STEVEN"),
#line 4388
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4389
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4391
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4393
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4397
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4396
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4395
            .lvl = 42,
#line 4394
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4398
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4403
    [TRAINER_PBL_LILY_LEVIATHAN_14] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4410
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4414
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4413
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4412
            .lvl = 42,
#line 4411
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4415
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4420
    [TRAINER_PBL_LILY_LEVIATHAN_14_CHALLENGE] =
    {
#line 4421
        .trainerName = _("STEVEN"),
#line 4422
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4423
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4425
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4427
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4431
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4430
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4429
            .lvl = 42,
#line 4428
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4432
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4437
    [TRAINER_PBL_AXLE] =
    {
#line 4438
        .trainerName = _("STEVEN"),
#line 4439
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4440
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4442
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4444
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4448
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4447
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4446
            .lvl = 42,
#line 4445
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4449
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4454
    [TRAINER_PBL_RAFAEL] =
    {
#line 4455
        .trainerName = _("STEVEN"),
#line 4456
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4457
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4459
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4461
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4465
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4464
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4463
            .lvl = 42,
#line 4462
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4466
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4471
    [TRAINER_PBL_GEORGINA] =
    {
#line 4472
        .trainerName = _("STEVEN"),
#line 4473
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4474
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4476
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4478
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4482
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4481
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4480
            .lvl = 42,
#line 4479
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4483
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4488
    [TRAINER_PBL_MIA_LEVIATHAN_15] =
    {
#line 4489
        .trainerName = _("STEVEN"),
#line 4490
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4491
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4493
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4495
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4499
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4498
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4497
            .lvl = 42,
#line 4496
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4500
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4505
    [TRAINER_PBL_MIA_LEVIATHAN_15_CHALLENGE] =
    {
#line 4506
        .trainerName = _("STEVEN"),
#line 4507
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4508
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4510
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4512
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4516
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4515
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4514
            .lvl = 42,
#line 4513
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4517
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4522
    [TRAINER_PBL_DORIS] =
    {
#line 4523
        .trainerName = _("STEVEN"),
#line 4524
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4525
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4527
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4529
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4533
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4532
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4531
            .lvl = 42,
#line 4530
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4534
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4539
    [TRAINER_PBL_HOMER] =
    {
#line 4540
        .trainerName = _("STEVEN"),
#line 4541
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4542
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4544
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4546
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4550
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4549
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4548
            .lvl = 42,
#line 4547
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4551
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4556
    [TRAINER_PBL_JOHN] =
    {
#line 4557
        .trainerName = _("STEVEN"),
#line 4558
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4559
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4561
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4563
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4567
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4566
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4565
            .lvl = 42,
#line 4564
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4568
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4573
    [TRAINER_PBL_GLENN] =
    {
#line 4574
        .trainerName = _("STEVEN"),
#line 4575
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4576
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4578
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4580
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4584
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4583
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4582
            .lvl = 42,
#line 4581
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4585
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4590
    [TRAINER_PBL_JAY] =
    {
#line 4591
        .trainerName = _("STEVEN"),
#line 4592
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4593
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4595
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4597
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4601
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4600
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4599
            .lvl = 42,
#line 4598
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4602
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4607
    [TRAINER_PBL_TYLER] =
    {
#line 4608
        .trainerName = _("STEVEN"),
#line 4609
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4610
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4612
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4614
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4618
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4617
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4616
            .lvl = 42,
#line 4615
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4619
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4624
    [TRAINER_PBL_TERRENCE] =
    {
#line 4625
        .trainerName = _("STEVEN"),
#line 4626
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4627
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4629
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4631
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4635
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4634
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4633
            .lvl = 42,
#line 4632
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4636
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4641
    [TRAINER_PBL_MARTY] =
    {
#line 4642
        .trainerName = _("STEVEN"),
#line 4643
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4644
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4646
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4648
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4652
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4651
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4650
            .lvl = 42,
#line 4649
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4653
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4658
    [TRAINER_PBL_KARI] =
    {
#line 4659
        .trainerName = _("STEVEN"),
#line 4660
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4661
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4663
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4665
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4669
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4668
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4667
            .lvl = 42,
#line 4666
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4670
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4675
    [TRAINER_PBL_ABRAHAM] =
    {
#line 4676
        .trainerName = _("STEVEN"),
#line 4677
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4678
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4680
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4682
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4686
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4685
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4684
            .lvl = 42,
#line 4683
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4687
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4692
    [TRAINER_PBL_MELINDA] =
    {
#line 4693
        .trainerName = _("STEVEN"),
#line 4694
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4695
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4697
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4699
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4703
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4702
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4701
            .lvl = 42,
#line 4700
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4704
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4709
    [TRAINER_PBL_EMILIO] =
    {
#line 4710
        .trainerName = _("STEVEN"),
#line 4711
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4712
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4714
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4716
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4720
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4719
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4718
            .lvl = 42,
#line 4717
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4721
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4726
    [TRAINER_PBL_REX] =
    {
#line 4727
        .trainerName = _("STEVEN"),
#line 4728
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4729
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4731
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4733
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4737
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4736
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4735
            .lvl = 42,
#line 4734
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4738
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4743
    [TRAINER_PBL_LOUIS] =
    {
#line 4744
        .trainerName = _("STEVEN"),
#line 4745
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4746
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4748
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4750
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4754
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4753
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4752
            .lvl = 42,
#line 4751
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4755
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4760
    [TRAINER_PBL_LEROY] =
    {
#line 4761
        .trainerName = _("STEVEN"),
#line 4762
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4763
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4765
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4767
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4771
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4770
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4769
            .lvl = 42,
#line 4768
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4772
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4777
    [TRAINER_PBL_ELTON] =
    {
#line 4778
        .trainerName = _("STEVEN"),
#line 4779
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4780
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4782
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4784
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4788
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4787
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4786
            .lvl = 42,
#line 4785
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4789
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4794
    [TRAINER_PBL_WILLIE] =
    {
#line 4795
        .trainerName = _("STEVEN"),
#line 4796
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4797
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4799
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4801
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4805
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4804
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4803
            .lvl = 42,
#line 4802
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4806
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4811
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16] =
    {
#line 4812
        .trainerName = _("STEVEN"),
#line 4813
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4814
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4816
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4818
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4822
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4821
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4820
            .lvl = 42,
#line 4819
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4823
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4828
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16_CHALLENGE] =
    {
#line 4829
        .trainerName = _("STEVEN"),
#line 4830
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4831
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4833
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4835
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4839
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4838
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4837
            .lvl = 42,
#line 4836
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4840
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4845
    [TRAINER_PBL_PIRATE_1] =
    {
#line 4846
        .trainerName = _("STEVEN"),
#line 4847
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4848
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4850
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4852
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4856
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4855
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4854
            .lvl = 42,
#line 4853
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4857
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4862
    [TRAINER_PBL_PIRATE_2] =
    {
#line 4863
        .trainerName = _("STEVEN"),
#line 4864
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4865
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4867
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4869
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4873
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4872
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4871
            .lvl = 42,
#line 4870
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4874
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4879
    [TRAINER_PBL_PIRATE_3] =
    {
#line 4880
        .trainerName = _("STEVEN"),
#line 4881
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4882
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4884
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4886
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4890
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4889
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4888
            .lvl = 42,
#line 4887
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4891
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4896
    [TRAINER_PBL_PIRATE_4] =
    {
#line 4897
        .trainerName = _("STEVEN"),
#line 4898
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4899
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4901
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4903
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4907
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4906
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4905
            .lvl = 42,
#line 4904
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4908
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4913
    [TRAINER_PBL_SHAWN] =
    {
#line 4914
        .trainerName = _("STEVEN"),
#line 4915
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4916
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4918
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4920
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4924
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4923
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4922
            .lvl = 42,
#line 4921
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4925
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4930
    [TRAINER_PBL_FERNANDO] =
    {
#line 4931
        .trainerName = _("STEVEN"),
#line 4932
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4933
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4935
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4937
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4941
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4940
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4939
            .lvl = 42,
#line 4938
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4942
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4947
    [TRAINER_PBL_KANE] =
    {
#line 4948
        .trainerName = _("STEVEN"),
#line 4949
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4950
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4952
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4954
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4958
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4957
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4956
            .lvl = 42,
#line 4955
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4959
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4964
    [TRAINER_PBL_KIRK] =
    {
#line 4965
        .trainerName = _("STEVEN"),
#line 4966
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4967
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4969
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4971
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4975
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4974
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4973
            .lvl = 42,
#line 4972
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4976
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4981
    [TRAINER_PBL_DALTON] =
    {
#line 4982
        .trainerName = _("STEVEN"),
#line 4983
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4984
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4986
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4988
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4992
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4991
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4990
            .lvl = 42,
#line 4989
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4993
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4998
    [TRAINER_PBL_LEE] =
    {
#line 4999
        .trainerName = _("STEVEN"),
#line 5000
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5001
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5003
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5005
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5009
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5008
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5007
            .lvl = 42,
#line 5006
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5010
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5015
    [TRAINER_PBL_BLANCHE] =
    {
#line 5016
        .trainerName = _("STEVEN"),
#line 5017
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5018
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5020
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5022
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5026
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5025
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5024
            .lvl = 42,
#line 5023
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5027
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5032
    [TRAINER_PBL_TROY] =
    {
#line 5033
        .trainerName = _("STEVEN"),
#line 5034
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5035
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5037
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5039
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5043
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5042
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5041
            .lvl = 42,
#line 5040
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5044
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5049
    [TRAINER_PBL_ABED] =
    {
#line 5050
        .trainerName = _("STEVEN"),
#line 5051
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5052
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5054
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5056
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5060
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5059
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5058
            .lvl = 42,
#line 5057
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5061
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5066
    [TRAINER_PBL_TROY_BRUTAL] =
    {
#line 5067
        .trainerName = _("STEVEN"),
#line 5068
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5069
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5071
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5073
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5077
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5076
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5075
            .lvl = 42,
#line 5074
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5078
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5083
    [TRAINER_PBL_ABED_BRUTAL] =
    {
#line 5084
        .trainerName = _("STEVEN"),
#line 5085
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5086
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5088
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5090
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5094
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5093
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5092
            .lvl = 42,
#line 5091
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5095
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5100
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17] =
    {
#line 5101
        .trainerName = _("STEVEN"),
#line 5102
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5103
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5105
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5107
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5111
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5110
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5109
            .lvl = 42,
#line 5108
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5112
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5117
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17_CHALLENGE] =
    {
#line 5118
        .trainerName = _("STEVEN"),
#line 5119
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5120
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5122
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5124
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5128
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5127
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5126
            .lvl = 42,
#line 5125
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5129
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5134
    [TRAINER_PBL_ANITA] =
    {
#line 5135
        .trainerName = _("STEVEN"),
#line 5136
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5137
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5139
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5141
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5145
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5144
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5143
            .lvl = 42,
#line 5142
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5146
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5151
    [TRAINER_PBL_DESIREE] =
    {
#line 5152
        .trainerName = _("STEVEN"),
#line 5153
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5154
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5156
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5158
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5162
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5161
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5160
            .lvl = 42,
#line 5159
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5163
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5168
    [TRAINER_PBL_HOWARD] =
    {
#line 5169
        .trainerName = _("STEVEN"),
#line 5170
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5171
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5173
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5175
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5179
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5178
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5177
            .lvl = 42,
#line 5176
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5180
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5185
    [TRAINER_PBL_ELOISE] =
    {
#line 5186
        .trainerName = _("STEVEN"),
#line 5187
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5188
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5190
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5192
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5196
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5195
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5194
            .lvl = 42,
#line 5193
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5197
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5202
    [TRAINER_PBL_ALLY_AND_EMMY] =
    {
#line 5203
        .trainerName = _("STEVEN"),
#line 5204
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5205
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5207
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5209
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5213
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5212
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5211
            .lvl = 42,
#line 5210
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5214
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5219
    [TRAINER_PBL_AMIR] =
    {
#line 5220
        .trainerName = _("STEVEN"),
#line 5221
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5222
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5224
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5226
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5230
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5228
            .lvl = 42,
#line 5227
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5231
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5236
    [TRAINER_PBL_GETHIN] =
    {
#line 5237
        .trainerName = _("STEVEN"),
#line 5238
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5239
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5241
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5243
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5247
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5246
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5245
            .lvl = 42,
#line 5244
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5248
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5253
    [TRAINER_PBL_BERNARD] =
    {
#line 5254
        .trainerName = _("STEVEN"),
#line 5255
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5256
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5258
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5260
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5264
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5263
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5262
            .lvl = 42,
#line 5261
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5265
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5270
    [TRAINER_PBL_ELLIE] =
    {
#line 5271
        .trainerName = _("STEVEN"),
#line 5272
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5273
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5275
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5277
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5281
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5280
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5279
            .lvl = 42,
#line 5278
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5282
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5287
    [TRAINER_PBL_RUSTY] =
    {
#line 5288
        .trainerName = _("STEVEN"),
#line 5289
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5290
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5292
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5294
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5298
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5297
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5296
            .lvl = 42,
#line 5295
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5299
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5304
    [TRAINER_PBL_CODY] =
    {
#line 5305
        .trainerName = _("STEVEN"),
#line 5306
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5307
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5309
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5311
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5315
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5314
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5313
            .lvl = 42,
#line 5312
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5316
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5321
    [TRAINER_PBL_LEWIS] =
    {
#line 5322
        .trainerName = _("STEVEN"),
#line 5323
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5324
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5326
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5328
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5332
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5331
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5330
            .lvl = 42,
#line 5329
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5333
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5338
    [TRAINER_PBL_CORNELIUS] =
    {
#line 5339
        .trainerName = _("STEVEN"),
#line 5340
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5341
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5343
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5345
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5349
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5348
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5347
            .lvl = 42,
#line 5346
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5350
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5355
    [TRAINER_PBL_INEZ_AND_EMMA] =
    {
#line 5356
        .trainerName = _("STEVEN"),
#line 5357
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5358
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5360
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5362
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5366
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5365
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5364
            .lvl = 42,
#line 5363
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5367
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5372
    [TRAINER_PBL_HELEN] =
    {
#line 5373
        .trainerName = _("STEVEN"),
#line 5374
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5375
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5377
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5379
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5383
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5382
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5381
            .lvl = 42,
#line 5380
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5384
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5389
    [TRAINER_PBL_WESLEY] =
    {
#line 5390
        .trainerName = _("STEVEN"),
#line 5391
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5392
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5394
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5396
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5400
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5399
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5398
            .lvl = 42,
#line 5397
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5401
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5406
    [TRAINER_PBL_ALFREDO] =
    {
#line 5407
        .trainerName = _("STEVEN"),
#line 5408
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5409
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5411
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5413
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5417
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5416
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5415
            .lvl = 42,
#line 5414
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5418
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5423
    [TRAINER_PBL_IAN] =
    {
#line 5424
        .trainerName = _("STEVEN"),
#line 5425
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5426
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5428
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5430
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5434
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5433
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5432
            .lvl = 42,
#line 5431
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5435
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5440
    [TRAINER_PBL_AUDREY] =
    {
#line 5441
        .trainerName = _("STEVEN"),
#line 5442
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5443
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5445
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5447
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5451
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5450
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5449
            .lvl = 42,
#line 5448
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5452
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5457
    [TRAINER_PBL_LEVIATHAN13] =
    {
#line 5458
        .trainerName = _("STEVEN"),
#line 5459
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5460
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5462
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5464
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5468
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5467
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5466
            .lvl = 42,
#line 5465
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5469
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5474
    [TRAINER_PBL_EDGARDO] =
    {
#line 5475
        .trainerName = _("STEVEN"),
#line 5476
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5477
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5479
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5481
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5485
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5484
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5483
            .lvl = 42,
#line 5482
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5486
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5491
    [TRAINER_PBL_JEAN] =
    {
#line 5492
        .trainerName = _("STEVEN"),
#line 5493
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5494
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5496
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5498
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5502
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5501
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5500
            .lvl = 42,
#line 5499
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5503
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5508
    [TRAINER_PBL_ROSE] =
    {
#line 5509
        .trainerName = _("STEVEN"),
#line 5510
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5511
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5513
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5515
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5519
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5518
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5517
            .lvl = 42,
#line 5516
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5520
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5525
    [TRAINER_PBL_JENNIFER] =
    {
#line 5526
        .trainerName = _("STEVEN"),
#line 5527
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5528
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5530
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5532
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5536
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5535
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5534
            .lvl = 42,
#line 5533
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5537
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5542
    [TRAINER_PBL_MATTHEW] =
    {
#line 5543
        .trainerName = _("STEVEN"),
#line 5544
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5545
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5547
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5549
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5553
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5552
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5551
            .lvl = 42,
#line 5550
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5554
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5559
    [TRAINER_PBL_KERRY] =
    {
#line 5560
        .trainerName = _("STEVEN"),
#line 5561
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5562
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5564
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5566
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5570
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5569
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5568
            .lvl = 42,
#line 5567
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5571
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5576
    [TRAINER_PBL_ANNIE] =
    {
#line 5577
        .trainerName = _("STEVEN"),
#line 5578
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5579
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5581
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5583
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5587
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5586
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5585
            .lvl = 42,
#line 5584
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5588
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5593
    [TRAINER_PBL_CHRISTI] =
    {
#line 5594
        .trainerName = _("STEVEN"),
#line 5595
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5596
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5598
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5600
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5604
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5603
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5602
            .lvl = 42,
#line 5601
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5605
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5610
    [TRAINER_PBL_SPENCER] =
    {
#line 5611
        .trainerName = _("STEVEN"),
#line 5612
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5613
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5615
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5617
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5621
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5620
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5619
            .lvl = 42,
#line 5618
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5622
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5627
    [TRAINER_PBL_HAYWOOD] =
    {
#line 5628
        .trainerName = _("STEVEN"),
#line 5629
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5630
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5632
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5634
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5638
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5637
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5636
            .lvl = 42,
#line 5635
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5639
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5644
    [TRAINER_PBL_MONROE] =
    {
#line 5645
        .trainerName = _("STEVEN"),
#line 5646
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5647
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5649
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5651
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5655
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5654
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5653
            .lvl = 42,
#line 5652
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5656
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5661
    [TRAINER_PBL_DAVID] =
    {
#line 5662
        .trainerName = _("STEVEN"),
#line 5663
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5664
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5666
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5668
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5672
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5671
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5670
            .lvl = 42,
#line 5669
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5673
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5678
    [TRAINER_PBL_DOMINIK] =
    {
#line 5679
        .trainerName = _("STEVEN"),
#line 5680
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5681
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5683
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5685
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5689
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5688
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5687
            .lvl = 42,
#line 5686
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5690
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5695
    [TRAINER_PBL_DOUGLAS] =
    {
#line 5696
        .trainerName = _("STEVEN"),
#line 5697
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5698
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5700
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5702
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5706
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5705
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5704
            .lvl = 42,
#line 5703
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5707
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5712
    [TRAINER_PBL_NADINE] =
    {
#line 5713
        .trainerName = _("STEVEN"),
#line 5714
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5715
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5717
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5719
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5723
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5722
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5721
            .lvl = 42,
#line 5720
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5724
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5729
    [TRAINER_PBL_SANDY] =
    {
#line 5730
        .trainerName = _("STEVEN"),
#line 5731
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5732
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5734
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5736
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5740
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5739
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5738
            .lvl = 42,
#line 5737
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5741
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5746
    [TRAINER_PBL_SHELDON] =
    {
#line 5747
        .trainerName = _("STEVEN"),
#line 5748
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5749
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5751
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5753
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5757
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5756
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5755
            .lvl = 42,
#line 5754
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5758
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5763
    [TRAINER_PBL_LEVIATHAN14] =
    {
#line 5764
        .trainerName = _("STEVEN"),
#line 5765
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5766
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5768
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5770
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5774
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5773
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5772
            .lvl = 42,
#line 5771
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5775
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5780
    [TRAINER_PBL_LEVIATHAN12_BRUTAL] =
    {
#line 5781
        .trainerName = _("STEVEN"),
#line 5782
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5783
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5785
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5787
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5791
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5790
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5789
            .lvl = 42,
#line 5788
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5792
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5797
    [TRAINER_PBL_LEVIATHAN13_BRUTAL] =
    {
#line 5798
        .trainerName = _("STEVEN"),
#line 5799
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5800
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5802
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5804
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5808
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5807
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5806
            .lvl = 42,
#line 5805
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5809
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5814
    [TRAINER_PBL_LEVIATHAN14_BRUTAL] =
    {
#line 5815
        .trainerName = _("STEVEN"),
#line 5816
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5817
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5819
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5821
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5825
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5824
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5823
            .lvl = 42,
#line 5822
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5826
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5831
    [TRAINER_PBL_LEVIATHAN12] =
    {
#line 5832
        .trainerName = _("STEVEN"),
#line 5833
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5834
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5836
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5838
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5842
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5841
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5840
            .lvl = 42,
#line 5839
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5843
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
