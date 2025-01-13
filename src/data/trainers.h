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
        .aiFlags = AI_FLAG_SMART_TRAINER,
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
#line 1956
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
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
#line 1965
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
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
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1994
                MOVE_WATER_PULSE,
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
                MOVE_SURF,
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
        .aiFlags = AI_FLAG_SMART_TRAINER,
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
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2666
                MOVE_SLUDGE,
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
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2675
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_DEFOG,
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
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2684
                MOVE_VENOSHOCK,
                MOVE_VACUUM_WAVE,
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
        .aiFlags = AI_FLAG_SMART_TRAINER,
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
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2712
                MOVE_SLUDGE,
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
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2721
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_DEFOG,
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
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2730
                MOVE_VENOSHOCK,
                MOVE_VACUUM_WAVE,
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
            .lvl = 19,
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
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3024
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3022
            .ability = ABILITY_PUNK_ROCK,
#line 3023
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3025
                MOVE_CHATTER,
                MOVE_SING,
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
        .aiFlags = AI_FLAG_SMART_TRAINER,
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
        .aiFlags = AI_FLAG_SMART_TRAINER,
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
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3125
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3127
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3127
            .heldItem = ITEM_SITRUS_BERRY,
#line 3130
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3128
            .ability = ABILITY_PUNK_ROCK,
#line 3129
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3131
                MOVE_CHATTER,
                MOVE_ROUND,
                MOVE_THIEF,
                MOVE_ECHOED_VOICE,
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
        .aiFlags = AI_FLAG_SMART_TRAINER,
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
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3161
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3163
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3163
            .heldItem = ITEM_SITRUS_BERRY,
#line 3166
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3164
            .ability = ABILITY_GUTS,
#line 3165
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3167
                MOVE_RETALIATE,
                MOVE_REVENGE,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3172
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3172
            .heldItem = ITEM_SITRUS_BERRY,
#line 3175
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3173
            .ability = ABILITY_STURDY,
#line 3174
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3176
                MOVE_RETALIATE,
                MOVE_LOW_SWEEP,
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
                MOVE_CRUSH_CLAW,
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
        .partySize = 5,
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
            .lvl = 22,
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
            .species = SPECIES_BRAIXEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3596
            .heldItem = ITEM_CHARCOAL,
#line 3599
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3597
            .ability = ABILITY_MAGIC_GUARD,
#line 3598
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3600
                MOVE_INCINERATE,
                MOVE_PSYBEAM,
                MOVE_SHOCK_WAVE,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 3605
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3605
            .heldItem = ITEM_BLACK_GLASSES,
#line 3608
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3606
            .ability = ABILITY_OVERCOAT,
#line 3607
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3609
                MOVE_PLUCK,
                MOVE_FEINT_ATTACK,
                MOVE_ROOST,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3614
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3614
            .heldItem = ITEM_MIRACLE_SEED,
#line 3617
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3615
            .ability = ABILITY_SAND_RUSH,
#line 3616
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3618
                MOVE_MEGA_DRAIN,
                MOVE_PIN_MISSILE,
                MOVE_BOUNCE,
                MOVE_GROWTH,
            },
            },
            {
#line 3623
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3623
            .heldItem = ITEM_SITRUS_BERRY,
#line 3626
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3624
            .ability = ABILITY_SAND_RUSH,
#line 3625
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3627
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
                MOVE_AERIAL_ACE,
                MOVE_COVET,
            },
            },
        },
    },
#line 3632
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9_CHALLENGE] =
    {
#line 3633
        .trainerName = _("Adamina"),
#line 3634
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 3635
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 3636
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3638
        .doubleBattle = FALSE,
#line 3637
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3640
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 3639
        .randomLead = FALSE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3642
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3642
            .heldItem = ITEM_HARD_STONE,
#line 3645
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3643
            .ability = ABILITY_ANGER_SHELL,
#line 3644
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3646
                MOVE_ROCK_TOMB,
                MOVE_BULLDOZE,
                MOVE_KNOCK_OFF,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 3651
            .species = SPECIES_BRAIXEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3651
            .heldItem = ITEM_CHARCOAL,
#line 3654
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3652
            .ability = ABILITY_MAGIC_GUARD,
#line 3653
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3655
                MOVE_INCINERATE,
                MOVE_PSYBEAM,
                MOVE_SHOCK_WAVE,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 3660
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3660
            .heldItem = ITEM_BLACK_GLASSES,
#line 3663
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3661
            .ability = ABILITY_OVERCOAT,
#line 3662
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3664
                MOVE_PLUCK,
                MOVE_FEINT_ATTACK,
                MOVE_ROOST,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3669
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3669
            .heldItem = ITEM_MIRACLE_SEED,
#line 3672
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3670
            .ability = ABILITY_SAND_RUSH,
#line 3671
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3673
                MOVE_MEGA_DRAIN,
                MOVE_PIN_MISSILE,
                MOVE_BOUNCE,
                MOVE_GROWTH,
            },
            },
            {
#line 3678
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3678
            .heldItem = ITEM_SITRUS_BERRY,
#line 3681
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3679
            .ability = ABILITY_MAGIC_GUARD,
#line 3680
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3682
                MOVE_PSYBEAM,
                MOVE_AIR_CUTTER,
                MOVE_ANCIENT_POWER,
                MOVE_ROOST,
            },
            },
            {
#line 3687
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3687
            .heldItem = ITEM_SITRUS_BERRY,
#line 3690
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3688
            .ability = ABILITY_SAND_RUSH,
#line 3689
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3691
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
                MOVE_AERIAL_ACE,
                MOVE_COVET,
            },
            },
        },
    },
#line 3696
    [TRAINER_PBL_JEANETTE] =
    {
#line 3697
        .trainerName = _("Jeanette"),
#line 3698
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 3699
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 3700
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3702
        .doubleBattle = FALSE,
#line 3701
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3703
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3705
            .species = SPECIES_GASTLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3708
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3706
            .ability = ABILITY_LEVITATE,
#line 3707
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3709
                MOVE_CLEAR_SMOG,
                MOVE_HEX,
                MOVE_HAZE,
                MOVE_SCARY_FACE,
            },
            },
            {
#line 3714
            .species = SPECIES_FRILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3717
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3715
            .ability = ABILITY_CURSED_BODY,
#line 3716
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3718
                MOVE_BUBBLE_BEAM,
                MOVE_WHIRLPOOL,
                MOVE_HEX,
                MOVE_RECOVER,
            },
            },
            {
#line 3723
            .species = SPECIES_HONEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3724
            .ability = ABILITY_NO_GUARD,
#line 3725
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3727
                MOVE_SHADOW_SNEAK,
                MOVE_METAL_SOUND,
                MOVE_RETALIATE,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 3732
            .species = SPECIES_GREAVARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3735
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3733
            .ability = ABILITY_FLUFFY,
#line 3734
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3736
                MOVE_SHADOW_SNEAK,
                MOVE_YAWN,
                MOVE_HEADBUTT,
                MOVE_DIG,
            },
            },
        },
    },
#line 3741
    [TRAINER_PBL_EMMA_AND_LEO] =
    {
#line 3742
        .trainerName = _("Emma&Leo"),
#line 3743
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 3744
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 3745
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3747
        .doubleBattle = TRUE,
#line 3746
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3748
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3750
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3753
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3751
            .ability = ABILITY_PRANKSTER,
#line 3752
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3754
                MOVE_SHOCK_WAVE,
                MOVE_ENCORE,
                MOVE_MOONLIGHT,
                MOVE_SIGNAL_BEAM,
            },
            },
            {
#line 3759
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3760
            .ability = ABILITY_PRANKSTER,
#line 3761
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3763
                MOVE_COVET,
                MOVE_ENCORE,
                MOVE_MOONLIGHT,
                MOVE_SIGNAL_BEAM,
            },
            },
            {
#line 3768
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3771
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3769
            .ability = ABILITY_EARLY_BIRD,
#line 3770
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3772
                MOVE_FEINT_ATTACK,
                MOVE_DEFOG,
                MOVE_MEGA_DRAIN,
                MOVE_BEAT_UP,
            },
            },
            {
#line 3777
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3780
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3778
            .ability = ABILITY_RAIN_DISH,
#line 3779
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3781
                MOVE_BUBBLE_BEAM,
                MOVE_MEGA_DRAIN,
                MOVE_TICKLE,
                MOVE_SYNTHESIS,
            },
            },
        },
    },
#line 3786
    [TRAINER_PBL_JOEL] =
    {
#line 3787
        .trainerName = _("Joel"),
#line 3788
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3789
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3790
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3792
        .doubleBattle = FALSE,
#line 3791
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3793
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3795
            .species = SPECIES_BRONZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3796
            .ability = ABILITY_LEVITATE,
#line 3797
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3799
                MOVE_IMPRISON,
                MOVE_FEINT_ATTACK,
                MOVE_METAL_SOUND,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 3804
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3807
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3805
            .ability = ABILITY_IRON_FIST,
#line 3806
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3808
                MOVE_MAGNITUDE,
                MOVE_CURSE,
                MOVE_SHADOW_PUNCH,
                MOVE_STOMPING_TANTRUM,
            },
            },
            {
#line 3813
            .species = SPECIES_POLTCHAGEIST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3816
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3814
            .ability = ABILITY_HOSPITALITY,
#line 3815
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3817
                MOVE_LIFE_DEW,
                MOVE_MEGA_DRAIN,
                MOVE_HEX,
                MOVE_FOUL_PLAY,
            },
            },
            {
#line 3822
            .species = SPECIES_INKAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3825
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3823
            .ability = ABILITY_CONTRARY,
#line 3824
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3826
                MOVE_SLASH,
                MOVE_PLUCK,
                MOVE_PSYBEAM,
                MOVE_SWITCHEROO,
            },
            },
        },
    },
#line 3831
    [TRAINER_PBL_MARION] =
    {
#line 3832
        .trainerName = _("Marion"),
#line 3833
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3834
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3835
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3837
        .doubleBattle = FALSE,
#line 3836
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3838
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3840
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3843
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3841
            .ability = ABILITY_LEVITATE,
#line 3842
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3844
                MOVE_NIGHT_SHADE,
                MOVE_CONFUSE_RAY,
                MOVE_CURSE,
                MOVE_HEX,
            },
            },
            {
#line 3849
            .species = SPECIES_SINISTEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3852
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3850
            .ability = ABILITY_CURSED_BODY,
#line 3851
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3853
                MOVE_NIGHT_SHADE,
                MOVE_SUCKER_PUNCH,
                MOVE_HEX,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 3858
            .species = SPECIES_ELGYEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3861
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3859
            .ability = ABILITY_SYNCHRONIZE,
#line 3860
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3862
                MOVE_PSYBEAM,
                MOVE_TELEPORT,
                MOVE_COSMIC_POWER,
                MOVE_RECOVER,
            },
            },
            {
#line 3867
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3870
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3868
            .ability = ABILITY_FLAME_BODY,
#line 3869
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3871
                MOVE_IMPRISON,
                MOVE_HEX,
                MOVE_FLAME_BURST,
                MOVE_WILL_O_WISP,
            },
            },
        },
    },
#line 3876
    [TRAINER_PBL_REGINA] =
    {
#line 3877
        .trainerName = _("Regina"),
#line 3878
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 3879
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 3880
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3882
        .doubleBattle = FALSE,
#line 3881
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3883
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3885
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3888
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3886
            .ability = ABILITY_LEVITATE,
#line 3887
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3889
                MOVE_CURSE,
                MOVE_HEX,
                MOVE_PSYBEAM,
                MOVE_OMINOUS_WIND,
            },
            },
            {
#line 3894
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3897
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3895
            .ability = ABILITY_CURSED_BODY,
#line 3896
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3898
                MOVE_SHADOW_SNEAK,
                MOVE_SNATCH,
                MOVE_OMINOUS_WIND,
                MOVE_TRICK,
            },
            },
            {
#line 3903
            .species = SPECIES_GIMMIGHOUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3906
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3904
            .ability = ABILITY_RATTLED,
#line 3905
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3907
                MOVE_ASTONISH,
                MOVE_TACKLE,
            },
            },
            {
#line 3910
            .species = SPECIES_BRAMBLIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3913
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3911
            .ability = ABILITY_WIND_RIDER,
#line 3912
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3914
                MOVE_LEECH_SEED,
                MOVE_SHADOW_SNEAK,
                MOVE_MEGA_DRAIN,
                MOVE_HEX,
            },
            },
        },
    },
#line 3919
    [TRAINER_PBL_NEWTON_LEVIATHAN_10] =
    {
#line 3920
        .trainerName = _("Newton"),
#line 3921
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 3922
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .encounterMusic_gender =
#line 3923
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3925
        .doubleBattle = TRUE,
#line 3924
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3927
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 3926
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3929
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3932
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3930
            .ability = ABILITY_FRIEND_GUARD,
#line 3931
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3933
                MOVE_GRAVITY,
                MOVE_DRAINING_KISS,
                MOVE_MOONLIGHT,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3938
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3941
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3939
            .ability = ABILITY_INTIMIDATE,
#line 3940
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3942
                MOVE_STOMP,
                MOVE_DOUBLE_KICK,
                MOVE_HYPNOSIS,
                MOVE_PSYSHIELD_BASH,
            },
            },
            {
#line 3947
            .species = SPECIES_STONJOURNER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3950
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3948
            .ability = ABILITY_POWER_SPOT,
#line 3949
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3951
                MOVE_GRAVITY,
                MOVE_ROCK_TOMB,
                MOVE_WIDE_GUARD,
                MOVE_MEGA_KICK,
            },
            },
            {
#line 3956
            .species = SPECIES_FLAPPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3956
            .heldItem = ITEM_SITRUS_BERRY,
#line 3959
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3957
            .ability = ABILITY_HUSTLE,
#line 3958
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3960
                MOVE_GRAV_APPLE,
                MOVE_ACROBATICS,
                MOVE_ROOST,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 3965
    [TRAINER_PBL_NEWTON_LEVIATHAN_10_CHALLENGE] =
    {
#line 3966
        .trainerName = _("Newton"),
#line 3967
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 3968
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .encounterMusic_gender =
#line 3969
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3971
        .doubleBattle = TRUE,
#line 3970
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3973
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 3972
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3975
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3975
            .heldItem = ITEM_EVIOLITE,
#line 3978
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3976
            .ability = ABILITY_FRIEND_GUARD,
#line 3977
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3979
                MOVE_GRAVITY,
                MOVE_DRAINING_KISS,
                MOVE_MOONLIGHT,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3984
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3984
            .heldItem = ITEM_EVIOLITE,
#line 3987
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3985
            .ability = ABILITY_INTIMIDATE,
#line 3986
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3988
                MOVE_STOMP,
                MOVE_DOUBLE_KICK,
                MOVE_HYPNOSIS,
                MOVE_PSYSHIELD_BASH,
            },
            },
            {
#line 3993
            .species = SPECIES_STONJOURNER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3993
            .heldItem = ITEM_SITRUS_BERRY,
#line 3996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3994
            .ability = ABILITY_POWER_SPOT,
#line 3995
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3997
                MOVE_GRAVITY,
                MOVE_ROCK_TOMB,
                MOVE_WIDE_GUARD,
                MOVE_MEGA_KICK,
            },
            },
            {
#line 4002
            .species = SPECIES_FLAPPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4002
            .heldItem = ITEM_SITRUS_BERRY,
#line 4006
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4003
            .ability = ABILITY_HUSTLE,
#line 4005
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 4004
            .teraType = TYPE_DRAGON,
            .moves = {
#line 4007
                MOVE_GRAV_APPLE,
                MOVE_ACROBATICS,
                MOVE_ROOST,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 4012
    [TRAINER_PBL_ESSENCE] =
    {
#line 4013
        .trainerName = _("Essence"),
#line 4014
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 4015
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 4016
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4018
        .doubleBattle = FALSE,
#line 4017
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4019
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4021
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4023
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4022
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4025
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4027
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4026
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4029
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4031
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4030
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4033
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4035
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4034
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4037
    [TRAINER_PBL_DOLORES] =
    {
#line 4038
        .trainerName = _("Dolores"),
#line 4039
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 4040
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 4041
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4043
        .doubleBattle = FALSE,
#line 4042
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4044
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4046
            .species = SPECIES_SNOVER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4048
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4047
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4050
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4052
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4051
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4054
            .species = SPECIES_CUBCHOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4056
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4055
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4058
            .species = SPECIES_SNORUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4060
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4059
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4062
    [TRAINER_PBL_GENIE] =
    {
#line 4063
        .trainerName = _("Genie"),
#line 4064
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4065
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 4066
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4068
        .doubleBattle = FALSE,
#line 4067
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4069
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4071
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4073
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4072
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4075
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4077
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4076
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4079
            .species = SPECIES_PAWMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4081
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4080
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4083
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4085
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4084
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4087
    [TRAINER_PBL_ABIGAIL] =
    {
#line 4088
        .trainerName = _("Abigail"),
#line 4089
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4090
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4091
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4093
        .doubleBattle = FALSE,
#line 4092
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4094
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4096
            .species = SPECIES_GLIMMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4098
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4097
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4100
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4102
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4101
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4104
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4106
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4105
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4108
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4110
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4109
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4112
    [TRAINER_PBL_FEDERICO] =
    {
#line 4113
        .trainerName = _("Federico"),
#line 4114
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4115
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4116
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4118
        .doubleBattle = FALSE,
#line 4117
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4119
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4121
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4123
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4122
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4125
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4127
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4126
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4129
            .species = SPECIES_MAREANIE,
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
            .species = SPECIES_MANTYKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4135
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4134
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4138
    [TRAINER_PBL_ROMULUS] =
    {
#line 4139
        .trainerName = _("Romulus"),
#line 4140
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 4141
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 4142
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4144
        .doubleBattle = FALSE,
#line 4143
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4145
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4147
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4149
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4148
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4151
            .species = SPECIES_SHELLDER,
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
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4157
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4156
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4160
    [TRAINER_PBL_JULIE] =
    {
#line 4161
        .trainerName = _("Julie"),
#line 4162
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 4163
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 4164
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4166
        .doubleBattle = FALSE,
#line 4165
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4167
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4169
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4171
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4170
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4173
            .species = SPECIES_CLAUNCHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4175
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4174
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4177
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4178
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4181
    [TRAINER_PBL_HILDA] =
    {
#line 4182
        .trainerName = _("Hilda"),
#line 4183
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4184
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4185
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4187
        .doubleBattle = FALSE,
#line 4186
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4188
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4190
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4192
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4191
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4194
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4196
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4195
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4198
            .species = SPECIES_SKRELP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4200
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4199
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4202
            .species = SPECIES_FINIZEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4204
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4203
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4206
    [TRAINER_PBL_TREVOR] =
    {
#line 4207
        .trainerName = _("Trevor"),
#line 4208
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 4209
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 4210
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4212
        .doubleBattle = FALSE,
#line 4211
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4213
        .randomLead = TRUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4215
            .species = SPECIES_TOGEPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4217
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4216
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4219
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4221
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4220
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4223
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4225
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4224
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4227
            .species = SPECIES_SMOOCHUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4229
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4228
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4231
            .species = SPECIES_ELEKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4233
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4232
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4235
            .species = SPECIES_MAGBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4237
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4236
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4239
    [TRAINER_PBL_RUFUS] =
    {
#line 4240
        .trainerName = _("Rufus"),
#line 4241
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 4242
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 4243
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4245
        .doubleBattle = FALSE,
#line 4244
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4246
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4248
            .species = SPECIES_FRIGIBAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4250
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4249
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4252
            .species = SPECIES_DREEPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4254
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4253
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4256
            .species = SPECIES_GOOMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4259
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4257
            .ability = ABILITY_SAP_SIPPER,
#line 4258
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4260
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_LIFE_DEW,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 4265
            .species = SPECIES_ZORUA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4267
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4266
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4269
    [TRAINER_PBL_KINLEY] =
    {
#line 4270
        .trainerName = _("Kinley"),
#line 4271
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 4272
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 4273
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 4275
        .doubleBattle = FALSE,
#line 4274
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4276
        .randomLead = TRUE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4278
            .species = SPECIES_HERDIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4280
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4279
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4282
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4284
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4283
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4286
            .species = SPECIES_CROCONAW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4288
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4287
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4290
            .species = SPECIES_RABOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4292
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4291
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4294
            .species = SPECIES_FLORAGATO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4296
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4295
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4298
    [TRAINER_PBL_REID] =
    {
#line 4299
        .trainerName = _("Reid"),
#line 4300
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 4301
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 4302
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4304
        .doubleBattle = FALSE,
#line 4303
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4305
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4307
            .species = SPECIES_DOTTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4309
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4308
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4311
            .species = SPECIES_WHIRLIPEDE,
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
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4317
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4316
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4319
    [TRAINER_PBL_DECLAN_LEVIATHAN_11] =
    {
#line 4320
        .trainerName = _("Declan"),
#line 4321
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 4322
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 4323
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4325
        .doubleBattle = FALSE,
#line 4324
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4327
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 4326
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4329
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4331
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4330
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4333
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4335
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4334
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4337
            .species = SPECIES_RABSCA,
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
            .species = SPECIES_LURANTIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4343
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4342
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4345
    [TRAINER_PBL_DECLAN_LEVIATHAN_11_CHALLENGE] =
    {
#line 4346
        .trainerName = _("Declan"),
#line 4347
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 4348
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 4349
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4351
        .doubleBattle = FALSE,
#line 4350
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 4353
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 4352
        .randomLead = FALSE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4355
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4357
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4356
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4359
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4361
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4360
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4363
            .species = SPECIES_RABSCA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4365
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4364
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4367
            .species = SPECIES_LURANTIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4369
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4368
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4371
            .species = SPECIES_LOKIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4373
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4372
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4375
    [TRAINER_PBL_VIOLET] =
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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4382
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4384
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4383
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4386
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4388
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4387
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4390
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4392
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4391
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4394
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4396
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4395
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4398
    [TRAINER_PBL_WANDA] =
    {
#line 4399
        .trainerName = _("STEVEN"),
#line 4400
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4401
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4403
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4405
            .species = SPECIES_TRANQUILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4407
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4406
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4409
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4411
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4410
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4413
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4415
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4414
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4417
            .species = SPECIES_WEEPINBELL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4418
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4421
    [TRAINER_PBL_AMBER_AND_KIM] =
    {
#line 4422
        .trainerName = _("STEVEN"),
#line 4423
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4424
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4426
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4428
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4430
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4429
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4432
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4434
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4433
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4436
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4438
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4437
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4440
            .species = SPECIES_DOLLIV,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4442
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4441
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4444
    [TRAINER_PBL_JAN_AND_ERIN] =
    {
#line 4445
        .trainerName = _("STEVEN"),
#line 4446
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4447
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4449
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4451
            .species = SPECIES_FURFROU_STAR_TRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4453
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4452
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4455
            .species = SPECIES_FURFROU_HEART_TRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4457
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4456
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4459
            .species = SPECIES_FURFROU_DANDY_TRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4461
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4460
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4463
            .species = SPECIES_FURFROU_DEBUTANTE_TRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4465
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4464
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4467
    [TRAINER_PBL_STEVE] =
    {
#line 4468
        .trainerName = _("STEVEN"),
#line 4469
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4470
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4472
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4474
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4476
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4475
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4478
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4480
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4479
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4482
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4483
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4486
            .species = SPECIES_NIDORINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4488
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4487
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4490
    [TRAINER_PBL_GOULD] =
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
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4497
            .species = SPECIES_CRANIDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4499
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4498
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4501
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4503
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4502
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4505
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4507
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4506
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4509
            .species = SPECIES_ANORITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4511
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4510
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4513
            .species = SPECIES_ARCHEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4515
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4514
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4517
    [TRAINER_PBL_MENDEL] =
    {
#line 4518
        .trainerName = _("STEVEN"),
#line 4519
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4520
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4522
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4524
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4525
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4528
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4530
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4529
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4532
            .species = SPECIES_TYRUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4533
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4536
            .species = SPECIES_AMAURA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4537
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4540
            .species = SPECIES_TIRTOUGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4542
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4541
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4544
    [TRAINER_PBL_DARWIN] =
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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4551
            .species = SPECIES_COMFEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4553
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4552
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4555
            .species = SPECIES_KOMALA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4557
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4556
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4559
            .species = SPECIES_FLOETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4561
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4560
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4563
            .species = SPECIES_CHARJABUG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4565
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4564
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4567
    [TRAINER_PBL_JENNY_LEVIATHAN_11] =
    {
#line 4568
        .trainerName = _("STEVEN"),
#line 4569
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4570
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4572
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4574
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4578
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4577
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4576
            .lvl = 42,
#line 4575
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4579
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4584
    [TRAINER_PBL_JENNY_LEVIATHAN_11_CHALLENGE] =
    {
#line 4585
        .trainerName = _("STEVEN"),
#line 4586
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4587
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4589
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4591
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4595
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4594
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4593
            .lvl = 42,
#line 4592
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4596
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4601
    [TRAINER_PBL_BART] =
    {
#line 4602
        .trainerName = _("STEVEN"),
#line 4603
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4604
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4606
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4608
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4609
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4612
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4614
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4613
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4616
            .species = SPECIES_TOGEDEMARU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4618
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4617
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4620
            .species = SPECIES_WISHIWASHI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4622
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4621
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4624
    [TRAINER_PBL_NIGEL] =
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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4631
            .species = SPECIES_CARKOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4633
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4632
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4635
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4636
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4639
            .species = SPECIES_CARBINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4641
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4640
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4643
            .species = SPECIES_BOLDORE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4645
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4644
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4647
    [TRAINER_PBL_LOLA] =
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
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4654
            .species = SPECIES_CORVISQUIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4656
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4655
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4658
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4660
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4659
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4662
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4664
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4663
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4666
            .species = SPECIES_SERVINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4668
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4667
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4670
            .species = SPECIES_MONFERNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4672
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4671
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4674
    [TRAINER_PBL_CHARLIE] =
    {
#line 4675
        .trainerName = _("STEVEN"),
#line 4676
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4677
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4679
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4681
            .species = SPECIES_PIDGEOTTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4683
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4682
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4685
            .species = SPECIES_PIGNITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4687
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4686
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4689
            .species = SPECIES_QUAXWELL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4691
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4690
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4693
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4695
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4694
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4697
            .species = SPECIES_GROTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4699
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4698
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4701
    [TRAINER_PBL_RANDOLPH] =
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
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4708
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4710
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4709
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4712
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4713
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4716
            .species = SPECIES_QUILAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4718
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4717
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4720
            .species = SPECIES_BRIONNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4722
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4721
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4724
            .species = SPECIES_IVYSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4725
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4728
    [TRAINER_PBL_TODD] =
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
    [TRAINER_PBL_RUSSELL] =
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
    [TRAINER_PBL_OTIS] =
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
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12] =
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
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12_CHALLENGE] =
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
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13] =
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
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13_CHALLENGE] =
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
    [TRAINER_PBL_IONA] =
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
    [TRAINER_PBL_BERKE] =
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
    [TRAINER_PBL_TANISHA] =
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
    [TRAINER_PBL_ROBERT] =
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
    [TRAINER_PBL_CHRIS] =
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
    [TRAINER_PBL_ANGUS] =
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
    [TRAINER_PBL_LILY_LEVIATHAN_14] =
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
    [TRAINER_PBL_LILY_LEVIATHAN_14_CHALLENGE] =
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
    [TRAINER_PBL_AXLE] =
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
    [TRAINER_PBL_RAFAEL] =
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
    [TRAINER_PBL_GEORGINA] =
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
#line 5034
    [TRAINER_PBL_MIA_LEVIATHAN_15] =
    {
#line 5035
        .trainerName = _("STEVEN"),
#line 5036
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5037
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5039
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5041
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5045
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5044
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5043
            .lvl = 42,
#line 5042
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5046
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5051
    [TRAINER_PBL_MIA_LEVIATHAN_15_CHALLENGE] =
    {
#line 5052
        .trainerName = _("STEVEN"),
#line 5053
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5054
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5056
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5058
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5062
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5061
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5060
            .lvl = 42,
#line 5059
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5063
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5068
    [TRAINER_PBL_DORIS] =
    {
#line 5069
        .trainerName = _("STEVEN"),
#line 5070
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5071
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5073
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5075
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5079
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5078
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5077
            .lvl = 42,
#line 5076
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5080
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5085
    [TRAINER_PBL_HOMER] =
    {
#line 5086
        .trainerName = _("STEVEN"),
#line 5087
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5088
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5090
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5092
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5096
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5095
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5094
            .lvl = 42,
#line 5093
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5097
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5102
    [TRAINER_PBL_JOHN] =
    {
#line 5103
        .trainerName = _("STEVEN"),
#line 5104
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5105
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5107
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5109
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5113
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5112
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5111
            .lvl = 42,
#line 5110
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5114
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5119
    [TRAINER_PBL_GLENN] =
    {
#line 5120
        .trainerName = _("STEVEN"),
#line 5121
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5122
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5124
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5126
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5130
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5129
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5128
            .lvl = 42,
#line 5127
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5131
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5136
    [TRAINER_PBL_JAY] =
    {
#line 5137
        .trainerName = _("STEVEN"),
#line 5138
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5139
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5141
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5143
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5147
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5146
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5145
            .lvl = 42,
#line 5144
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5148
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5153
    [TRAINER_PBL_TYLER] =
    {
#line 5154
        .trainerName = _("STEVEN"),
#line 5155
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5156
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5158
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5160
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5164
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5163
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5162
            .lvl = 42,
#line 5161
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5165
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5170
    [TRAINER_PBL_TERRENCE] =
    {
#line 5171
        .trainerName = _("STEVEN"),
#line 5172
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5173
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5175
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5177
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5181
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5180
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5179
            .lvl = 42,
#line 5178
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5182
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5187
    [TRAINER_PBL_MARTY] =
    {
#line 5188
        .trainerName = _("STEVEN"),
#line 5189
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5190
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5192
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5194
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5198
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5197
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5196
            .lvl = 42,
#line 5195
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5199
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5204
    [TRAINER_PBL_KARI] =
    {
#line 5205
        .trainerName = _("STEVEN"),
#line 5206
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5207
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5209
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5211
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5215
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5214
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5213
            .lvl = 42,
#line 5212
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5216
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5221
    [TRAINER_PBL_ABRAHAM] =
    {
#line 5222
        .trainerName = _("STEVEN"),
#line 5223
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5224
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5226
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5228
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5232
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5231
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5230
            .lvl = 42,
#line 5229
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5233
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5238
    [TRAINER_PBL_MELINDA] =
    {
#line 5239
        .trainerName = _("STEVEN"),
#line 5240
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5241
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5243
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5245
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5249
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5248
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5247
            .lvl = 42,
#line 5246
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5250
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5255
    [TRAINER_PBL_EMILIO] =
    {
#line 5256
        .trainerName = _("STEVEN"),
#line 5257
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5258
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5260
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5262
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5266
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5265
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5264
            .lvl = 42,
#line 5263
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5267
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5272
    [TRAINER_PBL_REX] =
    {
#line 5273
        .trainerName = _("STEVEN"),
#line 5274
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5275
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5277
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5279
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5283
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5282
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5281
            .lvl = 42,
#line 5280
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5284
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5289
    [TRAINER_PBL_LOUIS] =
    {
#line 5290
        .trainerName = _("STEVEN"),
#line 5291
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5292
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5294
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5296
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5300
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5299
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5298
            .lvl = 42,
#line 5297
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5301
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5306
    [TRAINER_PBL_LEROY] =
    {
#line 5307
        .trainerName = _("STEVEN"),
#line 5308
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5309
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5311
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5313
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5317
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5316
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5315
            .lvl = 42,
#line 5314
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5318
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5323
    [TRAINER_PBL_ELTON] =
    {
#line 5324
        .trainerName = _("STEVEN"),
#line 5325
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5326
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5328
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5330
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5334
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5333
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5332
            .lvl = 42,
#line 5331
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5335
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5340
    [TRAINER_PBL_WILLIE] =
    {
#line 5341
        .trainerName = _("STEVEN"),
#line 5342
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5343
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5345
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5347
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5351
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5350
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5349
            .lvl = 42,
#line 5348
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5352
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5357
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16] =
    {
#line 5358
        .trainerName = _("STEVEN"),
#line 5359
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5360
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5362
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5364
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5368
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5367
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5366
            .lvl = 42,
#line 5365
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5369
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5374
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16_CHALLENGE] =
    {
#line 5375
        .trainerName = _("STEVEN"),
#line 5376
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5377
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5379
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5381
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5385
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5384
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5383
            .lvl = 42,
#line 5382
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5386
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5391
    [TRAINER_PBL_PIRATE_1] =
    {
#line 5392
        .trainerName = _("STEVEN"),
#line 5393
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5394
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5396
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5398
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5402
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5401
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5400
            .lvl = 42,
#line 5399
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5403
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5408
    [TRAINER_PBL_PIRATE_2] =
    {
#line 5409
        .trainerName = _("STEVEN"),
#line 5410
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5411
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5413
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5415
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5419
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5418
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5417
            .lvl = 42,
#line 5416
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5420
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5425
    [TRAINER_PBL_PIRATE_3] =
    {
#line 5426
        .trainerName = _("STEVEN"),
#line 5427
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5428
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5430
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5432
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5436
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5435
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5434
            .lvl = 42,
#line 5433
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5437
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5442
    [TRAINER_PBL_PIRATE_4] =
    {
#line 5443
        .trainerName = _("STEVEN"),
#line 5444
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5445
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5447
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5449
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5453
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5451
            .lvl = 42,
#line 5450
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5454
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5459
    [TRAINER_PBL_SHAWN] =
    {
#line 5460
        .trainerName = _("STEVEN"),
#line 5461
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5462
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5464
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5466
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5470
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5469
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5468
            .lvl = 42,
#line 5467
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5471
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5476
    [TRAINER_PBL_FERNANDO] =
    {
#line 5477
        .trainerName = _("STEVEN"),
#line 5478
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5479
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5481
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5483
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5487
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5486
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5485
            .lvl = 42,
#line 5484
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5488
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5493
    [TRAINER_PBL_KANE] =
    {
#line 5494
        .trainerName = _("STEVEN"),
#line 5495
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5496
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5498
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5500
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5504
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5503
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5502
            .lvl = 42,
#line 5501
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5505
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5510
    [TRAINER_PBL_KIRK] =
    {
#line 5511
        .trainerName = _("STEVEN"),
#line 5512
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5513
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5515
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5517
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5521
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5520
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5519
            .lvl = 42,
#line 5518
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5522
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5527
    [TRAINER_PBL_DALTON] =
    {
#line 5528
        .trainerName = _("STEVEN"),
#line 5529
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5530
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5532
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5534
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5538
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5537
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5536
            .lvl = 42,
#line 5535
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5539
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5544
    [TRAINER_PBL_LEE] =
    {
#line 5545
        .trainerName = _("STEVEN"),
#line 5546
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5547
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5549
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5551
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5555
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5554
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5553
            .lvl = 42,
#line 5552
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5556
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5561
    [TRAINER_PBL_BLANCHE] =
    {
#line 5562
        .trainerName = _("STEVEN"),
#line 5563
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5564
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5566
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5568
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5572
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5571
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5570
            .lvl = 42,
#line 5569
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5573
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5578
    [TRAINER_PBL_TROY] =
    {
#line 5579
        .trainerName = _("STEVEN"),
#line 5580
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5581
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5583
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5585
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5589
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5588
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5587
            .lvl = 42,
#line 5586
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5590
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5595
    [TRAINER_PBL_ABED] =
    {
#line 5596
        .trainerName = _("STEVEN"),
#line 5597
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5598
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5600
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5602
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5606
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5605
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5604
            .lvl = 42,
#line 5603
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5607
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5612
    [TRAINER_PBL_TROY_BRUTAL] =
    {
#line 5613
        .trainerName = _("STEVEN"),
#line 5614
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5615
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5617
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5619
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5623
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5622
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5621
            .lvl = 42,
#line 5620
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5624
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5629
    [TRAINER_PBL_ABED_BRUTAL] =
    {
#line 5630
        .trainerName = _("STEVEN"),
#line 5631
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5632
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5634
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5636
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5640
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5639
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5638
            .lvl = 42,
#line 5637
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5641
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5646
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17] =
    {
#line 5647
        .trainerName = _("STEVEN"),
#line 5648
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5649
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5651
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5653
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5657
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5656
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5655
            .lvl = 42,
#line 5654
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5658
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5663
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17_CHALLENGE] =
    {
#line 5664
        .trainerName = _("STEVEN"),
#line 5665
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5666
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5668
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5670
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5674
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5673
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5672
            .lvl = 42,
#line 5671
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5675
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5680
    [TRAINER_PBL_ANITA] =
    {
#line 5681
        .trainerName = _("STEVEN"),
#line 5682
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5683
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5685
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5687
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5691
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5690
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5689
            .lvl = 42,
#line 5688
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5692
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5697
    [TRAINER_PBL_DESIREE] =
    {
#line 5698
        .trainerName = _("STEVEN"),
#line 5699
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5700
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5702
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5704
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5708
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5707
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5706
            .lvl = 42,
#line 5705
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5709
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5714
    [TRAINER_PBL_HOWARD] =
    {
#line 5715
        .trainerName = _("STEVEN"),
#line 5716
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5717
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5719
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5721
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5725
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5724
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5723
            .lvl = 42,
#line 5722
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5726
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5731
    [TRAINER_PBL_ELOISE] =
    {
#line 5732
        .trainerName = _("STEVEN"),
#line 5733
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5734
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5736
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5738
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5742
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5741
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5740
            .lvl = 42,
#line 5739
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5743
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5748
    [TRAINER_PBL_ALLY_AND_EMMY] =
    {
#line 5749
        .trainerName = _("STEVEN"),
#line 5750
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5751
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5753
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5755
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5759
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5758
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5757
            .lvl = 42,
#line 5756
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5760
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5765
    [TRAINER_PBL_AMIR] =
    {
#line 5766
        .trainerName = _("STEVEN"),
#line 5767
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5768
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5770
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5772
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5776
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5775
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5774
            .lvl = 42,
#line 5773
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5777
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5782
    [TRAINER_PBL_GETHIN] =
    {
#line 5783
        .trainerName = _("STEVEN"),
#line 5784
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5785
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5787
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5789
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5793
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5792
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5791
            .lvl = 42,
#line 5790
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5794
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5799
    [TRAINER_PBL_BERNARD] =
    {
#line 5800
        .trainerName = _("STEVEN"),
#line 5801
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5802
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5804
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5806
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5810
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5809
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5808
            .lvl = 42,
#line 5807
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5811
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5816
    [TRAINER_PBL_ELLIE] =
    {
#line 5817
        .trainerName = _("STEVEN"),
#line 5818
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5819
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5821
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5823
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5827
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5826
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5825
            .lvl = 42,
#line 5824
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5828
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5833
    [TRAINER_PBL_RUSTY] =
    {
#line 5834
        .trainerName = _("STEVEN"),
#line 5835
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5836
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5838
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5840
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5844
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5843
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5842
            .lvl = 42,
#line 5841
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5845
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5850
    [TRAINER_PBL_CODY] =
    {
#line 5851
        .trainerName = _("STEVEN"),
#line 5852
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5853
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5855
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5857
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5861
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5860
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5859
            .lvl = 42,
#line 5858
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5862
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5867
    [TRAINER_PBL_LEWIS] =
    {
#line 5868
        .trainerName = _("STEVEN"),
#line 5869
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5870
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5872
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5874
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5878
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5877
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5876
            .lvl = 42,
#line 5875
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5879
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5884
    [TRAINER_PBL_CORNELIUS] =
    {
#line 5885
        .trainerName = _("STEVEN"),
#line 5886
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5887
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5889
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5891
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5895
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5894
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5893
            .lvl = 42,
#line 5892
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5896
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5901
    [TRAINER_PBL_INEZ_AND_EMMA] =
    {
#line 5902
        .trainerName = _("STEVEN"),
#line 5903
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5904
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5906
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5908
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5912
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5911
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5910
            .lvl = 42,
#line 5909
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5913
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5918
    [TRAINER_PBL_HELEN] =
    {
#line 5919
        .trainerName = _("STEVEN"),
#line 5920
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5921
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5923
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5925
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5929
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5928
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5927
            .lvl = 42,
#line 5926
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5930
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5935
    [TRAINER_PBL_WESLEY] =
    {
#line 5936
        .trainerName = _("STEVEN"),
#line 5937
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5938
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5940
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5942
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5946
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5945
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5944
            .lvl = 42,
#line 5943
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5947
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5952
    [TRAINER_PBL_ALFREDO] =
    {
#line 5953
        .trainerName = _("STEVEN"),
#line 5954
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5955
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5957
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5959
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5963
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5962
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5961
            .lvl = 42,
#line 5960
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5964
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5969
    [TRAINER_PBL_IAN] =
    {
#line 5970
        .trainerName = _("STEVEN"),
#line 5971
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5972
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5974
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5976
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5980
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5979
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5978
            .lvl = 42,
#line 5977
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5981
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5986
    [TRAINER_PBL_AUDREY] =
    {
#line 5987
        .trainerName = _("STEVEN"),
#line 5988
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5989
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5991
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5993
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5997
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5995
            .lvl = 42,
#line 5994
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5998
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6003
    [TRAINER_PBL_LEVIATHAN13] =
    {
#line 6004
        .trainerName = _("STEVEN"),
#line 6005
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6006
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6008
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6010
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6014
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6013
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6012
            .lvl = 42,
#line 6011
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6015
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6020
    [TRAINER_PBL_EDGARDO] =
    {
#line 6021
        .trainerName = _("STEVEN"),
#line 6022
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6023
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6025
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6027
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6031
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6030
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6029
            .lvl = 42,
#line 6028
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6032
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6037
    [TRAINER_PBL_JEAN] =
    {
#line 6038
        .trainerName = _("STEVEN"),
#line 6039
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6040
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6042
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6044
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6048
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6047
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6046
            .lvl = 42,
#line 6045
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6049
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6054
    [TRAINER_PBL_ROSE] =
    {
#line 6055
        .trainerName = _("STEVEN"),
#line 6056
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6057
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6059
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6061
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6065
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6064
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6063
            .lvl = 42,
#line 6062
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6066
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6071
    [TRAINER_PBL_JENNIFER] =
    {
#line 6072
        .trainerName = _("STEVEN"),
#line 6073
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6074
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6076
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6078
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6082
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6081
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6080
            .lvl = 42,
#line 6079
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6083
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6088
    [TRAINER_PBL_MATTHEW] =
    {
#line 6089
        .trainerName = _("STEVEN"),
#line 6090
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6091
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6093
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6095
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6099
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6098
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6097
            .lvl = 42,
#line 6096
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6100
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6105
    [TRAINER_PBL_KERRY] =
    {
#line 6106
        .trainerName = _("STEVEN"),
#line 6107
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6108
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6110
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6112
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6116
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6115
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6114
            .lvl = 42,
#line 6113
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6117
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6122
    [TRAINER_PBL_ANNIE] =
    {
#line 6123
        .trainerName = _("STEVEN"),
#line 6124
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6125
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6127
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6129
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6133
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6131
            .lvl = 42,
#line 6130
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6134
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6139
    [TRAINER_PBL_CHRISTI] =
    {
#line 6140
        .trainerName = _("STEVEN"),
#line 6141
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6142
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6144
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6146
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6150
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6149
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6148
            .lvl = 42,
#line 6147
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6151
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6156
    [TRAINER_PBL_SPENCER] =
    {
#line 6157
        .trainerName = _("STEVEN"),
#line 6158
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6159
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6161
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6163
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6167
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6166
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6165
            .lvl = 42,
#line 6164
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6168
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6173
    [TRAINER_PBL_HAYWOOD] =
    {
#line 6174
        .trainerName = _("STEVEN"),
#line 6175
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6176
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6178
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6180
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6184
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6183
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6182
            .lvl = 42,
#line 6181
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6185
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6190
    [TRAINER_PBL_MONROE] =
    {
#line 6191
        .trainerName = _("STEVEN"),
#line 6192
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6193
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6195
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6197
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6201
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6200
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6199
            .lvl = 42,
#line 6198
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6202
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6207
    [TRAINER_PBL_DAVID] =
    {
#line 6208
        .trainerName = _("STEVEN"),
#line 6209
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6210
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6212
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6214
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6218
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6217
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6216
            .lvl = 42,
#line 6215
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6219
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6224
    [TRAINER_PBL_DOMINIK] =
    {
#line 6225
        .trainerName = _("STEVEN"),
#line 6226
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6227
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6229
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6231
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6235
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6234
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6233
            .lvl = 42,
#line 6232
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6236
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6241
    [TRAINER_PBL_DOUGLAS] =
    {
#line 6242
        .trainerName = _("STEVEN"),
#line 6243
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6244
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6246
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6248
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6252
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6251
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6250
            .lvl = 42,
#line 6249
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6253
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6258
    [TRAINER_PBL_NADINE] =
    {
#line 6259
        .trainerName = _("STEVEN"),
#line 6260
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6261
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6263
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6265
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6269
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6267
            .lvl = 42,
#line 6266
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6270
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6275
    [TRAINER_PBL_SANDY] =
    {
#line 6276
        .trainerName = _("STEVEN"),
#line 6277
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6278
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6280
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6282
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6286
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6285
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6284
            .lvl = 42,
#line 6283
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6287
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6292
    [TRAINER_PBL_SHELDON] =
    {
#line 6293
        .trainerName = _("STEVEN"),
#line 6294
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6295
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6297
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6299
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6303
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6302
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6301
            .lvl = 42,
#line 6300
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6304
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6309
    [TRAINER_PBL_LEVIATHAN14] =
    {
#line 6310
        .trainerName = _("STEVEN"),
#line 6311
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6312
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6314
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6316
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6320
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6319
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6318
            .lvl = 42,
#line 6317
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6321
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6326
    [TRAINER_PBL_LEVIATHAN12_BRUTAL] =
    {
#line 6327
        .trainerName = _("STEVEN"),
#line 6328
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6329
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6331
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6333
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6337
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6336
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6335
            .lvl = 42,
#line 6334
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6338
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6343
    [TRAINER_PBL_LEVIATHAN13_BRUTAL] =
    {
#line 6344
        .trainerName = _("STEVEN"),
#line 6345
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6346
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6348
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6350
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6354
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6353
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6352
            .lvl = 42,
#line 6351
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6355
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6360
    [TRAINER_PBL_LEVIATHAN14_BRUTAL] =
    {
#line 6361
        .trainerName = _("STEVEN"),
#line 6362
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6363
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6365
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6367
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6371
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6370
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6369
            .lvl = 42,
#line 6368
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6372
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6377
    [TRAINER_PBL_LEVIATHAN12] =
    {
#line 6378
        .trainerName = _("STEVEN"),
#line 6379
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6380
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6382
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6384
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6388
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6387
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6386
            .lvl = 42,
#line 6385
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6389
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
