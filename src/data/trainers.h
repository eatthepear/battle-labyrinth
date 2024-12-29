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
    [TRAINER_PBL_MARIA_LEVIATHAN_5_CHALLENGE] =
    {
#line 1627
        .trainerName = _("Maria"),
#line 1628
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 1629
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 1630
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
        .encounterMusic_gender =
#line 2008
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
        .encounterMusic_gender =
#line 2035
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
        .encounterMusic_gender =
#line 2080
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
        .encounterMusic_gender =
#line 2125
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
        .encounterMusic_gender =
#line 2170
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
#line 2238
    [TRAINER_PBL_PETER] =
    {
#line 2239
        .trainerName = _("Peter"),
#line 2240
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 2241
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 2242
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
        .encounterMusic_gender =
#line 2269
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
        .encounterMusic_gender =
#line 2314
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
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2320
            .heldItem = ITEM_SITRUS_BERRY,
#line 2323
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2321
            .ability = ABILITY_BERSERK,
#line 2322
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2324
                MOVE_AIR_CUTTER,
                MOVE_STRUGGLE_BUG,
                MOVE_MEGA_DRAIN,
                MOVE_STRING_SHOT,
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
                MOVE_SHOCK_WAVE,
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
        .encounterMusic_gender =
#line 2342
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
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2348
            .heldItem = ITEM_SITRUS_BERRY,
#line 2351
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2349
            .ability = ABILITY_BERSERK,
#line 2350
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2352
                MOVE_AIR_CUTTER,
                MOVE_STRUGGLE_BUG,
                MOVE_MEGA_DRAIN,
                MOVE_STRING_SHOT,
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
                MOVE_SHOCK_WAVE,
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
        .encounterMusic_gender =
#line 2379
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
        .encounterMusic_gender =
#line 2421
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
        .encounterMusic_gender =
#line 2466
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
        .encounterMusic_gender =
#line 2511
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
        .encounterMusic_gender =
#line 2529
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
        .encounterMusic_gender =
#line 2574
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
        .encounterMusic_gender =
#line 2619
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
        .encounterMusic_gender =
#line 2664
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
        .encounterMusic_gender =
#line 2710
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
        .encounterMusic_gender =
#line 2765
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
        .encounterMusic_gender =
#line 2810
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
        .encounterMusic_gender =
#line 2828
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
        .encounterMusic_gender =
#line 2873
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
        .encounterMusic_gender =
#line 2918
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
            .species = SPECIES_UNOWN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2960
            .ability = ABILITY_LEVITATE,
#line 2961
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2963
                MOVE_HIDDEN_POWER,
            },
            },
            {
#line 2965
            .species = SPECIES_TOXEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2968
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2966
            .ability = ABILITY_STATIC,
#line 2967
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2969
                MOVE_GROWL,
                MOVE_ACID,
                MOVE_NUZZLE,
                MOVE_TEARFUL_LOOK,
            },
            },
        },
    },
#line 2974
    [TRAINER_PBL_ARI] =
    {
#line 2975
        .trainerName = _("Ari"),
#line 2976
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 2977
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2978
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2980
        .doubleBattle = FALSE,
#line 2979
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2981
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2983
            .species = SPECIES_TANDEMAUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2986
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2984
            .ability = ABILITY_PICKUP,
#line 2985
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2987
                MOVE_SUPER_FANG,
            },
            },
            {
#line 2989
            .species = SPECIES_TADBULB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2992
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2990
            .ability = ABILITY_STATIC,
#line 2991
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2993
                MOVE_PARABOLIC_CHARGE,
            },
            },
            {
#line 2995
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2998
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2996
            .ability = ABILITY_RUN_AWAY,
#line 2997
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2999
                MOVE_DOUBLE_HIT,
            },
            },
        },
    },
#line 3001
    [TRAINER_PBL_BERTHA] =
    {
#line 3002
        .trainerName = _("Bertha"),
#line 3003
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3004
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 3005
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3007
        .doubleBattle = FALSE,
#line 3006
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3008
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3010
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3013
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3011
            .ability = ABILITY_STATIC,
#line 3012
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3014
                MOVE_MUD_SHOT,
                MOVE_SPARK,
            },
            },
        },
    },
#line 3017
    [TRAINER_PBL_CASSANDRA] =
    {
#line 3018
        .trainerName = _("Cassandra"),
#line 3019
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3020
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3021
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3023
        .doubleBattle = FALSE,
#line 3022
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3024
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3026
            .species = SPECIES_SQUAWKABILLY_GREEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3029
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3027
            .ability = ABILITY_INTIMIDATE,
#line 3028
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3030
                MOVE_AERIAL_ACE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3033
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3036
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3034
            .ability = ABILITY_PUNK_ROCK,
#line 3035
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3037
                MOVE_ROUND,
                MOVE_SING,
            },
            },
        },
    },
#line 3040
    [TRAINER_PBL_DOMINIC] =
    {
#line 3041
        .trainerName = _("Dominic"),
#line 3042
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3043
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3044
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3046
        .doubleBattle = FALSE,
#line 3045
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3047
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3049
            .species = SPECIES_CARNIVINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3052
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3050
            .ability = ABILITY_LEVITATE,
#line 3051
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3053
                MOVE_LEAF_TORNADO,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 3056
    [TRAINER_PBL_ERICA] =
    {
#line 3057
        .trainerName = _("Erica"),
#line 3058
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3059
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3060
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3062
        .doubleBattle = FALSE,
#line 3061
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3063
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3065
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3068
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3066
            .ability = ABILITY_GUTS,
#line 3067
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3069
                MOVE_RETALIATE,
                MOVE_REVENGE,
            },
            },
            {
#line 3072
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3075
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3073
            .ability = ABILITY_STURDY,
#line 3074
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3076
                MOVE_RETALIATE,
                MOVE_LOW_SWEEP,
            },
            },
        },
    },
#line 3079
    [TRAINER_PBL_ARI_CHALLENGE] =
    {
#line 3080
        .trainerName = _("Ari"),
#line 3081
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3082
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 3083
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3085
        .doubleBattle = FALSE,
#line 3084
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3086
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3088
            .species = SPECIES_TANDEMAUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3088
            .heldItem = ITEM_ORAN_BERRY,
#line 3091
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3089
            .ability = ABILITY_PICKUP,
#line 3090
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3092
                MOVE_DOUBLE_HIT,
                MOVE_SUPER_FANG,
            },
            },
            {
#line 3095
            .species = SPECIES_TADBULB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3095
            .heldItem = ITEM_ORAN_BERRY,
#line 3098
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3096
            .ability = ABILITY_STATIC,
#line 3097
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3099
                MOVE_PARABOLIC_CHARGE,
                MOVE_CHARGE_BEAM,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3103
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3103
            .heldItem = ITEM_ORAN_BERRY,
#line 3106
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3104
            .ability = ABILITY_RUN_AWAY,
#line 3105
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3107
                MOVE_DOUBLE_HIT,
                MOVE_PLUCK,
                MOVE_QUICK_ATTACK,
                MOVE_PURSUIT,
            },
            },
        },
    },
#line 3112
    [TRAINER_PBL_BERTHA_CHALLENGE] =
    {
#line 3113
        .trainerName = _("Bertha"),
#line 3114
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3115
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 3116
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3118
        .doubleBattle = FALSE,
#line 3117
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3119
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3121
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3121
            .heldItem = ITEM_SITRUS_BERRY,
#line 3124
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3122
            .ability = ABILITY_STATIC,
#line 3123
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3125
                MOVE_SPARK,
                MOVE_MUD_SHOT,
                MOVE_YAWN,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 3130
    [TRAINER_PBL_CASSANDRA_CHALLENGE] =
    {
#line 3131
        .trainerName = _("Cassandra"),
#line 3132
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3133
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3134
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3136
        .doubleBattle = FALSE,
#line 3135
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3137
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3139
            .species = SPECIES_SQUAWKABILLY_GREEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3139
            .heldItem = ITEM_SHARP_BEAK,
#line 3142
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3140
            .ability = ABILITY_INTIMIDATE,
#line 3141
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3143
                MOVE_PLUCK,
                MOVE_THIEF,
                MOVE_QUICK_ATTACK,
                MOVE_FURY_ATTACK,
            },
            },
            {
#line 3148
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3148
            .heldItem = ITEM_SITRUS_BERRY,
#line 3151
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3149
            .ability = ABILITY_PUNK_ROCK,
#line 3150
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3152
                MOVE_CHATTER,
                MOVE_ROUND,
                MOVE_THIEF,
                MOVE_ECHOED_VOICE,
            },
            },
        },
    },
#line 3157
    [TRAINER_PBL_DOMINIC_CHALLENGE] =
    {
#line 3158
        .trainerName = _("Dominic"),
#line 3159
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3160
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3161
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3163
        .doubleBattle = FALSE,
#line 3162
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3164
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3166
            .species = SPECIES_CARNIVINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3166
            .heldItem = ITEM_SITRUS_BERRY,
#line 3169
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3167
            .ability = ABILITY_LEVITATE,
#line 3168
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3170
                MOVE_LEAF_TORNADO,
                MOVE_LEECH_SEED,
                MOVE_TRAILBLAZE,
                MOVE_SYNTHESIS,
            },
            },
        },
    },
#line 3175
    [TRAINER_PBL_ERICA_CHALLENGE] =
    {
#line 3176
        .trainerName = _("Erica"),
#line 3177
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3178
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3179
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3181
        .doubleBattle = FALSE,
#line 3180
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3182
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3184
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3184
            .heldItem = ITEM_SITRUS_BERRY,
#line 3187
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3185
            .ability = ABILITY_GUTS,
#line 3186
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3188
                MOVE_RETALIATE,
                MOVE_REVENGE,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3193
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3193
            .heldItem = ITEM_SITRUS_BERRY,
#line 3196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3194
            .ability = ABILITY_STURDY,
#line 3195
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3197
                MOVE_RETALIATE,
                MOVE_LOW_SWEEP,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 3202
    [TRAINER_PBL_ALANA] =
    {
#line 3203
        .trainerName = _("Alana"),
#line 3204
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 3205
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 3206
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3208
        .doubleBattle = FALSE,
#line 3207
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3209
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3211
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3213
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3212
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3215
            .species = SPECIES_HELIOPTILE,
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
            .species = SPECIES_DARUMAKA,
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
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3225
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3224
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3227
    [TRAINER_PBL_JACOB] =
    {
#line 3228
        .trainerName = _("Jacob"),
#line 3229
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 3230
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 3231
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3233
        .doubleBattle = FALSE,
#line 3232
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3234
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3236
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3237
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3240
            .species = SPECIES_SWABLU,
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
            .species = SPECIES_MURKROW,
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
            .species = SPECIES_DELIBIRD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3250
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3249
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3252
    [TRAINER_PBL_DEWEY] =
    {
#line 3253
        .trainerName = _("Dewey"),
#line 3254
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3255
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 3256
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3258
        .doubleBattle = FALSE,
#line 3257
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3259
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3261
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3263
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3262
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3265
            .species = SPECIES_TINKATINK,
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
            .species = SPECIES_TRAPINCH,
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
            .species = SPECIES_TOEDSCOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3275
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3274
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3277
    [TRAINER_PBL_ERNEST] =
    {
#line 3278
        .trainerName = _("Ernest"),
#line 3279
        .trainerClass = TRAINER_CLASS_HIKER,
#line 3280
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 3281
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3283
        .doubleBattle = FALSE,
#line 3282
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3284
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3286
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3288
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3287
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3290
            .species = SPECIES_NOSEPASS,
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
            .species = SPECIES_SILICOBRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3296
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3295
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3298
            .species = SPECIES_SANDYGAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3300
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3299
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3302
    [TRAINER_PBL_KYLE] =
    {
#line 3303
        .trainerName = _("Kyle"),
#line 3304
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 3305
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 3306
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3308
        .doubleBattle = FALSE,
#line 3307
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3309
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3311
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3313
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3312
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3315
            .species = SPECIES_RIOLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3317
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3316
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3319
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3321
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3320
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3323
            .species = SPECIES_LARVESTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3325
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3324
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3327
    [TRAINER_PBL_ELIAS] =
    {
#line 3328
        .trainerName = _("Elias"),
#line 3329
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 3330
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 3331
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3333
        .doubleBattle = FALSE,
#line 3332
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3334
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3336
            .species = SPECIES_GOOMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3337
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3340
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3341
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3344
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3346
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3345
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3348
            .species = SPECIES_JANGMO_O,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3350
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3349
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3352
    [TRAINER_PBL_PEARLIE] =
    {
#line 3353
        .trainerName = _("Pearlie"),
#line 3354
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 3355
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 3356
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3358
        .doubleBattle = FALSE,
#line 3357
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3359
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3361
            .species = SPECIES_PASSIMIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3363
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3362
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3365
    [TRAINER_PBL_SUSAN] =
    {
#line 3366
        .trainerName = _("Susan"),
#line 3367
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 3368
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 3369
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3371
        .doubleBattle = FALSE,
#line 3370
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3372
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3374
            .species = SPECIES_ORANGURU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3376
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3375
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3378
    [TRAINER_PBL_CONRAD] =
    {
#line 3379
        .trainerName = _("Ernest"),
#line 3380
        .trainerClass = TRAINER_CLASS_HIKER,
#line 3381
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 3382
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3384
        .doubleBattle = FALSE,
#line 3383
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3385
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3387
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3389
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3388
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3391
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3393
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3392
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3395
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3397
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3396
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3399
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3401
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3400
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3403
    [TRAINER_PBL_BRETT] =
    {
#line 3404
        .trainerName = _("Brett"),
#line 3405
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3406
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3407
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3409
        .doubleBattle = FALSE,
#line 3408
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3410
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3412
            .species = SPECIES_FINIZEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3414
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3413
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3416
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3418
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3417
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3420
            .species = SPECIES_BINACLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3422
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3421
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3424
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3426
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3425
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3428
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9] =
    {
#line 3429
        .trainerName = _("Adamina"),
#line 3430
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 3431
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 3432
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3434
        .doubleBattle = FALSE,
#line 3433
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3436
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 3435
        .randomLead = FALSE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3438
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3438
            .heldItem = ITEM_SILVER_POWDER,
#line 3441
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3439
            .ability = ABILITY_STURDY,
#line 3440
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3442
                MOVE_STEALTH_ROCK,
                MOVE_BUG_BITE,
                MOVE_ROCK_TOMB,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3447
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3447
            .heldItem = ITEM_HARD_STONE,
#line 3450
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3448
            .ability = ABILITY_ANGER_SHELL,
#line 3449
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3451
                MOVE_ROCK_TOMB,
                MOVE_BULLDOZE,
                MOVE_KNOCK_OFF,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 3456
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3456
            .heldItem = ITEM_BLACK_GLASSES,
#line 3459
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3457
            .ability = ABILITY_OVERCOAT,
#line 3458
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3460
                MOVE_PLUCK,
                MOVE_FEINT_ATTACK,
                MOVE_ROOST,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3465
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3465
            .heldItem = ITEM_MIRACLE_SEED,
#line 3468
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3466
            .ability = ABILITY_SAND_RUSH,
#line 3467
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3469
                MOVE_MEGA_DRAIN,
                MOVE_PIN_MISSILE,
                MOVE_BOUNCE,
                MOVE_GROWTH,
            },
            },
            {
#line 3474
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3474
            .heldItem = ITEM_SITRUS_BERRY,
#line 3477
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3475
            .ability = ABILITY_SAND_RUSH,
#line 3476
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3478
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
                MOVE_AERIAL_ACE,
                MOVE_COVET,
            },
            },
        },
    },
#line 3483
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9_CHALLENGE] =
    {
#line 3484
        .trainerName = _("Adamina"),
#line 3485
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 3486
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 3487
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3489
        .doubleBattle = FALSE,
#line 3488
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3491
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 3490
        .randomLead = FALSE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3493
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3493
            .heldItem = ITEM_SILVER_POWDER,
#line 3496
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3494
            .ability = ABILITY_STURDY,
#line 3495
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3497
                MOVE_STEALTH_ROCK,
                MOVE_BUG_BITE,
                MOVE_ROCK_TOMB,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3502
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3502
            .heldItem = ITEM_HARD_STONE,
#line 3505
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3503
            .ability = ABILITY_ANGER_SHELL,
#line 3504
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3506
                MOVE_ROCK_TOMB,
                MOVE_BULLDOZE,
                MOVE_KNOCK_OFF,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 3511
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3511
            .heldItem = ITEM_BLACK_GLASSES,
#line 3514
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3512
            .ability = ABILITY_OVERCOAT,
#line 3513
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3515
                MOVE_PLUCK,
                MOVE_FEINT_ATTACK,
                MOVE_ROOST,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3520
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3520
            .heldItem = ITEM_MIRACLE_SEED,
#line 3523
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3521
            .ability = ABILITY_SAND_RUSH,
#line 3522
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3524
                MOVE_MEGA_DRAIN,
                MOVE_PIN_MISSILE,
                MOVE_BOUNCE,
                MOVE_GROWTH,
            },
            },
            {
#line 3529
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3529
            .heldItem = ITEM_SITRUS_BERRY,
#line 3532
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3530
            .ability = ABILITY_SAND_RUSH,
#line 3531
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3533
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
                MOVE_AERIAL_ACE,
                MOVE_COVET,
            },
            },
            {
#line 3538
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3538
            .heldItem = ITEM_SITRUS_BERRY,
#line 3541
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3539
            .ability = ABILITY_MAGIC_GUARD,
#line 3540
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3542
                MOVE_PSYBEAM,
                MOVE_AIR_CUTTER,
                MOVE_ANCIENT_POWER,
                MOVE_ROOST,
            },
            },
        },
    },
#line 3547
    [TRAINER_PBL_JEANETTE] =
    {
#line 3548
        .trainerName = _("Jeanette"),
#line 3549
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 3550
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 3551
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3553
        .doubleBattle = FALSE,
#line 3552
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3554
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3556
            .species = SPECIES_GASTLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3558
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3557
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3560
            .species = SPECIES_FRILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3562
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3561
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3564
            .species = SPECIES_HONEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3566
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3565
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3568
            .species = SPECIES_GREAVARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3570
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3569
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3572
    [TRAINER_PBL_EMMA_AND_LEO] =
    {
#line 3573
        .trainerName = _("Emma&Leo"),
#line 3574
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 3575
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 3576
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3578
        .doubleBattle = TRUE,
#line 3577
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3579
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3581
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3583
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3582
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3585
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3587
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3586
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3589
    [TRAINER_PBL_JOEL] =
    {
#line 3590
        .trainerName = _("Joel"),
#line 3591
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3592
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3593
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3595
        .doubleBattle = FALSE,
#line 3594
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3596
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3598
            .species = SPECIES_BRONZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3600
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3599
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3602
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3604
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3603
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3606
            .species = SPECIES_POLTCHAGEIST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3608
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3607
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3610
            .species = SPECIES_INKAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3612
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3611
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3614
    [TRAINER_PBL_MARION] =
    {
#line 3615
        .trainerName = _("Marion"),
#line 3616
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3617
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3618
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3620
        .doubleBattle = FALSE,
#line 3619
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3621
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3623
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3625
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3624
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3627
            .species = SPECIES_SINISTEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3629
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3628
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3631
            .species = SPECIES_ELGYEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3633
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3632
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3635
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3636
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3639
    [TRAINER_PBL_REGINA] =
    {
#line 3640
        .trainerName = _("Regina"),
#line 3641
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 3642
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 3643
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3645
        .doubleBattle = FALSE,
#line 3644
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3646
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3648
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3650
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3649
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3652
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3653
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3656
            .species = SPECIES_GIMMIGHOUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3657
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3660
            .species = SPECIES_BRAMBLIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3661
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3664
    [TRAINER_PBL_NEWTON_LEVIATHAN_10] =
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
    [TRAINER_PBL_NEWTON_LEVIATHAN_10_CHALLENGE] =
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
    [TRAINER_PBL_ESSENCE] =
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
    [TRAINER_PBL_DOLORES] =
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
    [TRAINER_PBL_JULIE] =
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
    [TRAINER_PBL_ROMULUS] =
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
    [TRAINER_PBL_TREVOR] =
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
    [TRAINER_PBL_FEDERICO] =
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
    [TRAINER_PBL_GENIE] =
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
    [TRAINER_PBL_HILDA] =
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
    [TRAINER_PBL_KINLEY] =
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
    [TRAINER_PBL_VIOLET] =
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
    [TRAINER_PBL_WANDA] =
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
    [TRAINER_PBL_AMBER_AND_KIM] =
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
    [TRAINER_PBL_JAN_AND_ERIN] =
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
    [TRAINER_PBL_STEVE] =
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
    [TRAINER_PBL_GOULD] =
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
    [TRAINER_PBL_MENDEL] =
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
    [TRAINER_PBL_DARWIN] =
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
    [TRAINER_PBL_JENNY_LEVIATHAN_11] =
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
    [TRAINER_PBL_JENNY_LEVIATHAN_11_CHALLENGE] =
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
    [TRAINER_PBL_BART] =
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
    [TRAINER_PBL_NIGEL] =
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
    [TRAINER_PBL_LOLA] =
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
    [TRAINER_PBL_CHARLIE] =
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
    [TRAINER_PBL_RANDOLPH] =
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
    [TRAINER_PBL_TODD] =
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
    [TRAINER_PBL_RUSSELL] =
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
    [TRAINER_PBL_OTIS] =
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
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12] =
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
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12_CHALLENGE] =
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
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13] =
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
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13_CHALLENGE] =
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
    [TRAINER_PBL_IONA] =
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
    [TRAINER_PBL_BERKE] =
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
    [TRAINER_PBL_TANISHA] =
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
    [TRAINER_PBL_ROBERT] =
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
    [TRAINER_PBL_CHRIS] =
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
    [TRAINER_PBL_ANGUS] =
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
    [TRAINER_PBL_LILY_LEVIATHAN_14] =
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
    [TRAINER_PBL_LILY_LEVIATHAN_14_CHALLENGE] =
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
    [TRAINER_PBL_AXLE] =
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
    [TRAINER_PBL_RAFAEL] =
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
    [TRAINER_PBL_GEORGINA] =
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
    [TRAINER_PBL_MIA_LEVIATHAN_15] =
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
    [TRAINER_PBL_MIA_LEVIATHAN_15_CHALLENGE] =
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
    [TRAINER_PBL_DORIS] =
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
    [TRAINER_PBL_HOMER] =
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
    [TRAINER_PBL_JOHN] =
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
    [TRAINER_PBL_GLENN] =
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
    [TRAINER_PBL_JAY] =
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
    [TRAINER_PBL_TYLER] =
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
    [TRAINER_PBL_TERRENCE] =
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
    [TRAINER_PBL_MARTY] =
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
    [TRAINER_PBL_KARI] =
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
    [TRAINER_PBL_ABRAHAM] =
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
    [TRAINER_PBL_MELINDA] =
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
    [TRAINER_PBL_EMILIO] =
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
    [TRAINER_PBL_REX] =
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
    [TRAINER_PBL_LOUIS] =
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
    [TRAINER_PBL_LEROY] =
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
    [TRAINER_PBL_ELTON] =
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
    [TRAINER_PBL_WILLIE] =
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
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16] =
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
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16_CHALLENGE] =
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
    [TRAINER_PBL_PIRATE_1] =
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
    [TRAINER_PBL_PIRATE_2] =
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
    [TRAINER_PBL_PIRATE_3] =
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
    [TRAINER_PBL_PIRATE_4] =
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
    [TRAINER_PBL_SHAWN] =
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
    [TRAINER_PBL_FERNANDO] =
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
    [TRAINER_PBL_KANE] =
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
    [TRAINER_PBL_KIRK] =
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
    [TRAINER_PBL_DALTON] =
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
    [TRAINER_PBL_LEE] =
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
    [TRAINER_PBL_BLANCHE] =
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
    [TRAINER_PBL_TROY] =
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
    [TRAINER_PBL_ABED] =
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
    [TRAINER_PBL_TROY_BRUTAL] =
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
    [TRAINER_PBL_ABED_BRUTAL] =
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
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17] =
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
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17_CHALLENGE] =
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
    [TRAINER_PBL_ANITA] =
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
    [TRAINER_PBL_DESIREE] =
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
    [TRAINER_PBL_HOWARD] =
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
    [TRAINER_PBL_ELOISE] =
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
    [TRAINER_PBL_ALLY_AND_EMMY] =
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
    [TRAINER_PBL_AMIR] =
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
    [TRAINER_PBL_GETHIN] =
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
    [TRAINER_PBL_BERNARD] =
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
    [TRAINER_PBL_ELLIE] =
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
    [TRAINER_PBL_RUSTY] =
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
    [TRAINER_PBL_CODY] =
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
#line 5245
    [TRAINER_PBL_LEWIS] =
    {
#line 5246
        .trainerName = _("STEVEN"),
#line 5247
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5248
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5250
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5252
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5256
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5255
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5254
            .lvl = 42,
#line 5253
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5257
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5262
    [TRAINER_PBL_CORNELIUS] =
    {
#line 5263
        .trainerName = _("STEVEN"),
#line 5264
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5265
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5267
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5269
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5273
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5272
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5271
            .lvl = 42,
#line 5270
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5274
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5279
    [TRAINER_PBL_INEZ_AND_EMMA] =
    {
#line 5280
        .trainerName = _("STEVEN"),
#line 5281
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5282
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5284
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5286
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5290
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5289
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5288
            .lvl = 42,
#line 5287
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5291
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5296
    [TRAINER_PBL_HELEN] =
    {
#line 5297
        .trainerName = _("STEVEN"),
#line 5298
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5299
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5301
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5303
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5307
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5306
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5305
            .lvl = 42,
#line 5304
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5308
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5313
    [TRAINER_PBL_WESLEY] =
    {
#line 5314
        .trainerName = _("STEVEN"),
#line 5315
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5316
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5318
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5320
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5324
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5323
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5322
            .lvl = 42,
#line 5321
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5325
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5330
    [TRAINER_PBL_ALFREDO] =
    {
#line 5331
        .trainerName = _("STEVEN"),
#line 5332
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5333
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5335
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5337
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5341
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5340
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5339
            .lvl = 42,
#line 5338
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5342
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5347
    [TRAINER_PBL_IAN] =
    {
#line 5348
        .trainerName = _("STEVEN"),
#line 5349
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5350
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5352
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5354
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5358
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5357
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5356
            .lvl = 42,
#line 5355
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5359
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5364
    [TRAINER_PBL_AUDREY] =
    {
#line 5365
        .trainerName = _("STEVEN"),
#line 5366
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5367
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5369
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5371
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5375
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5374
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5373
            .lvl = 42,
#line 5372
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5376
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5381
    [TRAINER_PBL_LEVIATHAN13] =
    {
#line 5382
        .trainerName = _("STEVEN"),
#line 5383
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5384
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5386
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5388
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5392
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5391
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5390
            .lvl = 42,
#line 5389
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5393
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5398
    [TRAINER_PBL_EDGARDO] =
    {
#line 5399
        .trainerName = _("STEVEN"),
#line 5400
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5401
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5403
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5405
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5409
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5408
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5407
            .lvl = 42,
#line 5406
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5410
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5415
    [TRAINER_PBL_JEAN] =
    {
#line 5416
        .trainerName = _("STEVEN"),
#line 5417
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5418
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5420
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5422
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5426
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5425
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5424
            .lvl = 42,
#line 5423
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5427
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5432
    [TRAINER_PBL_ROSE] =
    {
#line 5433
        .trainerName = _("STEVEN"),
#line 5434
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5435
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5437
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5439
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5443
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5442
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5441
            .lvl = 42,
#line 5440
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5444
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5449
    [TRAINER_PBL_JENNIFER] =
    {
#line 5450
        .trainerName = _("STEVEN"),
#line 5451
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5452
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5454
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5456
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5460
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5459
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5458
            .lvl = 42,
#line 5457
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5461
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5466
    [TRAINER_PBL_MATTHEW] =
    {
#line 5467
        .trainerName = _("STEVEN"),
#line 5468
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5469
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5471
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5473
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5477
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5476
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5475
            .lvl = 42,
#line 5474
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5478
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5483
    [TRAINER_PBL_KERRY] =
    {
#line 5484
        .trainerName = _("STEVEN"),
#line 5485
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5486
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5488
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5490
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5494
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5493
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5492
            .lvl = 42,
#line 5491
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5495
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5500
    [TRAINER_PBL_ANNIE] =
    {
#line 5501
        .trainerName = _("STEVEN"),
#line 5502
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5503
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5505
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5507
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5511
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5510
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5509
            .lvl = 42,
#line 5508
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5512
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5517
    [TRAINER_PBL_CHRISTI] =
    {
#line 5518
        .trainerName = _("STEVEN"),
#line 5519
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5520
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5522
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5524
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5528
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5527
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5526
            .lvl = 42,
#line 5525
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5529
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5534
    [TRAINER_PBL_SPENCER] =
    {
#line 5535
        .trainerName = _("STEVEN"),
#line 5536
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5537
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5539
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5541
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5545
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5544
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5543
            .lvl = 42,
#line 5542
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5546
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5551
    [TRAINER_PBL_HAYWOOD] =
    {
#line 5552
        .trainerName = _("STEVEN"),
#line 5553
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5554
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5556
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5558
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5562
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5561
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5560
            .lvl = 42,
#line 5559
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5563
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5568
    [TRAINER_PBL_MONROE] =
    {
#line 5569
        .trainerName = _("STEVEN"),
#line 5570
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5571
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5573
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5575
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5579
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5578
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5577
            .lvl = 42,
#line 5576
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5580
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5585
    [TRAINER_PBL_DAVID] =
    {
#line 5586
        .trainerName = _("STEVEN"),
#line 5587
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5588
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5590
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5592
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5596
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5595
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5594
            .lvl = 42,
#line 5593
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5597
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5602
    [TRAINER_PBL_DOMINIK] =
    {
#line 5603
        .trainerName = _("STEVEN"),
#line 5604
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5605
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5607
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5609
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5613
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5612
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5611
            .lvl = 42,
#line 5610
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5614
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5619
    [TRAINER_PBL_DOUGLAS] =
    {
#line 5620
        .trainerName = _("STEVEN"),
#line 5621
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5622
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5624
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5626
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5630
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5629
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5628
            .lvl = 42,
#line 5627
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5631
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5636
    [TRAINER_PBL_NADINE] =
    {
#line 5637
        .trainerName = _("STEVEN"),
#line 5638
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5639
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5641
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5643
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5647
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5646
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5645
            .lvl = 42,
#line 5644
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5648
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5653
    [TRAINER_PBL_SANDY] =
    {
#line 5654
        .trainerName = _("STEVEN"),
#line 5655
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5656
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5658
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5660
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5664
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5663
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5662
            .lvl = 42,
#line 5661
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5665
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5670
    [TRAINER_PBL_SHELDON] =
    {
#line 5671
        .trainerName = _("STEVEN"),
#line 5672
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5673
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5675
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5677
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5681
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5680
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5679
            .lvl = 42,
#line 5678
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5682
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5687
    [TRAINER_PBL_LEVIATHAN14] =
    {
#line 5688
        .trainerName = _("STEVEN"),
#line 5689
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5690
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5692
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5694
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5698
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5697
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5696
            .lvl = 42,
#line 5695
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5699
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5704
    [TRAINER_PBL_LEVIATHAN12_BRUTAL] =
    {
#line 5705
        .trainerName = _("STEVEN"),
#line 5706
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5707
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5709
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5711
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5715
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5714
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5713
            .lvl = 42,
#line 5712
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5716
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5721
    [TRAINER_PBL_LEVIATHAN13_BRUTAL] =
    {
#line 5722
        .trainerName = _("STEVEN"),
#line 5723
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5724
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5726
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5728
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5732
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5731
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5730
            .lvl = 42,
#line 5729
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5733
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5738
    [TRAINER_PBL_LEVIATHAN14_BRUTAL] =
    {
#line 5739
        .trainerName = _("STEVEN"),
#line 5740
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5741
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5743
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5745
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5749
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5748
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5747
            .lvl = 42,
#line 5746
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5750
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5755
    [TRAINER_PBL_LEVIATHAN12] =
    {
#line 5756
        .trainerName = _("STEVEN"),
#line 5757
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5758
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5760
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5762
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5766
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5765
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5764
            .lvl = 42,
#line 5763
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5767
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
