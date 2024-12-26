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
        .trainerName = _("Declan"),
#line 1610
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 1611
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 1612
            TRAINER_ENCOUNTER_MUSIC_MALE,
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
        .randomLead = TRUE,
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
            .heldItem = ITEM_NORMAL_GEM,
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
            .heldItem = ITEM_NORMAL_GEM,
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
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2754
            .heldItem = ITEM_BLACK_BELT,
#line 2757
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2755
            .ability = ABILITY_GUTS,
#line 2756
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2758
                MOVE_REVENGE,
                MOVE_SEISMIC_TOSS,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 2763
    [TRAINER_PBL_COOPER] =
    {
#line 2764
        .trainerName = _("STEVEN"),
#line 2765
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2766
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2768
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2770
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2774
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2773
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2772
            .lvl = 42,
#line 2771
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2775
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2780
    [TRAINER_PBL_CARMINE] =
    {
#line 2781
        .trainerName = _("STEVEN"),
#line 2782
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2783
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2785
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2787
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2791
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2790
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2789
            .lvl = 42,
#line 2788
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2792
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2797
    [TRAINER_PBL_ARI] =
    {
#line 2798
        .trainerName = _("STEVEN"),
#line 2799
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2800
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2802
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2804
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2808
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2807
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2806
            .lvl = 42,
#line 2805
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2809
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2814
    [TRAINER_PBL_BERTHA] =
    {
#line 2815
        .trainerName = _("STEVEN"),
#line 2816
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2817
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2819
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2821
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2825
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2824
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2823
            .lvl = 42,
#line 2822
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2826
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2831
    [TRAINER_PBL_CASSANDRA] =
    {
#line 2832
        .trainerName = _("STEVEN"),
#line 2833
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2834
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2836
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2838
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2842
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2841
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2840
            .lvl = 42,
#line 2839
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2843
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2848
    [TRAINER_PBL_DOMINIC] =
    {
#line 2849
        .trainerName = _("STEVEN"),
#line 2850
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2851
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2853
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2855
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2859
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2858
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2857
            .lvl = 42,
#line 2856
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2860
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2865
    [TRAINER_PBL_ERICA] =
    {
#line 2866
        .trainerName = _("STEVEN"),
#line 2867
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2868
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2870
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2872
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2876
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2875
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2874
            .lvl = 42,
#line 2873
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2877
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2882
    [TRAINER_PBL_KYLE] =
    {
#line 2883
        .trainerName = _("STEVEN"),
#line 2884
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2885
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2887
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2889
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2893
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2892
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2891
            .lvl = 42,
#line 2890
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2894
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2899
    [TRAINER_PBL_BELLE] =
    {
#line 2900
        .trainerName = _("STEVEN"),
#line 2901
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2902
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2904
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2906
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2910
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2909
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2908
            .lvl = 42,
#line 2907
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2911
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2916
    [TRAINER_PBL_DEWEY] =
    {
#line 2917
        .trainerName = _("STEVEN"),
#line 2918
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2919
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2921
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2923
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2927
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2926
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2925
            .lvl = 42,
#line 2924
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2928
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2933
    [TRAINER_PBL_PEARLIE] =
    {
#line 2934
        .trainerName = _("STEVEN"),
#line 2935
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2936
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2938
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2940
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2944
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2943
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2942
            .lvl = 42,
#line 2941
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2945
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2950
    [TRAINER_PBL_ERNEST] =
    {
#line 2951
        .trainerName = _("STEVEN"),
#line 2952
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2953
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2955
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2957
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2961
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2960
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2959
            .lvl = 42,
#line 2958
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2962
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2967
    [TRAINER_PBL_ALANA] =
    {
#line 2968
        .trainerName = _("STEVEN"),
#line 2969
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2970
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2972
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2974
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2978
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2977
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2976
            .lvl = 42,
#line 2975
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2979
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2984
    [TRAINER_PBL_SUSAN] =
    {
#line 2985
        .trainerName = _("STEVEN"),
#line 2986
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2987
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2989
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2991
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2995
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2994
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2993
            .lvl = 42,
#line 2992
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2996
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3001
    [TRAINER_PBL_CONRAD] =
    {
#line 3002
        .trainerName = _("STEVEN"),
#line 3003
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3004
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3006
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3008
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3012
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3011
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3010
            .lvl = 42,
#line 3009
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3013
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3018
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9] =
    {
#line 3019
        .trainerName = _("STEVEN"),
#line 3020
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3021
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3023
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3025
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3029
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3028
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3027
            .lvl = 42,
#line 3026
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3030
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3035
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9_BRUTAL] =
    {
#line 3036
        .trainerName = _("STEVEN"),
#line 3037
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3038
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3040
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3042
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3046
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3045
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3044
            .lvl = 42,
#line 3043
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3047
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3052
    [TRAINER_PBL_JEANETTE] =
    {
#line 3053
        .trainerName = _("STEVEN"),
#line 3054
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3055
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3057
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3059
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3063
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3062
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3061
            .lvl = 42,
#line 3060
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3064
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3069
    [TRAINER_PBL_EMMA_AND_LEO] =
    {
#line 3070
        .trainerName = _("STEVEN"),
#line 3071
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3072
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3074
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3076
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3080
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3079
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3078
            .lvl = 42,
#line 3077
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3081
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3086
    [TRAINER_PBL_JOEL] =
    {
#line 3087
        .trainerName = _("STEVEN"),
#line 3088
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3089
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3091
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3093
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3097
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3096
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3095
            .lvl = 42,
#line 3094
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3098
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3103
    [TRAINER_PBL_MARION] =
    {
#line 3104
        .trainerName = _("STEVEN"),
#line 3105
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3106
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3108
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3110
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3114
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3113
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3112
            .lvl = 42,
#line 3111
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3115
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3120
    [TRAINER_PBL_REGINA] =
    {
#line 3121
        .trainerName = _("STEVEN"),
#line 3122
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3123
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3125
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3127
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3131
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3130
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3129
            .lvl = 42,
#line 3128
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3132
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3137
    [TRAINER_PBL_NEWTON_LEVIATHAN_10] =
    {
#line 3138
        .trainerName = _("STEVEN"),
#line 3139
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3140
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3142
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3144
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3148
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3146
            .lvl = 42,
#line 3145
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3149
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3154
    [TRAINER_PBL_NEWTON_LEVIATHAN_10_BRUTAL] =
    {
#line 3155
        .trainerName = _("STEVEN"),
#line 3156
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3157
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3159
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3161
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3165
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3163
            .lvl = 42,
#line 3162
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3166
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3171
    [TRAINER_PBL_ESSENCE] =
    {
#line 3172
        .trainerName = _("STEVEN"),
#line 3173
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3174
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3176
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3178
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3182
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3181
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3180
            .lvl = 42,
#line 3179
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3183
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3188
    [TRAINER_PBL_DOLORES] =
    {
#line 3189
        .trainerName = _("STEVEN"),
#line 3190
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3191
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3193
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3195
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3199
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3198
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3197
            .lvl = 42,
#line 3196
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3200
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3205
    [TRAINER_PBL_JULIE] =
    {
#line 3206
        .trainerName = _("STEVEN"),
#line 3207
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3208
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3210
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3212
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3216
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3215
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3214
            .lvl = 42,
#line 3213
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3217
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3222
    [TRAINER_PBL_ROMULUS] =
    {
#line 3223
        .trainerName = _("STEVEN"),
#line 3224
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3225
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3227
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3229
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3233
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3232
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3231
            .lvl = 42,
#line 3230
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3234
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3239
    [TRAINER_PBL_TREVOR] =
    {
#line 3240
        .trainerName = _("STEVEN"),
#line 3241
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3242
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3244
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3246
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3250
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3249
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3248
            .lvl = 42,
#line 3247
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3251
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3256
    [TRAINER_PBL_FEDERICO] =
    {
#line 3257
        .trainerName = _("STEVEN"),
#line 3258
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3259
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3261
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3263
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3267
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3266
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3265
            .lvl = 42,
#line 3264
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3268
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3273
    [TRAINER_PBL_GENIE] =
    {
#line 3274
        .trainerName = _("STEVEN"),
#line 3275
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3276
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3278
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3280
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3284
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3283
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3282
            .lvl = 42,
#line 3281
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3285
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3290
    [TRAINER_PBL_HILDA] =
    {
#line 3291
        .trainerName = _("STEVEN"),
#line 3292
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3293
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3295
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3297
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3301
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3300
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3299
            .lvl = 42,
#line 3298
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3302
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3307
    [TRAINER_PBL_KINLEY] =
    {
#line 3308
        .trainerName = _("STEVEN"),
#line 3309
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3310
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3312
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3314
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3318
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3317
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3316
            .lvl = 42,
#line 3315
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3319
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3324
    [TRAINER_PBL_VIOLET] =
    {
#line 3325
        .trainerName = _("STEVEN"),
#line 3326
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3327
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3329
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3331
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3335
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3334
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3333
            .lvl = 42,
#line 3332
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3336
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3341
    [TRAINER_PBL_WANDA] =
    {
#line 3342
        .trainerName = _("STEVEN"),
#line 3343
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3344
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3346
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3348
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3352
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3351
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3350
            .lvl = 42,
#line 3349
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3353
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3358
    [TRAINER_PBL_AMBER_AND_KIM] =
    {
#line 3359
        .trainerName = _("STEVEN"),
#line 3360
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3361
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3363
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3365
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3369
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3368
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3367
            .lvl = 42,
#line 3366
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3370
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3375
    [TRAINER_PBL_JAN_AND_ERIN] =
    {
#line 3376
        .trainerName = _("STEVEN"),
#line 3377
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3378
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3380
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3382
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3386
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3385
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3384
            .lvl = 42,
#line 3383
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3387
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3392
    [TRAINER_PBL_STEVE] =
    {
#line 3393
        .trainerName = _("STEVEN"),
#line 3394
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3395
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3397
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3399
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3403
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3402
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3401
            .lvl = 42,
#line 3400
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3404
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3409
    [TRAINER_PBL_GOULD] =
    {
#line 3410
        .trainerName = _("STEVEN"),
#line 3411
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3412
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3414
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3416
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3420
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3419
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3418
            .lvl = 42,
#line 3417
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3421
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3426
    [TRAINER_PBL_MENDEL] =
    {
#line 3427
        .trainerName = _("STEVEN"),
#line 3428
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3429
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3431
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3433
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3437
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3435
            .lvl = 42,
#line 3434
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3438
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3443
    [TRAINER_PBL_DARWIN] =
    {
#line 3444
        .trainerName = _("STEVEN"),
#line 3445
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3446
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3448
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3450
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3454
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3453
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3452
            .lvl = 42,
#line 3451
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3455
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3460
    [TRAINER_PBL_JENNY_LEVIATHAN_11] =
    {
#line 3461
        .trainerName = _("STEVEN"),
#line 3462
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3463
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3465
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3467
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3471
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3470
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3469
            .lvl = 42,
#line 3468
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3472
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3477
    [TRAINER_PBL_JENNY_LEVIATHAN_11_BRUTAL] =
    {
#line 3478
        .trainerName = _("STEVEN"),
#line 3479
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3480
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3482
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3484
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3488
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3487
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3486
            .lvl = 42,
#line 3485
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3489
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3494
    [TRAINER_PBL_BART] =
    {
#line 3495
        .trainerName = _("STEVEN"),
#line 3496
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3497
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3499
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3501
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3505
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3504
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3503
            .lvl = 42,
#line 3502
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3506
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3511
    [TRAINER_PBL_NIGEL] =
    {
#line 3512
        .trainerName = _("STEVEN"),
#line 3513
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3514
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3516
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3518
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3522
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3521
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3520
            .lvl = 42,
#line 3519
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3523
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3528
    [TRAINER_PBL_LOLA] =
    {
#line 3529
        .trainerName = _("STEVEN"),
#line 3530
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3531
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3533
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3535
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3539
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3538
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3537
            .lvl = 42,
#line 3536
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3540
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3545
    [TRAINER_PBL_CHARLIE] =
    {
#line 3546
        .trainerName = _("STEVEN"),
#line 3547
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3548
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3550
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3552
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3556
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3555
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3554
            .lvl = 42,
#line 3553
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3557
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3562
    [TRAINER_PBL_RANDOLPH] =
    {
#line 3563
        .trainerName = _("STEVEN"),
#line 3564
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3565
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3567
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3569
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3573
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3572
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3571
            .lvl = 42,
#line 3570
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3574
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3579
    [TRAINER_PBL_TODD] =
    {
#line 3580
        .trainerName = _("STEVEN"),
#line 3581
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3582
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3584
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3586
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3590
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3589
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3588
            .lvl = 42,
#line 3587
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3591
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3596
    [TRAINER_PBL_RUSSELL] =
    {
#line 3597
        .trainerName = _("STEVEN"),
#line 3598
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3599
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3601
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3603
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3607
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3606
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3605
            .lvl = 42,
#line 3604
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3608
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3613
    [TRAINER_PBL_OTIS] =
    {
#line 3614
        .trainerName = _("STEVEN"),
#line 3615
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3616
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3618
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3620
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3624
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3623
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3622
            .lvl = 42,
#line 3621
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3625
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3630
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12] =
    {
#line 3631
        .trainerName = _("STEVEN"),
#line 3632
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3633
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3635
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3637
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3641
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3640
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3639
            .lvl = 42,
#line 3638
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3642
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3647
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12_BRUTAL] =
    {
#line 3648
        .trainerName = _("STEVEN"),
#line 3649
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3650
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3652
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3654
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3658
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3657
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3656
            .lvl = 42,
#line 3655
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3659
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3664
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13] =
    {
#line 3665
        .trainerName = _("STEVEN"),
#line 3666
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3667
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3669
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3671
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3675
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3674
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3673
            .lvl = 42,
#line 3672
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3676
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3681
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13_BRUTAL] =
    {
#line 3682
        .trainerName = _("STEVEN"),
#line 3683
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3684
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3686
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3688
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3692
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3691
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3690
            .lvl = 42,
#line 3689
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3693
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3698
    [TRAINER_PBL_IONA] =
    {
#line 3699
        .trainerName = _("STEVEN"),
#line 3700
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3701
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3703
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3705
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3709
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3708
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3707
            .lvl = 42,
#line 3706
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3710
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3715
    [TRAINER_PBL_BERKE] =
    {
#line 3716
        .trainerName = _("STEVEN"),
#line 3717
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3718
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3720
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3722
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3726
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3725
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3724
            .lvl = 42,
#line 3723
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3727
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3732
    [TRAINER_PBL_TANISHA] =
    {
#line 3733
        .trainerName = _("STEVEN"),
#line 3734
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3735
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3737
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3739
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3743
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3742
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3741
            .lvl = 42,
#line 3740
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3744
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3749
    [TRAINER_PBL_ROBERT] =
    {
#line 3750
        .trainerName = _("STEVEN"),
#line 3751
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3752
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3754
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3756
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3760
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3759
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3758
            .lvl = 42,
#line 3757
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3761
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3766
    [TRAINER_PBL_CHRIS] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3773
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3777
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3776
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3775
            .lvl = 42,
#line 3774
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3778
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3783
    [TRAINER_PBL_ANGUS] =
    {
#line 3784
        .trainerName = _("STEVEN"),
#line 3785
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3786
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3788
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3790
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3794
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3793
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3792
            .lvl = 42,
#line 3791
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3795
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3800
    [TRAINER_PBL_LILY_LEVIATHAN_14] =
    {
#line 3801
        .trainerName = _("STEVEN"),
#line 3802
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3803
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3805
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3807
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3811
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3810
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3809
            .lvl = 42,
#line 3808
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3812
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3817
    [TRAINER_PBL_LILY_LEVIATHAN_14_BRUTAL] =
    {
#line 3818
        .trainerName = _("STEVEN"),
#line 3819
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3820
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3822
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3824
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3828
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3827
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3826
            .lvl = 42,
#line 3825
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3829
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3834
    [TRAINER_PBL_AXLE] =
    {
#line 3835
        .trainerName = _("STEVEN"),
#line 3836
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3837
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3839
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3841
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3845
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3844
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3843
            .lvl = 42,
#line 3842
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3846
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3851
    [TRAINER_PBL_RAFAEL] =
    {
#line 3852
        .trainerName = _("STEVEN"),
#line 3853
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3854
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3856
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3858
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3862
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3861
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3860
            .lvl = 42,
#line 3859
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3863
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3868
    [TRAINER_PBL_GEORGINA] =
    {
#line 3869
        .trainerName = _("STEVEN"),
#line 3870
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3871
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3873
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3875
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3879
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3878
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3877
            .lvl = 42,
#line 3876
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3880
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3885
    [TRAINER_PBL_MIA_LEVIATHAN_15] =
    {
#line 3886
        .trainerName = _("STEVEN"),
#line 3887
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3888
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3890
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3892
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3896
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3895
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3894
            .lvl = 42,
#line 3893
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3897
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3902
    [TRAINER_PBL_MIA_LEVIATHAN_15_BRUTAL] =
    {
#line 3903
        .trainerName = _("STEVEN"),
#line 3904
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3905
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3907
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3909
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3913
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3912
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3911
            .lvl = 42,
#line 3910
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3914
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3919
    [TRAINER_PBL_DORIS] =
    {
#line 3920
        .trainerName = _("STEVEN"),
#line 3921
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3922
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3924
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3926
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3930
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3929
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3928
            .lvl = 42,
#line 3927
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3931
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3936
    [TRAINER_PBL_HOMER] =
    {
#line 3937
        .trainerName = _("STEVEN"),
#line 3938
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3939
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3941
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3943
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3947
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3946
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3945
            .lvl = 42,
#line 3944
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3948
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3953
    [TRAINER_PBL_JOHN] =
    {
#line 3954
        .trainerName = _("STEVEN"),
#line 3955
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3956
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3958
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3960
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3964
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3963
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3962
            .lvl = 42,
#line 3961
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3965
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3970
    [TRAINER_PBL_GLENN] =
    {
#line 3971
        .trainerName = _("STEVEN"),
#line 3972
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3973
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3975
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3977
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3981
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3980
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3979
            .lvl = 42,
#line 3978
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3982
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3987
    [TRAINER_PBL_JAY] =
    {
#line 3988
        .trainerName = _("STEVEN"),
#line 3989
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3990
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3992
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3994
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3998
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3997
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3996
            .lvl = 42,
#line 3995
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3999
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4004
    [TRAINER_PBL_TYLER] =
    {
#line 4005
        .trainerName = _("STEVEN"),
#line 4006
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4007
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4009
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4011
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4015
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4014
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4013
            .lvl = 42,
#line 4012
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4016
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4021
    [TRAINER_PBL_TERRENCE] =
    {
#line 4022
        .trainerName = _("STEVEN"),
#line 4023
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4024
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4026
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4028
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4032
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4031
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4030
            .lvl = 42,
#line 4029
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4033
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4038
    [TRAINER_PBL_MARTY] =
    {
#line 4039
        .trainerName = _("STEVEN"),
#line 4040
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4041
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4043
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4045
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4049
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4048
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4047
            .lvl = 42,
#line 4046
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4050
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4055
    [TRAINER_PBL_KARI] =
    {
#line 4056
        .trainerName = _("STEVEN"),
#line 4057
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4058
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4060
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4062
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4066
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4065
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4064
            .lvl = 42,
#line 4063
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4067
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4072
    [TRAINER_PBL_ABRAHAM] =
    {
#line 4073
        .trainerName = _("STEVEN"),
#line 4074
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4075
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4077
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4079
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4083
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4082
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4081
            .lvl = 42,
#line 4080
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4084
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4089
    [TRAINER_PBL_MELINDA] =
    {
#line 4090
        .trainerName = _("STEVEN"),
#line 4091
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4092
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4094
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4096
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4100
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4099
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4098
            .lvl = 42,
#line 4097
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4101
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4106
    [TRAINER_PBL_EMILIO] =
    {
#line 4107
        .trainerName = _("STEVEN"),
#line 4108
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4109
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4111
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4113
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4117
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4116
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4115
            .lvl = 42,
#line 4114
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4118
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4123
    [TRAINER_PBL_REX] =
    {
#line 4124
        .trainerName = _("STEVEN"),
#line 4125
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4126
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4128
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4130
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4134
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4133
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4132
            .lvl = 42,
#line 4131
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4135
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4140
    [TRAINER_PBL_LOUIS] =
    {
#line 4141
        .trainerName = _("STEVEN"),
#line 4142
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4143
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4145
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4147
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4151
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4150
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4149
            .lvl = 42,
#line 4148
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4152
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4157
    [TRAINER_PBL_LEROY] =
    {
#line 4158
        .trainerName = _("STEVEN"),
#line 4159
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4160
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4162
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4164
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4168
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4167
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4166
            .lvl = 42,
#line 4165
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4169
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4174
    [TRAINER_PBL_ELTON] =
    {
#line 4175
        .trainerName = _("STEVEN"),
#line 4176
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4177
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4179
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4181
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4185
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4184
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4183
            .lvl = 42,
#line 4182
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4186
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4191
    [TRAINER_PBL_WILLIE] =
    {
#line 4192
        .trainerName = _("STEVEN"),
#line 4193
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4194
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4196
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4198
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4202
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4201
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4200
            .lvl = 42,
#line 4199
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4203
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4208
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16] =
    {
#line 4209
        .trainerName = _("STEVEN"),
#line 4210
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4211
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4213
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4215
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4219
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4218
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4217
            .lvl = 42,
#line 4216
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4220
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4225
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16_BRUTAL] =
    {
#line 4226
        .trainerName = _("STEVEN"),
#line 4227
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4228
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4230
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4232
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4236
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4235
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4234
            .lvl = 42,
#line 4233
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4237
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4242
    [TRAINER_PBL_PIRATE_1] =
    {
#line 4243
        .trainerName = _("STEVEN"),
#line 4244
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4245
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4247
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4249
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4253
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4251
            .lvl = 42,
#line 4250
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4254
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4259
    [TRAINER_PBL_PIRATE_2] =
    {
#line 4260
        .trainerName = _("STEVEN"),
#line 4261
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4262
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4264
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4266
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4270
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4269
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4268
            .lvl = 42,
#line 4267
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4271
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4276
    [TRAINER_PBL_PIRATE_3] =
    {
#line 4277
        .trainerName = _("STEVEN"),
#line 4278
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4279
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4281
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4283
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4287
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4286
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4285
            .lvl = 42,
#line 4284
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4288
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4293
    [TRAINER_PBL_PIRATE_4] =
    {
#line 4294
        .trainerName = _("STEVEN"),
#line 4295
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4296
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4298
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4300
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4304
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4303
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4302
            .lvl = 42,
#line 4301
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4305
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4310
    [TRAINER_PBL_SHAWN] =
    {
#line 4311
        .trainerName = _("STEVEN"),
#line 4312
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4313
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4315
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4317
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4321
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4320
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4319
            .lvl = 42,
#line 4318
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4322
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4327
    [TRAINER_PBL_FERNANDO] =
    {
#line 4328
        .trainerName = _("STEVEN"),
#line 4329
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4330
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4332
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4334
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4338
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4337
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4336
            .lvl = 42,
#line 4335
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4339
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4344
    [TRAINER_PBL_KANE] =
    {
#line 4345
        .trainerName = _("STEVEN"),
#line 4346
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4347
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4349
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4351
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4355
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4354
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4353
            .lvl = 42,
#line 4352
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4356
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4361
    [TRAINER_PBL_KIRK] =
    {
#line 4362
        .trainerName = _("STEVEN"),
#line 4363
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4364
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4366
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4368
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4372
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4371
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4370
            .lvl = 42,
#line 4369
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4373
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4378
    [TRAINER_PBL_DALTON] =
    {
#line 4379
        .trainerName = _("STEVEN"),
#line 4380
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4381
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4383
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4385
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4389
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4388
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4387
            .lvl = 42,
#line 4386
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4390
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4395
    [TRAINER_PBL_LEE] =
    {
#line 4396
        .trainerName = _("STEVEN"),
#line 4397
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4398
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4400
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4402
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4406
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4405
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4404
            .lvl = 42,
#line 4403
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4407
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4412
    [TRAINER_PBL_BLANCHE] =
    {
#line 4413
        .trainerName = _("STEVEN"),
#line 4414
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4415
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4417
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4419
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4423
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4422
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4421
            .lvl = 42,
#line 4420
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4424
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4429
    [TRAINER_PBL_TROY] =
    {
#line 4430
        .trainerName = _("STEVEN"),
#line 4431
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4432
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4434
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4436
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4440
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4439
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4438
            .lvl = 42,
#line 4437
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4441
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4446
    [TRAINER_PBL_ABED] =
    {
#line 4447
        .trainerName = _("STEVEN"),
#line 4448
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4449
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4451
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4453
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4457
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4456
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4455
            .lvl = 42,
#line 4454
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4458
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4463
    [TRAINER_PBL_TROY_BRUTAL] =
    {
#line 4464
        .trainerName = _("STEVEN"),
#line 4465
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4466
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4468
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4470
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4474
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4473
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4472
            .lvl = 42,
#line 4471
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4475
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4480
    [TRAINER_PBL_ABED_BRUTAL] =
    {
#line 4481
        .trainerName = _("STEVEN"),
#line 4482
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4483
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4485
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4487
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4491
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4490
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4489
            .lvl = 42,
#line 4488
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4492
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4497
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17] =
    {
#line 4498
        .trainerName = _("STEVEN"),
#line 4499
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4500
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4502
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4504
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4508
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4507
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4506
            .lvl = 42,
#line 4505
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4509
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4514
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17_BRUTAL] =
    {
#line 4515
        .trainerName = _("STEVEN"),
#line 4516
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4517
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4519
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4521
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4525
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4524
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4523
            .lvl = 42,
#line 4522
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4526
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4531
    [TRAINER_PBL_ANITA] =
    {
#line 4532
        .trainerName = _("STEVEN"),
#line 4533
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4534
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4536
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4538
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4542
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4541
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4540
            .lvl = 42,
#line 4539
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4543
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4548
    [TRAINER_PBL_DESIREE] =
    {
#line 4549
        .trainerName = _("STEVEN"),
#line 4550
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4551
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4553
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4555
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4559
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4558
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4557
            .lvl = 42,
#line 4556
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4560
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4565
    [TRAINER_PBL_HOWARD] =
    {
#line 4566
        .trainerName = _("STEVEN"),
#line 4567
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4568
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4570
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4572
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4576
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4575
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4574
            .lvl = 42,
#line 4573
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4577
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4582
    [TRAINER_PBL_ELOISE] =
    {
#line 4583
        .trainerName = _("STEVEN"),
#line 4584
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4585
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4587
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4589
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4593
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4592
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4591
            .lvl = 42,
#line 4590
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4594
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4599
    [TRAINER_PBL_ALLY_AND_EMMY] =
    {
#line 4600
        .trainerName = _("STEVEN"),
#line 4601
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4602
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4604
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4606
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4610
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4609
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4608
            .lvl = 42,
#line 4607
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4611
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4616
    [TRAINER_PBL_AMIR] =
    {
#line 4617
        .trainerName = _("STEVEN"),
#line 4618
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4619
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4621
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4623
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4627
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4626
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4625
            .lvl = 42,
#line 4624
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4628
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4633
    [TRAINER_PBL_GETHIN] =
    {
#line 4634
        .trainerName = _("STEVEN"),
#line 4635
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4636
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4638
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4640
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4644
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4643
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4642
            .lvl = 42,
#line 4641
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4645
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4650
    [TRAINER_PBL_BERNARD] =
    {
#line 4651
        .trainerName = _("STEVEN"),
#line 4652
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4653
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4655
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4657
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4661
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4660
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4659
            .lvl = 42,
#line 4658
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4662
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4667
    [TRAINER_PBL_ELLIE] =
    {
#line 4668
        .trainerName = _("STEVEN"),
#line 4669
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4670
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4672
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4674
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4678
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4677
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4676
            .lvl = 42,
#line 4675
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4679
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4684
    [TRAINER_PBL_RUSTY] =
    {
#line 4685
        .trainerName = _("STEVEN"),
#line 4686
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4687
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4689
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4691
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4695
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4694
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4693
            .lvl = 42,
#line 4692
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4696
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4701
    [TRAINER_PBL_CODY] =
    {
#line 4702
        .trainerName = _("STEVEN"),
#line 4703
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4704
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4706
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4708
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4712
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4711
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4710
            .lvl = 42,
#line 4709
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4713
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4718
    [TRAINER_PBL_LEWIS] =
    {
#line 4719
        .trainerName = _("STEVEN"),
#line 4720
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4721
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4723
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4725
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4729
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4728
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4727
            .lvl = 42,
#line 4726
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4730
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4735
    [TRAINER_PBL_CORNELIUS] =
    {
#line 4736
        .trainerName = _("STEVEN"),
#line 4737
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4738
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4740
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4742
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4746
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4745
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4744
            .lvl = 42,
#line 4743
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4747
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4752
    [TRAINER_PBL_INEZ_AND_EMMA] =
    {
#line 4753
        .trainerName = _("STEVEN"),
#line 4754
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4755
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4757
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4759
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4763
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4762
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4761
            .lvl = 42,
#line 4760
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4764
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4769
    [TRAINER_PBL_HELEN] =
    {
#line 4770
        .trainerName = _("STEVEN"),
#line 4771
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4772
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4774
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4776
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4780
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4779
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4778
            .lvl = 42,
#line 4777
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4781
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4786
    [TRAINER_PBL_WESLEY] =
    {
#line 4787
        .trainerName = _("STEVEN"),
#line 4788
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4789
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4791
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4793
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4797
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4796
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4795
            .lvl = 42,
#line 4794
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4798
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4803
    [TRAINER_PBL_ALFREDO] =
    {
#line 4804
        .trainerName = _("STEVEN"),
#line 4805
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4806
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4808
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4810
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4814
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4813
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4812
            .lvl = 42,
#line 4811
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4815
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4820
    [TRAINER_PBL_IAN] =
    {
#line 4821
        .trainerName = _("STEVEN"),
#line 4822
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4823
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4825
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4827
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4831
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4830
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4829
            .lvl = 42,
#line 4828
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4832
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4837
    [TRAINER_PBL_AUDREY] =
    {
#line 4838
        .trainerName = _("STEVEN"),
#line 4839
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4840
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4842
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4844
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4848
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4847
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4846
            .lvl = 42,
#line 4845
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4849
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4854
    [TRAINER_PBL_LEVIATHAN13] =
    {
#line 4855
        .trainerName = _("STEVEN"),
#line 4856
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4857
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4859
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4861
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4865
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4864
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4863
            .lvl = 42,
#line 4862
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4866
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4871
    [TRAINER_PBL_EDGARDO] =
    {
#line 4872
        .trainerName = _("STEVEN"),
#line 4873
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4874
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4876
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4878
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4882
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4881
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4880
            .lvl = 42,
#line 4879
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4883
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4888
    [TRAINER_PBL_JEAN] =
    {
#line 4889
        .trainerName = _("STEVEN"),
#line 4890
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4891
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4893
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4895
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4899
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4898
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4897
            .lvl = 42,
#line 4896
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4900
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4905
    [TRAINER_PBL_ROSE] =
    {
#line 4906
        .trainerName = _("STEVEN"),
#line 4907
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4908
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4910
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4912
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4916
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4915
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4914
            .lvl = 42,
#line 4913
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4917
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4922
    [TRAINER_PBL_JENNIFER] =
    {
#line 4923
        .trainerName = _("STEVEN"),
#line 4924
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4925
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4927
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4929
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4933
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4932
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4931
            .lvl = 42,
#line 4930
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4934
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4939
    [TRAINER_PBL_MATTHEW] =
    {
#line 4940
        .trainerName = _("STEVEN"),
#line 4941
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4942
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4944
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4946
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4950
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4949
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4948
            .lvl = 42,
#line 4947
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4951
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4956
    [TRAINER_PBL_KERRY] =
    {
#line 4957
        .trainerName = _("STEVEN"),
#line 4958
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4959
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4961
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4963
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4967
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4966
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4965
            .lvl = 42,
#line 4964
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4968
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4973
    [TRAINER_PBL_ANNIE] =
    {
#line 4974
        .trainerName = _("STEVEN"),
#line 4975
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4976
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4978
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4980
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4984
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4983
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4982
            .lvl = 42,
#line 4981
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4985
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4990
    [TRAINER_PBL_CHRISTI] =
    {
#line 4991
        .trainerName = _("STEVEN"),
#line 4992
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4993
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4995
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4997
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5001
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5000
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4999
            .lvl = 42,
#line 4998
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5002
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5007
    [TRAINER_PBL_SPENCER] =
    {
#line 5008
        .trainerName = _("STEVEN"),
#line 5009
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5010
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5012
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5014
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5018
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5016
            .lvl = 42,
#line 5015
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5019
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5024
    [TRAINER_PBL_HAYWOOD] =
    {
#line 5025
        .trainerName = _("STEVEN"),
#line 5026
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5027
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5029
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5031
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5035
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5034
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5033
            .lvl = 42,
#line 5032
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5036
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5041
    [TRAINER_PBL_MONROE] =
    {
#line 5042
        .trainerName = _("STEVEN"),
#line 5043
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5044
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5046
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5048
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5052
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5051
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5050
            .lvl = 42,
#line 5049
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5053
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5058
    [TRAINER_PBL_DAVID] =
    {
#line 5059
        .trainerName = _("STEVEN"),
#line 5060
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5061
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5063
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5065
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5069
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5068
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5067
            .lvl = 42,
#line 5066
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5070
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5075
    [TRAINER_PBL_DOMINIK] =
    {
#line 5076
        .trainerName = _("STEVEN"),
#line 5077
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5078
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5080
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5082
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5086
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5085
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5084
            .lvl = 42,
#line 5083
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5087
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5092
    [TRAINER_PBL_DOUGLAS] =
    {
#line 5093
        .trainerName = _("STEVEN"),
#line 5094
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5095
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5097
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5099
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5103
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5102
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5101
            .lvl = 42,
#line 5100
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5104
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5109
    [TRAINER_PBL_NADINE] =
    {
#line 5110
        .trainerName = _("STEVEN"),
#line 5111
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5112
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5114
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5116
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5120
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5119
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5118
            .lvl = 42,
#line 5117
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5121
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5126
    [TRAINER_PBL_SANDY] =
    {
#line 5127
        .trainerName = _("STEVEN"),
#line 5128
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5129
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5131
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5133
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5137
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5136
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5135
            .lvl = 42,
#line 5134
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5138
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5143
    [TRAINER_PBL_SHELDON] =
    {
#line 5144
        .trainerName = _("STEVEN"),
#line 5145
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5146
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5148
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5150
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5154
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5153
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5152
            .lvl = 42,
#line 5151
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5155
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5160
    [TRAINER_PBL_LEVIATHAN14] =
    {
#line 5161
        .trainerName = _("STEVEN"),
#line 5162
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5163
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5165
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5167
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5171
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5170
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5169
            .lvl = 42,
#line 5168
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5172
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5177
    [TRAINER_PBL_LEVIATHAN12_BRUTAL] =
    {
#line 5178
        .trainerName = _("STEVEN"),
#line 5179
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5180
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5182
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5184
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5188
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5187
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5186
            .lvl = 42,
#line 5185
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5189
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5194
    [TRAINER_PBL_LEVIATHAN13_BRUTAL] =
    {
#line 5195
        .trainerName = _("STEVEN"),
#line 5196
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5197
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5199
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5201
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5205
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5204
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5203
            .lvl = 42,
#line 5202
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5206
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5211
    [TRAINER_PBL_LEVIATHAN14_BRUTAL] =
    {
#line 5212
        .trainerName = _("STEVEN"),
#line 5213
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5214
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5216
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5218
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5222
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5221
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5220
            .lvl = 42,
#line 5219
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5223
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5228
    [TRAINER_PBL_LEVIATHAN12] =
    {
#line 5229
        .trainerName = _("STEVEN"),
#line 5230
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5231
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5233
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5235
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5239
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5238
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5237
            .lvl = 42,
#line 5236
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5240
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
