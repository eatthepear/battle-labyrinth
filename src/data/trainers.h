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
            },
            {
#line 2047
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2050
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2048
            .ability = ABILITY_VITAL_SPIRIT,
#line 2049
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2052
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2055
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2053
            .ability = ABILITY_PURE_POWER,
#line 2054
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2057
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2060
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2058
            .ability = ABILITY_IRON_FIST,
#line 2059
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2062
    [TRAINER_PBL_JAMAL] =
    {
#line 2063
        .trainerName = _("Jamal"),
#line 2064
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2065
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2066
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2068
        .doubleBattle = FALSE,
#line 2067
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2069
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2071
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2074
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2072
            .ability = ABILITY_OBLIVIOUS,
#line 2073
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2076
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2079
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2077
            .ability = ABILITY_INNER_FOCUS,
#line 2078
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2081
            .species = SPECIES_FOMANTIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2084
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2082
            .ability = ABILITY_LEAF_GUARD,
#line 2083
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2086
            .species = SPECIES_BUIZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2089
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2087
            .ability = ABILITY_WATER_VEIL,
#line 2088
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2091
    [TRAINER_PBL_PAIGE] =
    {
#line 2092
        .trainerName = _("Paige"),
#line 2093
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 2094
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 2095
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2097
        .doubleBattle = FALSE,
#line 2096
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2098
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2100
            .species = SPECIES_COMBEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2103
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2101
            .ability = ABILITY_HONEY_GATHER,
#line 2102
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2105
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2108
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2106
            .ability = ABILITY_CHLOROPHYLL,
#line 2107
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2110
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2113
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2111
            .ability = ABILITY_EFFECT_SPORE,
#line 2112
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2115
            .species = SPECIES_CUTIEFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2118
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2116
            .ability = ABILITY_SHIELD_DUST,
#line 2117
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2120
    [TRAINER_PBL_SETH] =
    {
#line 2121
        .trainerName = _("Seth"),
#line 2122
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2123
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 2124
            TRAINER_ENCOUNTER_MUSIC_RICH,
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
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2132
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2130
            .ability = ABILITY_PRANKSTER,
#line 2131
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2134
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2137
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2135
            .ability = ABILITY_QUICK_FEET,
#line 2136
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2139
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2140
            .ability = ABILITY_PICKUP,
#line 2141
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2144
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2147
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2145
            .ability = ABILITY_UNBURDEN,
#line 2146
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2149
    [TRAINER_PBL_CONNIE] =
    {
#line 2150
        .trainerName = _("Connie"),
#line 2151
        .trainerClass = TRAINER_CLASS_LASS,
#line 2152
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 2153
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2155
        .doubleBattle = FALSE,
#line 2154
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2156
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2158
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2161
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2159
            .ability = ABILITY_CHLOROPHYLL,
#line 2160
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2163
            .species = SPECIES_DEWPIDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2166
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2164
            .ability = ABILITY_WATER_BUBBLE,
#line 2165
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2168
    [TRAINER_PBL_PETER] =
    {
#line 2169
        .trainerName = _("Peter"),
#line 2170
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 2171
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 2172
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2174
        .doubleBattle = FALSE,
#line 2173
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2175
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2177
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2180
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2178
            .ability = ABILITY_CHLOROPHYLL,
#line 2179
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2182
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2185
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2183
            .ability = ABILITY_SWIFT_SWIM,
#line 2184
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2187
    [TRAINER_PBL_WHITAKER] =
    {
#line 2188
        .trainerName = _("Whitaker"),
#line 2189
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 2190
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 2191
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 2193
        .doubleBattle = FALSE,
#line 2192
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2194
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2196
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2199
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2197
            .ability = ABILITY_SNIPER,
#line 2198
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2200
                MOVE_FURY_ATTACK,
                MOVE_QUICK_ATTACK,
                MOVE_WING_ATTACK,
                MOVE_PURSUIT,
            },
            },
            {
#line 2205
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2208
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2206
            .ability = ABILITY_MAGIC_BOUNCE,
#line 2207
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2210
            .species = SPECIES_FLITTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2213
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2211
            .ability = ABILITY_ANTICIPATION,
#line 2212
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2215
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2218
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2216
            .ability = ABILITY_SUPER_LUCK,
#line 2217
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2220
    [TRAINER_PBL_BETTY_LEVIATHAN_7] =
    {
#line 2221
        .trainerName = _("Betty"),
#line 2222
        .trainerClass = TRAINER_CLASS_LADY,
#line 2223
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 2224
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2226
        .doubleBattle = TRUE,
#line 2225
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2228
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2227
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2230
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2230
            .heldItem = ITEM_SITRUS_BERRY,
#line 2233
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2231
            .ability = ABILITY_ANGER_SHELL,
#line 2232
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2234
                MOVE_ROCK_TOMB,
                MOVE_METAL_CLAW,
                MOVE_ROCK_SMASH,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 2239
            .species = SPECIES_DEDENNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2239
            .heldItem = ITEM_SITRUS_BERRY,
#line 2242
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2240
            .ability = ABILITY_CHEEK_POUCH,
#line 2241
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2243
                MOVE_PARABOLIC_CHARGE,
                MOVE_DRAINING_KISS,
                MOVE_NUZZLE,
                MOVE_CHARGE_BEAM,
            },
            },
        },
    },
#line 2248
    [TRAINER_PBL_BETTY_LEVIATHAN_7_CHALLENGE] =
    {
#line 2249
        .trainerName = _("Betty"),
#line 2250
        .trainerClass = TRAINER_CLASS_LADY,
#line 2251
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 2252
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2254
        .doubleBattle = TRUE,
#line 2253
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 2256
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2255
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2258
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2258
            .heldItem = ITEM_SITRUS_BERRY,
#line 2261
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2259
            .ability = ABILITY_ANGER_SHELL,
#line 2260
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2262
                MOVE_ROCK_TOMB,
                MOVE_METAL_CLAW,
                MOVE_ROCK_SMASH,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 2267
            .species = SPECIES_DEDENNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2267
            .heldItem = ITEM_SITRUS_BERRY,
#line 2270
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2268
            .ability = ABILITY_CHEEK_POUCH,
#line 2269
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2271
                MOVE_PARABOLIC_CHARGE,
                MOVE_DRAINING_KISS,
                MOVE_NUZZLE,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 2276
            .species = SPECIES_DRAMPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2276
            .heldItem = ITEM_SITRUS_BERRY,
#line 2279
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2277
            .ability = ABILITY_BERSERK,
#line 2278
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2280
                MOVE_DRAGON_BREATH,
                MOVE_GLARE,
                MOVE_NATURAL_GIFT,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 2285
    [TRAINER_PBL_JIMMY] =
    {
#line 2286
        .trainerName = _("Jimmy"),
#line 2287
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 2288
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 2289
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2291
        .doubleBattle = FALSE,
#line 2290
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2292
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2294
            .species = SPECIES_NOIBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2297
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2295
            .ability = ABILITY_INFILTRATOR,
#line 2296
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2299
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2300
            .ability = ABILITY_SWIFT_SWIM,
#line 2301
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2304
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2307
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2305
            .ability = ABILITY_CLEAR_BODY,
#line 2306
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2309
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2312
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2310
            .ability = ABILITY_SAND_VEIL,
#line 2311
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2314
    [TRAINER_PBL_EMILIANO] =
    {
#line 2315
        .trainerName = _("Emiliano"),
#line 2316
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2317
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 2318
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2320
        .doubleBattle = FALSE,
#line 2319
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2321
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2323
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2326
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2324
            .ability = ABILITY_STURDY,
#line 2325
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2328
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2331
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2329
            .ability = ABILITY_STURDY,
#line 2330
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2333
            .species = SPECIES_CUFANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2336
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2334
            .ability = ABILITY_SHEER_FORCE,
#line 2335
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2338
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2341
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2339
            .ability = ABILITY_NO_GUARD,
#line 2340
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2343
    [TRAINER_PBL_BECKHAM] =
    {
#line 2344
        .trainerName = _("Beckham"),
#line 2345
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2346
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2347
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2349
        .doubleBattle = FALSE,
#line 2348
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2350
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2352
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2355
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2353
            .ability = ABILITY_OWN_TEMPO,
#line 2354
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2357
            .species = SPECIES_SALANDIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2360
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2358
            .ability = ABILITY_CORROSION,
#line 2359
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2362
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2365
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2363
            .ability = ABILITY_BATTLE_ARMOR,
#line 2364
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2367
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2370
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2368
            .ability = ABILITY_UNAWARE,
#line 2369
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2372
    [TRAINER_PBL_KAREN] =
    {
#line 2373
        .trainerName = _("Karen"),
#line 2374
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 2375
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 2376
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2378
        .doubleBattle = FALSE,
#line 2377
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2379
        .randomLead = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2381
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2384
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2382
            .ability = ABILITY_CONTRARY,
#line 2383
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2386
    [TRAINER_PBL_JAYDEN] =
    {
#line 2387
        .trainerName = _("Jayden"),
#line 2388
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2389
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 2390
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2392
        .doubleBattle = FALSE,
#line 2391
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2393
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2395
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2396
            .ability = ABILITY_STURDY,
#line 2397
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2400
            .species = SPECIES_ROLYCOLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2403
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2401
            .ability = ABILITY_STEAM_ENGINE,
#line 2402
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2405
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2408
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2406
            .ability = ABILITY_PURIFYING_SALT,
#line 2407
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2410
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2413
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2411
            .ability = ABILITY_SOLID_ROCK,
#line 2412
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2415
    [TRAINER_PBL_NEIL] =
    {
#line 2416
        .trainerName = _("Neil"),
#line 2417
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 2418
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 2419
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2421
        .doubleBattle = FALSE,
#line 2420
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2422
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2424
            .species = SPECIES_RELLOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2427
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2425
            .ability = ABILITY_COMPOUND_EYES,
#line 2426
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2429
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2432
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2430
            .ability = ABILITY_LEVITATE,
#line 2431
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2434
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2437
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2435
            .ability = ABILITY_MUMMY,
#line 2436
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2439
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2442
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2440
            .ability = ABILITY_PLUS,
#line 2441
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2444
    [TRAINER_PBL_TAMARA] =
    {
#line 2445
        .trainerName = _("Tamara"),
#line 2446
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 2447
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 2448
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2450
        .doubleBattle = FALSE,
#line 2449
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2451
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2453
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2456
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2454
            .ability = ABILITY_STORM_DRAIN,
#line 2455
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2458
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2461
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2459
            .ability = ABILITY_SERENE_GRACE,
#line 2460
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2463
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2466
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2464
            .ability = ABILITY_INSOMNIA,
#line 2465
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2468
            .species = SPECIES_ROCKRUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2471
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2469
            .ability = ABILITY_VITAL_SPIRIT,
#line 2470
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2473
    [TRAINER_PBL_ALISTAIR_LEVIATHAN_8] =
    {
#line 2474
        .trainerName = _("Alistair"),
#line 2475
        .trainerClass = TRAINER_CLASS_ROUGHNECK,
#line 2476
        .trainerPic = TRAINER_PIC_ROUGHNECK,
        .encounterMusic_gender =
#line 2477
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2479
        .doubleBattle = FALSE,
#line 2478
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2481
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2480
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2483
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2483
            .heldItem = ITEM_POISON_BARB,
#line 2486
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2484
            .ability = ABILITY_POISON_TOUCH,
#line 2485
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2487
                MOVE_SLUDGE,
                MOVE_POISON_GAS,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2492
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2492
            .heldItem = ITEM_SHARP_BEAK,
#line 2495
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2493
            .ability = ABILITY_AFTERMATH,
#line 2494
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2496
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_DEFOG,
            },
            },
            {
#line 2501
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2501
            .heldItem = ITEM_NORMAL_GEM,
#line 2504
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2502
            .ability = ABILITY_POISON_TOUCH,
#line 2503
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2505
                MOVE_VENOSHOCK,
                MOVE_VACUUM_WAVE,
                MOVE_FAKE_OUT,
                MOVE_THIEF,
            },
            },
            {
#line 2510
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2510
            .heldItem = ITEM_SITRUS_BERRY,
#line 2513
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2511
            .ability = ABILITY_STRONG_JAW,
#line 2512
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2514
                MOVE_BITE,
                MOVE_THUNDER_FANG,
                MOVE_FIRE_FANG,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 2519
    [TRAINER_PBL_ALISTAIR_LEVIATHAN_8_CHALLENGE] =
    {
#line 2520
        .trainerName = _("Alistair"),
#line 2521
        .trainerClass = TRAINER_CLASS_ROUGHNECK,
#line 2522
        .trainerPic = TRAINER_PIC_ROUGHNECK,
        .encounterMusic_gender =
#line 2523
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2525
        .doubleBattle = FALSE,
#line 2524
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 2527
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2526
        .randomLead = FALSE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2529
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2529
            .heldItem = ITEM_POISON_BARB,
#line 2532
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2530
            .ability = ABILITY_POISON_TOUCH,
#line 2531
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2533
                MOVE_SLUDGE,
                MOVE_POISON_GAS,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2538
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2538
            .heldItem = ITEM_SHARP_BEAK,
#line 2541
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2539
            .ability = ABILITY_AFTERMATH,
#line 2540
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2542
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_DEFOG,
            },
            },
            {
#line 2547
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2547
            .heldItem = ITEM_NORMAL_GEM,
#line 2550
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2548
            .ability = ABILITY_POISON_TOUCH,
#line 2549
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2551
                MOVE_VENOSHOCK,
                MOVE_VACUUM_WAVE,
                MOVE_FAKE_OUT,
                MOVE_THIEF,
            },
            },
            {
#line 2556
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2556
            .heldItem = ITEM_SITRUS_BERRY,
#line 2559
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2557
            .ability = ABILITY_STRONG_JAW,
#line 2558
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2560
                MOVE_BITE,
                MOVE_THUNDER_FANG,
                MOVE_FIRE_FANG,
                MOVE_ICE_FANG,
            },
            },
            {
#line 2565
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2565
            .heldItem = ITEM_BLACK_BELT,
#line 2568
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2566
            .ability = ABILITY_GUTS,
#line 2567
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2569
                MOVE_REVENGE,
                MOVE_SEISMIC_TOSS,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 2574
    [TRAINER_PBL_COOPER] =
    {
#line 2575
        .trainerName = _("STEVEN"),
#line 2576
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2577
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2579
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2581
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2585
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2584
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2583
            .lvl = 42,
#line 2582
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2586
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2591
    [TRAINER_PBL_CARMINE] =
    {
#line 2592
        .trainerName = _("STEVEN"),
#line 2593
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2594
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2596
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2598
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2602
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2601
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2600
            .lvl = 42,
#line 2599
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2603
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2608
    [TRAINER_PBL_ARI] =
    {
#line 2609
        .trainerName = _("STEVEN"),
#line 2610
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2611
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2613
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2615
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2619
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2618
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2617
            .lvl = 42,
#line 2616
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2620
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2625
    [TRAINER_PBL_BERTHA] =
    {
#line 2626
        .trainerName = _("STEVEN"),
#line 2627
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2628
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2630
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2632
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2636
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2635
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2634
            .lvl = 42,
#line 2633
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2637
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2642
    [TRAINER_PBL_CASSANDRA] =
    {
#line 2643
        .trainerName = _("STEVEN"),
#line 2644
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2645
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2647
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2649
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2653
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2652
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2651
            .lvl = 42,
#line 2650
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2654
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2659
    [TRAINER_PBL_DOMINIC] =
    {
#line 2660
        .trainerName = _("STEVEN"),
#line 2661
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2662
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2664
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2666
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2670
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2669
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2668
            .lvl = 42,
#line 2667
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2671
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2676
    [TRAINER_PBL_ERICA] =
    {
#line 2677
        .trainerName = _("STEVEN"),
#line 2678
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2679
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2681
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2683
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2687
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2686
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2685
            .lvl = 42,
#line 2684
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2688
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2693
    [TRAINER_PBL_KYLE] =
    {
#line 2694
        .trainerName = _("STEVEN"),
#line 2695
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2696
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2698
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2700
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2704
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2703
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2702
            .lvl = 42,
#line 2701
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2705
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2710
    [TRAINER_PBL_BELLE] =
    {
#line 2711
        .trainerName = _("STEVEN"),
#line 2712
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2713
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2715
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2717
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2721
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2720
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2719
            .lvl = 42,
#line 2718
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2722
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2727
    [TRAINER_PBL_DEWEY] =
    {
#line 2728
        .trainerName = _("STEVEN"),
#line 2729
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2730
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2732
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2734
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2738
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2737
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2736
            .lvl = 42,
#line 2735
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2739
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2744
    [TRAINER_PBL_PEARLIE] =
    {
#line 2745
        .trainerName = _("STEVEN"),
#line 2746
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2747
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2749
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2751
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2755
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2754
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2753
            .lvl = 42,
#line 2752
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2756
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2761
    [TRAINER_PBL_ERNEST] =
    {
#line 2762
        .trainerName = _("STEVEN"),
#line 2763
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2764
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2766
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2768
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2772
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2771
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2770
            .lvl = 42,
#line 2769
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2773
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2778
    [TRAINER_PBL_ALANA] =
    {
#line 2779
        .trainerName = _("STEVEN"),
#line 2780
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2781
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2783
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2785
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2789
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2788
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2787
            .lvl = 42,
#line 2786
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2790
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2795
    [TRAINER_PBL_SUSAN] =
    {
#line 2796
        .trainerName = _("STEVEN"),
#line 2797
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2798
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2800
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2802
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2806
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2805
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2804
            .lvl = 42,
#line 2803
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2807
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2812
    [TRAINER_PBL_CONRAD] =
    {
#line 2813
        .trainerName = _("STEVEN"),
#line 2814
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2815
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2817
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2819
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2823
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2822
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2821
            .lvl = 42,
#line 2820
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2824
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2829
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9] =
    {
#line 2830
        .trainerName = _("STEVEN"),
#line 2831
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2832
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2834
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2836
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2840
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2839
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2838
            .lvl = 42,
#line 2837
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2841
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2846
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9_BRUTAL] =
    {
#line 2847
        .trainerName = _("STEVEN"),
#line 2848
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2849
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2851
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2853
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2857
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2856
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2855
            .lvl = 42,
#line 2854
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2858
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2863
    [TRAINER_PBL_JEANETTE] =
    {
#line 2864
        .trainerName = _("STEVEN"),
#line 2865
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2866
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2868
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2870
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2874
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2873
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2872
            .lvl = 42,
#line 2871
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2875
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2880
    [TRAINER_PBL_EMMA_AND_LEO] =
    {
#line 2881
        .trainerName = _("STEVEN"),
#line 2882
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2883
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2885
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2887
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2891
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2890
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2889
            .lvl = 42,
#line 2888
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2892
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2897
    [TRAINER_PBL_JOEL] =
    {
#line 2898
        .trainerName = _("STEVEN"),
#line 2899
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2900
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2902
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2904
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2908
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2907
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2906
            .lvl = 42,
#line 2905
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2909
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2914
    [TRAINER_PBL_MARION] =
    {
#line 2915
        .trainerName = _("STEVEN"),
#line 2916
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2917
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2919
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2921
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2925
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2924
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2923
            .lvl = 42,
#line 2922
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2926
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2931
    [TRAINER_PBL_REGINA] =
    {
#line 2932
        .trainerName = _("STEVEN"),
#line 2933
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2934
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2936
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2938
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2942
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2941
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2940
            .lvl = 42,
#line 2939
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2943
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2948
    [TRAINER_PBL_NEWTON_LEVIATHAN_10] =
    {
#line 2949
        .trainerName = _("STEVEN"),
#line 2950
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2951
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2953
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2955
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2959
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2958
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2957
            .lvl = 42,
#line 2956
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2960
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2965
    [TRAINER_PBL_NEWTON_LEVIATHAN_10_BRUTAL] =
    {
#line 2966
        .trainerName = _("STEVEN"),
#line 2967
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2968
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2970
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2972
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2976
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2975
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2974
            .lvl = 42,
#line 2973
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2977
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2982
    [TRAINER_PBL_ESSENCE] =
    {
#line 2983
        .trainerName = _("STEVEN"),
#line 2984
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2985
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2987
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2989
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2993
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2992
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2991
            .lvl = 42,
#line 2990
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2994
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2999
    [TRAINER_PBL_DOLORES] =
    {
#line 3000
        .trainerName = _("STEVEN"),
#line 3001
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3002
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3004
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3006
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3010
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3009
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3008
            .lvl = 42,
#line 3007
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3011
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3016
    [TRAINER_PBL_JULIE] =
    {
#line 3017
        .trainerName = _("STEVEN"),
#line 3018
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3019
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3021
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3023
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3027
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3026
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3025
            .lvl = 42,
#line 3024
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3028
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3033
    [TRAINER_PBL_ROMULUS] =
    {
#line 3034
        .trainerName = _("STEVEN"),
#line 3035
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3036
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3038
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3040
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3044
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3043
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3042
            .lvl = 42,
#line 3041
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3045
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3050
    [TRAINER_PBL_TREVOR] =
    {
#line 3051
        .trainerName = _("STEVEN"),
#line 3052
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3053
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3055
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3057
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3061
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3060
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3059
            .lvl = 42,
#line 3058
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3062
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3067
    [TRAINER_PBL_FEDERICO] =
    {
#line 3068
        .trainerName = _("STEVEN"),
#line 3069
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3070
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3072
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3074
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3078
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3077
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3076
            .lvl = 42,
#line 3075
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3079
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3084
    [TRAINER_PBL_GENIE] =
    {
#line 3085
        .trainerName = _("STEVEN"),
#line 3086
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3087
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3089
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3091
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3095
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3094
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3093
            .lvl = 42,
#line 3092
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3096
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3101
    [TRAINER_PBL_HILDA] =
    {
#line 3102
        .trainerName = _("STEVEN"),
#line 3103
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3104
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3106
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3108
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3112
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3111
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3110
            .lvl = 42,
#line 3109
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3113
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3118
    [TRAINER_PBL_KINLEY] =
    {
#line 3119
        .trainerName = _("STEVEN"),
#line 3120
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3121
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3123
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3125
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3129
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3128
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3127
            .lvl = 42,
#line 3126
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3130
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3135
    [TRAINER_PBL_VIOLET] =
    {
#line 3136
        .trainerName = _("STEVEN"),
#line 3137
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3138
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3140
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3142
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3146
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3145
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3144
            .lvl = 42,
#line 3143
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3147
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3152
    [TRAINER_PBL_WANDA] =
    {
#line 3153
        .trainerName = _("STEVEN"),
#line 3154
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3155
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3157
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3159
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3163
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3162
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3161
            .lvl = 42,
#line 3160
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3164
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3169
    [TRAINER_PBL_AMBER_AND_KIM] =
    {
#line 3170
        .trainerName = _("STEVEN"),
#line 3171
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3172
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3174
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3176
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3180
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3178
            .lvl = 42,
#line 3177
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3181
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3186
    [TRAINER_PBL_JAN_AND_ERIN] =
    {
#line 3187
        .trainerName = _("STEVEN"),
#line 3188
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3189
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3191
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3193
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3197
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3195
            .lvl = 42,
#line 3194
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3198
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3203
    [TRAINER_PBL_STEVE] =
    {
#line 3204
        .trainerName = _("STEVEN"),
#line 3205
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3206
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3208
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3210
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3214
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3213
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3212
            .lvl = 42,
#line 3211
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3215
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3220
    [TRAINER_PBL_GOULD] =
    {
#line 3221
        .trainerName = _("STEVEN"),
#line 3222
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3223
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3225
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3227
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3231
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3230
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3229
            .lvl = 42,
#line 3228
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3232
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3237
    [TRAINER_PBL_MENDEL] =
    {
#line 3238
        .trainerName = _("STEVEN"),
#line 3239
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3240
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3242
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3244
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3248
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3247
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3246
            .lvl = 42,
#line 3245
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3249
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3254
    [TRAINER_PBL_DARWIN] =
    {
#line 3255
        .trainerName = _("STEVEN"),
#line 3256
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3257
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3259
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3261
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3265
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3264
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3263
            .lvl = 42,
#line 3262
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3266
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3271
    [TRAINER_PBL_JENNY_LEVIATHAN_11] =
    {
#line 3272
        .trainerName = _("STEVEN"),
#line 3273
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3274
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3276
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3278
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3282
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3281
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3280
            .lvl = 42,
#line 3279
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3283
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3288
    [TRAINER_PBL_JENNY_LEVIATHAN_11_BRUTAL] =
    {
#line 3289
        .trainerName = _("STEVEN"),
#line 3290
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3291
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3293
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3295
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3299
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3298
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3297
            .lvl = 42,
#line 3296
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3300
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3305
    [TRAINER_PBL_BART] =
    {
#line 3306
        .trainerName = _("STEVEN"),
#line 3307
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3308
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3310
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3312
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3316
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3315
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3314
            .lvl = 42,
#line 3313
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3317
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3322
    [TRAINER_PBL_NIGEL] =
    {
#line 3323
        .trainerName = _("STEVEN"),
#line 3324
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3325
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3327
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3329
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3333
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3332
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3331
            .lvl = 42,
#line 3330
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3334
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3339
    [TRAINER_PBL_LOLA] =
    {
#line 3340
        .trainerName = _("STEVEN"),
#line 3341
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3342
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3344
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3346
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3350
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3349
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3348
            .lvl = 42,
#line 3347
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3351
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3356
    [TRAINER_PBL_CHARLIE] =
    {
#line 3357
        .trainerName = _("STEVEN"),
#line 3358
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3359
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3361
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3363
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3367
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3366
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3365
            .lvl = 42,
#line 3364
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3368
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3373
    [TRAINER_PBL_RANDOLPH] =
    {
#line 3374
        .trainerName = _("STEVEN"),
#line 3375
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3376
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3378
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3380
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3384
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3383
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3382
            .lvl = 42,
#line 3381
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3385
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3390
    [TRAINER_PBL_TODD] =
    {
#line 3391
        .trainerName = _("STEVEN"),
#line 3392
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3393
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3395
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3397
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3401
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3400
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3399
            .lvl = 42,
#line 3398
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3402
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3407
    [TRAINER_PBL_RUSSELL] =
    {
#line 3408
        .trainerName = _("STEVEN"),
#line 3409
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3410
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3412
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3414
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3418
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3417
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3416
            .lvl = 42,
#line 3415
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3419
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3424
    [TRAINER_PBL_OTIS] =
    {
#line 3425
        .trainerName = _("STEVEN"),
#line 3426
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3427
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3429
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3431
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3435
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3434
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3433
            .lvl = 42,
#line 3432
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3436
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3441
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12] =
    {
#line 3442
        .trainerName = _("STEVEN"),
#line 3443
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3444
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3446
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3448
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3452
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3451
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3450
            .lvl = 42,
#line 3449
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3453
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3458
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12_BRUTAL] =
    {
#line 3459
        .trainerName = _("STEVEN"),
#line 3460
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3461
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3463
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3465
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3469
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3468
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3467
            .lvl = 42,
#line 3466
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3470
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3475
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13] =
    {
#line 3476
        .trainerName = _("STEVEN"),
#line 3477
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3478
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3480
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3482
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3486
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3485
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3484
            .lvl = 42,
#line 3483
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3487
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3492
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13_BRUTAL] =
    {
#line 3493
        .trainerName = _("STEVEN"),
#line 3494
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3495
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3497
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3499
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3503
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3502
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3501
            .lvl = 42,
#line 3500
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3504
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3509
    [TRAINER_PBL_IONA] =
    {
#line 3510
        .trainerName = _("STEVEN"),
#line 3511
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3512
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3514
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3516
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3520
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3519
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3518
            .lvl = 42,
#line 3517
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3521
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3526
    [TRAINER_PBL_BERKE] =
    {
#line 3527
        .trainerName = _("STEVEN"),
#line 3528
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3529
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3531
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3533
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3537
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3536
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3535
            .lvl = 42,
#line 3534
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3538
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3543
    [TRAINER_PBL_TANISHA] =
    {
#line 3544
        .trainerName = _("STEVEN"),
#line 3545
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3546
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3548
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3550
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3554
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3553
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3552
            .lvl = 42,
#line 3551
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3555
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3560
    [TRAINER_PBL_ROBERT] =
    {
#line 3561
        .trainerName = _("STEVEN"),
#line 3562
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3563
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3565
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3567
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3571
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3570
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3569
            .lvl = 42,
#line 3568
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3572
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3577
    [TRAINER_PBL_CHRIS] =
    {
#line 3578
        .trainerName = _("STEVEN"),
#line 3579
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3580
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3582
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3584
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3588
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3587
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3586
            .lvl = 42,
#line 3585
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3589
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3594
    [TRAINER_PBL_ANGUS] =
    {
#line 3595
        .trainerName = _("STEVEN"),
#line 3596
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3597
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3599
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3601
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3605
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3604
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3603
            .lvl = 42,
#line 3602
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3606
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3611
    [TRAINER_PBL_LILY_LEVIATHAN_14] =
    {
#line 3612
        .trainerName = _("STEVEN"),
#line 3613
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3614
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3616
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3618
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3622
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3621
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3620
            .lvl = 42,
#line 3619
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3623
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3628
    [TRAINER_PBL_LILY_LEVIATHAN_14_BRUTAL] =
    {
#line 3629
        .trainerName = _("STEVEN"),
#line 3630
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3631
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3633
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3635
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3639
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3638
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3637
            .lvl = 42,
#line 3636
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3640
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3645
    [TRAINER_PBL_AXLE] =
    {
#line 3646
        .trainerName = _("STEVEN"),
#line 3647
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3648
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3650
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3652
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3656
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3655
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3654
            .lvl = 42,
#line 3653
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3657
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3662
    [TRAINER_PBL_RAFAEL] =
    {
#line 3663
        .trainerName = _("STEVEN"),
#line 3664
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3665
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3667
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3669
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3673
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3672
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3671
            .lvl = 42,
#line 3670
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3674
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3679
    [TRAINER_PBL_GEORGINA] =
    {
#line 3680
        .trainerName = _("STEVEN"),
#line 3681
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3682
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3684
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3686
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3690
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3689
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3688
            .lvl = 42,
#line 3687
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3691
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3696
    [TRAINER_PBL_MIA_LEVIATHAN_15] =
    {
#line 3697
        .trainerName = _("STEVEN"),
#line 3698
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3699
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3701
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3703
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3707
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3706
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3705
            .lvl = 42,
#line 3704
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3708
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3713
    [TRAINER_PBL_MIA_LEVIATHAN_15_BRUTAL] =
    {
#line 3714
        .trainerName = _("STEVEN"),
#line 3715
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3716
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3718
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3720
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3724
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3723
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3722
            .lvl = 42,
#line 3721
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3725
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3730
    [TRAINER_PBL_DORIS] =
    {
#line 3731
        .trainerName = _("STEVEN"),
#line 3732
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3733
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3735
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3737
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3741
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3740
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3739
            .lvl = 42,
#line 3738
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3742
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3747
    [TRAINER_PBL_HOMER] =
    {
#line 3748
        .trainerName = _("STEVEN"),
#line 3749
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3750
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3752
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3754
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3758
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3757
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3756
            .lvl = 42,
#line 3755
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3759
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3764
    [TRAINER_PBL_JOHN] =
    {
#line 3765
        .trainerName = _("STEVEN"),
#line 3766
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3767
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3769
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3771
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3775
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3774
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3773
            .lvl = 42,
#line 3772
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3776
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3781
    [TRAINER_PBL_GLENN] =
    {
#line 3782
        .trainerName = _("STEVEN"),
#line 3783
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3784
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3786
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3788
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3792
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3791
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3790
            .lvl = 42,
#line 3789
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3793
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3798
    [TRAINER_PBL_JAY] =
    {
#line 3799
        .trainerName = _("STEVEN"),
#line 3800
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3801
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3803
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3805
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3809
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3808
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3807
            .lvl = 42,
#line 3806
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3810
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3815
    [TRAINER_PBL_TYLER] =
    {
#line 3816
        .trainerName = _("STEVEN"),
#line 3817
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3818
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3820
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3822
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3826
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3825
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3824
            .lvl = 42,
#line 3823
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3827
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3832
    [TRAINER_PBL_TERRENCE] =
    {
#line 3833
        .trainerName = _("STEVEN"),
#line 3834
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3835
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3837
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3839
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3843
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3842
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3841
            .lvl = 42,
#line 3840
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3844
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3849
    [TRAINER_PBL_MARTY] =
    {
#line 3850
        .trainerName = _("STEVEN"),
#line 3851
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3852
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3854
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3856
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3860
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3859
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3858
            .lvl = 42,
#line 3857
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3861
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3866
    [TRAINER_PBL_KARI] =
    {
#line 3867
        .trainerName = _("STEVEN"),
#line 3868
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3869
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3871
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3873
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3877
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3876
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3875
            .lvl = 42,
#line 3874
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3878
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3883
    [TRAINER_PBL_ABRAHAM] =
    {
#line 3884
        .trainerName = _("STEVEN"),
#line 3885
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3886
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3888
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3890
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3894
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3893
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3892
            .lvl = 42,
#line 3891
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3895
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3900
    [TRAINER_PBL_MELINDA] =
    {
#line 3901
        .trainerName = _("STEVEN"),
#line 3902
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3903
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3905
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3907
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3911
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3910
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3909
            .lvl = 42,
#line 3908
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3912
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3917
    [TRAINER_PBL_EMILIO] =
    {
#line 3918
        .trainerName = _("STEVEN"),
#line 3919
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3920
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3922
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3924
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3928
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3927
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3926
            .lvl = 42,
#line 3925
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3929
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3934
    [TRAINER_PBL_REX] =
    {
#line 3935
        .trainerName = _("STEVEN"),
#line 3936
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3937
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3939
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3941
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3945
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3944
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3943
            .lvl = 42,
#line 3942
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3946
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3951
    [TRAINER_PBL_LOUIS] =
    {
#line 3952
        .trainerName = _("STEVEN"),
#line 3953
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3954
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3956
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3958
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3962
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3961
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3960
            .lvl = 42,
#line 3959
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3963
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3968
    [TRAINER_PBL_LEROY] =
    {
#line 3969
        .trainerName = _("STEVEN"),
#line 3970
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3971
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3973
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3975
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3979
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3978
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3977
            .lvl = 42,
#line 3976
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3980
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3985
    [TRAINER_PBL_ELTON] =
    {
#line 3986
        .trainerName = _("STEVEN"),
#line 3987
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3988
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3990
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3992
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3996
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3995
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3994
            .lvl = 42,
#line 3993
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3997
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4002
    [TRAINER_PBL_WILLIE] =
    {
#line 4003
        .trainerName = _("STEVEN"),
#line 4004
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4005
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4007
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4009
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4013
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4012
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4011
            .lvl = 42,
#line 4010
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4014
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4019
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16] =
    {
#line 4020
        .trainerName = _("STEVEN"),
#line 4021
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4022
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4024
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4026
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4030
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4029
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4028
            .lvl = 42,
#line 4027
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4031
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4036
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16_BRUTAL] =
    {
#line 4037
        .trainerName = _("STEVEN"),
#line 4038
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4039
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4041
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4043
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4047
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4046
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4045
            .lvl = 42,
#line 4044
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4048
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4053
    [TRAINER_PBL_PIRATE_1] =
    {
#line 4054
        .trainerName = _("STEVEN"),
#line 4055
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4056
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4058
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4060
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4064
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4063
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4062
            .lvl = 42,
#line 4061
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4065
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4070
    [TRAINER_PBL_PIRATE_2] =
    {
#line 4071
        .trainerName = _("STEVEN"),
#line 4072
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4073
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4075
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4077
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4081
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4080
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4079
            .lvl = 42,
#line 4078
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4082
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4087
    [TRAINER_PBL_PIRATE_3] =
    {
#line 4088
        .trainerName = _("STEVEN"),
#line 4089
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4090
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4092
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4094
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4098
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4097
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4096
            .lvl = 42,
#line 4095
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4099
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4104
    [TRAINER_PBL_PIRATE_4] =
    {
#line 4105
        .trainerName = _("STEVEN"),
#line 4106
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4107
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4109
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4111
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4115
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4114
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4113
            .lvl = 42,
#line 4112
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4116
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4121
    [TRAINER_PBL_SHAWN] =
    {
#line 4122
        .trainerName = _("STEVEN"),
#line 4123
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4124
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4126
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4128
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4132
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4131
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4130
            .lvl = 42,
#line 4129
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4133
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4138
    [TRAINER_PBL_FERNANDO] =
    {
#line 4139
        .trainerName = _("STEVEN"),
#line 4140
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4141
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4143
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4145
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4149
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4147
            .lvl = 42,
#line 4146
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4150
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4155
    [TRAINER_PBL_KANE] =
    {
#line 4156
        .trainerName = _("STEVEN"),
#line 4157
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4158
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4160
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4162
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4166
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4165
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4164
            .lvl = 42,
#line 4163
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4167
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4172
    [TRAINER_PBL_KIRK] =
    {
#line 4173
        .trainerName = _("STEVEN"),
#line 4174
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4175
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4177
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4179
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4183
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4182
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4181
            .lvl = 42,
#line 4180
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4184
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4189
    [TRAINER_PBL_DALTON] =
    {
#line 4190
        .trainerName = _("STEVEN"),
#line 4191
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4192
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4194
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4196
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4200
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4199
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4198
            .lvl = 42,
#line 4197
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4201
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4206
    [TRAINER_PBL_LEE] =
    {
#line 4207
        .trainerName = _("STEVEN"),
#line 4208
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4209
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4211
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4213
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4217
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4216
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4215
            .lvl = 42,
#line 4214
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4218
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4223
    [TRAINER_PBL_BLANCHE] =
    {
#line 4224
        .trainerName = _("STEVEN"),
#line 4225
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4226
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4228
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4230
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4234
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4233
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4232
            .lvl = 42,
#line 4231
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4235
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4240
    [TRAINER_PBL_TROY] =
    {
#line 4241
        .trainerName = _("STEVEN"),
#line 4242
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4243
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4245
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4247
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4251
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4250
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4249
            .lvl = 42,
#line 4248
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4252
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4257
    [TRAINER_PBL_ABED] =
    {
#line 4258
        .trainerName = _("STEVEN"),
#line 4259
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4260
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4262
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4264
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4268
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4266
            .lvl = 42,
#line 4265
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4269
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4274
    [TRAINER_PBL_TROY_BRUTAL] =
    {
#line 4275
        .trainerName = _("STEVEN"),
#line 4276
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4277
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4279
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4281
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4285
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4284
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4283
            .lvl = 42,
#line 4282
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4286
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4291
    [TRAINER_PBL_ABED_BRUTAL] =
    {
#line 4292
        .trainerName = _("STEVEN"),
#line 4293
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4294
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4296
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4298
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4302
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4301
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4300
            .lvl = 42,
#line 4299
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4303
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4308
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17] =
    {
#line 4309
        .trainerName = _("STEVEN"),
#line 4310
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4311
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4313
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4315
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4319
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4318
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4317
            .lvl = 42,
#line 4316
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4320
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4325
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17_BRUTAL] =
    {
#line 4326
        .trainerName = _("STEVEN"),
#line 4327
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4328
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4330
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4332
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4336
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4335
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4334
            .lvl = 42,
#line 4333
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4337
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4342
    [TRAINER_PBL_ANITA] =
    {
#line 4343
        .trainerName = _("STEVEN"),
#line 4344
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4345
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4347
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4349
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4353
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4352
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4351
            .lvl = 42,
#line 4350
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4354
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4359
    [TRAINER_PBL_DESIREE] =
    {
#line 4360
        .trainerName = _("STEVEN"),
#line 4361
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4362
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4364
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4366
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4370
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4369
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4368
            .lvl = 42,
#line 4367
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4371
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4376
    [TRAINER_PBL_HOWARD] =
    {
#line 4377
        .trainerName = _("STEVEN"),
#line 4378
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4379
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4381
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4383
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4387
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4386
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4385
            .lvl = 42,
#line 4384
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4388
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4393
    [TRAINER_PBL_ELOISE] =
    {
#line 4394
        .trainerName = _("STEVEN"),
#line 4395
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4396
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4398
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4400
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4404
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4403
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4402
            .lvl = 42,
#line 4401
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4405
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4410
    [TRAINER_PBL_ALLY_AND_EMMY] =
    {
#line 4411
        .trainerName = _("STEVEN"),
#line 4412
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4413
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4415
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4417
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4421
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4420
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4419
            .lvl = 42,
#line 4418
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4422
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4427
    [TRAINER_PBL_AMIR] =
    {
#line 4428
        .trainerName = _("STEVEN"),
#line 4429
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4430
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4432
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4434
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4438
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4437
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4436
            .lvl = 42,
#line 4435
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4439
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4444
    [TRAINER_PBL_GETHIN] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4451
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4455
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4454
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4453
            .lvl = 42,
#line 4452
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4456
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4461
    [TRAINER_PBL_BERNARD] =
    {
#line 4462
        .trainerName = _("STEVEN"),
#line 4463
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4464
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4466
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4468
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4472
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4471
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4470
            .lvl = 42,
#line 4469
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4473
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4478
    [TRAINER_PBL_ELLIE] =
    {
#line 4479
        .trainerName = _("STEVEN"),
#line 4480
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4481
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4483
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4485
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4489
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4488
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4487
            .lvl = 42,
#line 4486
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4490
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4495
    [TRAINER_PBL_RUSTY] =
    {
#line 4496
        .trainerName = _("STEVEN"),
#line 4497
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4498
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4500
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4502
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4506
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4505
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4504
            .lvl = 42,
#line 4503
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4507
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4512
    [TRAINER_PBL_CODY] =
    {
#line 4513
        .trainerName = _("STEVEN"),
#line 4514
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4515
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4517
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4519
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4523
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4522
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4521
            .lvl = 42,
#line 4520
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4524
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4529
    [TRAINER_PBL_LEWIS] =
    {
#line 4530
        .trainerName = _("STEVEN"),
#line 4531
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4532
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4534
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4536
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4540
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4539
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4538
            .lvl = 42,
#line 4537
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4541
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4546
    [TRAINER_PBL_CORNELIUS] =
    {
#line 4547
        .trainerName = _("STEVEN"),
#line 4548
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4549
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4551
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4553
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4557
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4556
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4555
            .lvl = 42,
#line 4554
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4558
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4563
    [TRAINER_PBL_INEZ_AND_EMMA] =
    {
#line 4564
        .trainerName = _("STEVEN"),
#line 4565
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4566
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4568
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4570
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4574
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4573
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4572
            .lvl = 42,
#line 4571
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4575
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4580
    [TRAINER_PBL_HELEN] =
    {
#line 4581
        .trainerName = _("STEVEN"),
#line 4582
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4583
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4585
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4587
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4591
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4590
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4589
            .lvl = 42,
#line 4588
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4592
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4597
    [TRAINER_PBL_WESLEY] =
    {
#line 4598
        .trainerName = _("STEVEN"),
#line 4599
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4600
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4602
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4604
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4608
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4607
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4606
            .lvl = 42,
#line 4605
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4609
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4614
    [TRAINER_PBL_ALFREDO] =
    {
#line 4615
        .trainerName = _("STEVEN"),
#line 4616
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4617
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4619
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4621
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4625
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4624
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4623
            .lvl = 42,
#line 4622
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4626
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4631
    [TRAINER_PBL_IAN] =
    {
#line 4632
        .trainerName = _("STEVEN"),
#line 4633
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4634
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4636
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4638
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4642
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4641
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4640
            .lvl = 42,
#line 4639
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4643
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4648
    [TRAINER_PBL_AUDREY] =
    {
#line 4649
        .trainerName = _("STEVEN"),
#line 4650
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4651
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4653
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4655
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4659
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4658
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4657
            .lvl = 42,
#line 4656
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4660
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4665
    [TRAINER_PBL_LEVIATHAN13] =
    {
#line 4666
        .trainerName = _("STEVEN"),
#line 4667
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4668
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4670
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4672
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4676
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4675
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4674
            .lvl = 42,
#line 4673
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4677
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4682
    [TRAINER_PBL_EDGARDO] =
    {
#line 4683
        .trainerName = _("STEVEN"),
#line 4684
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4685
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4687
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4689
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4693
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4692
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4691
            .lvl = 42,
#line 4690
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4694
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4699
    [TRAINER_PBL_JEAN] =
    {
#line 4700
        .trainerName = _("STEVEN"),
#line 4701
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4702
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4704
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4706
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4710
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4709
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4708
            .lvl = 42,
#line 4707
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4711
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4716
    [TRAINER_PBL_ROSE] =
    {
#line 4717
        .trainerName = _("STEVEN"),
#line 4718
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4719
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4721
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4723
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4727
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4726
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4725
            .lvl = 42,
#line 4724
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4728
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4733
    [TRAINER_PBL_JENNIFER] =
    {
#line 4734
        .trainerName = _("STEVEN"),
#line 4735
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4736
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4738
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4740
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4744
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4743
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4742
            .lvl = 42,
#line 4741
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4745
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4750
    [TRAINER_PBL_MATTHEW] =
    {
#line 4751
        .trainerName = _("STEVEN"),
#line 4752
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4753
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4755
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4757
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4761
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4760
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4759
            .lvl = 42,
#line 4758
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4762
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4767
    [TRAINER_PBL_KERRY] =
    {
#line 4768
        .trainerName = _("STEVEN"),
#line 4769
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4770
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4772
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4774
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4778
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4777
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4776
            .lvl = 42,
#line 4775
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4779
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4784
    [TRAINER_PBL_ANNIE] =
    {
#line 4785
        .trainerName = _("STEVEN"),
#line 4786
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4787
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4789
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4791
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4795
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4794
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4793
            .lvl = 42,
#line 4792
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4796
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4801
    [TRAINER_PBL_CHRISTI] =
    {
#line 4802
        .trainerName = _("STEVEN"),
#line 4803
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4804
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4806
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4808
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4812
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4811
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4810
            .lvl = 42,
#line 4809
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4813
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4818
    [TRAINER_PBL_SPENCER] =
    {
#line 4819
        .trainerName = _("STEVEN"),
#line 4820
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4821
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4823
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4825
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4829
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4828
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4827
            .lvl = 42,
#line 4826
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4830
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4835
    [TRAINER_PBL_HAYWOOD] =
    {
#line 4836
        .trainerName = _("STEVEN"),
#line 4837
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4838
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4840
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4842
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4846
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4845
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4844
            .lvl = 42,
#line 4843
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4847
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4852
    [TRAINER_PBL_MONROE] =
    {
#line 4853
        .trainerName = _("STEVEN"),
#line 4854
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4855
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4857
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4859
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4863
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4862
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4861
            .lvl = 42,
#line 4860
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4864
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4869
    [TRAINER_PBL_DAVID] =
    {
#line 4870
        .trainerName = _("STEVEN"),
#line 4871
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4872
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4874
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4876
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4880
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4879
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4878
            .lvl = 42,
#line 4877
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4881
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4886
    [TRAINER_PBL_DOMINIK] =
    {
#line 4887
        .trainerName = _("STEVEN"),
#line 4888
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4889
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4891
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4893
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4897
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4896
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4895
            .lvl = 42,
#line 4894
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4898
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4903
    [TRAINER_PBL_DOUGLAS] =
    {
#line 4904
        .trainerName = _("STEVEN"),
#line 4905
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4906
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4908
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4910
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4914
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4913
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4912
            .lvl = 42,
#line 4911
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4915
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4920
    [TRAINER_PBL_NADINE] =
    {
#line 4921
        .trainerName = _("STEVEN"),
#line 4922
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4923
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4925
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4927
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4931
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4930
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4929
            .lvl = 42,
#line 4928
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4932
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4937
    [TRAINER_PBL_SANDY] =
    {
#line 4938
        .trainerName = _("STEVEN"),
#line 4939
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4940
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4942
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4944
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4948
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4947
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4946
            .lvl = 42,
#line 4945
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4949
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4954
    [TRAINER_PBL_SHELDON] =
    {
#line 4955
        .trainerName = _("STEVEN"),
#line 4956
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4957
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4959
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4961
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4965
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4964
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4963
            .lvl = 42,
#line 4962
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4966
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4971
    [TRAINER_PBL_LEVIATHAN14] =
    {
#line 4972
        .trainerName = _("STEVEN"),
#line 4973
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4974
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4976
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4978
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4982
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4981
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4980
            .lvl = 42,
#line 4979
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4983
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4988
    [TRAINER_PBL_LEVIATHAN12_BRUTAL] =
    {
#line 4989
        .trainerName = _("STEVEN"),
#line 4990
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4991
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4993
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4995
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4999
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4998
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4997
            .lvl = 42,
#line 4996
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5000
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5005
    [TRAINER_PBL_LEVIATHAN13_BRUTAL] =
    {
#line 5006
        .trainerName = _("STEVEN"),
#line 5007
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5008
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5010
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5012
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5016
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5015
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5014
            .lvl = 42,
#line 5013
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5017
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5022
    [TRAINER_PBL_LEVIATHAN14_BRUTAL] =
    {
#line 5023
        .trainerName = _("STEVEN"),
#line 5024
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5025
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5027
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5029
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5033
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5032
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5031
            .lvl = 42,
#line 5030
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5034
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5039
    [TRAINER_PBL_LEVIATHAN12] =
    {
#line 5040
        .trainerName = _("STEVEN"),
#line 5041
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5042
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5044
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5046
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5050
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5049
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5048
            .lvl = 42,
#line 5047
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5051
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
