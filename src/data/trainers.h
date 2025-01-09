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
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1361
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1359
            .ability = ABILITY_LEAF_GUARD,
#line 1360
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1362
                MOVE_POISON_POWDER,
                MOVE_SLEEP_POWDER,
                MOVE_MEGA_DRAIN,
                MOVE_HELPING_HAND,
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
            .species = SPECIES_ROCKRUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1747
            .ability = ABILITY_VITAL_SPIRIT,
#line 1748
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1750
                MOVE_ROCK_THROW,
                MOVE_BITE,
                MOVE_ROAR,
                MOVE_ROCK_TOMB,
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
#line 2241
    [TRAINER_PBL_PETER] =
    {
#line 2242
        .trainerName = _("Peter"),
#line 2243
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 2244
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 2245
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2247
        .doubleBattle = FALSE,
#line 2246
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2248
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2250
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2253
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2251
            .ability = ABILITY_CHLOROPHYLL,
#line 2252
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2254
                MOVE_CLEAR_SMOG,
                MOVE_RAZOR_LEAF,
                MOVE_ACID_SPRAY,
                MOVE_MAGICAL_LEAF,
            },
            },
            {
#line 2259
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2262
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2260
            .ability = ABILITY_SWIFT_SWIM,
#line 2261
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2263
                MOVE_STRUGGLE_BUG,
                MOVE_BUBBLE_BEAM,
                MOVE_PSYBEAM,
                MOVE_SIGNAL_BEAM,
            },
            },
        },
    },
#line 2268
    [TRAINER_PBL_WHITAKER] =
    {
#line 2269
        .trainerName = _("Whitaker"),
#line 2270
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 2271
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 2272
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 2274
        .doubleBattle = FALSE,
#line 2273
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2275
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2277
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2280
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2278
            .ability = ABILITY_SNIPER,
#line 2279
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2281
                MOVE_FURY_ATTACK,
                MOVE_QUICK_ATTACK,
                MOVE_WING_ATTACK,
                MOVE_PURSUIT,
            },
            },
            {
#line 2286
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2289
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2287
            .ability = ABILITY_MAGIC_BOUNCE,
#line 2288
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2290
                MOVE_NIGHT_SHADE,
                MOVE_REFRESH,
                MOVE_AIR_CUTTER,
                MOVE_OMINOUS_WIND,
            },
            },
            {
#line 2295
            .species = SPECIES_FLITTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2296
            .ability = ABILITY_FRISK,
#line 2297
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2299
                MOVE_DISARMING_VOICE,
                MOVE_BABY_DOLL_EYES,
                MOVE_PSYBEAM,
                MOVE_PLUCK,
            },
            },
            {
#line 2304
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2307
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2305
            .ability = ABILITY_SUPER_LUCK,
#line 2306
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2308
                MOVE_AERIAL_ACE,
                MOVE_QUICK_ATTACK,
                MOVE_FEATHER_DANCE,
                MOVE_AIR_CUTTER,
            },
            },
        },
    },
#line 2313
    [TRAINER_PBL_BETTY_LEVIATHAN_7] =
    {
#line 2314
        .trainerName = _("Betty"),
#line 2315
        .trainerClass = TRAINER_CLASS_LADY,
#line 2316
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 2317
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2319
        .doubleBattle = TRUE,
#line 2318
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2321
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2320
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2323
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2323
            .heldItem = ITEM_SITRUS_BERRY,
#line 2326
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2324
            .ability = ABILITY_BERSERK,
#line 2325
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2327
                MOVE_AIR_CUTTER,
                MOVE_STRUGGLE_BUG,
                MOVE_MEGA_DRAIN,
                MOVE_STRING_SHOT,
            },
            },
            {
#line 2332
            .species = SPECIES_DEDENNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2332
            .heldItem = ITEM_SITRUS_BERRY,
#line 2335
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2333
            .ability = ABILITY_CHEEK_POUCH,
#line 2334
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2336
                MOVE_SHOCK_WAVE,
                MOVE_DRAINING_KISS,
                MOVE_NUZZLE,
                MOVE_CHARGE_BEAM,
            },
            },
        },
    },
#line 2341
    [TRAINER_PBL_BETTY_LEVIATHAN_7_CHALLENGE] =
    {
#line 2342
        .trainerName = _("Betty"),
#line 2343
        .trainerClass = TRAINER_CLASS_LADY,
#line 2344
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 2345
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2347
        .doubleBattle = TRUE,
#line 2346
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 2349
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2348
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2351
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2351
            .heldItem = ITEM_SITRUS_BERRY,
#line 2354
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2352
            .ability = ABILITY_BERSERK,
#line 2353
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2355
                MOVE_AIR_CUTTER,
                MOVE_STRUGGLE_BUG,
                MOVE_MEGA_DRAIN,
                MOVE_STRING_SHOT,
            },
            },
            {
#line 2360
            .species = SPECIES_DEDENNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2360
            .heldItem = ITEM_SITRUS_BERRY,
#line 2363
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2361
            .ability = ABILITY_CHEEK_POUCH,
#line 2362
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2364
                MOVE_SHOCK_WAVE,
                MOVE_DRAINING_KISS,
                MOVE_NUZZLE,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 2369
            .species = SPECIES_DRAMPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2369
            .heldItem = ITEM_SITRUS_BERRY,
#line 2372
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2370
            .ability = ABILITY_BERSERK,
#line 2371
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2373
                MOVE_DRAGON_BREATH,
                MOVE_GLARE,
                MOVE_NATURAL_GIFT,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 2378
    [TRAINER_PBL_JIMMY] =
    {
#line 2379
        .trainerName = _("Jimmy"),
#line 2380
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 2381
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 2382
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2384
        .doubleBattle = FALSE,
#line 2383
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2385
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2387
            .species = SPECIES_NOIBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2390
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2388
            .ability = ABILITY_INFILTRATOR,
#line 2389
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2391
                MOVE_WING_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_BITE,
                MOVE_ROOST,
            },
            },
            {
#line 2396
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2399
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2397
            .ability = ABILITY_SWIFT_SWIM,
#line 2398
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2400
                MOVE_SPLASH,
                MOVE_TACKLE,
                MOVE_FLAIL,
            },
            },
            {
#line 2404
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2407
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2405
            .ability = ABILITY_CLEAR_BODY,
#line 2406
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2408
                MOVE_TACKLE,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 2411
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2414
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2412
            .ability = ABILITY_SAND_VEIL,
#line 2413
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2415
                MOVE_METAL_CLAW,
                MOVE_DRAGON_BREATH,
                MOVE_BITE,
                MOVE_BULLDOZE,
            },
            },
        },
    },
#line 2420
    [TRAINER_PBL_EMILIANO] =
    {
#line 2421
        .trainerName = _("Emiliano"),
#line 2422
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2423
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 2424
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2426
        .doubleBattle = FALSE,
#line 2425
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2427
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2429
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2432
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2430
            .ability = ABILITY_STURDY,
#line 2431
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2433
                MOVE_SMACK_DOWN,
                MOVE_SAND_TOMB,
                MOVE_SCREECH,
                MOVE_SLAM,
            },
            },
            {
#line 2438
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2441
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2439
            .ability = ABILITY_STURDY,
#line 2440
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2442
                MOVE_SMACK_DOWN,
                MOVE_MUD_SLAP,
                MOVE_MAGNITUDE,
                MOVE_HEADBUTT,
            },
            },
            {
#line 2447
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2450
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2448
            .ability = ABILITY_STURDY,
#line 2449
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2451
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_MAGNITUDE,
                MOVE_ROCK_BLAST,
            },
            },
            {
#line 2456
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2459
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2457
            .ability = ABILITY_NO_GUARD,
#line 2458
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2460
                MOVE_SEISMIC_TOSS,
                MOVE_LOW_SWEEP,
                MOVE_STRENGTH,
                MOVE_VITAL_THROW,
            },
            },
        },
    },
#line 2465
    [TRAINER_PBL_BECKHAM] =
    {
#line 2466
        .trainerName = _("Beckham"),
#line 2467
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2468
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2469
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2471
        .doubleBattle = FALSE,
#line 2470
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2472
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2474
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2477
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2475
            .ability = ABILITY_OWN_TEMPO,
#line 2476
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2478
                MOVE_YAWN,
                MOVE_DISABLE,
                MOVE_CONFUSION,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 2483
            .species = SPECIES_SALANDIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2486
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2484
            .ability = ABILITY_CORROSION,
#line 2485
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2487
                MOVE_MUD_SLAP,
                MOVE_FAKE_OUT,
                MOVE_POISON_FANG,
                MOVE_INCINERATE,
            },
            },
            {
#line 2492
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2495
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2493
            .ability = ABILITY_BATTLE_ARMOR,
#line 2494
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2496
                MOVE_BONE_CLUB,
                MOVE_FOCUS_ENERGY,
                MOVE_DOUBLE_KICK,
                MOVE_BONE_RUSH,
            },
            },
            {
#line 2501
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2502
            .ability = ABILITY_UNAWARE,
#line 2503
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2505
                MOVE_DISABLE,
                MOVE_STOMP,
                MOVE_WRAP,
                MOVE_MAGNITUDE,
            },
            },
        },
    },
#line 2510
    [TRAINER_PBL_KAREN] =
    {
#line 2511
        .trainerName = _("Karen"),
#line 2512
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 2513
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 2514
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2516
        .doubleBattle = FALSE,
#line 2515
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2517
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2519
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2520
            .ability = ABILITY_CONTRARY,
#line 2521
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2523
                MOVE_SMELLING_SALTS,
                MOVE_FEINT_ATTACK,
                MOVE_PSYBEAM,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 2528
    [TRAINER_PBL_JAYDEN] =
    {
#line 2529
        .trainerName = _("Jayden"),
#line 2530
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2531
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 2532
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2534
        .doubleBattle = FALSE,
#line 2533
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2535
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2537
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2540
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2538
            .ability = ABILITY_STURDY,
#line 2539
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2541
                MOVE_ROLLOUT,
                MOVE_MAGNITUDE,
                MOVE_SMACK_DOWN,
                MOVE_BULLDOZE,
            },
            },
            {
#line 2546
            .species = SPECIES_ROLYCOLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2549
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2547
            .ability = ABILITY_STEAM_ENGINE,
#line 2548
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2550
                MOVE_SMACK_DOWN,
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_INCINERATE,
            },
            },
            {
#line 2555
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2558
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2556
            .ability = ABILITY_PURIFYING_SALT,
#line 2557
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2559
                MOVE_MUD_SHOT,
                MOVE_HEADBUTT,
                MOVE_SMACK_DOWN,
                MOVE_RECOVER,
            },
            },
            {
#line 2564
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2565
            .ability = ABILITY_SOLID_ROCK,
#line 2566
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2568
                MOVE_STRUGGLE_BUG,
                MOVE_ACID,
                MOVE_ROCK_THROW,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 2573
    [TRAINER_PBL_NEIL] =
    {
#line 2574
        .trainerName = _("Neil"),
#line 2575
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 2576
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 2577
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2579
        .doubleBattle = FALSE,
#line 2578
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2580
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2582
            .species = SPECIES_RELLOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2585
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2583
            .ability = ABILITY_COMPOUND_EYES,
#line 2584
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2586
                MOVE_STRUGGLE_BUG,
                MOVE_MUD_SHOT,
                MOVE_BUG_BITE,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 2591
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2594
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2592
            .ability = ABILITY_LEVITATE,
#line 2593
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2595
                MOVE_ROCK_TOMB,
                MOVE_RAPID_SPIN,
                MOVE_ANCIENT_POWER,
                MOVE_PSYBEAM,
            },
            },
            {
#line 2600
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2601
            .ability = ABILITY_MUMMY,
#line 2602
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2604
                MOVE_IMPRISON,
                MOVE_HEX,
                MOVE_CURSE,
                MOVE_FAKE_TEARS,
            },
            },
            {
#line 2609
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2612
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2610
            .ability = ABILITY_PLUS,
#line 2611
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2613
                MOVE_CHARGE,
                MOVE_METAL_SOUND,
                MOVE_SCREECH,
                MOVE_MIRROR_SHOT,
            },
            },
        },
    },
#line 2618
    [TRAINER_PBL_TAMARA] =
    {
#line 2619
        .trainerName = _("Tamara"),
#line 2620
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 2621
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 2622
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2624
        .doubleBattle = FALSE,
#line 2623
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2625
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2627
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2630
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2628
            .ability = ABILITY_STORM_DRAIN,
#line 2629
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2631
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_HIDDEN_POWER,
                MOVE_SLUDGE,
            },
            },
            {
#line 2636
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2639
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2637
            .ability = ABILITY_SERENE_GRACE,
#line 2638
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2640
                MOVE_HEART_STAMP,
                MOVE_FLATTER,
                MOVE_ASSURANCE,
                MOVE_AIR_CUTTER,
            },
            },
            {
#line 2645
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2648
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2646
            .ability = ABILITY_INSOMNIA,
#line 2647
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2649
                MOVE_POISON_GAS,
                MOVE_HEADBUTT,
                MOVE_WAKE_UP_SLAP,
                MOVE_PSYBEAM,
            },
            },
            {
#line 2654
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2657
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2655
            .ability = ABILITY_UNNERVE,
#line 2656
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2658
                MOVE_POISON_STING,
                MOVE_FEINT_ATTACK,
                MOVE_STRUGGLE_BUG,
                MOVE_ELECTROWEB,
            },
            },
        },
    },
#line 2663
    [TRAINER_PBL_ALISTAIR_LEVIATHAN_8] =
    {
#line 2664
        .trainerName = _("Alistair"),
#line 2665
        .trainerClass = TRAINER_CLASS_ROUGHNECK,
#line 2666
        .trainerPic = TRAINER_PIC_ROUGHNECK,
        .encounterMusic_gender =
#line 2667
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2669
        .doubleBattle = FALSE,
#line 2668
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2671
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2670
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2673
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2673
            .heldItem = ITEM_POISON_BARB,
#line 2676
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2674
            .ability = ABILITY_POISON_TOUCH,
#line 2675
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2677
                MOVE_SLUDGE,
                MOVE_POISON_GAS,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2682
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2682
            .heldItem = ITEM_SHARP_BEAK,
#line 2685
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2683
            .ability = ABILITY_AFTERMATH,
#line 2684
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2686
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_DEFOG,
            },
            },
            {
#line 2691
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2691
            .heldItem = ITEM_BLACK_BELT,
#line 2694
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2692
            .ability = ABILITY_POISON_TOUCH,
#line 2693
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2695
                MOVE_VENOSHOCK,
                MOVE_VACUUM_WAVE,
                MOVE_FAKE_OUT,
                MOVE_THIEF,
            },
            },
            {
#line 2700
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2700
            .heldItem = ITEM_SITRUS_BERRY,
#line 2703
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2701
            .ability = ABILITY_STRONG_JAW,
#line 2702
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2704
                MOVE_BITE,
                MOVE_THUNDER_FANG,
                MOVE_FIRE_FANG,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 2709
    [TRAINER_PBL_ALISTAIR_LEVIATHAN_8_CHALLENGE] =
    {
#line 2710
        .trainerName = _("Alistair"),
#line 2711
        .trainerClass = TRAINER_CLASS_ROUGHNECK,
#line 2712
        .trainerPic = TRAINER_PIC_ROUGHNECK,
        .encounterMusic_gender =
#line 2713
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2715
        .doubleBattle = FALSE,
#line 2714
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 2717
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2716
        .randomLead = FALSE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2719
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2719
            .heldItem = ITEM_POISON_BARB,
#line 2722
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2720
            .ability = ABILITY_POISON_TOUCH,
#line 2721
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2723
                MOVE_SLUDGE,
                MOVE_POISON_GAS,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2728
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2728
            .heldItem = ITEM_SHARP_BEAK,
#line 2731
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2729
            .ability = ABILITY_AFTERMATH,
#line 2730
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2732
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_DEFOG,
            },
            },
            {
#line 2737
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2737
            .heldItem = ITEM_BLACK_BELT,
#line 2740
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2738
            .ability = ABILITY_POISON_TOUCH,
#line 2739
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2741
                MOVE_VENOSHOCK,
                MOVE_VACUUM_WAVE,
                MOVE_FAKE_OUT,
                MOVE_THIEF,
            },
            },
            {
#line 2746
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2746
            .heldItem = ITEM_SITRUS_BERRY,
#line 2749
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2747
            .ability = ABILITY_STRONG_JAW,
#line 2748
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2750
                MOVE_BITE,
                MOVE_THUNDER_FANG,
                MOVE_FIRE_FANG,
                MOVE_ICE_FANG,
            },
            },
            {
#line 2755
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2755
            .heldItem = ITEM_EVIOLITE,
#line 2758
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2756
            .ability = ABILITY_SAP_SIPPER,
#line 2757
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2759
                MOVE_DOUBLE_HIT,
                MOVE_PSYBEAM,
                MOVE_CHARGE_BEAM,
                MOVE_TRAILBLAZE,
            },
            },
        },
    },
#line 2764
    [TRAINER_PBL_COOPER] =
    {
#line 2765
        .trainerName = _("Cooper"),
#line 2766
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 2767
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 2768
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2770
        .doubleBattle = FALSE,
#line 2769
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2771
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2773
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2774
            .ability = ABILITY_EFFECT_SPORE,
#line 2775
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2777
                MOVE_GASTRO_ACID,
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 2782
            .species = SPECIES_SKORUPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2783
            .ability = ABILITY_SNIPER,
#line 2784
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2786
                MOVE_POISON_FANG,
                MOVE_BUG_BITE,
                MOVE_FEINT_ATTACK,
                MOVE_HONE_CLAWS,
            },
            },
            {
#line 2791
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2792
            .ability = ABILITY_LEVITATE,
#line 2793
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2795
                MOVE_SLUDGE,
                MOVE_STOCKPILE,
                MOVE_SPIT_UP,
                MOVE_SWALLOW,
            },
            },
            {
#line 2800
            .species = SPECIES_VENONAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2803
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2801
            .ability = ABILITY_COMPOUND_EYES,
#line 2802
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2804
                MOVE_STRUGGLE_BUG,
                MOVE_POISON_POWDER,
                MOVE_PSYBEAM,
                MOVE_STUN_SPORE,
            },
            },
        },
    },
#line 2809
    [TRAINER_PBL_CARMINE] =
    {
#line 2810
        .trainerName = _("Carmine"),
#line 2811
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 2812
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 2813
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2815
        .doubleBattle = FALSE,
#line 2814
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2816
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2818
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2821
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2819
            .ability = ABILITY_MOTOR_DRIVE,
#line 2820
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2822
                MOVE_SHOCK_WAVE,
                MOVE_CHARGE_BEAM,
                MOVE_AERIAL_ACE,
                MOVE_ENCORE,
            },
            },
        },
    },
#line 2827
    [TRAINER_PBL_JONATHAN] =
    {
#line 2828
        .trainerName = _("Jonathan"),
#line 2829
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 2830
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 2831
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2833
        .doubleBattle = FALSE,
#line 2832
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2834
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2836
            .species = SPECIES_NYMBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2839
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2837
            .ability = ABILITY_SWARM,
#line 2838
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2840
                MOVE_DOUBLE_KICK,
                MOVE_SCREECH,
                MOVE_BUG_BITE,
                MOVE_FEINT,
            },
            },
            {
#line 2845
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2848
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2846
            .ability = ABILITY_STURDY,
#line 2847
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2849
                MOVE_BUG_BITE,
                MOVE_PAYBACK,
                MOVE_RAPID_SPIN,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 2854
            .species = SPECIES_SHELMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2857
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2855
            .ability = ABILITY_SHELL_ARMOR,
#line 2856
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2858
                MOVE_MUD_SLAP,
                MOVE_STRUGGLE_BUG,
                MOVE_MEGA_DRAIN,
                MOVE_RECOVER,
            },
            },
            {
#line 2863
            .species = SPECIES_KARRABLAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2866
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2864
            .ability = ABILITY_SWARM,
#line 2865
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2867
                MOVE_FEINT_ATTACK,
                MOVE_BUG_BITE,
                MOVE_SLASH,
                MOVE_RECOVER,
            },
            },
        },
    },
#line 2872
    [TRAINER_PBL_CALVIN] =
    {
#line 2873
        .trainerName = _("Calvin"),
#line 2874
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 2875
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 2876
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2878
        .doubleBattle = FALSE,
#line 2877
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2879
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2881
            .species = SPECIES_ARROKUDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2884
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2882
            .ability = ABILITY_PROPELLER_TAIL,
#line 2883
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2885
                MOVE_AQUA_JET,
                MOVE_BITE,
                MOVE_FOCUS_ENERGY,
                MOVE_LASER_FOCUS,
            },
            },
            {
#line 2890
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2893
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2891
            .ability = ABILITY_WATER_ABSORB,
#line 2892
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2894
                MOVE_MUD_SHOT,
                MOVE_BUBBLE_BEAM,
                MOVE_ENDEAVOR,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 2899
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2902
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2900
            .ability = ABILITY_SNIPER,
#line 2901
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2903
                MOVE_FOCUS_ENERGY,
                MOVE_BUBBLE_BEAM,
                MOVE_PSYBEAM,
                MOVE_AURORA_BEAM,
            },
            },
            {
#line 2908
            .species = SPECIES_TYMPOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2911
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2909
            .ability = ABILITY_WATER_ABSORB,
#line 2910
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2912
                MOVE_UPROAR,
                MOVE_BUBBLE_BEAM,
                MOVE_MUD_BOMB,
                MOVE_AQUA_RING,
            },
            },
        },
    },
#line 2917
    [TRAINER_PBL_LUIS] =
    {
#line 2918
        .trainerName = _("Luis"),
#line 2919
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 2920
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 2921
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2923
        .doubleBattle = FALSE,
#line 2922
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2924
        .randomLead = TRUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2926
            .species = SPECIES_CHARCADET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2929
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2927
            .ability = ABILITY_FLASH_FIRE,
#line 2928
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2930
                MOVE_NIGHT_SHADE,
                MOVE_INCINERATE,
                MOVE_WILL_O_WISP,
                MOVE_FLAME_CHARGE,
            },
            },
            {
#line 2935
            .species = SPECIES_CAPSAKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2938
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2936
            .ability = ABILITY_CHLOROPHYLL,
#line 2937
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2939
                MOVE_LEECH_SEED,
                MOVE_RAZOR_LEAF,
                MOVE_WORRY_SEED,
                MOVE_HEADBUTT,
            },
            },
            {
#line 2944
            .species = SPECIES_WIMPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2947
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2945
            .ability = ABILITY_WIMP_OUT,
#line 2946
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2948
                MOVE_STRUGGLE_BUG,
                MOVE_SAND_ATTACK,
                MOVE_HARDEN,
                MOVE_AQUA_JET,
            },
            },
            {
#line 2953
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2956
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2954
            .ability = ABILITY_LEVITATE,
#line 2955
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2957
                MOVE_TACKLE,
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 2962
            .species = SPECIES_SNOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2965
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2963
            .ability = ABILITY_ICE_SCALES,
#line 2964
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2966
                MOVE_STRUGGLE_BUG,
                MOVE_POWDER_SNOW,
                MOVE_MIRROR_COAT,
                MOVE_FAIRY_WIND,
            },
            },
            {
#line 2971
            .species = SPECIES_TOXEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2974
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2972
            .ability = ABILITY_STATIC,
#line 2973
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2975
                MOVE_GROWL,
                MOVE_ACID,
                MOVE_NUZZLE,
                MOVE_TEARFUL_LOOK,
            },
            },
        },
    },
#line 2980
    [TRAINER_PBL_ARI] =
    {
#line 2981
        .trainerName = _("Ari"),
#line 2982
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 2983
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2984
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2986
        .doubleBattle = FALSE,
#line 2985
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2987
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2989
            .species = SPECIES_TANDEMAUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2992
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2990
            .ability = ABILITY_PICKUP,
#line 2991
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2993
                MOVE_SUPER_FANG,
            },
            },
            {
#line 2995
            .species = SPECIES_TADBULB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2998
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2996
            .ability = ABILITY_STATIC,
#line 2997
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2999
                MOVE_PARABOLIC_CHARGE,
            },
            },
            {
#line 3001
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3004
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3002
            .ability = ABILITY_RUN_AWAY,
#line 3003
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3005
                MOVE_DOUBLE_HIT,
            },
            },
        },
    },
#line 3007
    [TRAINER_PBL_BERTHA] =
    {
#line 3008
        .trainerName = _("Bertha"),
#line 3009
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3010
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 3011
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3013
        .doubleBattle = FALSE,
#line 3012
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3014
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3016
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3019
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3017
            .ability = ABILITY_STATIC,
#line 3018
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3020
                MOVE_MUD_SHOT,
                MOVE_SPARK,
            },
            },
        },
    },
#line 3023
    [TRAINER_PBL_CASSANDRA] =
    {
#line 3024
        .trainerName = _("Cassandra"),
#line 3025
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3026
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3027
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3029
        .doubleBattle = FALSE,
#line 3028
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3030
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3032
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3035
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3033
            .ability = ABILITY_PUNK_ROCK,
#line 3034
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3036
                MOVE_ROUND,
                MOVE_SING,
            },
            },
        },
    },
#line 3039
    [TRAINER_PBL_DOMINIC] =
    {
#line 3040
        .trainerName = _("Dominic"),
#line 3041
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3042
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3043
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3045
        .doubleBattle = FALSE,
#line 3044
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3046
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3048
            .species = SPECIES_CARNIVINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3051
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3049
            .ability = ABILITY_LEVITATE,
#line 3050
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3052
                MOVE_LEAF_TORNADO,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 3055
    [TRAINER_PBL_ERICA] =
    {
#line 3056
        .trainerName = _("Erica"),
#line 3057
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3058
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3059
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3061
        .doubleBattle = FALSE,
#line 3060
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3062
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3064
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3067
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3065
            .ability = ABILITY_GUTS,
#line 3066
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3068
                MOVE_RETALIATE,
                MOVE_REVENGE,
            },
            },
            {
#line 3071
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3074
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3072
            .ability = ABILITY_STURDY,
#line 3073
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3075
                MOVE_RETALIATE,
                MOVE_LOW_SWEEP,
            },
            },
        },
    },
#line 3078
    [TRAINER_PBL_ARI_CHALLENGE] =
    {
#line 3079
        .trainerName = _("Ari"),
#line 3080
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3081
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 3082
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3084
        .doubleBattle = FALSE,
#line 3083
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3085
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3087
            .species = SPECIES_TANDEMAUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3087
            .heldItem = ITEM_ORAN_BERRY,
#line 3090
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3088
            .ability = ABILITY_PICKUP,
#line 3089
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3091
                MOVE_DOUBLE_HIT,
                MOVE_SUPER_FANG,
            },
            },
            {
#line 3094
            .species = SPECIES_TADBULB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3094
            .heldItem = ITEM_ORAN_BERRY,
#line 3097
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3095
            .ability = ABILITY_STATIC,
#line 3096
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3098
                MOVE_PARABOLIC_CHARGE,
                MOVE_CHARGE_BEAM,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3102
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3102
            .heldItem = ITEM_ORAN_BERRY,
#line 3105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3103
            .ability = ABILITY_RUN_AWAY,
#line 3104
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3106
                MOVE_DOUBLE_HIT,
                MOVE_PLUCK,
                MOVE_QUICK_ATTACK,
                MOVE_PURSUIT,
            },
            },
        },
    },
#line 3111
    [TRAINER_PBL_BERTHA_CHALLENGE] =
    {
#line 3112
        .trainerName = _("Bertha"),
#line 3113
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3114
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 3115
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3117
        .doubleBattle = FALSE,
#line 3116
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3118
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3120
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3120
            .heldItem = ITEM_SITRUS_BERRY,
#line 3123
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3121
            .ability = ABILITY_STATIC,
#line 3122
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3124
                MOVE_SPARK,
                MOVE_MUD_SHOT,
                MOVE_YAWN,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 3129
    [TRAINER_PBL_CASSANDRA_CHALLENGE] =
    {
#line 3130
        .trainerName = _("Cassandra"),
#line 3131
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3132
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3133
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3135
        .doubleBattle = FALSE,
#line 3134
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3136
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3138
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3138
            .heldItem = ITEM_SITRUS_BERRY,
#line 3141
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3139
            .ability = ABILITY_PUNK_ROCK,
#line 3140
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3142
                MOVE_CHATTER,
                MOVE_ROUND,
                MOVE_THIEF,
                MOVE_ECHOED_VOICE,
            },
            },
        },
    },
#line 3147
    [TRAINER_PBL_DOMINIC_CHALLENGE] =
    {
#line 3148
        .trainerName = _("Dominic"),
#line 3149
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3150
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3151
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3153
        .doubleBattle = FALSE,
#line 3152
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3154
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3156
            .species = SPECIES_CARNIVINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3156
            .heldItem = ITEM_SITRUS_BERRY,
#line 3159
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3157
            .ability = ABILITY_LEVITATE,
#line 3158
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3160
                MOVE_LEAF_TORNADO,
                MOVE_LEECH_SEED,
                MOVE_TRAILBLAZE,
                MOVE_SYNTHESIS,
            },
            },
        },
    },
#line 3165
    [TRAINER_PBL_ERICA_CHALLENGE] =
    {
#line 3166
        .trainerName = _("Erica"),
#line 3167
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3168
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3169
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3171
        .doubleBattle = FALSE,
#line 3170
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3172
        .randomLead = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3174
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3174
            .heldItem = ITEM_SITRUS_BERRY,
#line 3177
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3175
            .ability = ABILITY_GUTS,
#line 3176
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3178
                MOVE_RETALIATE,
                MOVE_REVENGE,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3183
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3183
            .heldItem = ITEM_SITRUS_BERRY,
#line 3186
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3184
            .ability = ABILITY_STURDY,
#line 3185
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3187
                MOVE_RETALIATE,
                MOVE_LOW_SWEEP,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 3192
    [TRAINER_PBL_ALANA] =
    {
#line 3193
        .trainerName = _("Alana"),
#line 3194
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 3195
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 3196
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3198
        .doubleBattle = FALSE,
#line 3197
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3199
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3201
            .species = SPECIES_TINKATINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3204
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3202
            .ability = ABILITY_MOLD_BREAKER,
#line 3203
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3205
                MOVE_METAL_CLAW,
                MOVE_COVET,
                MOVE_SWEET_KISS,
                MOVE_SLAM,
            },
            },
            {
#line 3210
            .species = SPECIES_HELIOPTILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3213
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3211
            .ability = ABILITY_SAND_VEIL,
#line 3212
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3214
                MOVE_THUNDER_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_RAZOR_WIND,
                MOVE_PARABOLIC_CHARGE,
            },
            },
            {
#line 3219
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3220
            .ability = ABILITY_HUSTLE,
#line 3221
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3223
                MOVE_INCINERATE,
                MOVE_FLAME_WHEEL,
                MOVE_HEADBUTT,
                MOVE_FIRE_FANG,
            },
            },
            {
#line 3228
            .species = SPECIES_TOEDSCOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3231
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3229
            .ability = ABILITY_MYCELIUM_MIGHT,
#line 3230
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3232
                MOVE_STUN_SPORE,
                MOVE_MEGA_DRAIN,
                MOVE_LEECH_SEED,
                MOVE_MUD_SHOT,
            },
            },
        },
    },
#line 3237
    [TRAINER_PBL_JACOB] =
    {
#line 3238
        .trainerName = _("Jacob"),
#line 3239
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 3240
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 3241
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3243
        .doubleBattle = FALSE,
#line 3242
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3244
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3246
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3249
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3247
            .ability = ABILITY_SHEER_FORCE,
#line 3248
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3250
                MOVE_AERIAL_ACE,
                MOVE_SCARY_FACE,
                MOVE_CRUSH_CLAW,
                MOVE_SKY_DROP,
            },
            },
            {
#line 3255
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3258
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3256
            .ability = ABILITY_NATURAL_CURE,
#line 3257
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3259
                MOVE_ROUND,
                MOVE_HAZE,
                MOVE_FEATHER_DANCE,
                MOVE_DRAGON_BREATH,
            },
            },
            {
#line 3264
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3267
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3265
            .ability = ABILITY_SUPER_LUCK,
#line 3266
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3268
                MOVE_NIGHT_SHADE,
                MOVE_ASSURANCE,
                MOVE_AIR_CUTTER,
                MOVE_WHIRLWIND,
            },
            },
            {
#line 3273
            .species = SPECIES_TRUMBEAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3276
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3274
            .ability = ABILITY_SKILL_LINK,
#line 3275
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3277
                MOVE_FURY_ATTACK,
                MOVE_PLUCK,
                MOVE_ROOST,
                MOVE_SCREECH,
            },
            },
        },
    },
#line 3282
    [TRAINER_PBL_DEWEY] =
    {
#line 3283
        .trainerName = _("Dewey"),
#line 3284
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3285
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 3286
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3288
        .doubleBattle = FALSE,
#line 3287
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3289
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3291
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3294
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3292
            .ability = ABILITY_WATER_ABSORB,
#line 3293
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3295
                MOVE_PIN_MISSILE,
                MOVE_PAYBACK,
                MOVE_GRASS_WHISTLE,
                MOVE_NEEDLE_ARM,
            },
            },
            {
#line 3300
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3303
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3301
            .ability = ABILITY_INTIMIDATE,
#line 3302
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3304
                MOVE_FEINT_ATTACK,
                MOVE_BRICK_BREAK,
                MOVE_TORMENT,
                MOVE_SWAGGER,
            },
            },
            {
#line 3309
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3312
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3310
            .ability = ABILITY_HYPER_CUTTER,
#line 3311
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3313
                MOVE_FEINT_ATTACK,
                MOVE_BULLDOZE,
                MOVE_FLAIL,
                MOVE_LASER_FOCUS,
            },
            },
            {
#line 3318
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3321
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3319
            .ability = ABILITY_STURDY,
#line 3320
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3322
                MOVE_BUG_BITE,
                MOVE_SLASH,
                MOVE_KNOCK_OFF,
                MOVE_ROCK_BLAST,
            },
            },
        },
    },
#line 3327
    [TRAINER_PBL_ERNEST] =
    {
#line 3328
        .trainerName = _("Ernest"),
#line 3329
        .trainerClass = TRAINER_CLASS_HIKER,
#line 3330
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 3331
            TRAINER_ENCOUNTER_MUSIC_HIKER,
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
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3339
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3337
            .ability = ABILITY_SAND_FORCE,
#line 3338
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3340
                MOVE_FURY_SWIPES,
                MOVE_METAL_CLAW,
                MOVE_SLASH,
                MOVE_DIG,
            },
            },
            {
#line 3345
            .species = SPECIES_CUFANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3348
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3346
            .ability = ABILITY_SHEER_FORCE,
#line 3347
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3349
                MOVE_BULLDOZE,
                MOVE_SLAM,
                MOVE_DIG,
                MOVE_WHIRLWIND,
            },
            },
            {
#line 3354
            .species = SPECIES_SILICOBRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3357
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3355
            .ability = ABILITY_SHED_SKIN,
#line 3356
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3358
                MOVE_SAND_TOMB,
                MOVE_HEADBUTT,
                MOVE_BULLDOZE,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 3363
            .species = SPECIES_SANDYGAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3366
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3364
            .ability = ABILITY_WATER_COMPACTION,
#line 3365
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3367
                MOVE_HYPNOSIS,
                MOVE_MEGA_DRAIN,
                MOVE_BULLDOZE,
                MOVE_ANCIENT_POWER,
            },
            },
        },
    },
#line 3372
    [TRAINER_PBL_KYLE] =
    {
#line 3373
        .trainerName = _("Kyle"),
#line 3374
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 3375
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 3376
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3378
        .doubleBattle = FALSE,
#line 3377
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3379
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3381
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3384
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3382
            .ability = ABILITY_GUTS,
#line 3383
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3385
                MOVE_SMACK_DOWN,
                MOVE_SCREECH,
                MOVE_PAYBACK,
                MOVE_CHIP_AWAY,
            },
            },
            {
#line 3390
            .species = SPECIES_RIOLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3393
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3391
            .ability = ABILITY_STEADFAST,
#line 3392
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3394
                MOVE_FORCE_PALM,
                MOVE_COUNTER,
                MOVE_BULLET_PUNCH,
                MOVE_VACUUM_WAVE,
            },
            },
            {
#line 3399
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3402
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3400
            .ability = ABILITY_MOLD_BREAKER,
#line 3401
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3403
                MOVE_TAUNT,
                MOVE_BREAKING_SWIPE,
                MOVE_FOCUS_ENERGY,
                MOVE_SLASH,
            },
            },
            {
#line 3408
            .species = SPECIES_LARVESTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3411
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3409
            .ability = ABILITY_FLAME_BODY,
#line 3410
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3412
                MOVE_ABSORB,
                MOVE_FLAME_CHARGE,
                MOVE_STRUGGLE_BUG,
                MOVE_FLAME_WHEEL,
            },
            },
        },
    },
#line 3417
    [TRAINER_PBL_ELIAS] =
    {
#line 3418
        .trainerName = _("Elias"),
#line 3419
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 3420
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 3421
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
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
            .species = SPECIES_GOOMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3429
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3427
            .ability = ABILITY_SAP_SIPPER,
#line 3428
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3430
                MOVE_DRAGON_BREATH,
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_LIFE_DEW,
            },
            },
            {
#line 3435
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3438
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3436
            .ability = ABILITY_ROCK_HEAD,
#line 3437
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3439
                MOVE_HEADBUTT,
                MOVE_DRAGON_BREATH,
                MOVE_SCARY_FACE,
                MOVE_FIRE_FANG,
            },
            },
            {
#line 3444
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3447
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3445
            .ability = ABILITY_SHED_SKIN,
#line 3446
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3448
                MOVE_THUNDER_WAVE,
                MOVE_WATER_PULSE,
                MOVE_DRAGON_BREATH,
                MOVE_SLAM,
            },
            },
            {
#line 3453
            .species = SPECIES_JANGMO_O,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3456
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3454
            .ability = ABILITY_SOUNDPROOF,
#line 3455
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3457
                MOVE_SCARY_FACE,
                MOVE_HEADBUTT,
                MOVE_SCREECH,
                MOVE_DRAGON_TAIL,
            },
            },
        },
    },
#line 3462
    [TRAINER_PBL_PEARLIE] =
    {
#line 3463
        .trainerName = _("Pearlie"),
#line 3464
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 3465
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 3466
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3468
        .doubleBattle = FALSE,
#line 3467
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3469
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3471
            .species = SPECIES_PASSIMIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3474
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3472
            .ability = ABILITY_RECEIVER,
#line 3473
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3475
                MOVE_FEINT,
                MOVE_VITAL_THROW,
                MOVE_SCARY_FACE,
                MOVE_TAKE_DOWN,
            },
            },
        },
    },
#line 3480
    [TRAINER_PBL_SUSAN] =
    {
#line 3481
        .trainerName = _("Susan"),
#line 3482
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 3483
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 3484
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3486
        .doubleBattle = FALSE,
#line 3485
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3487
        .randomLead = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3489
            .species = SPECIES_ORANGURU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3492
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3490
            .ability = ABILITY_SYMBIOSIS,
#line 3491
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3493
                MOVE_PSYCH_UP,
                MOVE_EXTRASENSORY,
                MOVE_INSTRUCT,
                MOVE_AFTER_YOU,
            },
            },
        },
    },
#line 3498
    [TRAINER_PBL_CONRAD] =
    {
#line 3499
        .trainerName = _("Ernest"),
#line 3500
        .trainerClass = TRAINER_CLASS_HIKER,
#line 3501
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 3502
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3504
        .doubleBattle = FALSE,
#line 3503
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3505
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3507
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3510
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3508
            .ability = ABILITY_STURDY,
#line 3509
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3511
                MOVE_METAL_SOUND,
                MOVE_METAL_CLAW,
                MOVE_ROCK_TOMB,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 3516
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3519
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3517
            .ability = ABILITY_SAND_FORCE,
#line 3518
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3520
                MOVE_SAND_TOMB,
                MOVE_DIG,
                MOVE_TAKE_DOWN,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 3525
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3528
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3526
            .ability = ABILITY_INTIMIDATE,
#line 3527
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3529
                MOVE_SCARY_FACE,
                MOVE_DIG,
                MOVE_ASSURANCE,
                MOVE_ROCK_CLIMB,
            },
            },
            {
#line 3534
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3537
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3535
            .ability = ABILITY_ROCK_HEAD,
#line 3536
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3538
                MOVE_HORN_ATTACK,
                MOVE_SMACK_DOWN,
                MOVE_BULLDOZE,
                MOVE_TAKE_DOWN,
            },
            },
        },
    },
#line 3543
    [TRAINER_PBL_BRETT] =
    {
#line 3544
        .trainerName = _("Brett"),
#line 3545
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3546
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3547
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3549
        .doubleBattle = FALSE,
#line 3548
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3550
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3552
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3555
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3553
            .ability = ABILITY_LIQUID_OOZE,
#line 3554
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3556
                MOVE_ACID_SPRAY,
                MOVE_TICKLE,
                MOVE_HAZE,
                MOVE_BRINE,
            },
            },
            {
#line 3561
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3564
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3562
            .ability = ABILITY_VOLT_ABSORB,
#line 3563
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3565
                MOVE_CONFUSE_RAY,
                MOVE_BUBBLE_BEAM,
                MOVE_THUNDER_WAVE,
                MOVE_SHOCK_WAVE,
            },
            },
            {
#line 3570
            .species = SPECIES_BINACLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3573
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3571
            .ability = ABILITY_TOUGH_CLAWS,
#line 3572
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3574
                MOVE_FURY_CUTTER,
                MOVE_ANCIENT_POWER,
                MOVE_RAZOR_SHELL,
                MOVE_SLASH,
            },
            },
            {
#line 3579
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3580
            .ability = ABILITY_HYPER_CUTTER,
#line 3581
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3583
                MOVE_AQUA_JET,
                MOVE_CHIP_AWAY,
                MOVE_BUBBLE_BEAM,
                MOVE_RAZOR_SHELL,
            },
            },
        },
    },
#line 3588
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9] =
    {
#line 3589
        .trainerName = _("Adamina"),
#line 3590
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 3591
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 3592
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3594
        .doubleBattle = FALSE,
#line 3593
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3596
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 3595
        .randomLead = FALSE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3598
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3598
            .heldItem = ITEM_HARD_STONE,
#line 3601
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3599
            .ability = ABILITY_ANGER_SHELL,
#line 3600
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3602
                MOVE_ROCK_TOMB,
                MOVE_BULLDOZE,
                MOVE_KNOCK_OFF,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 3607
            .species = SPECIES_BRAIXEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3607
            .heldItem = ITEM_CHARCOAL,
#line 3610
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3608
            .ability = ABILITY_MAGIC_GUARD,
#line 3609
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3611
                MOVE_INCINERATE,
                MOVE_PSYBEAM,
                MOVE_SHOCK_WAVE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 3616
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3616
            .heldItem = ITEM_BLACK_GLASSES,
#line 3619
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3617
            .ability = ABILITY_OVERCOAT,
#line 3618
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3620
                MOVE_PLUCK,
                MOVE_FEINT_ATTACK,
                MOVE_ROOST,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3625
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3625
            .heldItem = ITEM_MIRACLE_SEED,
#line 3628
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3626
            .ability = ABILITY_SAND_RUSH,
#line 3627
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3629
                MOVE_MEGA_DRAIN,
                MOVE_PIN_MISSILE,
                MOVE_BOUNCE,
                MOVE_GROWTH,
            },
            },
            {
#line 3634
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3634
            .heldItem = ITEM_SITRUS_BERRY,
#line 3637
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3635
            .ability = ABILITY_SAND_RUSH,
#line 3636
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3638
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
                MOVE_AERIAL_ACE,
                MOVE_COVET,
            },
            },
        },
    },
#line 3643
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9_CHALLENGE] =
    {
#line 3644
        .trainerName = _("Adamina"),
#line 3645
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 3646
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 3647
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3649
        .doubleBattle = FALSE,
#line 3648
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3651
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 3650
        .randomLead = FALSE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3653
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3653
            .heldItem = ITEM_HARD_STONE,
#line 3656
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3654
            .ability = ABILITY_ANGER_SHELL,
#line 3655
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3657
                MOVE_ROCK_TOMB,
                MOVE_BULLDOZE,
                MOVE_KNOCK_OFF,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 3662
            .species = SPECIES_BRAIXEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3662
            .heldItem = ITEM_CHARCOAL,
#line 3665
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3663
            .ability = ABILITY_MAGIC_GUARD,
#line 3664
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3666
                MOVE_INCINERATE,
                MOVE_PSYBEAM,
                MOVE_SHOCK_WAVE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 3671
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3671
            .heldItem = ITEM_BLACK_GLASSES,
#line 3674
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3672
            .ability = ABILITY_OVERCOAT,
#line 3673
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3675
                MOVE_PLUCK,
                MOVE_FEINT_ATTACK,
                MOVE_ROOST,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3680
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3680
            .heldItem = ITEM_MIRACLE_SEED,
#line 3683
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3681
            .ability = ABILITY_SAND_RUSH,
#line 3682
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3684
                MOVE_MEGA_DRAIN,
                MOVE_PIN_MISSILE,
                MOVE_BOUNCE,
                MOVE_GROWTH,
            },
            },
            {
#line 3689
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3689
            .heldItem = ITEM_SITRUS_BERRY,
#line 3692
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3690
            .ability = ABILITY_SAND_RUSH,
#line 3691
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3693
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
                MOVE_AERIAL_ACE,
                MOVE_COVET,
            },
            },
            {
#line 3698
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3698
            .heldItem = ITEM_SITRUS_BERRY,
#line 3701
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3699
            .ability = ABILITY_MAGIC_GUARD,
#line 3700
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3702
                MOVE_PSYBEAM,
                MOVE_AIR_CUTTER,
                MOVE_ANCIENT_POWER,
                MOVE_ROOST,
            },
            },
        },
    },
#line 3707
    [TRAINER_PBL_JEANETTE] =
    {
#line 3708
        .trainerName = _("Jeanette"),
#line 3709
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 3710
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 3711
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3713
        .doubleBattle = FALSE,
#line 3712
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3714
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3716
            .species = SPECIES_GASTLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3719
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3717
            .ability = ABILITY_LEVITATE,
#line 3718
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3720
                MOVE_CLEAR_SMOG,
                MOVE_HEX,
                MOVE_HAZE,
                MOVE_SCARY_FACE,
            },
            },
            {
#line 3725
            .species = SPECIES_FRILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3728
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3726
            .ability = ABILITY_CURSED_BODY,
#line 3727
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3729
                MOVE_BUBBLE_BEAM,
                MOVE_WHIRLPOOL,
                MOVE_HEX,
                MOVE_RECOVER,
            },
            },
            {
#line 3734
            .species = SPECIES_HONEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3737
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3735
            .ability = ABILITY_NO_GUARD,
#line 3736
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3738
                MOVE_SHADOW_SNEAK,
                MOVE_METAL_SOUND,
                MOVE_RETALIATE,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 3743
            .species = SPECIES_GREAVARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3744
            .ability = ABILITY_FLUFFY,
#line 3745
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3747
                MOVE_SHADOW_SNEAK,
                MOVE_YAWN,
                MOVE_HEADBUTT,
                MOVE_DIG,
            },
            },
        },
    },
#line 3752
    [TRAINER_PBL_EMMA_AND_LEO] =
    {
#line 3753
        .trainerName = _("Emma&Leo"),
#line 3754
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 3755
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 3756
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3758
        .doubleBattle = TRUE,
#line 3757
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3759
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3761
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3762
            .ability = ABILITY_PRANKSTER,
#line 3763
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3765
                MOVE_SHOCK_WAVE,
                MOVE_ENCORE,
                MOVE_MOONLIGHT,
                MOVE_SIGNAL_BEAM,
            },
            },
            {
#line 3770
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3773
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3771
            .ability = ABILITY_PRANKSTER,
#line 3772
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3774
                MOVE_COVET,
                MOVE_ENCORE,
                MOVE_MOONLIGHT,
                MOVE_SIGNAL_BEAM,
            },
            },
            {
#line 3779
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3780
            .ability = ABILITY_EARLY_BIRD,
#line 3781
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3783
                MOVE_FEINT_ATTACK,
                MOVE_DEFOG,
                MOVE_MEGA_DRAIN,
                MOVE_BEAT_UP,
            },
            },
            {
#line 3788
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3791
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3789
            .ability = ABILITY_RAIN_DISH,
#line 3790
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3792
                MOVE_BUBBLE_BEAM,
                MOVE_MEGA_DRAIN,
                MOVE_TICKLE,
                MOVE_SYNTHESIS,
            },
            },
        },
    },
#line 3797
    [TRAINER_PBL_JOEL] =
    {
#line 3798
        .trainerName = _("Joel"),
#line 3799
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3800
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3801
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3803
        .doubleBattle = FALSE,
#line 3802
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3804
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3806
            .species = SPECIES_BRONZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3809
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3807
            .ability = ABILITY_LEVITATE,
#line 3808
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3810
                MOVE_IMPRISON,
                MOVE_FEINT_ATTACK,
                MOVE_METAL_SOUND,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 3815
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3816
            .ability = ABILITY_IRON_FIST,
#line 3817
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3819
                MOVE_MAGNITUDE,
                MOVE_CURSE,
                MOVE_SHADOW_PUNCH,
                MOVE_STOMPING_TANTRUM,
            },
            },
            {
#line 3824
            .species = SPECIES_POLTCHAGEIST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3827
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3825
            .ability = ABILITY_HOSPITALITY,
#line 3826
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3828
                MOVE_LIFE_DEW,
                MOVE_MEGA_DRAIN,
                MOVE_HEX,
                MOVE_FOUL_PLAY,
            },
            },
            {
#line 3833
            .species = SPECIES_INKAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3836
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3834
            .ability = ABILITY_CONTRARY,
#line 3835
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3837
                MOVE_SLASH,
                MOVE_PLUCK,
                MOVE_PSYBEAM,
                MOVE_SWITCHEROO,
            },
            },
        },
    },
#line 3842
    [TRAINER_PBL_MARION] =
    {
#line 3843
        .trainerName = _("Marion"),
#line 3844
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3845
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3846
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3848
        .doubleBattle = FALSE,
#line 3847
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3849
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3851
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3854
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3852
            .ability = ABILITY_LEVITATE,
#line 3853
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3855
                MOVE_NIGHT_SHADE,
                MOVE_CONFUSE_RAY,
                MOVE_CURSE,
                MOVE_HEX,
            },
            },
            {
#line 3860
            .species = SPECIES_SINISTEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3863
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3861
            .ability = ABILITY_CURSED_BODY,
#line 3862
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3864
                MOVE_NIGHT_SHADE,
                MOVE_SUCKER_PUNCH,
                MOVE_HEX,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 3869
            .species = SPECIES_ELGYEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3872
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3870
            .ability = ABILITY_SYNCHRONIZE,
#line 3871
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3873
                MOVE_PSYBEAM,
                MOVE_TELEPORT,
                MOVE_COSMIC_POWER,
                MOVE_RECOVER,
            },
            },
            {
#line 3878
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3881
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3879
            .ability = ABILITY_FLAME_BODY,
#line 3880
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3882
                MOVE_IMPRISON,
                MOVE_HEX,
                MOVE_FLAME_BURST,
                MOVE_WILL_O_WISP,
            },
            },
        },
    },
#line 3887
    [TRAINER_PBL_REGINA] =
    {
#line 3888
        .trainerName = _("Regina"),
#line 3889
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 3890
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 3891
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3893
        .doubleBattle = FALSE,
#line 3892
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3894
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3896
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3899
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3897
            .ability = ABILITY_LEVITATE,
#line 3898
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3900
                MOVE_CURSE,
                MOVE_HEX,
                MOVE_PSYBEAM,
                MOVE_OMINOUS_WIND,
            },
            },
            {
#line 3905
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3908
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3906
            .ability = ABILITY_CURSED_BODY,
#line 3907
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3909
                MOVE_SHADOW_SNEAK,
                MOVE_SNATCH,
                MOVE_OMINOUS_WIND,
                MOVE_TRICK,
            },
            },
            {
#line 3914
            .species = SPECIES_GIMMIGHOUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3917
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3915
            .ability = ABILITY_RATTLED,
#line 3916
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3918
                MOVE_ASTONISH,
                MOVE_TACKLE,
            },
            },
            {
#line 3921
            .species = SPECIES_BRAMBLIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3924
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3922
            .ability = ABILITY_WIND_RIDER,
#line 3923
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3925
                MOVE_LEECH_SEED,
                MOVE_SHADOW_SNEAK,
                MOVE_MEGA_DRAIN,
                MOVE_HEX,
            },
            },
        },
    },
#line 3930
    [TRAINER_PBL_NEWTON_LEVIATHAN_10] =
    {
#line 3931
        .trainerName = _("Newton"),
#line 3932
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 3933
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .encounterMusic_gender =
#line 3934
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3936
        .doubleBattle = TRUE,
#line 3935
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3938
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 3937
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3940
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3943
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3941
            .ability = ABILITY_FRIEND_GUARD,
#line 3942
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3944
                MOVE_GRAVITY,
                MOVE_DRAINING_KISS,
                MOVE_MOONLIGHT,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3949
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3952
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3950
            .ability = ABILITY_INTIMIDATE,
#line 3951
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3953
                MOVE_STOMP,
                MOVE_DOUBLE_KICK,
                MOVE_HYPNOSIS,
                MOVE_PSYSHIELD_BASH,
            },
            },
            {
#line 3958
            .species = SPECIES_STONJOURNER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3961
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3959
            .ability = ABILITY_POWER_SPOT,
#line 3960
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3962
                MOVE_GRAVITY,
                MOVE_ROCK_TOMB,
                MOVE_WIDE_GUARD,
                MOVE_MEGA_KICK,
            },
            },
            {
#line 3967
            .species = SPECIES_FLAPPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3967
            .heldItem = ITEM_SITRUS_BERRY,
#line 3970
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3968
            .ability = ABILITY_HUSTLE,
#line 3969
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3971
                MOVE_GRAV_APPLE,
                MOVE_ACROBATICS,
                MOVE_ROOST,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 3976
    [TRAINER_PBL_NEWTON_LEVIATHAN_10_CHALLENGE] =
    {
#line 3977
        .trainerName = _("Newton"),
#line 3978
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 3979
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .encounterMusic_gender =
#line 3980
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3982
        .doubleBattle = TRUE,
#line 3981
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3984
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 3983
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3986
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3986
            .heldItem = ITEM_EVIOLITE,
#line 3989
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3987
            .ability = ABILITY_FRIEND_GUARD,
#line 3988
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3990
                MOVE_GRAVITY,
                MOVE_DRAINING_KISS,
                MOVE_MOONLIGHT,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3995
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3995
            .heldItem = ITEM_EVIOLITE,
#line 3998
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3996
            .ability = ABILITY_INTIMIDATE,
#line 3997
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3999
                MOVE_STOMP,
                MOVE_DOUBLE_KICK,
                MOVE_HYPNOSIS,
                MOVE_PSYSHIELD_BASH,
            },
            },
            {
#line 4004
            .species = SPECIES_STONJOURNER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4004
            .heldItem = ITEM_SITRUS_BERRY,
#line 4007
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4005
            .ability = ABILITY_POWER_SPOT,
#line 4006
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4008
                MOVE_GRAVITY,
                MOVE_ROCK_TOMB,
                MOVE_WIDE_GUARD,
                MOVE_MEGA_KICK,
            },
            },
            {
#line 4013
            .species = SPECIES_FLAPPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4013
            .heldItem = ITEM_SITRUS_BERRY,
#line 4017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4014
            .ability = ABILITY_HUSTLE,
#line 4016
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 4015
            .teraType = TYPE_DRAGON,
            .moves = {
#line 4018
                MOVE_GRAV_APPLE,
                MOVE_ACROBATICS,
                MOVE_ROOST,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 4023
    [TRAINER_PBL_ESSENCE] =
    {
#line 4024
        .trainerName = _("Essence"),
#line 4025
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 4026
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 4027
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4029
        .doubleBattle = FALSE,
#line 4028
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4030
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4032
            .species = SPECIES_CLAMPERL,
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
            .species = SPECIES_STARYU,
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
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4041
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4044
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4045
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4048
    [TRAINER_PBL_DOLORES] =
    {
#line 4049
        .trainerName = _("Dolores"),
#line 4050
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 4051
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 4052
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4054
        .doubleBattle = FALSE,
#line 4053
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4055
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4057
            .species = SPECIES_SNOVER,
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
            .species = SPECIES_VANILLITE,
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
            .species = SPECIES_CUBCHOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4067
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4066
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4069
            .species = SPECIES_SNORUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4071
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4070
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4073
    [TRAINER_PBL_GENIE] =
    {
#line 4074
        .trainerName = _("Genie"),
#line 4075
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4076
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 4077
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4079
        .doubleBattle = FALSE,
#line 4078
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4080
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4082
            .species = SPECIES_MAGNEMITE,
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
            .species = SPECIES_VAROOM,
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
            .species = SPECIES_PAWMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4092
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4091
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4094
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4096
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4095
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4098
    [TRAINER_PBL_ABIGAIL] =
    {
#line 4099
        .trainerName = _("Abigail"),
#line 4100
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4101
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4102
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4104
        .doubleBattle = FALSE,
#line 4103
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4105
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4107
            .species = SPECIES_GLIMMET,
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
            .species = SPECIES_YANMA,
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
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4117
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4116
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4119
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4121
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4120
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4123
    [TRAINER_PBL_FEDERICO] =
    {
#line 4124
        .trainerName = _("Federico"),
#line 4125
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4126
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4127
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4129
        .doubleBattle = FALSE,
#line 4128
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4130
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4132
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4134
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4133
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4136
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4137
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4140
            .species = SPECIES_MAREANIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4141
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4144
            .species = SPECIES_MANTYKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4146
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4145
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4149
    [TRAINER_PBL_ROMULUS] =
    {
#line 4150
        .trainerName = _("Romulus"),
#line 4151
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 4152
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 4153
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4155
        .doubleBattle = FALSE,
#line 4154
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4156
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4158
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4160
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4159
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4162
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4164
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4163
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4166
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4168
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4167
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4171
    [TRAINER_PBL_JULIE] =
    {
#line 4172
        .trainerName = _("Julie"),
#line 4173
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 4174
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 4175
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4177
        .doubleBattle = FALSE,
#line 4176
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4178
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4180
            .species = SPECIES_PAWNIARD,
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
            .species = SPECIES_CLAUNCHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4186
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4185
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4188
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4190
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4189
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4192
    [TRAINER_PBL_HILDA] =
    {
#line 4193
        .trainerName = _("Hilda"),
#line 4194
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4195
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4196
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4198
        .doubleBattle = FALSE,
#line 4197
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4199
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4201
            .species = SPECIES_CARVANHA,
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
            .species = SPECIES_HORSEA,
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
            .species = SPECIES_SKRELP,
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
            .species = SPECIES_FINIZEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4215
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4214
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4217
    [TRAINER_PBL_TREVOR] =
    {
#line 4218
        .trainerName = _("Trevor"),
#line 4219
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 4220
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 4221
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4223
        .doubleBattle = FALSE,
#line 4222
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4224
        .randomLead = TRUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4226
            .species = SPECIES_TOGEPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4228
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4227
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4230
            .species = SPECIES_HAPPINY,
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
            .species = SPECIES_MUNCHLAX,
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
            .species = SPECIES_SMOOCHUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4240
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4239
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4242
            .species = SPECIES_ELEKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4244
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4243
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4246
            .species = SPECIES_MAGBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4248
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4247
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4250
    [TRAINER_PBL_RUFUS] =
    {
#line 4251
        .trainerName = _("Rufus"),
#line 4252
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 4253
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 4254
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4256
        .doubleBattle = FALSE,
#line 4255
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4257
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4259
            .species = SPECIES_FRIGIBAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4261
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4260
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4263
            .species = SPECIES_DREEPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4265
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4264
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4267
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4269
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4268
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4271
            .species = SPECIES_ZORUA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4273
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4272
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4275
    [TRAINER_PBL_KINLEY] =
    {
#line 4276
        .trainerName = _("Kinley"),
#line 4277
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 4278
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 4279
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 4281
        .doubleBattle = FALSE,
#line 4280
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4282
        .randomLead = TRUE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4284
            .species = SPECIES_HERDIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4285
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4288
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4289
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4292
            .species = SPECIES_CROCONAW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4294
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4293
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4296
            .species = SPECIES_RABOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4297
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4300
            .species = SPECIES_FLORAGATO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4301
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4304
    [TRAINER_PBL_REID] =
    {
#line 4305
        .trainerName = _("Reid"),
#line 4306
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 4307
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 4308
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4310
        .doubleBattle = FALSE,
#line 4309
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4311
        .randomLead = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4313
            .species = SPECIES_DOTTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4315
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4314
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4317
            .species = SPECIES_WHIRLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4319
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4318
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4321
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4323
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4322
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4325
    [TRAINER_PBL_DECLAN_LEVIATHAN_11] =
    {
#line 4326
        .trainerName = _("Declan"),
#line 4327
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 4328
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 4329
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4331
        .doubleBattle = FALSE,
#line 4330
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4333
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 4332
        .randomLead = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4335
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4337
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4336
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4339
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4341
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4340
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4343
            .species = SPECIES_RABSCA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4345
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4344
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4347
            .species = SPECIES_LURANTIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4349
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4348
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4351
    [TRAINER_PBL_DECLAN_LEVIATHAN_11_CHALLENGE] =
    {
#line 4352
        .trainerName = _("Declan"),
#line 4353
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 4354
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 4355
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4357
        .doubleBattle = FALSE,
#line 4356
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 4359
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 4358
        .randomLead = FALSE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4361
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4363
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4362
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4365
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4367
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4366
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4369
            .species = SPECIES_RABSCA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4371
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4370
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4373
            .species = SPECIES_LURANTIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4375
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4374
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4377
            .species = SPECIES_LOKIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4379
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4378
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4381
    [TRAINER_PBL_VIOLET] =
    {
#line 4382
        .trainerName = _("STEVEN"),
#line 4383
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4384
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4386
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4388
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4390
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4389
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4392
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4393
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4396
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4397
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4400
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4402
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4401
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4404
    [TRAINER_PBL_WANDA] =
    {
#line 4405
        .trainerName = _("STEVEN"),
#line 4406
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4407
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4409
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4411
            .species = SPECIES_TRANQUILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4413
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4412
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4415
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4417
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4416
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4419
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4421
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4420
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4423
            .species = SPECIES_WEEPINBELL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4425
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4424
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4427
    [TRAINER_PBL_AMBER_AND_KIM] =
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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4434
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4436
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4435
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4438
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4440
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4439
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4442
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4444
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4443
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4446
            .species = SPECIES_DOLLIV,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4448
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4447
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4450
    [TRAINER_PBL_JAN_AND_ERIN] =
    {
#line 4451
        .trainerName = _("STEVEN"),
#line 4452
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4453
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4455
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4457
            .species = SPECIES_FURFROU_STAR_TRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4459
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4458
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4461
            .species = SPECIES_FURFROU_HEART_TRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4463
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4462
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4465
            .species = SPECIES_FURFROU_DANDY_TRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4467
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4466
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4469
            .species = SPECIES_FURFROU_DEBUTANTE_TRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4471
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4470
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4473
    [TRAINER_PBL_STEVE] =
    {
#line 4474
        .trainerName = _("STEVEN"),
#line 4475
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4476
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4478
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4480
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4482
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4481
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4484
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4486
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4485
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4488
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4490
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4489
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4492
            .species = SPECIES_NIDORINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4493
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4496
    [TRAINER_PBL_GOULD] =
    {
#line 4497
        .trainerName = _("STEVEN"),
#line 4498
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4499
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4501
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4503
            .species = SPECIES_CRANIDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4505
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4504
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4507
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4509
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4508
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4511
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4513
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4512
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4515
            .species = SPECIES_ANORITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4516
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4519
            .species = SPECIES_ARCHEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4521
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4520
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4523
    [TRAINER_PBL_MENDEL] =
    {
#line 4524
        .trainerName = _("STEVEN"),
#line 4525
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4526
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4528
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4530
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4532
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4531
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4534
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4536
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4535
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4538
            .species = SPECIES_TYRUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4540
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4539
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4542
            .species = SPECIES_AMAURA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4544
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4543
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4546
            .species = SPECIES_TIRTOUGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4548
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4547
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4550
    [TRAINER_PBL_DARWIN] =
    {
#line 4551
        .trainerName = _("STEVEN"),
#line 4552
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4553
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4555
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4557
            .species = SPECIES_COMFEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4559
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4558
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4561
            .species = SPECIES_KOMALA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4563
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4562
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4565
            .species = SPECIES_FLOETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4566
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4569
            .species = SPECIES_CHARJABUG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4571
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4570
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4573
    [TRAINER_PBL_JENNY_LEVIATHAN_11] =
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
    [TRAINER_PBL_JENNY_LEVIATHAN_11_CHALLENGE] =
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
    [TRAINER_PBL_BART] =
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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4614
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4616
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4615
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4618
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4619
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4622
            .species = SPECIES_TOGEDEMARU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4624
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4623
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4626
            .species = SPECIES_WISHIWASHI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4628
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4627
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4630
    [TRAINER_PBL_NIGEL] =
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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4637
            .species = SPECIES_CARKOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4639
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4638
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4641
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4643
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4642
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4645
            .species = SPECIES_CARBINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4647
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4646
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4649
            .species = SPECIES_BOLDORE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4651
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4650
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4653
    [TRAINER_PBL_LOLA] =
    {
#line 4654
        .trainerName = _("STEVEN"),
#line 4655
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4656
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4658
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4660
            .species = SPECIES_CORVISQUIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4661
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4664
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4666
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4665
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4668
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4670
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4669
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4672
            .species = SPECIES_SERVINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4673
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4676
            .species = SPECIES_MONFERNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4678
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4677
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4680
    [TRAINER_PBL_CHARLIE] =
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
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4687
            .species = SPECIES_PIDGEOTTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4689
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4688
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4691
            .species = SPECIES_PIGNITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4693
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4692
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4695
            .species = SPECIES_QUAXWELL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4697
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4696
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4699
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4701
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4700
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4703
            .species = SPECIES_GROTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4705
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4704
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4707
    [TRAINER_PBL_RANDOLPH] =
    {
#line 4708
        .trainerName = _("STEVEN"),
#line 4709
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4710
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4712
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4714
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4716
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4715
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4718
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4720
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4719
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4722
            .species = SPECIES_QUILAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4724
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4723
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4726
            .species = SPECIES_BRIONNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4728
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4727
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4730
            .species = SPECIES_IVYSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4732
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4731
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4734
    [TRAINER_PBL_TODD] =
    {
#line 4735
        .trainerName = _("STEVEN"),
#line 4736
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4737
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4739
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4741
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4745
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4744
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4743
            .lvl = 42,
#line 4742
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4746
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4751
    [TRAINER_PBL_RUSSELL] =
    {
#line 4752
        .trainerName = _("STEVEN"),
#line 4753
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4754
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4756
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4758
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4762
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4761
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4760
            .lvl = 42,
#line 4759
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4763
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4768
    [TRAINER_PBL_OTIS] =
    {
#line 4769
        .trainerName = _("STEVEN"),
#line 4770
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4771
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4773
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4775
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4779
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4778
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4777
            .lvl = 42,
#line 4776
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4780
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4785
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12] =
    {
#line 4786
        .trainerName = _("STEVEN"),
#line 4787
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4788
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4790
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4792
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4796
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4795
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4794
            .lvl = 42,
#line 4793
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4797
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4802
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12_CHALLENGE] =
    {
#line 4803
        .trainerName = _("STEVEN"),
#line 4804
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4805
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4807
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4809
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4813
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4812
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4811
            .lvl = 42,
#line 4810
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4814
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4819
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13] =
    {
#line 4820
        .trainerName = _("STEVEN"),
#line 4821
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4822
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4824
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4826
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4830
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4829
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4828
            .lvl = 42,
#line 4827
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4831
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4836
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13_CHALLENGE] =
    {
#line 4837
        .trainerName = _("STEVEN"),
#line 4838
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4839
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4841
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4843
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4847
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4846
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4845
            .lvl = 42,
#line 4844
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4848
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4853
    [TRAINER_PBL_IONA] =
    {
#line 4854
        .trainerName = _("STEVEN"),
#line 4855
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4856
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4858
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4860
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4864
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4863
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4862
            .lvl = 42,
#line 4861
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4865
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4870
    [TRAINER_PBL_BERKE] =
    {
#line 4871
        .trainerName = _("STEVEN"),
#line 4872
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4873
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4875
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4877
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4881
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4880
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4879
            .lvl = 42,
#line 4878
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4882
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4887
    [TRAINER_PBL_TANISHA] =
    {
#line 4888
        .trainerName = _("STEVEN"),
#line 4889
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4890
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4892
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4894
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4898
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4897
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4896
            .lvl = 42,
#line 4895
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4899
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4904
    [TRAINER_PBL_ROBERT] =
    {
#line 4905
        .trainerName = _("STEVEN"),
#line 4906
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4907
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4909
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4911
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4915
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4914
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4913
            .lvl = 42,
#line 4912
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4916
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4921
    [TRAINER_PBL_CHRIS] =
    {
#line 4922
        .trainerName = _("STEVEN"),
#line 4923
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4924
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4926
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4928
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4932
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4931
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4930
            .lvl = 42,
#line 4929
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4933
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4938
    [TRAINER_PBL_ANGUS] =
    {
#line 4939
        .trainerName = _("STEVEN"),
#line 4940
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4941
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4943
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4945
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4949
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4948
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4947
            .lvl = 42,
#line 4946
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4950
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4955
    [TRAINER_PBL_LILY_LEVIATHAN_14] =
    {
#line 4956
        .trainerName = _("STEVEN"),
#line 4957
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4958
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4960
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4962
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4966
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4965
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4964
            .lvl = 42,
#line 4963
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4967
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4972
    [TRAINER_PBL_LILY_LEVIATHAN_14_CHALLENGE] =
    {
#line 4973
        .trainerName = _("STEVEN"),
#line 4974
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4975
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4977
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4979
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4983
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4982
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4981
            .lvl = 42,
#line 4980
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4984
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4989
    [TRAINER_PBL_AXLE] =
    {
#line 4990
        .trainerName = _("STEVEN"),
#line 4991
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4992
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4994
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4996
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5000
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4999
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4998
            .lvl = 42,
#line 4997
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5001
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5006
    [TRAINER_PBL_RAFAEL] =
    {
#line 5007
        .trainerName = _("STEVEN"),
#line 5008
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5009
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5011
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5013
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5017
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5016
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5015
            .lvl = 42,
#line 5014
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5018
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5023
    [TRAINER_PBL_GEORGINA] =
    {
#line 5024
        .trainerName = _("STEVEN"),
#line 5025
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5026
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5028
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5030
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5034
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5033
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5032
            .lvl = 42,
#line 5031
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5035
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5040
    [TRAINER_PBL_MIA_LEVIATHAN_15] =
    {
#line 5041
        .trainerName = _("STEVEN"),
#line 5042
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5043
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5045
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5047
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5051
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5050
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5049
            .lvl = 42,
#line 5048
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5052
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5057
    [TRAINER_PBL_MIA_LEVIATHAN_15_CHALLENGE] =
    {
#line 5058
        .trainerName = _("STEVEN"),
#line 5059
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5060
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5062
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5064
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5068
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5067
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5066
            .lvl = 42,
#line 5065
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5069
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5074
    [TRAINER_PBL_DORIS] =
    {
#line 5075
        .trainerName = _("STEVEN"),
#line 5076
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5077
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5079
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5081
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5085
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5084
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5083
            .lvl = 42,
#line 5082
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5086
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5091
    [TRAINER_PBL_HOMER] =
    {
#line 5092
        .trainerName = _("STEVEN"),
#line 5093
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5094
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5096
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5098
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5102
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5101
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5100
            .lvl = 42,
#line 5099
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5103
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5108
    [TRAINER_PBL_JOHN] =
    {
#line 5109
        .trainerName = _("STEVEN"),
#line 5110
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5111
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5113
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5115
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5119
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5118
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5117
            .lvl = 42,
#line 5116
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5120
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5125
    [TRAINER_PBL_GLENN] =
    {
#line 5126
        .trainerName = _("STEVEN"),
#line 5127
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5128
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5130
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5132
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5136
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5135
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5134
            .lvl = 42,
#line 5133
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5137
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5142
    [TRAINER_PBL_JAY] =
    {
#line 5143
        .trainerName = _("STEVEN"),
#line 5144
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5145
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5147
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5149
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5153
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5152
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5151
            .lvl = 42,
#line 5150
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5154
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5159
    [TRAINER_PBL_TYLER] =
    {
#line 5160
        .trainerName = _("STEVEN"),
#line 5161
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5162
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5164
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5166
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5170
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5169
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5168
            .lvl = 42,
#line 5167
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5171
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5176
    [TRAINER_PBL_TERRENCE] =
    {
#line 5177
        .trainerName = _("STEVEN"),
#line 5178
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5179
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5181
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5183
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5187
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5186
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5185
            .lvl = 42,
#line 5184
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5188
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5193
    [TRAINER_PBL_MARTY] =
    {
#line 5194
        .trainerName = _("STEVEN"),
#line 5195
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5196
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5198
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5200
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5204
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5203
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5202
            .lvl = 42,
#line 5201
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5205
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5210
    [TRAINER_PBL_KARI] =
    {
#line 5211
        .trainerName = _("STEVEN"),
#line 5212
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5213
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5215
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5217
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5221
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5220
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5219
            .lvl = 42,
#line 5218
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5222
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5227
    [TRAINER_PBL_ABRAHAM] =
    {
#line 5228
        .trainerName = _("STEVEN"),
#line 5229
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5230
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5232
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5234
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5238
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5237
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5236
            .lvl = 42,
#line 5235
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5239
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5244
    [TRAINER_PBL_MELINDA] =
    {
#line 5245
        .trainerName = _("STEVEN"),
#line 5246
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5247
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5249
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5251
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5255
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5254
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5253
            .lvl = 42,
#line 5252
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5256
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5261
    [TRAINER_PBL_EMILIO] =
    {
#line 5262
        .trainerName = _("STEVEN"),
#line 5263
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5264
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5266
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5268
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5272
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5271
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5270
            .lvl = 42,
#line 5269
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5273
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5278
    [TRAINER_PBL_REX] =
    {
#line 5279
        .trainerName = _("STEVEN"),
#line 5280
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5281
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5283
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5285
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5289
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5288
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5287
            .lvl = 42,
#line 5286
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5290
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5295
    [TRAINER_PBL_LOUIS] =
    {
#line 5296
        .trainerName = _("STEVEN"),
#line 5297
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5298
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5300
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5302
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5306
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5305
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5304
            .lvl = 42,
#line 5303
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5307
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5312
    [TRAINER_PBL_LEROY] =
    {
#line 5313
        .trainerName = _("STEVEN"),
#line 5314
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5315
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5317
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5319
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5323
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5322
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5321
            .lvl = 42,
#line 5320
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5324
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5329
    [TRAINER_PBL_ELTON] =
    {
#line 5330
        .trainerName = _("STEVEN"),
#line 5331
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5332
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5334
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5336
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5340
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5339
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5338
            .lvl = 42,
#line 5337
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5341
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5346
    [TRAINER_PBL_WILLIE] =
    {
#line 5347
        .trainerName = _("STEVEN"),
#line 5348
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5349
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5351
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5353
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5357
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5356
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5355
            .lvl = 42,
#line 5354
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5358
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5363
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16] =
    {
#line 5364
        .trainerName = _("STEVEN"),
#line 5365
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5366
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5368
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5370
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5374
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5373
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5372
            .lvl = 42,
#line 5371
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5375
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5380
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16_CHALLENGE] =
    {
#line 5381
        .trainerName = _("STEVEN"),
#line 5382
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5383
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5385
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5387
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5391
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5390
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5389
            .lvl = 42,
#line 5388
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5392
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5397
    [TRAINER_PBL_PIRATE_1] =
    {
#line 5398
        .trainerName = _("STEVEN"),
#line 5399
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5400
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5402
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5404
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5408
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5407
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5406
            .lvl = 42,
#line 5405
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5409
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5414
    [TRAINER_PBL_PIRATE_2] =
    {
#line 5415
        .trainerName = _("STEVEN"),
#line 5416
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5417
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5419
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5421
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5425
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5424
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5423
            .lvl = 42,
#line 5422
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5426
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5431
    [TRAINER_PBL_PIRATE_3] =
    {
#line 5432
        .trainerName = _("STEVEN"),
#line 5433
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5434
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5436
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5438
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5442
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5441
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5440
            .lvl = 42,
#line 5439
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5443
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5448
    [TRAINER_PBL_PIRATE_4] =
    {
#line 5449
        .trainerName = _("STEVEN"),
#line 5450
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5451
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5453
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5455
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5459
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5458
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5457
            .lvl = 42,
#line 5456
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5460
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5465
    [TRAINER_PBL_SHAWN] =
    {
#line 5466
        .trainerName = _("STEVEN"),
#line 5467
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5468
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5470
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5472
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5476
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5475
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5474
            .lvl = 42,
#line 5473
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5477
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5482
    [TRAINER_PBL_FERNANDO] =
    {
#line 5483
        .trainerName = _("STEVEN"),
#line 5484
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5485
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5487
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5489
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5493
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5492
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5491
            .lvl = 42,
#line 5490
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5494
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5499
    [TRAINER_PBL_KANE] =
    {
#line 5500
        .trainerName = _("STEVEN"),
#line 5501
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5502
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5504
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5506
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5510
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5509
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5508
            .lvl = 42,
#line 5507
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5511
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5516
    [TRAINER_PBL_KIRK] =
    {
#line 5517
        .trainerName = _("STEVEN"),
#line 5518
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5519
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5521
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5523
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5527
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5526
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5525
            .lvl = 42,
#line 5524
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5528
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5533
    [TRAINER_PBL_DALTON] =
    {
#line 5534
        .trainerName = _("STEVEN"),
#line 5535
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5536
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5538
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5540
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5544
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5543
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5542
            .lvl = 42,
#line 5541
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5545
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5550
    [TRAINER_PBL_LEE] =
    {
#line 5551
        .trainerName = _("STEVEN"),
#line 5552
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5553
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5555
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5557
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5561
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5560
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5559
            .lvl = 42,
#line 5558
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5562
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5567
    [TRAINER_PBL_BLANCHE] =
    {
#line 5568
        .trainerName = _("STEVEN"),
#line 5569
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5570
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5572
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5574
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5578
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5577
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5576
            .lvl = 42,
#line 5575
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5579
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5584
    [TRAINER_PBL_TROY] =
    {
#line 5585
        .trainerName = _("STEVEN"),
#line 5586
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5587
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5589
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5591
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5595
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5594
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5593
            .lvl = 42,
#line 5592
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5596
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5601
    [TRAINER_PBL_ABED] =
    {
#line 5602
        .trainerName = _("STEVEN"),
#line 5603
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5604
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5606
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5608
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5612
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5611
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5610
            .lvl = 42,
#line 5609
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5613
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5618
    [TRAINER_PBL_TROY_BRUTAL] =
    {
#line 5619
        .trainerName = _("STEVEN"),
#line 5620
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5621
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5623
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5625
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5629
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5628
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5627
            .lvl = 42,
#line 5626
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5630
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5635
    [TRAINER_PBL_ABED_BRUTAL] =
    {
#line 5636
        .trainerName = _("STEVEN"),
#line 5637
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5638
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5640
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5642
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5646
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5645
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5644
            .lvl = 42,
#line 5643
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5647
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5652
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17] =
    {
#line 5653
        .trainerName = _("STEVEN"),
#line 5654
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5655
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5657
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5659
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5663
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5662
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5661
            .lvl = 42,
#line 5660
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5664
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5669
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17_CHALLENGE] =
    {
#line 5670
        .trainerName = _("STEVEN"),
#line 5671
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5672
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5674
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5676
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5680
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5679
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5678
            .lvl = 42,
#line 5677
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5681
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5686
    [TRAINER_PBL_ANITA] =
    {
#line 5687
        .trainerName = _("STEVEN"),
#line 5688
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5689
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5691
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5693
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5697
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5696
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5695
            .lvl = 42,
#line 5694
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5698
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5703
    [TRAINER_PBL_DESIREE] =
    {
#line 5704
        .trainerName = _("STEVEN"),
#line 5705
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5706
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5708
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5710
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5714
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5713
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5712
            .lvl = 42,
#line 5711
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5715
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5720
    [TRAINER_PBL_HOWARD] =
    {
#line 5721
        .trainerName = _("STEVEN"),
#line 5722
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5723
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5725
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5727
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5731
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5730
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5729
            .lvl = 42,
#line 5728
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5732
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5737
    [TRAINER_PBL_ELOISE] =
    {
#line 5738
        .trainerName = _("STEVEN"),
#line 5739
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5740
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5742
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5744
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5748
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5747
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5746
            .lvl = 42,
#line 5745
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5749
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5754
    [TRAINER_PBL_ALLY_AND_EMMY] =
    {
#line 5755
        .trainerName = _("STEVEN"),
#line 5756
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5757
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5759
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5761
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5765
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5764
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5763
            .lvl = 42,
#line 5762
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5766
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5771
    [TRAINER_PBL_AMIR] =
    {
#line 5772
        .trainerName = _("STEVEN"),
#line 5773
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5774
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5776
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5778
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5782
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5781
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5780
            .lvl = 42,
#line 5779
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5783
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5788
    [TRAINER_PBL_GETHIN] =
    {
#line 5789
        .trainerName = _("STEVEN"),
#line 5790
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5791
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5793
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5795
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5799
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5798
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5797
            .lvl = 42,
#line 5796
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5800
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5805
    [TRAINER_PBL_BERNARD] =
    {
#line 5806
        .trainerName = _("STEVEN"),
#line 5807
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5808
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5810
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5812
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5816
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5815
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5814
            .lvl = 42,
#line 5813
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5817
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5822
    [TRAINER_PBL_ELLIE] =
    {
#line 5823
        .trainerName = _("STEVEN"),
#line 5824
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5825
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5827
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5829
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5833
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5832
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5831
            .lvl = 42,
#line 5830
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5834
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5839
    [TRAINER_PBL_RUSTY] =
    {
#line 5840
        .trainerName = _("STEVEN"),
#line 5841
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5842
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5844
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5846
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5850
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5849
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5848
            .lvl = 42,
#line 5847
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5851
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5856
    [TRAINER_PBL_CODY] =
    {
#line 5857
        .trainerName = _("STEVEN"),
#line 5858
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5859
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5861
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5863
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5867
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5866
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5865
            .lvl = 42,
#line 5864
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5868
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5873
    [TRAINER_PBL_LEWIS] =
    {
#line 5874
        .trainerName = _("STEVEN"),
#line 5875
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5876
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5878
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5880
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5884
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5883
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5882
            .lvl = 42,
#line 5881
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5885
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5890
    [TRAINER_PBL_CORNELIUS] =
    {
#line 5891
        .trainerName = _("STEVEN"),
#line 5892
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5893
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5895
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5897
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5901
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5900
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5899
            .lvl = 42,
#line 5898
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5902
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5907
    [TRAINER_PBL_INEZ_AND_EMMA] =
    {
#line 5908
        .trainerName = _("STEVEN"),
#line 5909
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5910
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5912
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5914
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5918
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5917
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5916
            .lvl = 42,
#line 5915
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5919
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5924
    [TRAINER_PBL_HELEN] =
    {
#line 5925
        .trainerName = _("STEVEN"),
#line 5926
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5927
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5929
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5931
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5935
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5934
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5933
            .lvl = 42,
#line 5932
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5936
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5941
    [TRAINER_PBL_WESLEY] =
    {
#line 5942
        .trainerName = _("STEVEN"),
#line 5943
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5944
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5946
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5948
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5952
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5951
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5950
            .lvl = 42,
#line 5949
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5953
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5958
    [TRAINER_PBL_ALFREDO] =
    {
#line 5959
        .trainerName = _("STEVEN"),
#line 5960
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5961
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5963
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5965
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5969
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5968
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5967
            .lvl = 42,
#line 5966
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5970
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5975
    [TRAINER_PBL_IAN] =
    {
#line 5976
        .trainerName = _("STEVEN"),
#line 5977
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5978
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5980
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5982
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5986
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 5985
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5984
            .lvl = 42,
#line 5983
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5987
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 5992
    [TRAINER_PBL_AUDREY] =
    {
#line 5993
        .trainerName = _("STEVEN"),
#line 5994
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 5995
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 5997
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5999
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6003
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6002
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6001
            .lvl = 42,
#line 6000
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6004
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6009
    [TRAINER_PBL_LEVIATHAN13] =
    {
#line 6010
        .trainerName = _("STEVEN"),
#line 6011
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6012
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6014
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6016
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6020
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6019
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6018
            .lvl = 42,
#line 6017
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6021
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6026
    [TRAINER_PBL_EDGARDO] =
    {
#line 6027
        .trainerName = _("STEVEN"),
#line 6028
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6029
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6031
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6033
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6037
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6036
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6035
            .lvl = 42,
#line 6034
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6038
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6043
    [TRAINER_PBL_JEAN] =
    {
#line 6044
        .trainerName = _("STEVEN"),
#line 6045
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6046
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6048
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6050
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6054
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6053
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6052
            .lvl = 42,
#line 6051
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6055
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6060
    [TRAINER_PBL_ROSE] =
    {
#line 6061
        .trainerName = _("STEVEN"),
#line 6062
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6063
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6065
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6067
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6071
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6070
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6069
            .lvl = 42,
#line 6068
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6072
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6077
    [TRAINER_PBL_JENNIFER] =
    {
#line 6078
        .trainerName = _("STEVEN"),
#line 6079
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6080
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6082
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6084
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6088
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6087
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6086
            .lvl = 42,
#line 6085
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6089
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6094
    [TRAINER_PBL_MATTHEW] =
    {
#line 6095
        .trainerName = _("STEVEN"),
#line 6096
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6097
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6099
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6101
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6105
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6104
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6103
            .lvl = 42,
#line 6102
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6106
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6111
    [TRAINER_PBL_KERRY] =
    {
#line 6112
        .trainerName = _("STEVEN"),
#line 6113
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6114
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6116
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6118
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6122
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6121
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6120
            .lvl = 42,
#line 6119
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6123
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6128
    [TRAINER_PBL_ANNIE] =
    {
#line 6129
        .trainerName = _("STEVEN"),
#line 6130
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6131
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6133
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6135
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6139
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6138
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6137
            .lvl = 42,
#line 6136
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6140
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6145
    [TRAINER_PBL_CHRISTI] =
    {
#line 6146
        .trainerName = _("STEVEN"),
#line 6147
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6148
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6150
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6152
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6156
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6155
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6154
            .lvl = 42,
#line 6153
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6157
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6162
    [TRAINER_PBL_SPENCER] =
    {
#line 6163
        .trainerName = _("STEVEN"),
#line 6164
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6165
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6167
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6169
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6173
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6171
            .lvl = 42,
#line 6170
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6174
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6179
    [TRAINER_PBL_HAYWOOD] =
    {
#line 6180
        .trainerName = _("STEVEN"),
#line 6181
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6182
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6184
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6186
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6190
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6189
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6188
            .lvl = 42,
#line 6187
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6191
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6196
    [TRAINER_PBL_MONROE] =
    {
#line 6197
        .trainerName = _("STEVEN"),
#line 6198
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6199
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6201
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6203
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6207
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6206
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6205
            .lvl = 42,
#line 6204
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6208
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6213
    [TRAINER_PBL_DAVID] =
    {
#line 6214
        .trainerName = _("STEVEN"),
#line 6215
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6216
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6218
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6220
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6224
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6223
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6222
            .lvl = 42,
#line 6221
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6225
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6230
    [TRAINER_PBL_DOMINIK] =
    {
#line 6231
        .trainerName = _("STEVEN"),
#line 6232
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6233
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6235
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6237
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6241
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6240
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6239
            .lvl = 42,
#line 6238
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6242
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6247
    [TRAINER_PBL_DOUGLAS] =
    {
#line 6248
        .trainerName = _("STEVEN"),
#line 6249
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6250
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6252
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6254
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6258
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6257
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6256
            .lvl = 42,
#line 6255
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6259
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6264
    [TRAINER_PBL_NADINE] =
    {
#line 6265
        .trainerName = _("STEVEN"),
#line 6266
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6267
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6269
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6271
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6275
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6274
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6273
            .lvl = 42,
#line 6272
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6276
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6281
    [TRAINER_PBL_SANDY] =
    {
#line 6282
        .trainerName = _("STEVEN"),
#line 6283
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6284
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6286
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6288
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6292
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6291
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6290
            .lvl = 42,
#line 6289
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6293
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6298
    [TRAINER_PBL_SHELDON] =
    {
#line 6299
        .trainerName = _("STEVEN"),
#line 6300
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6301
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6303
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6305
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6309
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6308
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6307
            .lvl = 42,
#line 6306
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6310
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6315
    [TRAINER_PBL_LEVIATHAN14] =
    {
#line 6316
        .trainerName = _("STEVEN"),
#line 6317
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6318
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6320
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6322
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6326
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6325
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6324
            .lvl = 42,
#line 6323
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6327
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6332
    [TRAINER_PBL_LEVIATHAN12_BRUTAL] =
    {
#line 6333
        .trainerName = _("STEVEN"),
#line 6334
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6335
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6337
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6339
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6343
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6342
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6341
            .lvl = 42,
#line 6340
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6344
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6349
    [TRAINER_PBL_LEVIATHAN13_BRUTAL] =
    {
#line 6350
        .trainerName = _("STEVEN"),
#line 6351
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6352
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6354
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6356
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6360
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6359
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6358
            .lvl = 42,
#line 6357
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6361
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6366
    [TRAINER_PBL_LEVIATHAN14_BRUTAL] =
    {
#line 6367
        .trainerName = _("STEVEN"),
#line 6368
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6369
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6371
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6373
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6377
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6376
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6375
            .lvl = 42,
#line 6374
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6378
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 6383
    [TRAINER_PBL_LEVIATHAN12] =
    {
#line 6384
        .trainerName = _("STEVEN"),
#line 6385
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6386
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 6388
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6390
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6394
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 6393
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6392
            .lvl = 42,
#line 6391
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6395
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
