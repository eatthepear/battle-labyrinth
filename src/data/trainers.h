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
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2655
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2653
            .ability = ABILITY_UNNERVE,
#line 2654
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2656
                MOVE_POISON_STING,
                MOVE_FEINT_ATTACK,
                MOVE_STRUGGLE_BUG,
                MOVE_ELECTROWEB,
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
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2744
            .heldItem = ITEM_EVIOLITE,
#line 2747
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2745
            .ability = ABILITY_SERENE_GRACE,
#line 2746
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2748
                MOVE_HEADBUTT,
                MOVE_BITE,
                MOVE_GLARE,
                MOVE_ROOST,
            },
            },
            {
#line 2753
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2753
            .heldItem = ITEM_SITRUS_BERRY,
#line 2756
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2754
            .ability = ABILITY_STRONG_JAW,
#line 2755
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2757
                MOVE_BITE,
                MOVE_THUNDER_FANG,
                MOVE_FIRE_FANG,
                MOVE_ICE_FANG,
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
            .species = SPECIES_CETODDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2963
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2961
            .ability = ABILITY_THICK_FAT,
#line 2962
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2964
                MOVE_YAWN,
                MOVE_ICE_SHARD,
                MOVE_ENTRAINMENT,
                MOVE_FLAIL,
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3030
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3033
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3031
            .ability = ABILITY_PUNK_ROCK,
#line 3032
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3034
                MOVE_CHATTER,
                MOVE_SING,
            },
            },
        },
    },
#line 3037
    [TRAINER_PBL_DOMINIC] =
    {
#line 3038
        .trainerName = _("Dominic"),
#line 3039
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3040
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3041
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3043
        .doubleBattle = FALSE,
#line 3042
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3044
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3046
            .species = SPECIES_CARNIVINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3049
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3047
            .ability = ABILITY_LEVITATE,
#line 3048
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3050
                MOVE_LEAF_TORNADO,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 3053
    [TRAINER_PBL_ERICA] =
    {
#line 3054
        .trainerName = _("Erica"),
#line 3055
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3056
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3057
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3059
        .doubleBattle = FALSE,
#line 3058
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3060
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3062
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3065
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3063
            .ability = ABILITY_GUTS,
#line 3064
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3066
                MOVE_RETALIATE,
                MOVE_REVENGE,
            },
            },
            {
#line 3069
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3072
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3070
            .ability = ABILITY_STURDY,
#line 3071
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3073
                MOVE_RETALIATE,
                MOVE_LOW_SWEEP,
            },
            },
        },
    },
#line 3076
    [TRAINER_PBL_ARI_CHALLENGE] =
    {
#line 3077
        .trainerName = _("Ari"),
#line 3078
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3079
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 3080
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3082
        .doubleBattle = FALSE,
#line 3081
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3083
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3085
            .species = SPECIES_TANDEMAUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3085
            .heldItem = ITEM_ORAN_BERRY,
#line 3088
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3086
            .ability = ABILITY_PICKUP,
#line 3087
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3089
                MOVE_DOUBLE_HIT,
                MOVE_SUPER_FANG,
            },
            },
            {
#line 3092
            .species = SPECIES_TADBULB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3092
            .heldItem = ITEM_ORAN_BERRY,
#line 3095
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3093
            .ability = ABILITY_STATIC,
#line 3094
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3096
                MOVE_PARABOLIC_CHARGE,
                MOVE_CHARGE_BEAM,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3100
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3100
            .heldItem = ITEM_ORAN_BERRY,
#line 3103
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3101
            .ability = ABILITY_RUN_AWAY,
#line 3102
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3104
                MOVE_DOUBLE_HIT,
                MOVE_PLUCK,
                MOVE_QUICK_ATTACK,
                MOVE_PURSUIT,
            },
            },
        },
    },
#line 3109
    [TRAINER_PBL_BERTHA_CHALLENGE] =
    {
#line 3110
        .trainerName = _("Bertha"),
#line 3111
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3112
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 3113
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3115
        .doubleBattle = FALSE,
#line 3114
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3116
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3118
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3118
            .heldItem = ITEM_ORAN_BERRY,
#line 3121
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3119
            .ability = ABILITY_STATIC,
#line 3120
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3122
                MOVE_SPARK,
                MOVE_MUD_SHOT,
                MOVE_YAWN,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 3127
    [TRAINER_PBL_CASSANDRA_CHALLENGE] =
    {
#line 3128
        .trainerName = _("Cassandra"),
#line 3129
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3130
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3131
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3133
        .doubleBattle = FALSE,
#line 3132
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3134
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3136
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3136
            .heldItem = ITEM_SITRUS_BERRY,
#line 3139
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3137
            .ability = ABILITY_PUNK_ROCK,
#line 3138
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3140
                MOVE_CHATTER,
                MOVE_ROUND,
                MOVE_THIEF,
                MOVE_ECHOED_VOICE,
            },
            },
        },
    },
#line 3145
    [TRAINER_PBL_DOMINIC_CHALLENGE] =
    {
#line 3146
        .trainerName = _("Dominic"),
#line 3147
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3148
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3149
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3151
        .doubleBattle = FALSE,
#line 3150
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3152
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3154
            .species = SPECIES_CARNIVINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3154
            .heldItem = ITEM_SITRUS_BERRY,
#line 3157
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3155
            .ability = ABILITY_LEVITATE,
#line 3156
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3158
                MOVE_LEAF_TORNADO,
                MOVE_LEECH_SEED,
                MOVE_TRAILBLAZE,
                MOVE_SYNTHESIS,
            },
            },
        },
    },
#line 3163
    [TRAINER_PBL_ERICA_CHALLENGE] =
    {
#line 3164
        .trainerName = _("Erica"),
#line 3165
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3166
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3167
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3169
        .doubleBattle = FALSE,
#line 3168
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3170
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
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
            {
#line 3181
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3181
            .heldItem = ITEM_SITRUS_BERRY,
#line 3184
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3182
            .ability = ABILITY_STURDY,
#line 3183
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3185
                MOVE_RETALIATE,
                MOVE_LOW_SWEEP,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 3190
    [TRAINER_PBL_ALANA] =
    {
#line 3191
        .trainerName = _("Alana"),
#line 3192
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 3193
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 3194
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3196
        .doubleBattle = FALSE,
#line 3195
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3197
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3199
            .species = SPECIES_TINKATINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3202
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3200
            .ability = ABILITY_MOLD_BREAKER,
#line 3201
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3203
                MOVE_METAL_CLAW,
                MOVE_COVET,
                MOVE_SWEET_KISS,
                MOVE_SLAM,
            },
            },
            {
#line 3208
            .species = SPECIES_HELIOPTILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3211
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3209
            .ability = ABILITY_SAND_VEIL,
#line 3210
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3212
                MOVE_THUNDER_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_RAZOR_WIND,
                MOVE_PARABOLIC_CHARGE,
            },
            },
            {
#line 3217
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3220
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3218
            .ability = ABILITY_HUSTLE,
#line 3219
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3221
                MOVE_INCINERATE,
                MOVE_FLAME_WHEEL,
                MOVE_HEADBUTT,
                MOVE_FIRE_FANG,
            },
            },
            {
#line 3226
            .species = SPECIES_TOEDSCOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3229
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3227
            .ability = ABILITY_MYCELIUM_MIGHT,
#line 3228
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3230
                MOVE_STUN_SPORE,
                MOVE_MEGA_DRAIN,
                MOVE_LEECH_SEED,
                MOVE_MUD_SHOT,
            },
            },
        },
    },
#line 3235
    [TRAINER_PBL_JACOB] =
    {
#line 3236
        .trainerName = _("Jacob"),
#line 3237
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 3238
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 3239
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3241
        .doubleBattle = FALSE,
#line 3240
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3242
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3244
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3247
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3245
            .ability = ABILITY_SHEER_FORCE,
#line 3246
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3248
                MOVE_AERIAL_ACE,
                MOVE_SCARY_FACE,
                MOVE_CRUSH_CLAW,
                MOVE_SKY_DROP,
            },
            },
            {
#line 3253
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3256
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3254
            .ability = ABILITY_NATURAL_CURE,
#line 3255
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3257
                MOVE_ROUND,
                MOVE_HAZE,
                MOVE_FEATHER_DANCE,
                MOVE_DRAGON_BREATH,
            },
            },
            {
#line 3262
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3265
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3263
            .ability = ABILITY_SUPER_LUCK,
#line 3264
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3266
                MOVE_NIGHT_SHADE,
                MOVE_ASSURANCE,
                MOVE_AIR_CUTTER,
                MOVE_WHIRLWIND,
            },
            },
            {
#line 3271
            .species = SPECIES_TRUMBEAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3274
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3272
            .ability = ABILITY_SKILL_LINK,
#line 3273
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3275
                MOVE_FURY_ATTACK,
                MOVE_PLUCK,
                MOVE_ROOST,
                MOVE_SCREECH,
            },
            },
        },
    },
#line 3280
    [TRAINER_PBL_DEWEY] =
    {
#line 3281
        .trainerName = _("Dewey"),
#line 3282
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3283
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 3284
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3286
        .doubleBattle = FALSE,
#line 3285
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3287
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3289
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3292
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3290
            .ability = ABILITY_WATER_ABSORB,
#line 3291
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3293
                MOVE_PIN_MISSILE,
                MOVE_PAYBACK,
                MOVE_GRASS_WHISTLE,
                MOVE_NEEDLE_ARM,
            },
            },
            {
#line 3298
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3301
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3299
            .ability = ABILITY_INTIMIDATE,
#line 3300
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3302
                MOVE_FEINT_ATTACK,
                MOVE_BRICK_BREAK,
                MOVE_TORMENT,
                MOVE_SWAGGER,
            },
            },
            {
#line 3307
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3310
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3308
            .ability = ABILITY_HYPER_CUTTER,
#line 3309
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3311
                MOVE_FEINT_ATTACK,
                MOVE_BULLDOZE,
                MOVE_FLAIL,
                MOVE_LASER_FOCUS,
            },
            },
            {
#line 3316
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3319
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3317
            .ability = ABILITY_STURDY,
#line 3318
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3320
                MOVE_BUG_BITE,
                MOVE_SLASH,
                MOVE_KNOCK_OFF,
                MOVE_ROCK_BLAST,
            },
            },
        },
    },
#line 3325
    [TRAINER_PBL_ERNEST] =
    {
#line 3326
        .trainerName = _("Ernest"),
#line 3327
        .trainerClass = TRAINER_CLASS_HIKER,
#line 3328
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 3329
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3331
        .doubleBattle = FALSE,
#line 3330
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3332
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3334
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3337
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3335
            .ability = ABILITY_SAND_FORCE,
#line 3336
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3338
                MOVE_FURY_SWIPES,
                MOVE_METAL_CLAW,
                MOVE_SLASH,
                MOVE_DIG,
            },
            },
            {
#line 3343
            .species = SPECIES_CUFANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3346
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3344
            .ability = ABILITY_SHEER_FORCE,
#line 3345
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3347
                MOVE_BULLDOZE,
                MOVE_SLAM,
                MOVE_DIG,
                MOVE_WHIRLWIND,
            },
            },
            {
#line 3352
            .species = SPECIES_SILICOBRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3355
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3353
            .ability = ABILITY_SHED_SKIN,
#line 3354
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3356
                MOVE_SAND_TOMB,
                MOVE_HEADBUTT,
                MOVE_BULLDOZE,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 3361
            .species = SPECIES_SANDYGAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3364
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3362
            .ability = ABILITY_WATER_COMPACTION,
#line 3363
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3365
                MOVE_HYPNOSIS,
                MOVE_MEGA_DRAIN,
                MOVE_BULLDOZE,
                MOVE_ANCIENT_POWER,
            },
            },
        },
    },
#line 3370
    [TRAINER_PBL_KYLE] =
    {
#line 3371
        .trainerName = _("Kyle"),
#line 3372
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 3373
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 3374
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3376
        .doubleBattle = FALSE,
#line 3375
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3377
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3379
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3382
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3380
            .ability = ABILITY_GUTS,
#line 3381
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3383
                MOVE_SMACK_DOWN,
                MOVE_SCREECH,
                MOVE_PAYBACK,
                MOVE_CHIP_AWAY,
            },
            },
            {
#line 3388
            .species = SPECIES_RIOLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3391
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3389
            .ability = ABILITY_STEADFAST,
#line 3390
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3392
                MOVE_FORCE_PALM,
                MOVE_COUNTER,
                MOVE_BULLET_PUNCH,
                MOVE_VACUUM_WAVE,
            },
            },
            {
#line 3397
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3400
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3398
            .ability = ABILITY_MOLD_BREAKER,
#line 3399
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3401
                MOVE_TAUNT,
                MOVE_BREAKING_SWIPE,
                MOVE_FOCUS_ENERGY,
                MOVE_SLASH,
            },
            },
            {
#line 3406
            .species = SPECIES_LARVESTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3409
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3407
            .ability = ABILITY_FLAME_BODY,
#line 3408
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3410
                MOVE_ABSORB,
                MOVE_FLAME_CHARGE,
                MOVE_STRUGGLE_BUG,
                MOVE_FLAME_WHEEL,
            },
            },
        },
    },
#line 3415
    [TRAINER_PBL_ELIAS] =
    {
#line 3416
        .trainerName = _("Elias"),
#line 3417
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 3418
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 3419
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3421
        .doubleBattle = FALSE,
#line 3420
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3422
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3424
            .species = SPECIES_GOOMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3427
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3425
            .ability = ABILITY_SAP_SIPPER,
#line 3426
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3428
                MOVE_DRAGON_BREATH,
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_LIFE_DEW,
            },
            },
            {
#line 3433
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3436
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3434
            .ability = ABILITY_ROCK_HEAD,
#line 3435
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3437
                MOVE_HEADBUTT,
                MOVE_DRAGON_BREATH,
                MOVE_SCARY_FACE,
                MOVE_FIRE_FANG,
            },
            },
            {
#line 3442
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3445
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3443
            .ability = ABILITY_SHED_SKIN,
#line 3444
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3446
                MOVE_THUNDER_WAVE,
                MOVE_WATER_PULSE,
                MOVE_DRAGON_BREATH,
                MOVE_SLAM,
            },
            },
            {
#line 3451
            .species = SPECIES_JANGMO_O,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3454
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3452
            .ability = ABILITY_SOUNDPROOF,
#line 3453
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3455
                MOVE_SCARY_FACE,
                MOVE_HEADBUTT,
                MOVE_SCREECH,
                MOVE_DRAGON_TAIL,
            },
            },
        },
    },
#line 3460
    [TRAINER_PBL_PEARLIE] =
    {
#line 3461
        .trainerName = _("Pearlie"),
#line 3462
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 3463
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 3464
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3466
        .doubleBattle = FALSE,
#line 3465
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3467
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3469
            .species = SPECIES_PASSIMIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3472
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3470
            .ability = ABILITY_RECEIVER,
#line 3471
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3473
                MOVE_FEINT,
                MOVE_VITAL_THROW,
                MOVE_SCARY_FACE,
                MOVE_TAKE_DOWN,
            },
            },
        },
    },
#line 3478
    [TRAINER_PBL_SUSAN] =
    {
#line 3479
        .trainerName = _("Susan"),
#line 3480
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 3481
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 3482
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3484
        .doubleBattle = FALSE,
#line 3483
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3485
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3487
            .species = SPECIES_ORANGURU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3490
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3488
            .ability = ABILITY_SYMBIOSIS,
#line 3489
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3491
                MOVE_PSYCH_UP,
                MOVE_EXTRASENSORY,
                MOVE_INSTRUCT,
                MOVE_AFTER_YOU,
            },
            },
        },
    },
#line 3496
    [TRAINER_PBL_CONRAD] =
    {
#line 3497
        .trainerName = _("Ernest"),
#line 3498
        .trainerClass = TRAINER_CLASS_HIKER,
#line 3499
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 3500
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3502
        .doubleBattle = FALSE,
#line 3501
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3503
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3505
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3508
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3506
            .ability = ABILITY_STURDY,
#line 3507
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3509
                MOVE_METAL_SOUND,
                MOVE_METAL_CLAW,
                MOVE_ROCK_TOMB,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 3514
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3515
            .ability = ABILITY_SAND_FORCE,
#line 3516
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3518
                MOVE_SAND_TOMB,
                MOVE_DIG,
                MOVE_TAKE_DOWN,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 3523
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3524
            .ability = ABILITY_INTIMIDATE,
#line 3525
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3527
                MOVE_SCARY_FACE,
                MOVE_DIG,
                MOVE_ASSURANCE,
                MOVE_ROCK_CLIMB,
            },
            },
            {
#line 3532
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3535
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3533
            .ability = ABILITY_ROCK_HEAD,
#line 3534
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3536
                MOVE_HORN_ATTACK,
                MOVE_SMACK_DOWN,
                MOVE_BULLDOZE,
                MOVE_TAKE_DOWN,
            },
            },
        },
    },
#line 3541
    [TRAINER_PBL_BRETT] =
    {
#line 3542
        .trainerName = _("Brett"),
#line 3543
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3544
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3545
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3547
        .doubleBattle = FALSE,
#line 3546
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3548
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3550
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3553
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3551
            .ability = ABILITY_LIQUID_OOZE,
#line 3552
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3554
                MOVE_ACID_SPRAY,
                MOVE_TICKLE,
                MOVE_HAZE,
                MOVE_BRINE,
            },
            },
            {
#line 3559
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3562
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3560
            .ability = ABILITY_VOLT_ABSORB,
#line 3561
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3563
                MOVE_CONFUSE_RAY,
                MOVE_BUBBLE_BEAM,
                MOVE_THUNDER_WAVE,
                MOVE_SHOCK_WAVE,
            },
            },
            {
#line 3568
            .species = SPECIES_BINACLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3571
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3569
            .ability = ABILITY_TOUGH_CLAWS,
#line 3570
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3572
                MOVE_FURY_CUTTER,
                MOVE_ANCIENT_POWER,
                MOVE_RAZOR_SHELL,
                MOVE_SLASH,
            },
            },
            {
#line 3577
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3578
            .ability = ABILITY_HYPER_CUTTER,
#line 3579
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3581
                MOVE_AQUA_JET,
                MOVE_CHIP_AWAY,
                MOVE_BUBBLE_BEAM,
                MOVE_RAZOR_SHELL,
            },
            },
        },
    },
#line 3586
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9] =
    {
#line 3587
        .trainerName = _("Adamina"),
#line 3588
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 3589
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 3590
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3592
        .doubleBattle = FALSE,
#line 3591
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3594
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 3593
        .randomLead = FALSE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3596
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3596
            .heldItem = ITEM_HARD_STONE,
#line 3599
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3597
            .ability = ABILITY_ANGER_SHELL,
#line 3598
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3600
                MOVE_ROCK_TOMB,
                MOVE_BULLDOZE,
                MOVE_KNOCK_OFF,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 3605
            .species = SPECIES_BRAIXEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3605
            .heldItem = ITEM_CHARCOAL,
#line 3608
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3606
            .ability = ABILITY_MAGIC_GUARD,
#line 3607
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3609
                MOVE_INCINERATE,
                MOVE_PSYBEAM,
                MOVE_SHOCK_WAVE,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 3614
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3614
            .heldItem = ITEM_BLACK_GLASSES,
#line 3617
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3615
            .ability = ABILITY_OVERCOAT,
#line 3616
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3618
                MOVE_PLUCK,
                MOVE_FEINT_ATTACK,
                MOVE_ROOST,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3623
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3623
            .heldItem = ITEM_MIRACLE_SEED,
#line 3626
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3624
            .ability = ABILITY_SAND_RUSH,
#line 3625
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3627
                MOVE_MEGA_DRAIN,
                MOVE_PIN_MISSILE,
                MOVE_BOUNCE,
                MOVE_GROWTH,
            },
            },
            {
#line 3632
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3632
            .heldItem = ITEM_SITRUS_BERRY,
#line 3635
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3633
            .ability = ABILITY_SAND_RUSH,
#line 3634
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3636
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
                MOVE_AERIAL_ACE,
                MOVE_COVET,
            },
            },
        },
    },
#line 3641
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9_CHALLENGE] =
    {
#line 3642
        .trainerName = _("Adamina"),
#line 3643
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 3644
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 3645
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3647
        .doubleBattle = FALSE,
#line 3646
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3649
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 3648
        .randomLead = FALSE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3651
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3651
            .heldItem = ITEM_HARD_STONE,
#line 3654
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3652
            .ability = ABILITY_ANGER_SHELL,
#line 3653
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3655
                MOVE_ROCK_TOMB,
                MOVE_BULLDOZE,
                MOVE_KNOCK_OFF,
                MOVE_STEALTH_ROCK,
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
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3664
                MOVE_INCINERATE,
                MOVE_PSYBEAM,
                MOVE_SHOCK_WAVE,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 3669
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3669
            .heldItem = ITEM_BLACK_GLASSES,
#line 3672
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3670
            .ability = ABILITY_OVERCOAT,
#line 3671
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3673
                MOVE_PLUCK,
                MOVE_FEINT_ATTACK,
                MOVE_ROOST,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3678
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3678
            .heldItem = ITEM_MIRACLE_SEED,
#line 3681
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3679
            .ability = ABILITY_SAND_RUSH,
#line 3680
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3682
                MOVE_MEGA_DRAIN,
                MOVE_PIN_MISSILE,
                MOVE_BOUNCE,
                MOVE_GROWTH,
            },
            },
            {
#line 3687
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3687
            .heldItem = ITEM_SITRUS_BERRY,
#line 3690
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3688
            .ability = ABILITY_MAGIC_GUARD,
#line 3689
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3691
                MOVE_PSYBEAM,
                MOVE_AIR_CUTTER,
                MOVE_ANCIENT_POWER,
                MOVE_ROOST,
            },
            },
            {
#line 3696
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3696
            .heldItem = ITEM_SITRUS_BERRY,
#line 3699
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3697
            .ability = ABILITY_SAND_RUSH,
#line 3698
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3700
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
                MOVE_AERIAL_ACE,
                MOVE_COVET,
            },
            },
        },
    },
#line 3705
    [TRAINER_PBL_JEANETTE] =
    {
#line 3706
        .trainerName = _("Jeanette"),
#line 3707
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 3708
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 3709
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3711
        .doubleBattle = FALSE,
#line 3710
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3712
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3714
            .species = SPECIES_GASTLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3717
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3715
            .ability = ABILITY_LEVITATE,
#line 3716
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3718
                MOVE_CLEAR_SMOG,
                MOVE_HEX,
                MOVE_HAZE,
                MOVE_SCARY_FACE,
            },
            },
            {
#line 3723
            .species = SPECIES_FRILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3724
            .ability = ABILITY_CURSED_BODY,
#line 3725
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3727
                MOVE_BUBBLE_BEAM,
                MOVE_WHIRLPOOL,
                MOVE_HEX,
                MOVE_RECOVER,
            },
            },
            {
#line 3732
            .species = SPECIES_HONEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3735
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3733
            .ability = ABILITY_NO_GUARD,
#line 3734
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3736
                MOVE_SHADOW_SNEAK,
                MOVE_METAL_SOUND,
                MOVE_RETALIATE,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 3741
            .species = SPECIES_GREAVARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3744
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3742
            .ability = ABILITY_FLUFFY,
#line 3743
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3745
                MOVE_SHADOW_SNEAK,
                MOVE_YAWN,
                MOVE_HEADBUTT,
                MOVE_DIG,
            },
            },
        },
    },
#line 3750
    [TRAINER_PBL_EMMA_AND_LEO] =
    {
#line 3751
        .trainerName = _("Emma&Leo"),
#line 3752
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 3753
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 3754
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3756
        .doubleBattle = TRUE,
#line 3755
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3757
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3759
            .species = SPECIES_VOLBEAT,
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
                MOVE_SHOCK_WAVE,
                MOVE_ENCORE,
                MOVE_MOONLIGHT,
                MOVE_SIGNAL_BEAM,
            },
            },
            {
#line 3768
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3771
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3769
            .ability = ABILITY_PRANKSTER,
#line 3770
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3772
                MOVE_COVET,
                MOVE_ENCORE,
                MOVE_MOONLIGHT,
                MOVE_SIGNAL_BEAM,
            },
            },
            {
#line 3777
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3780
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3778
            .ability = ABILITY_EARLY_BIRD,
#line 3779
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3781
                MOVE_FEINT_ATTACK,
                MOVE_DEFOG,
                MOVE_MEGA_DRAIN,
                MOVE_BEAT_UP,
            },
            },
            {
#line 3786
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3787
            .ability = ABILITY_RAIN_DISH,
#line 3788
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3790
                MOVE_BUBBLE_BEAM,
                MOVE_MEGA_DRAIN,
                MOVE_TICKLE,
                MOVE_SYNTHESIS,
            },
            },
        },
    },
#line 3795
    [TRAINER_PBL_JOEL] =
    {
#line 3796
        .trainerName = _("Joel"),
#line 3797
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3798
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3799
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3801
        .doubleBattle = FALSE,
#line 3800
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3802
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3804
            .species = SPECIES_BRONZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3807
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3805
            .ability = ABILITY_LEVITATE,
#line 3806
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3808
                MOVE_IMPRISON,
                MOVE_FEINT_ATTACK,
                MOVE_METAL_SOUND,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 3813
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3816
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3814
            .ability = ABILITY_IRON_FIST,
#line 3815
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3817
                MOVE_MAGNITUDE,
                MOVE_CURSE,
                MOVE_SHADOW_PUNCH,
                MOVE_STOMPING_TANTRUM,
            },
            },
            {
#line 3822
            .species = SPECIES_POLTCHAGEIST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3825
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3823
            .ability = ABILITY_HOSPITALITY,
#line 3824
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3826
                MOVE_LIFE_DEW,
                MOVE_MEGA_DRAIN,
                MOVE_HEX,
                MOVE_FOUL_PLAY,
            },
            },
            {
#line 3831
            .species = SPECIES_INKAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3832
            .ability = ABILITY_CONTRARY,
#line 3833
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3835
                MOVE_SLASH,
                MOVE_PLUCK,
                MOVE_PSYBEAM,
                MOVE_SWITCHEROO,
            },
            },
        },
    },
#line 3840
    [TRAINER_PBL_MARION] =
    {
#line 3841
        .trainerName = _("Marion"),
#line 3842
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3843
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3844
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3846
        .doubleBattle = FALSE,
#line 3845
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3847
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3849
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3852
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3850
            .ability = ABILITY_LEVITATE,
#line 3851
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3853
                MOVE_NIGHT_SHADE,
                MOVE_CONFUSE_RAY,
                MOVE_CURSE,
                MOVE_HEX,
            },
            },
            {
#line 3858
            .species = SPECIES_SINISTEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3861
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3859
            .ability = ABILITY_CURSED_BODY,
#line 3860
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3862
                MOVE_NIGHT_SHADE,
                MOVE_SUCKER_PUNCH,
                MOVE_HEX,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 3867
            .species = SPECIES_ELGYEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3870
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3868
            .ability = ABILITY_SYNCHRONIZE,
#line 3869
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3871
                MOVE_PSYBEAM,
                MOVE_TELEPORT,
                MOVE_COSMIC_POWER,
                MOVE_RECOVER,
            },
            },
            {
#line 3876
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3877
            .ability = ABILITY_FLAME_BODY,
#line 3878
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3880
                MOVE_IMPRISON,
                MOVE_HEX,
                MOVE_FLAME_BURST,
                MOVE_WILL_O_WISP,
            },
            },
        },
    },
#line 3885
    [TRAINER_PBL_REGINA] =
    {
#line 3886
        .trainerName = _("Regina"),
#line 3887
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 3888
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 3889
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3891
        .doubleBattle = FALSE,
#line 3890
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3892
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3894
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3897
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3895
            .ability = ABILITY_LEVITATE,
#line 3896
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3898
                MOVE_CURSE,
                MOVE_HEX,
                MOVE_PSYBEAM,
                MOVE_OMINOUS_WIND,
            },
            },
            {
#line 3903
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3906
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3904
            .ability = ABILITY_CURSED_BODY,
#line 3905
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3907
                MOVE_SHADOW_SNEAK,
                MOVE_SNATCH,
                MOVE_OMINOUS_WIND,
                MOVE_TRICK,
            },
            },
            {
#line 3912
            .species = SPECIES_GIMMIGHOUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3915
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3913
            .ability = ABILITY_RATTLED,
#line 3914
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3916
                MOVE_ASTONISH,
                MOVE_TACKLE,
            },
            },
            {
#line 3919
            .species = SPECIES_BRAMBLIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3922
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3920
            .ability = ABILITY_WIND_RIDER,
#line 3921
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3923
                MOVE_LEECH_SEED,
                MOVE_SHADOW_SNEAK,
                MOVE_MEGA_DRAIN,
                MOVE_HEX,
            },
            },
        },
    },
#line 3928
    [TRAINER_PBL_NEWTON_LEVIATHAN_10] =
    {
#line 3929
        .trainerName = _("Newton"),
#line 3930
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 3931
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .encounterMusic_gender =
#line 3932
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3934
        .doubleBattle = TRUE,
#line 3933
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3936
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 3935
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3938
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3941
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3939
            .ability = ABILITY_FRIEND_GUARD,
#line 3940
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3942
                MOVE_GRAVITY,
                MOVE_DRAINING_KISS,
                MOVE_MOONLIGHT,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3947
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3950
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3948
            .ability = ABILITY_INTIMIDATE,
#line 3949
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3951
                MOVE_STOMP,
                MOVE_DOUBLE_KICK,
                MOVE_HYPNOSIS,
                MOVE_PSYSHIELD_BASH,
            },
            },
            {
#line 3956
            .species = SPECIES_STONJOURNER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3959
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3957
            .ability = ABILITY_POWER_SPOT,
#line 3958
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3960
                MOVE_GRAVITY,
                MOVE_ROCK_TOMB,
                MOVE_WIDE_GUARD,
                MOVE_MEGA_KICK,
            },
            },
            {
#line 3965
            .species = SPECIES_FLAPPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3965
            .heldItem = ITEM_SITRUS_BERRY,
#line 3968
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3966
            .ability = ABILITY_HUSTLE,
#line 3967
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3969
                MOVE_GRAV_APPLE,
                MOVE_ACROBATICS,
                MOVE_ROOST,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 3974
    [TRAINER_PBL_NEWTON_LEVIATHAN_10_CHALLENGE] =
    {
#line 3975
        .trainerName = _("Newton"),
#line 3976
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 3977
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .encounterMusic_gender =
#line 3978
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3980
        .doubleBattle = TRUE,
#line 3979
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3982
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 3981
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3984
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3984
            .heldItem = ITEM_EVIOLITE,
#line 3987
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3985
            .ability = ABILITY_FRIEND_GUARD,
#line 3986
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3988
                MOVE_GRAVITY,
                MOVE_DRAINING_KISS,
                MOVE_MOONLIGHT,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3993
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3993
            .heldItem = ITEM_EVIOLITE,
#line 3996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3994
            .ability = ABILITY_INTIMIDATE,
#line 3995
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3997
                MOVE_STOMP,
                MOVE_DOUBLE_KICK,
                MOVE_HYPNOSIS,
                MOVE_PSYSHIELD_BASH,
            },
            },
            {
#line 4002
            .species = SPECIES_STONJOURNER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4002
            .heldItem = ITEM_SITRUS_BERRY,
#line 4005
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4003
            .ability = ABILITY_POWER_SPOT,
#line 4004
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4006
                MOVE_GRAVITY,
                MOVE_ROCK_TOMB,
                MOVE_WIDE_GUARD,
                MOVE_MEGA_KICK,
            },
            },
            {
#line 4011
            .species = SPECIES_FLAPPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4011
            .heldItem = ITEM_SITRUS_BERRY,
#line 4015
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4012
            .ability = ABILITY_HUSTLE,
#line 4014
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 4013
            .teraType = TYPE_DRAGON,
            .moves = {
#line 4016
                MOVE_GRAV_APPLE,
                MOVE_ACROBATICS,
                MOVE_ROOST,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 4021
    [TRAINER_PBL_ESSENCE] =
    {
#line 4022
        .trainerName = _("Essence"),
#line 4023
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 4024
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 4025
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4027
        .doubleBattle = FALSE,
#line 4026
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4028
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4030
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4032
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4031
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4034
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4036
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4035
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4038
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4040
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4039
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4042
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4044
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4043
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4046
    [TRAINER_PBL_DOLORES] =
    {
#line 4047
        .trainerName = _("Dolores"),
#line 4048
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 4049
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 4050
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4052
        .doubleBattle = FALSE,
#line 4051
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4053
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4055
            .species = SPECIES_SNOVER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4057
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4056
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4059
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4061
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4060
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4063
            .species = SPECIES_CUBCHOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4065
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4064
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4067
            .species = SPECIES_SNORUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4069
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4068
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4071
    [TRAINER_PBL_GENIE] =
    {
#line 4072
        .trainerName = _("Genie"),
#line 4073
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4074
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 4075
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4077
        .doubleBattle = FALSE,
#line 4076
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4078
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4080
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4082
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4081
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4084
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4086
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4085
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4088
            .species = SPECIES_PAWMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4090
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4089
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4092
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4094
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4093
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4096
    [TRAINER_PBL_ABIGAIL] =
    {
#line 4097
        .trainerName = _("Abigail"),
#line 4098
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4099
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4100
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4102
        .doubleBattle = FALSE,
#line 4101
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4103
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4105
            .species = SPECIES_GLIMMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4107
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4106
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4109
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4111
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4110
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4113
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4115
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4114
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4117
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4119
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4118
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4121
    [TRAINER_PBL_FEDERICO] =
    {
#line 4122
        .trainerName = _("Federico"),
#line 4123
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4124
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4125
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4127
        .doubleBattle = FALSE,
#line 4126
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4128
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4130
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4132
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4131
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4134
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4136
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4135
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4138
            .species = SPECIES_MAREANIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4140
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4139
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4142
            .species = SPECIES_MANTYKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4144
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4143
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4147
    [TRAINER_PBL_ROMULUS] =
    {
#line 4148
        .trainerName = _("Romulus"),
#line 4149
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 4150
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 4151
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4153
        .doubleBattle = FALSE,
#line 4152
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4154
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4156
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4158
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4157
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4160
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4161
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4164
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4166
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4165
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4169
    [TRAINER_PBL_JULIE] =
    {
#line 4170
        .trainerName = _("Julie"),
#line 4171
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 4172
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 4173
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4175
        .doubleBattle = FALSE,
#line 4174
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4176
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4178
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4180
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4179
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4182
            .species = SPECIES_CLAUNCHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4184
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4183
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4186
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4187
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4190
    [TRAINER_PBL_HILDA] =
    {
#line 4191
        .trainerName = _("Hilda"),
#line 4192
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4193
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4194
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4196
        .doubleBattle = FALSE,
#line 4195
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4197
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4199
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4201
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4200
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4203
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4205
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4204
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4207
            .species = SPECIES_SKRELP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4209
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4208
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4211
            .species = SPECIES_FINIZEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4213
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4212
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4215
    [TRAINER_PBL_TREVOR] =
    {
#line 4216
        .trainerName = _("Trevor"),
#line 4217
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 4218
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 4219
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4221
        .doubleBattle = FALSE,
#line 4220
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4222
        .randomLead = TRUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4224
            .species = SPECIES_TOGEPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4225
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4228
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4229
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4232
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4234
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4233
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4236
            .species = SPECIES_SMOOCHUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4237
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4240
            .species = SPECIES_ELEKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4242
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4241
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4244
            .species = SPECIES_MAGBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4246
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4245
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4248
    [TRAINER_PBL_RUFUS] =
    {
#line 4249
        .trainerName = _("Rufus"),
#line 4250
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 4251
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 4252
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4254
        .doubleBattle = FALSE,
#line 4253
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4255
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4257
            .species = SPECIES_FRIGIBAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4259
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4258
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4261
            .species = SPECIES_DREEPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4263
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4262
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4265
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4267
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4266
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4269
            .species = SPECIES_ZORUA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4271
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4270
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4273
    [TRAINER_PBL_KINLEY] =
    {
#line 4274
        .trainerName = _("Kinley"),
#line 4275
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 4276
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 4277
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 4279
        .doubleBattle = FALSE,
#line 4278
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4280
        .randomLead = TRUE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4282
            .species = SPECIES_HERDIER,
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
            .species = SPECIES_LUXIO,
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
            .species = SPECIES_CROCONAW,
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
            .species = SPECIES_RABOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4296
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4295
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4298
            .species = SPECIES_FLORAGATO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4300
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4299
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4302
    [TRAINER_PBL_REID] =
    {
#line 4303
        .trainerName = _("Reid"),
#line 4304
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 4305
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 4306
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4308
        .doubleBattle = FALSE,
#line 4307
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4309
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4311
            .species = SPECIES_DOTTLER,
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
            .species = SPECIES_WHIRLIPEDE,
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
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4321
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4320
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4323
    [TRAINER_PBL_DECLAN_LEVIATHAN_11] =
    {
#line 4324
        .trainerName = _("Declan"),
#line 4325
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 4326
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 4327
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4329
        .doubleBattle = FALSE,
#line 4328
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4331
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 4330
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4333
            .species = SPECIES_ARIADOS,
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
            .species = SPECIES_LEDIAN,
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
            .species = SPECIES_RABSCA,
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
            .species = SPECIES_LURANTIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4347
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4346
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4349
    [TRAINER_PBL_DECLAN_LEVIATHAN_11_CHALLENGE] =
    {
#line 4350
        .trainerName = _("Declan"),
#line 4351
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 4352
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 4353
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4355
        .doubleBattle = FALSE,
#line 4354
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 4357
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 4356
        .randomLead = FALSE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4359
            .species = SPECIES_ARIADOS,
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
            .species = SPECIES_LEDIAN,
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
            .species = SPECIES_RABSCA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4369
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4368
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4371
            .species = SPECIES_LURANTIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4373
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4372
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4375
            .species = SPECIES_LOKIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4377
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4376
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4379
    [TRAINER_PBL_VIOLET] =
    {
#line 4380
        .trainerName = _("STEVEN"),
#line 4381
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4382
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4384
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4386
            .species = SPECIES_QWILFISH,
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
            .species = SPECIES_TANGELA,
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
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4396
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4395
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4398
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4400
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4399
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4402
    [TRAINER_PBL_WANDA] =
    {
#line 4403
        .trainerName = _("STEVEN"),
#line 4404
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4405
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4407
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4409
            .species = SPECIES_TRANQUILL,
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
            .species = SPECIES_POLIWHIRL,
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
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4418
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4421
            .species = SPECIES_WEEPINBELL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4423
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4422
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4425
    [TRAINER_PBL_AMBER_AND_KIM] =
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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4432
            .species = SPECIES_BASCULIN,
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
            .species = SPECIES_KIRLIA,
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
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4442
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4441
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4444
            .species = SPECIES_DOLLIV,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4446
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4445
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4448
    [TRAINER_PBL_JAN_AND_ERIN] =
    {
#line 4449
        .trainerName = _("STEVEN"),
#line 4450
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4451
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4453
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4455
            .species = SPECIES_FURFROU_STAR_TRIM,
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
            .species = SPECIES_FURFROU_HEART_TRIM,
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
            .species = SPECIES_FURFROU_DANDY_TRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4465
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4464
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4467
            .species = SPECIES_FURFROU_DEBUTANTE_TRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4469
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4468
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4471
    [TRAINER_PBL_STEVE] =
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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4478
            .species = SPECIES_MAWILE,
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
            .species = SPECIES_SABLEYE,
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
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4488
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4487
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4490
            .species = SPECIES_NIDORINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4492
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4491
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4494
    [TRAINER_PBL_GOULD] =
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
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4501
            .species = SPECIES_CRANIDOS,
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
            .species = SPECIES_SHIELDON,
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
            .species = SPECIES_LILEEP,
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
            .species = SPECIES_ANORITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4515
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4514
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4517
            .species = SPECIES_ARCHEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4519
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4518
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4521
    [TRAINER_PBL_MENDEL] =
    {
#line 4522
        .trainerName = _("STEVEN"),
#line 4523
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4524
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4526
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4528
            .species = SPECIES_OMANYTE,
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
            .species = SPECIES_KABUTO,
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
            .species = SPECIES_TYRUNT,
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
            .species = SPECIES_AMAURA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4542
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4541
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4544
            .species = SPECIES_TIRTOUGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4545
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4548
    [TRAINER_PBL_DARWIN] =
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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4555
            .species = SPECIES_COMFEY,
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
            .species = SPECIES_KOMALA,
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
            .species = SPECIES_FLOETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4565
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4564
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4567
            .species = SPECIES_CHARJABUG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4569
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4568
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4571
    [TRAINER_PBL_JENNY_LEVIATHAN_11] =
    {
#line 4572
        .trainerName = _("STEVEN"),
#line 4573
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4574
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4576
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4578
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4582
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4581
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4580
            .lvl = 42,
#line 4579
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4583
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4588
    [TRAINER_PBL_JENNY_LEVIATHAN_11_CHALLENGE] =
    {
#line 4589
        .trainerName = _("STEVEN"),
#line 4590
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4591
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4593
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4595
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4599
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4598
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4597
            .lvl = 42,
#line 4596
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4600
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4605
    [TRAINER_PBL_BART] =
    {
#line 4606
        .trainerName = _("STEVEN"),
#line 4607
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4608
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4610
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4612
            .species = SPECIES_SOLROCK,
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
            .species = SPECIES_LUNATONE,
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
            .species = SPECIES_TOGEDEMARU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4622
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4621
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4624
            .species = SPECIES_WISHIWASHI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4626
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4625
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4628
    [TRAINER_PBL_NIGEL] =
    {
#line 4629
        .trainerName = _("STEVEN"),
#line 4630
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4631
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4633
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4635
            .species = SPECIES_CARKOL,
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
            .species = SPECIES_KECLEON,
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
            .species = SPECIES_CARBINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4645
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4644
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4647
            .species = SPECIES_BOLDORE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4649
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4648
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4651
    [TRAINER_PBL_LOLA] =
    {
#line 4652
        .trainerName = _("STEVEN"),
#line 4653
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4654
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4656
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4658
            .species = SPECIES_CORVISQUIRE,
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
            .species = SPECIES_KADABRA,
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
            .species = SPECIES_MARSHTOMP,
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
            .species = SPECIES_SERVINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4672
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4671
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4674
            .species = SPECIES_MONFERNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4676
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4675
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4678
    [TRAINER_PBL_CHARLIE] =
    {
#line 4679
        .trainerName = _("STEVEN"),
#line 4680
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4681
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4683
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4685
            .species = SPECIES_PIDGEOTTO,
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
            .species = SPECIES_PIGNITE,
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
            .species = SPECIES_QUAXWELL,
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
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4699
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4698
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4701
            .species = SPECIES_GROTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4703
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4702
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4705
    [TRAINER_PBL_RANDOLPH] =
    {
#line 4706
        .trainerName = _("STEVEN"),
#line 4707
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4708
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4710
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4712
            .species = SPECIES_VIGOROTH,
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
            .species = SPECIES_FLAAFFY,
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
            .species = SPECIES_QUILAVA,
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
            .species = SPECIES_BRIONNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4725
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4728
            .species = SPECIES_IVYSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4730
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4729
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4732
    [TRAINER_PBL_TODD] =
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
    [TRAINER_PBL_RUSSELL] =
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
    [TRAINER_PBL_OTIS] =
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
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12] =
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
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12_CHALLENGE] =
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
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13] =
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
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13_CHALLENGE] =
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
    [TRAINER_PBL_IONA] =
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
    [TRAINER_PBL_BERKE] =
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
    [TRAINER_PBL_TANISHA] =
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
    [TRAINER_PBL_ROBERT] =
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
    [TRAINER_PBL_CHRIS] =
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
    [TRAINER_PBL_ANGUS] =
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
    [TRAINER_PBL_LILY_LEVIATHAN_14] =
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
    [TRAINER_PBL_LILY_LEVIATHAN_14_CHALLENGE] =
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
    [TRAINER_PBL_AXLE] =
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
    [TRAINER_PBL_RAFAEL] =
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
    [TRAINER_PBL_GEORGINA] =
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
#line 5038
    [TRAINER_PBL_MIA_LEVIATHAN_15] =
    {
#line 5039
        .trainerName = _("STEVEN"),
#line 5040
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5041
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5043
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5045
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5049
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5048
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5047
            .lvl = 42,
#line 5046
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5050
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5055
    [TRAINER_PBL_MIA_LEVIATHAN_15_CHALLENGE] =
    {
#line 5056
        .trainerName = _("STEVEN"),
#line 5057
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5058
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5060
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5062
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5066
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5065
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5064
            .lvl = 42,
#line 5063
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5067
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5072
    [TRAINER_PBL_DORIS] =
    {
#line 5073
        .trainerName = _("STEVEN"),
#line 5074
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5075
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5077
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5079
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5083
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5082
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5081
            .lvl = 42,
#line 5080
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5084
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5089
    [TRAINER_PBL_HOMER] =
    {
#line 5090
        .trainerName = _("STEVEN"),
#line 5091
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5092
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5094
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5096
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5100
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5099
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5098
            .lvl = 42,
#line 5097
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5101
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5106
    [TRAINER_PBL_JOHN] =
    {
#line 5107
        .trainerName = _("STEVEN"),
#line 5108
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5109
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5111
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5113
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5117
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5116
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5115
            .lvl = 42,
#line 5114
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5118
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5123
    [TRAINER_PBL_GLENN] =
    {
#line 5124
        .trainerName = _("STEVEN"),
#line 5125
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5126
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5128
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5130
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5134
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5133
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5132
            .lvl = 42,
#line 5131
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5135
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5140
    [TRAINER_PBL_JAY] =
    {
#line 5141
        .trainerName = _("STEVEN"),
#line 5142
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5143
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5145
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5147
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5151
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5150
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5149
            .lvl = 42,
#line 5148
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5152
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5157
    [TRAINER_PBL_TYLER] =
    {
#line 5158
        .trainerName = _("STEVEN"),
#line 5159
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5160
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5162
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5164
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5168
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5167
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5166
            .lvl = 42,
#line 5165
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5169
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5174
    [TRAINER_PBL_TERRENCE] =
    {
#line 5175
        .trainerName = _("STEVEN"),
#line 5176
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5177
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5179
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5181
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5185
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5184
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5183
            .lvl = 42,
#line 5182
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5186
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5191
    [TRAINER_PBL_MARTY] =
    {
#line 5192
        .trainerName = _("STEVEN"),
#line 5193
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5194
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5196
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5198
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5202
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5201
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5200
            .lvl = 42,
#line 5199
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5203
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5208
    [TRAINER_PBL_KARI] =
    {
#line 5209
        .trainerName = _("STEVEN"),
#line 5210
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5211
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5213
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5215
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5219
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5218
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5217
            .lvl = 42,
#line 5216
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5220
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5225
    [TRAINER_PBL_ABRAHAM] =
    {
#line 5226
        .trainerName = _("STEVEN"),
#line 5227
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5228
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5230
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5232
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5236
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5235
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5234
            .lvl = 42,
#line 5233
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5237
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5242
    [TRAINER_PBL_MELINDA] =
    {
#line 5243
        .trainerName = _("STEVEN"),
#line 5244
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5245
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5247
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5249
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5253
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5251
            .lvl = 42,
#line 5250
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5254
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5259
    [TRAINER_PBL_EMILIO] =
    {
#line 5260
        .trainerName = _("STEVEN"),
#line 5261
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5262
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5264
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5266
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5270
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5269
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5268
            .lvl = 42,
#line 5267
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5271
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5276
    [TRAINER_PBL_REX] =
    {
#line 5277
        .trainerName = _("STEVEN"),
#line 5278
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5279
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5281
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5283
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5287
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5286
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5285
            .lvl = 42,
#line 5284
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5288
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5293
    [TRAINER_PBL_LOUIS] =
    {
#line 5294
        .trainerName = _("STEVEN"),
#line 5295
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5296
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5298
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5300
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5304
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5303
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5302
            .lvl = 42,
#line 5301
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5305
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5310
    [TRAINER_PBL_LEROY] =
    {
#line 5311
        .trainerName = _("STEVEN"),
#line 5312
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5313
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5315
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5317
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5321
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5320
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5319
            .lvl = 42,
#line 5318
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5322
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5327
    [TRAINER_PBL_ELTON] =
    {
#line 5328
        .trainerName = _("STEVEN"),
#line 5329
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5330
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5332
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5334
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5338
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5337
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5336
            .lvl = 42,
#line 5335
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5339
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5344
    [TRAINER_PBL_WILLIE] =
    {
#line 5345
        .trainerName = _("STEVEN"),
#line 5346
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5347
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5349
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5351
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5355
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5354
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5353
            .lvl = 42,
#line 5352
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5356
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5361
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16] =
    {
#line 5362
        .trainerName = _("STEVEN"),
#line 5363
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5364
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5366
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5368
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5372
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5371
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5370
            .lvl = 42,
#line 5369
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5373
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5378
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16_CHALLENGE] =
    {
#line 5379
        .trainerName = _("STEVEN"),
#line 5380
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5381
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5383
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5385
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5389
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5388
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5387
            .lvl = 42,
#line 5386
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5390
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5395
    [TRAINER_PBL_PIRATE_1] =
    {
#line 5396
        .trainerName = _("STEVEN"),
#line 5397
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5398
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5400
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5402
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5406
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5405
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5404
            .lvl = 42,
#line 5403
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5407
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5412
    [TRAINER_PBL_PIRATE_2] =
    {
#line 5413
        .trainerName = _("STEVEN"),
#line 5414
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5415
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5417
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5419
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5423
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5422
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5421
            .lvl = 42,
#line 5420
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5424
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5429
    [TRAINER_PBL_PIRATE_3] =
    {
#line 5430
        .trainerName = _("STEVEN"),
#line 5431
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5432
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5434
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5436
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5440
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5439
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5438
            .lvl = 42,
#line 5437
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5441
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5446
    [TRAINER_PBL_PIRATE_4] =
    {
#line 5447
        .trainerName = _("STEVEN"),
#line 5448
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5449
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5451
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5453
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5457
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5456
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5455
            .lvl = 42,
#line 5454
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5458
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5463
    [TRAINER_PBL_SHAWN] =
    {
#line 5464
        .trainerName = _("STEVEN"),
#line 5465
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5466
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5468
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5470
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5474
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5473
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5472
            .lvl = 42,
#line 5471
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5475
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5480
    [TRAINER_PBL_FERNANDO] =
    {
#line 5481
        .trainerName = _("STEVEN"),
#line 5482
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5483
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5485
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5487
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5491
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5490
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5489
            .lvl = 42,
#line 5488
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5492
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5497
    [TRAINER_PBL_KANE] =
    {
#line 5498
        .trainerName = _("STEVEN"),
#line 5499
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5500
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5502
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5504
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5508
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5507
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5506
            .lvl = 42,
#line 5505
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5509
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5514
    [TRAINER_PBL_KIRK] =
    {
#line 5515
        .trainerName = _("STEVEN"),
#line 5516
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5517
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5519
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5521
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5525
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5524
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5523
            .lvl = 42,
#line 5522
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5526
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5531
    [TRAINER_PBL_DALTON] =
    {
#line 5532
        .trainerName = _("STEVEN"),
#line 5533
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5534
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5536
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5538
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5542
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5541
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5540
            .lvl = 42,
#line 5539
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5543
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5548
    [TRAINER_PBL_LEE] =
    {
#line 5549
        .trainerName = _("STEVEN"),
#line 5550
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5551
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5553
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5555
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5559
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5558
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5557
            .lvl = 42,
#line 5556
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5560
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5565
    [TRAINER_PBL_BLANCHE] =
    {
#line 5566
        .trainerName = _("STEVEN"),
#line 5567
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5568
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5570
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5572
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5576
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5575
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5574
            .lvl = 42,
#line 5573
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5577
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5582
    [TRAINER_PBL_TROY] =
    {
#line 5583
        .trainerName = _("STEVEN"),
#line 5584
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5585
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5587
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5589
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5593
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5592
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5591
            .lvl = 42,
#line 5590
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5594
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5599
    [TRAINER_PBL_ABED] =
    {
#line 5600
        .trainerName = _("STEVEN"),
#line 5601
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5602
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5604
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5606
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5610
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5609
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5608
            .lvl = 42,
#line 5607
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5611
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5616
    [TRAINER_PBL_TROY_BRUTAL] =
    {
#line 5617
        .trainerName = _("STEVEN"),
#line 5618
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5619
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5621
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5623
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5627
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5626
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5625
            .lvl = 42,
#line 5624
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5628
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5633
    [TRAINER_PBL_ABED_BRUTAL] =
    {
#line 5634
        .trainerName = _("STEVEN"),
#line 5635
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5636
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5638
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5640
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5644
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5643
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5642
            .lvl = 42,
#line 5641
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5645
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5650
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17] =
    {
#line 5651
        .trainerName = _("STEVEN"),
#line 5652
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5653
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5655
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5657
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5661
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5660
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5659
            .lvl = 42,
#line 5658
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5662
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5667
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17_CHALLENGE] =
    {
#line 5668
        .trainerName = _("STEVEN"),
#line 5669
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5670
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5672
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5674
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5678
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5677
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5676
            .lvl = 42,
#line 5675
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5679
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5684
    [TRAINER_PBL_ANITA] =
    {
#line 5685
        .trainerName = _("STEVEN"),
#line 5686
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5687
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5689
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5691
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5695
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5694
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5693
            .lvl = 42,
#line 5692
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5696
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5701
    [TRAINER_PBL_DESIREE] =
    {
#line 5702
        .trainerName = _("STEVEN"),
#line 5703
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5704
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5706
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5708
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5712
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5711
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5710
            .lvl = 42,
#line 5709
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5713
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5718
    [TRAINER_PBL_HOWARD] =
    {
#line 5719
        .trainerName = _("STEVEN"),
#line 5720
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5721
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5723
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5725
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5729
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5728
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5727
            .lvl = 42,
#line 5726
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5730
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5735
    [TRAINER_PBL_ELOISE] =
    {
#line 5736
        .trainerName = _("STEVEN"),
#line 5737
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5738
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5740
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5742
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5746
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5745
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5744
            .lvl = 42,
#line 5743
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5747
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5752
    [TRAINER_PBL_ALLY_AND_EMMY] =
    {
#line 5753
        .trainerName = _("STEVEN"),
#line 5754
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5755
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5757
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5759
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5763
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5762
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5761
            .lvl = 42,
#line 5760
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5764
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5769
    [TRAINER_PBL_AMIR] =
    {
#line 5770
        .trainerName = _("STEVEN"),
#line 5771
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5772
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5774
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5776
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5780
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5779
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5778
            .lvl = 42,
#line 5777
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5781
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5786
    [TRAINER_PBL_GETHIN] =
    {
#line 5787
        .trainerName = _("STEVEN"),
#line 5788
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5789
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5791
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5793
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5797
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5796
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5795
            .lvl = 42,
#line 5794
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5798
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5803
    [TRAINER_PBL_BERNARD] =
    {
#line 5804
        .trainerName = _("STEVEN"),
#line 5805
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5806
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5808
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5810
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5814
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5813
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5812
            .lvl = 42,
#line 5811
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5815
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5820
    [TRAINER_PBL_ELLIE] =
    {
#line 5821
        .trainerName = _("STEVEN"),
#line 5822
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5823
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5825
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5827
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5831
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5830
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5829
            .lvl = 42,
#line 5828
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5832
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5837
    [TRAINER_PBL_RUSTY] =
    {
#line 5838
        .trainerName = _("STEVEN"),
#line 5839
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5840
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5842
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5844
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5848
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5847
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5846
            .lvl = 42,
#line 5845
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5849
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5854
    [TRAINER_PBL_CODY] =
    {
#line 5855
        .trainerName = _("STEVEN"),
#line 5856
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5857
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5859
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5861
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5865
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5864
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5863
            .lvl = 42,
#line 5862
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5866
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5871
    [TRAINER_PBL_LEWIS] =
    {
#line 5872
        .trainerName = _("STEVEN"),
#line 5873
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5874
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5876
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5878
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5882
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5881
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5880
            .lvl = 42,
#line 5879
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5883
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5888
    [TRAINER_PBL_CORNELIUS] =
    {
#line 5889
        .trainerName = _("STEVEN"),
#line 5890
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5891
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5893
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5895
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5899
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5898
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5897
            .lvl = 42,
#line 5896
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5900
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5905
    [TRAINER_PBL_INEZ_AND_EMMA] =
    {
#line 5906
        .trainerName = _("STEVEN"),
#line 5907
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5908
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5910
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5912
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5916
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5915
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5914
            .lvl = 42,
#line 5913
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5917
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5922
    [TRAINER_PBL_HELEN] =
    {
#line 5923
        .trainerName = _("STEVEN"),
#line 5924
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5925
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5927
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5929
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5933
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5932
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5931
            .lvl = 42,
#line 5930
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5934
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5939
    [TRAINER_PBL_WESLEY] =
    {
#line 5940
        .trainerName = _("STEVEN"),
#line 5941
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5942
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5944
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5946
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5950
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5949
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5948
            .lvl = 42,
#line 5947
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5951
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5956
    [TRAINER_PBL_ALFREDO] =
    {
#line 5957
        .trainerName = _("STEVEN"),
#line 5958
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5959
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5961
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5963
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5967
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5966
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5965
            .lvl = 42,
#line 5964
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5968
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5973
    [TRAINER_PBL_IAN] =
    {
#line 5974
        .trainerName = _("STEVEN"),
#line 5975
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5976
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5978
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5980
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5984
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5983
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5982
            .lvl = 42,
#line 5981
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5985
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5990
    [TRAINER_PBL_AUDREY] =
    {
#line 5991
        .trainerName = _("STEVEN"),
#line 5992
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5993
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5995
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5997
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6001
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6000
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5999
            .lvl = 42,
#line 5998
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6002
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6007
    [TRAINER_PBL_LEVIATHAN13] =
    {
#line 6008
        .trainerName = _("STEVEN"),
#line 6009
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6010
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6012
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6014
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6018
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6016
            .lvl = 42,
#line 6015
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6019
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6024
    [TRAINER_PBL_EDGARDO] =
    {
#line 6025
        .trainerName = _("STEVEN"),
#line 6026
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6027
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6029
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6031
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6035
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6034
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6033
            .lvl = 42,
#line 6032
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6036
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6041
    [TRAINER_PBL_JEAN] =
    {
#line 6042
        .trainerName = _("STEVEN"),
#line 6043
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6044
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6046
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6048
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6052
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6051
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6050
            .lvl = 42,
#line 6049
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6053
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6058
    [TRAINER_PBL_ROSE] =
    {
#line 6059
        .trainerName = _("STEVEN"),
#line 6060
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6061
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6063
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6065
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6069
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6068
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6067
            .lvl = 42,
#line 6066
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6070
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6075
    [TRAINER_PBL_JENNIFER] =
    {
#line 6076
        .trainerName = _("STEVEN"),
#line 6077
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6078
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6080
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6082
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6086
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6085
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6084
            .lvl = 42,
#line 6083
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6087
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6092
    [TRAINER_PBL_MATTHEW] =
    {
#line 6093
        .trainerName = _("STEVEN"),
#line 6094
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6095
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6097
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6099
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6103
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6102
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6101
            .lvl = 42,
#line 6100
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6104
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6109
    [TRAINER_PBL_KERRY] =
    {
#line 6110
        .trainerName = _("STEVEN"),
#line 6111
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6112
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6114
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6116
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6120
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6119
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6118
            .lvl = 42,
#line 6117
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6121
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6126
    [TRAINER_PBL_ANNIE] =
    {
#line 6127
        .trainerName = _("STEVEN"),
#line 6128
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6129
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6131
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6133
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6137
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6136
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6135
            .lvl = 42,
#line 6134
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6138
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6143
    [TRAINER_PBL_CHRISTI] =
    {
#line 6144
        .trainerName = _("STEVEN"),
#line 6145
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6146
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6148
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6150
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6154
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6153
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6152
            .lvl = 42,
#line 6151
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6155
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6160
    [TRAINER_PBL_SPENCER] =
    {
#line 6161
        .trainerName = _("STEVEN"),
#line 6162
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6163
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6165
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6167
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6171
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6170
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6169
            .lvl = 42,
#line 6168
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6172
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6177
    [TRAINER_PBL_HAYWOOD] =
    {
#line 6178
        .trainerName = _("STEVEN"),
#line 6179
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6180
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6182
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6184
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6188
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6187
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6186
            .lvl = 42,
#line 6185
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6189
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6194
    [TRAINER_PBL_MONROE] =
    {
#line 6195
        .trainerName = _("STEVEN"),
#line 6196
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6197
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6199
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6201
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6205
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6204
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6203
            .lvl = 42,
#line 6202
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6206
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6211
    [TRAINER_PBL_DAVID] =
    {
#line 6212
        .trainerName = _("STEVEN"),
#line 6213
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6214
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6216
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6218
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6222
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6221
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6220
            .lvl = 42,
#line 6219
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6223
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6228
    [TRAINER_PBL_DOMINIK] =
    {
#line 6229
        .trainerName = _("STEVEN"),
#line 6230
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6231
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6233
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6235
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6239
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6238
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6237
            .lvl = 42,
#line 6236
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6240
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6245
    [TRAINER_PBL_DOUGLAS] =
    {
#line 6246
        .trainerName = _("STEVEN"),
#line 6247
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6248
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6250
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6252
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6256
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6255
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6254
            .lvl = 42,
#line 6253
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6257
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6262
    [TRAINER_PBL_NADINE] =
    {
#line 6263
        .trainerName = _("STEVEN"),
#line 6264
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6265
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6267
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6269
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6273
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6272
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6271
            .lvl = 42,
#line 6270
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6274
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6279
    [TRAINER_PBL_SANDY] =
    {
#line 6280
        .trainerName = _("STEVEN"),
#line 6281
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6282
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6284
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6286
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6290
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6289
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6288
            .lvl = 42,
#line 6287
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6291
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6296
    [TRAINER_PBL_SHELDON] =
    {
#line 6297
        .trainerName = _("STEVEN"),
#line 6298
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6299
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6301
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6303
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6307
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6306
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6305
            .lvl = 42,
#line 6304
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6308
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6313
    [TRAINER_PBL_LEVIATHAN14] =
    {
#line 6314
        .trainerName = _("STEVEN"),
#line 6315
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6316
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6318
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6320
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6324
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6323
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6322
            .lvl = 42,
#line 6321
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6325
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6330
    [TRAINER_PBL_LEVIATHAN12_BRUTAL] =
    {
#line 6331
        .trainerName = _("STEVEN"),
#line 6332
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6333
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6335
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6337
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6341
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6340
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6339
            .lvl = 42,
#line 6338
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6342
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6347
    [TRAINER_PBL_LEVIATHAN13_BRUTAL] =
    {
#line 6348
        .trainerName = _("STEVEN"),
#line 6349
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6350
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6352
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6354
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6358
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6357
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6356
            .lvl = 42,
#line 6355
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6359
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6364
    [TRAINER_PBL_LEVIATHAN14_BRUTAL] =
    {
#line 6365
        .trainerName = _("STEVEN"),
#line 6366
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6367
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6369
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6371
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6375
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6374
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6373
            .lvl = 42,
#line 6372
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6376
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6381
    [TRAINER_PBL_LEVIATHAN12] =
    {
#line 6382
        .trainerName = _("STEVEN"),
#line 6383
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6384
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6386
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6388
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6392
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6391
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6390
            .lvl = 42,
#line 6389
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6393
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
