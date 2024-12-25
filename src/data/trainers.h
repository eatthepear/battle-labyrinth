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
    [TRAINER_PBL_DECLAN_LEVIATHAN_5] =
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
    [TRAINER_PBL_DECLAN_LEVIATHAN_5_BRUTAL] =
    {
#line 1628
        .trainerName = _("Declan"),
#line 1629
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 1630
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 1631
            TRAINER_ENCOUNTER_MUSIC_MALE,
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
#line 1640
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1638
            .ability = ABILITY_SERENE_GRACE,
#line 1639
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1641
                MOVE_HEADBUTT,
                MOVE_ANCIENT_POWER,
                MOVE_GLARE,
                MOVE_ASTONISH,
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
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1998
            .ability = ABILITY_SWIFT_SWIM,
#line 1999
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2001
                MOVE_WATER_PULSE,
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
                MOVE_WATER_PULSE,
                MOVE_DRAINING_KISS,
                MOVE_HEAL_PULSE,
                MOVE_SWEET_KISS,
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
                MOVE_WATER_PULSE,
                MOVE_TAILWIND,
                MOVE_GUST,
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
        .partySize = 5,
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
                MOVE_ACID_SPRAY,
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
            .heldItem = ITEM_SITRUS_BERRY,
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
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2514
                MOVE_BITE,
                MOVE_HOWL,
                MOVE_HEADBUTT,
                MOVE_TRAILBLAZE,
            },
            },
            {
#line 2519
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2519
            .heldItem = ITEM_BLACK_BELT,
#line 2522
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2520
            .ability = ABILITY_GUTS,
#line 2521
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2523
                MOVE_REVENGE,
                MOVE_SEISMIC_TOSS,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 2528
    [TRAINER_PBL_ALISTAIR_LEVIATHAN_8_CHALLENGE] =
    {
#line 2529
        .trainerName = _("Alistair"),
#line 2530
        .trainerClass = TRAINER_CLASS_ROUGHNECK,
#line 2531
        .trainerPic = TRAINER_PIC_ROUGHNECK,
        .encounterMusic_gender =
#line 2532
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2534
        .doubleBattle = FALSE,
#line 2533
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 2536
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 2535
        .randomLead = FALSE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2538
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2538
            .heldItem = ITEM_POISON_BARB,
#line 2541
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2539
            .ability = ABILITY_POISON_TOUCH,
#line 2540
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2542
                MOVE_SLUDGE,
                MOVE_ACID_SPRAY,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2547
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2547
            .heldItem = ITEM_SHARP_BEAK,
#line 2550
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2548
            .ability = ABILITY_AFTERMATH,
#line 2549
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2551
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_DEFOG,
            },
            },
            {
#line 2556
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2556
            .heldItem = ITEM_SITRUS_BERRY,
#line 2559
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2557
            .ability = ABILITY_POISON_TOUCH,
#line 2558
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2560
                MOVE_VENOSHOCK,
                MOVE_VACUUM_WAVE,
                MOVE_FAKE_OUT,
                MOVE_THIEF,
            },
            },
            {
#line 2565
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2565
            .heldItem = ITEM_SITRUS_BERRY,
#line 2568
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2566
            .ability = ABILITY_STRONG_JAW,
#line 2567
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2569
                MOVE_BITE,
                MOVE_HOWL,
                MOVE_HEADBUTT,
                MOVE_TRAILBLAZE,
            },
            },
            {
#line 2574
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2574
            .heldItem = ITEM_BLACK_BELT,
#line 2577
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2575
            .ability = ABILITY_GUTS,
#line 2576
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2578
                MOVE_REVENGE,
                MOVE_SEISMIC_TOSS,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 2583
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2583
            .heldItem = ITEM_SITRUS_BERRY,
#line 2586
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2584
            .ability = ABILITY_MERCILESS,
#line 2585
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2587
                MOVE_VENOSHOCK,
                MOVE_POISON_FANG,
                MOVE_THIEF,
                MOVE_GLARE,
            },
            },
        },
    },
#line 2592
    [TRAINER_PBL_COOPER] =
    {
#line 2593
        .trainerName = _("STEVEN"),
#line 2594
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2595
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2597
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2599
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2603
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2602
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2601
            .lvl = 42,
#line 2600
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2604
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2609
    [TRAINER_PBL_CARMINE] =
    {
#line 2610
        .trainerName = _("STEVEN"),
#line 2611
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2612
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2614
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2616
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2620
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2619
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2618
            .lvl = 42,
#line 2617
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2621
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2626
    [TRAINER_PBL_ARI] =
    {
#line 2627
        .trainerName = _("STEVEN"),
#line 2628
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2629
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2631
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2633
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2637
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2635
            .lvl = 42,
#line 2634
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2638
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2643
    [TRAINER_PBL_BERTHA] =
    {
#line 2644
        .trainerName = _("STEVEN"),
#line 2645
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2646
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2648
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2650
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2654
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2653
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2652
            .lvl = 42,
#line 2651
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2655
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2660
    [TRAINER_PBL_CASSANDRA] =
    {
#line 2661
        .trainerName = _("STEVEN"),
#line 2662
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2663
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2665
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2667
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2671
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2670
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2669
            .lvl = 42,
#line 2668
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2672
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2677
    [TRAINER_PBL_DOMINIC] =
    {
#line 2678
        .trainerName = _("STEVEN"),
#line 2679
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2680
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2682
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2684
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2688
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2687
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2686
            .lvl = 42,
#line 2685
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2689
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2694
    [TRAINER_PBL_ERICA] =
    {
#line 2695
        .trainerName = _("STEVEN"),
#line 2696
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2697
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2699
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2701
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2705
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2704
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2703
            .lvl = 42,
#line 2702
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2706
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2711
    [TRAINER_PBL_KYLE] =
    {
#line 2712
        .trainerName = _("STEVEN"),
#line 2713
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2714
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2716
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2718
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2722
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2721
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2720
            .lvl = 42,
#line 2719
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2723
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2728
    [TRAINER_PBL_BELLE] =
    {
#line 2729
        .trainerName = _("STEVEN"),
#line 2730
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2731
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2733
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2735
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2739
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2738
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2737
            .lvl = 42,
#line 2736
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2740
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2745
    [TRAINER_PBL_DEWEY] =
    {
#line 2746
        .trainerName = _("STEVEN"),
#line 2747
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2748
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2750
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2752
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2756
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2755
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2754
            .lvl = 42,
#line 2753
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2757
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2762
    [TRAINER_PBL_PEARLIE] =
    {
#line 2763
        .trainerName = _("STEVEN"),
#line 2764
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2765
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2767
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2769
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2773
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2772
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2771
            .lvl = 42,
#line 2770
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2774
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2779
    [TRAINER_PBL_ERNEST] =
    {
#line 2780
        .trainerName = _("STEVEN"),
#line 2781
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2782
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2784
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2786
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2790
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2789
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2788
            .lvl = 42,
#line 2787
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2791
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2796
    [TRAINER_PBL_ALANA] =
    {
#line 2797
        .trainerName = _("STEVEN"),
#line 2798
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2799
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2801
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2803
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2807
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2806
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2805
            .lvl = 42,
#line 2804
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2808
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2813
    [TRAINER_PBL_SUSAN] =
    {
#line 2814
        .trainerName = _("STEVEN"),
#line 2815
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2816
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2818
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2820
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2824
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2823
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2822
            .lvl = 42,
#line 2821
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2825
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2830
    [TRAINER_PBL_CONRAD] =
    {
#line 2831
        .trainerName = _("STEVEN"),
#line 2832
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2833
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2835
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2837
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2841
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2840
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2839
            .lvl = 42,
#line 2838
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2842
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2847
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9] =
    {
#line 2848
        .trainerName = _("STEVEN"),
#line 2849
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2850
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2852
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2854
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2858
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2857
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2856
            .lvl = 42,
#line 2855
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2859
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2864
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9_BRUTAL] =
    {
#line 2865
        .trainerName = _("STEVEN"),
#line 2866
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2867
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2869
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2871
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2875
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2874
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2873
            .lvl = 42,
#line 2872
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2876
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2881
    [TRAINER_PBL_JEANETTE] =
    {
#line 2882
        .trainerName = _("STEVEN"),
#line 2883
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2884
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2886
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2888
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2892
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2891
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2890
            .lvl = 42,
#line 2889
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2893
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2898
    [TRAINER_PBL_EMMA_AND_LEO] =
    {
#line 2899
        .trainerName = _("STEVEN"),
#line 2900
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2901
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2903
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2905
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2909
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2908
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2907
            .lvl = 42,
#line 2906
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2910
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2915
    [TRAINER_PBL_JOEL] =
    {
#line 2916
        .trainerName = _("STEVEN"),
#line 2917
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2918
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2920
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2922
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2926
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2925
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2924
            .lvl = 42,
#line 2923
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2927
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2932
    [TRAINER_PBL_MARION] =
    {
#line 2933
        .trainerName = _("STEVEN"),
#line 2934
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2935
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2937
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2939
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2943
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2942
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2941
            .lvl = 42,
#line 2940
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2944
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2949
    [TRAINER_PBL_REGINA] =
    {
#line 2950
        .trainerName = _("STEVEN"),
#line 2951
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2952
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2954
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2956
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2960
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2959
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2958
            .lvl = 42,
#line 2957
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2961
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2966
    [TRAINER_PBL_NEWTON_LEVIATHAN_10] =
    {
#line 2967
        .trainerName = _("STEVEN"),
#line 2968
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2969
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2971
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2973
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2977
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2976
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2975
            .lvl = 42,
#line 2974
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2978
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2983
    [TRAINER_PBL_NEWTON_LEVIATHAN_10_BRUTAL] =
    {
#line 2984
        .trainerName = _("STEVEN"),
#line 2985
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2986
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 2988
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2990
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2994
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2993
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2992
            .lvl = 42,
#line 2991
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2995
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3000
    [TRAINER_PBL_ESSENCE] =
    {
#line 3001
        .trainerName = _("STEVEN"),
#line 3002
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3003
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3005
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3007
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3011
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3010
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3009
            .lvl = 42,
#line 3008
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3012
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3017
    [TRAINER_PBL_DOLORES] =
    {
#line 3018
        .trainerName = _("STEVEN"),
#line 3019
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3020
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3022
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3024
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3028
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3027
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3026
            .lvl = 42,
#line 3025
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3029
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3034
    [TRAINER_PBL_JULIE] =
    {
#line 3035
        .trainerName = _("STEVEN"),
#line 3036
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3037
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3039
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3041
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3045
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3044
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3043
            .lvl = 42,
#line 3042
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3046
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3051
    [TRAINER_PBL_ROMULUS] =
    {
#line 3052
        .trainerName = _("STEVEN"),
#line 3053
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3054
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3056
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3058
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3062
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3061
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3060
            .lvl = 42,
#line 3059
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3063
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3068
    [TRAINER_PBL_TREVOR] =
    {
#line 3069
        .trainerName = _("STEVEN"),
#line 3070
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3071
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3073
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3075
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3079
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3078
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3077
            .lvl = 42,
#line 3076
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3080
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3085
    [TRAINER_PBL_FEDERICO] =
    {
#line 3086
        .trainerName = _("STEVEN"),
#line 3087
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3088
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3090
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3092
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3096
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3095
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3094
            .lvl = 42,
#line 3093
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3097
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3102
    [TRAINER_PBL_GENIE] =
    {
#line 3103
        .trainerName = _("STEVEN"),
#line 3104
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3105
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3107
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3109
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3113
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3112
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3111
            .lvl = 42,
#line 3110
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3114
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3119
    [TRAINER_PBL_HILDA] =
    {
#line 3120
        .trainerName = _("STEVEN"),
#line 3121
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3122
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3124
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3126
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3130
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3129
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3128
            .lvl = 42,
#line 3127
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3131
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3136
    [TRAINER_PBL_KINLEY] =
    {
#line 3137
        .trainerName = _("STEVEN"),
#line 3138
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3139
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3141
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3143
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3147
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3146
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3145
            .lvl = 42,
#line 3144
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3148
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3153
    [TRAINER_PBL_VIOLET] =
    {
#line 3154
        .trainerName = _("STEVEN"),
#line 3155
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3156
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3158
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3160
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3164
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3163
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3162
            .lvl = 42,
#line 3161
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3165
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3170
    [TRAINER_PBL_WANDA] =
    {
#line 3171
        .trainerName = _("STEVEN"),
#line 3172
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3173
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3175
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3177
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3181
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3180
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3179
            .lvl = 42,
#line 3178
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3182
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3187
    [TRAINER_PBL_AMBER_AND_KIM] =
    {
#line 3188
        .trainerName = _("STEVEN"),
#line 3189
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3190
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3192
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3194
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3198
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3197
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3196
            .lvl = 42,
#line 3195
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3199
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3204
    [TRAINER_PBL_JAN_AND_ERIN] =
    {
#line 3205
        .trainerName = _("STEVEN"),
#line 3206
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3207
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3209
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3211
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3215
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3214
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3213
            .lvl = 42,
#line 3212
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3216
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3221
    [TRAINER_PBL_STEVE] =
    {
#line 3222
        .trainerName = _("STEVEN"),
#line 3223
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3224
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3226
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3228
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3232
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3231
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3230
            .lvl = 42,
#line 3229
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3233
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3238
    [TRAINER_PBL_GOULD] =
    {
#line 3239
        .trainerName = _("STEVEN"),
#line 3240
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3241
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3243
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3245
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3249
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3248
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3247
            .lvl = 42,
#line 3246
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3250
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3255
    [TRAINER_PBL_MENDEL] =
    {
#line 3256
        .trainerName = _("STEVEN"),
#line 3257
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3258
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3260
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3262
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3266
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3265
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3264
            .lvl = 42,
#line 3263
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3267
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3272
    [TRAINER_PBL_DARWIN] =
    {
#line 3273
        .trainerName = _("STEVEN"),
#line 3274
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3275
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3277
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3279
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3283
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3282
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3281
            .lvl = 42,
#line 3280
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3284
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3289
    [TRAINER_PBL_JENNY_LEVIATHAN_11] =
    {
#line 3290
        .trainerName = _("STEVEN"),
#line 3291
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3292
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3294
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3296
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3300
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3299
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3298
            .lvl = 42,
#line 3297
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3301
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3306
    [TRAINER_PBL_JENNY_LEVIATHAN_11_BRUTAL] =
    {
#line 3307
        .trainerName = _("STEVEN"),
#line 3308
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3309
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3311
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3313
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3317
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3316
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3315
            .lvl = 42,
#line 3314
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3318
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3323
    [TRAINER_PBL_BART] =
    {
#line 3324
        .trainerName = _("STEVEN"),
#line 3325
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3326
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3328
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3330
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3334
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3333
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3332
            .lvl = 42,
#line 3331
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3335
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3340
    [TRAINER_PBL_NIGEL] =
    {
#line 3341
        .trainerName = _("STEVEN"),
#line 3342
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3343
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3345
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3347
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3351
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3350
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3349
            .lvl = 42,
#line 3348
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3352
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3357
    [TRAINER_PBL_LOLA] =
    {
#line 3358
        .trainerName = _("STEVEN"),
#line 3359
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3360
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3362
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3364
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3368
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3367
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3366
            .lvl = 42,
#line 3365
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3369
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3374
    [TRAINER_PBL_CHARLIE] =
    {
#line 3375
        .trainerName = _("STEVEN"),
#line 3376
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3377
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3379
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3381
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3385
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3384
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3383
            .lvl = 42,
#line 3382
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3386
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3391
    [TRAINER_PBL_RANDOLPH] =
    {
#line 3392
        .trainerName = _("STEVEN"),
#line 3393
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3394
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3396
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3398
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3402
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3401
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3400
            .lvl = 42,
#line 3399
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3403
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3408
    [TRAINER_PBL_TODD] =
    {
#line 3409
        .trainerName = _("STEVEN"),
#line 3410
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3411
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3413
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3415
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3419
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3418
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3417
            .lvl = 42,
#line 3416
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3420
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3425
    [TRAINER_PBL_RUSSELL] =
    {
#line 3426
        .trainerName = _("STEVEN"),
#line 3427
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3428
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3430
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3432
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3436
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3435
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3434
            .lvl = 42,
#line 3433
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3437
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3442
    [TRAINER_PBL_OTIS] =
    {
#line 3443
        .trainerName = _("STEVEN"),
#line 3444
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3445
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3447
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3449
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3453
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3451
            .lvl = 42,
#line 3450
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3454
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3459
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12] =
    {
#line 3460
        .trainerName = _("STEVEN"),
#line 3461
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3462
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3464
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3466
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3470
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3469
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3468
            .lvl = 42,
#line 3467
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3471
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3476
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12_BRUTAL] =
    {
#line 3477
        .trainerName = _("STEVEN"),
#line 3478
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3479
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3481
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3483
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3487
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3486
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3485
            .lvl = 42,
#line 3484
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3488
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3493
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13] =
    {
#line 3494
        .trainerName = _("STEVEN"),
#line 3495
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3496
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3498
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3500
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3504
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3503
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3502
            .lvl = 42,
#line 3501
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3505
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3510
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13_BRUTAL] =
    {
#line 3511
        .trainerName = _("STEVEN"),
#line 3512
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3513
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3515
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3517
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3521
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3520
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3519
            .lvl = 42,
#line 3518
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3522
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3527
    [TRAINER_PBL_IONA] =
    {
#line 3528
        .trainerName = _("STEVEN"),
#line 3529
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3530
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3532
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3534
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3538
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3537
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3536
            .lvl = 42,
#line 3535
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3539
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3544
    [TRAINER_PBL_BERKE] =
    {
#line 3545
        .trainerName = _("STEVEN"),
#line 3546
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3547
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3549
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3551
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3555
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3554
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3553
            .lvl = 42,
#line 3552
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3556
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3561
    [TRAINER_PBL_TANISHA] =
    {
#line 3562
        .trainerName = _("STEVEN"),
#line 3563
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3564
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3566
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3568
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3572
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3571
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3570
            .lvl = 42,
#line 3569
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3573
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3578
    [TRAINER_PBL_ROBERT] =
    {
#line 3579
        .trainerName = _("STEVEN"),
#line 3580
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3581
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3583
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3585
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3589
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3588
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3587
            .lvl = 42,
#line 3586
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3590
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3595
    [TRAINER_PBL_CHRIS] =
    {
#line 3596
        .trainerName = _("STEVEN"),
#line 3597
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3598
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3600
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3602
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3606
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3605
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3604
            .lvl = 42,
#line 3603
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3607
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3612
    [TRAINER_PBL_ANGUS] =
    {
#line 3613
        .trainerName = _("STEVEN"),
#line 3614
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3615
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3617
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3619
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3623
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3622
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3621
            .lvl = 42,
#line 3620
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3624
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3629
    [TRAINER_PBL_LILY_LEVIATHAN_14] =
    {
#line 3630
        .trainerName = _("STEVEN"),
#line 3631
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3632
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3634
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3636
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3640
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3639
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3638
            .lvl = 42,
#line 3637
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3641
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3646
    [TRAINER_PBL_LILY_LEVIATHAN_14_BRUTAL] =
    {
#line 3647
        .trainerName = _("STEVEN"),
#line 3648
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3649
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3651
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3653
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3657
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3656
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3655
            .lvl = 42,
#line 3654
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3658
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3663
    [TRAINER_PBL_AXLE] =
    {
#line 3664
        .trainerName = _("STEVEN"),
#line 3665
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3666
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3668
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3670
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3674
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3673
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3672
            .lvl = 42,
#line 3671
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3675
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3680
    [TRAINER_PBL_RAFAEL] =
    {
#line 3681
        .trainerName = _("STEVEN"),
#line 3682
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3683
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3685
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3687
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3691
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3690
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3689
            .lvl = 42,
#line 3688
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3692
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3697
    [TRAINER_PBL_GEORGINA] =
    {
#line 3698
        .trainerName = _("STEVEN"),
#line 3699
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3700
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3702
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3704
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3708
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3707
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3706
            .lvl = 42,
#line 3705
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3709
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3714
    [TRAINER_PBL_MIA_LEVIATHAN_15] =
    {
#line 3715
        .trainerName = _("STEVEN"),
#line 3716
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3717
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3719
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3721
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3725
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3724
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3723
            .lvl = 42,
#line 3722
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3726
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3731
    [TRAINER_PBL_MIA_LEVIATHAN_15_BRUTAL] =
    {
#line 3732
        .trainerName = _("STEVEN"),
#line 3733
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3734
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3736
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3738
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3742
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3741
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3740
            .lvl = 42,
#line 3739
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3743
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3748
    [TRAINER_PBL_DORIS] =
    {
#line 3749
        .trainerName = _("STEVEN"),
#line 3750
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3751
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3753
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3755
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3759
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3758
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3757
            .lvl = 42,
#line 3756
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3760
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3765
    [TRAINER_PBL_HOMER] =
    {
#line 3766
        .trainerName = _("STEVEN"),
#line 3767
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3768
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3770
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3772
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3776
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3775
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3774
            .lvl = 42,
#line 3773
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3777
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3782
    [TRAINER_PBL_JOHN] =
    {
#line 3783
        .trainerName = _("STEVEN"),
#line 3784
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3785
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3787
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3789
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3793
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3792
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3791
            .lvl = 42,
#line 3790
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3794
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3799
    [TRAINER_PBL_GLENN] =
    {
#line 3800
        .trainerName = _("STEVEN"),
#line 3801
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3802
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3804
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3806
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3810
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3809
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3808
            .lvl = 42,
#line 3807
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3811
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3816
    [TRAINER_PBL_JAY] =
    {
#line 3817
        .trainerName = _("STEVEN"),
#line 3818
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3819
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3821
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3823
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3827
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3826
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3825
            .lvl = 42,
#line 3824
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3828
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3833
    [TRAINER_PBL_TYLER] =
    {
#line 3834
        .trainerName = _("STEVEN"),
#line 3835
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3836
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3838
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3840
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3844
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3843
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3842
            .lvl = 42,
#line 3841
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3845
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3850
    [TRAINER_PBL_TERRENCE] =
    {
#line 3851
        .trainerName = _("STEVEN"),
#line 3852
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3853
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3855
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3857
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3861
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3860
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3859
            .lvl = 42,
#line 3858
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3862
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3867
    [TRAINER_PBL_MARTY] =
    {
#line 3868
        .trainerName = _("STEVEN"),
#line 3869
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3870
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3872
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3874
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3878
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3877
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3876
            .lvl = 42,
#line 3875
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3879
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3884
    [TRAINER_PBL_KARI] =
    {
#line 3885
        .trainerName = _("STEVEN"),
#line 3886
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3887
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3889
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3891
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3895
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3894
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3893
            .lvl = 42,
#line 3892
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3896
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3901
    [TRAINER_PBL_ABRAHAM] =
    {
#line 3902
        .trainerName = _("STEVEN"),
#line 3903
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3904
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3906
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3908
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3912
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3911
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3910
            .lvl = 42,
#line 3909
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3913
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3918
    [TRAINER_PBL_MELINDA] =
    {
#line 3919
        .trainerName = _("STEVEN"),
#line 3920
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3921
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3923
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3925
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3929
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3928
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3927
            .lvl = 42,
#line 3926
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3930
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3935
    [TRAINER_PBL_EMILIO] =
    {
#line 3936
        .trainerName = _("STEVEN"),
#line 3937
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3938
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3940
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3942
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3946
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3945
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3944
            .lvl = 42,
#line 3943
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3947
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3952
    [TRAINER_PBL_REX] =
    {
#line 3953
        .trainerName = _("STEVEN"),
#line 3954
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3955
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3957
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3959
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3963
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3962
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3961
            .lvl = 42,
#line 3960
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3964
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3969
    [TRAINER_PBL_LOUIS] =
    {
#line 3970
        .trainerName = _("STEVEN"),
#line 3971
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3972
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3974
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3976
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3980
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3979
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3978
            .lvl = 42,
#line 3977
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3981
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3986
    [TRAINER_PBL_LEROY] =
    {
#line 3987
        .trainerName = _("STEVEN"),
#line 3988
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3989
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 3991
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3993
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3997
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3995
            .lvl = 42,
#line 3994
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3998
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4003
    [TRAINER_PBL_ELTON] =
    {
#line 4004
        .trainerName = _("STEVEN"),
#line 4005
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4006
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4008
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4010
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4014
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4013
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4012
            .lvl = 42,
#line 4011
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4015
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4020
    [TRAINER_PBL_WILLIE] =
    {
#line 4021
        .trainerName = _("STEVEN"),
#line 4022
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4023
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4025
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4027
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4031
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4030
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4029
            .lvl = 42,
#line 4028
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4032
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4037
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16] =
    {
#line 4038
        .trainerName = _("STEVEN"),
#line 4039
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4040
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4042
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4044
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4048
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4047
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4046
            .lvl = 42,
#line 4045
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4049
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4054
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16_BRUTAL] =
    {
#line 4055
        .trainerName = _("STEVEN"),
#line 4056
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4057
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4059
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4061
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4065
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4064
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4063
            .lvl = 42,
#line 4062
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4066
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4071
    [TRAINER_PBL_PIRATE_1] =
    {
#line 4072
        .trainerName = _("STEVEN"),
#line 4073
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4074
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4076
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4078
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4082
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4081
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4080
            .lvl = 42,
#line 4079
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4083
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4088
    [TRAINER_PBL_PIRATE_2] =
    {
#line 4089
        .trainerName = _("STEVEN"),
#line 4090
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4091
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4093
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4095
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4099
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4098
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4097
            .lvl = 42,
#line 4096
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4100
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4105
    [TRAINER_PBL_PIRATE_3] =
    {
#line 4106
        .trainerName = _("STEVEN"),
#line 4107
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4108
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4110
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4112
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4116
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4115
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4114
            .lvl = 42,
#line 4113
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4117
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4122
    [TRAINER_PBL_PIRATE_4] =
    {
#line 4123
        .trainerName = _("STEVEN"),
#line 4124
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4125
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4127
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4129
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4133
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4131
            .lvl = 42,
#line 4130
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4134
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4139
    [TRAINER_PBL_SHAWN] =
    {
#line 4140
        .trainerName = _("STEVEN"),
#line 4141
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4142
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4144
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4146
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4150
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4149
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4148
            .lvl = 42,
#line 4147
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4151
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4156
    [TRAINER_PBL_FERNANDO] =
    {
#line 4157
        .trainerName = _("STEVEN"),
#line 4158
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4159
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4161
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4163
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4167
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4166
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4165
            .lvl = 42,
#line 4164
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4168
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4173
    [TRAINER_PBL_KANE] =
    {
#line 4174
        .trainerName = _("STEVEN"),
#line 4175
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4176
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4178
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4180
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4184
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4183
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4182
            .lvl = 42,
#line 4181
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4185
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4190
    [TRAINER_PBL_KIRK] =
    {
#line 4191
        .trainerName = _("STEVEN"),
#line 4192
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4193
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4195
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4197
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4201
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4200
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4199
            .lvl = 42,
#line 4198
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4202
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4207
    [TRAINER_PBL_DALTON] =
    {
#line 4208
        .trainerName = _("STEVEN"),
#line 4209
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4210
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4212
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4214
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4218
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4217
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4216
            .lvl = 42,
#line 4215
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4219
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4224
    [TRAINER_PBL_LEE] =
    {
#line 4225
        .trainerName = _("STEVEN"),
#line 4226
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4227
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4229
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4231
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4235
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4234
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4233
            .lvl = 42,
#line 4232
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4236
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4241
    [TRAINER_PBL_BLANCHE] =
    {
#line 4242
        .trainerName = _("STEVEN"),
#line 4243
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4244
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4246
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4248
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4252
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4251
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4250
            .lvl = 42,
#line 4249
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4253
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4258
    [TRAINER_PBL_TROY] =
    {
#line 4259
        .trainerName = _("STEVEN"),
#line 4260
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4261
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4263
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4265
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4269
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4267
            .lvl = 42,
#line 4266
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4270
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4275
    [TRAINER_PBL_ABED] =
    {
#line 4276
        .trainerName = _("STEVEN"),
#line 4277
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4278
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4280
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4282
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4286
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4285
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4284
            .lvl = 42,
#line 4283
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4287
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4292
    [TRAINER_PBL_TROY_BRUTAL] =
    {
#line 4293
        .trainerName = _("STEVEN"),
#line 4294
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4295
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4297
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4299
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4303
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4302
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4301
            .lvl = 42,
#line 4300
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4304
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4309
    [TRAINER_PBL_ABED_BRUTAL] =
    {
#line 4310
        .trainerName = _("STEVEN"),
#line 4311
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4312
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4314
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4316
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4320
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4319
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4318
            .lvl = 42,
#line 4317
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4321
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4326
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17] =
    {
#line 4327
        .trainerName = _("STEVEN"),
#line 4328
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4329
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4331
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4333
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4337
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4336
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4335
            .lvl = 42,
#line 4334
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4338
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4343
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17_BRUTAL] =
    {
#line 4344
        .trainerName = _("STEVEN"),
#line 4345
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4346
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4348
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4350
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4354
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4353
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4352
            .lvl = 42,
#line 4351
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4355
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4360
    [TRAINER_PBL_ANITA] =
    {
#line 4361
        .trainerName = _("STEVEN"),
#line 4362
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4363
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4365
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4367
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4371
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4370
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4369
            .lvl = 42,
#line 4368
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4372
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4377
    [TRAINER_PBL_DESIREE] =
    {
#line 4378
        .trainerName = _("STEVEN"),
#line 4379
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4380
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4382
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4384
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4388
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4387
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4386
            .lvl = 42,
#line 4385
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4389
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4394
    [TRAINER_PBL_HOWARD] =
    {
#line 4395
        .trainerName = _("STEVEN"),
#line 4396
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4397
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4399
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4401
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4405
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4404
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4403
            .lvl = 42,
#line 4402
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4406
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4411
    [TRAINER_PBL_ELOISE] =
    {
#line 4412
        .trainerName = _("STEVEN"),
#line 4413
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4414
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4416
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4418
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4422
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4421
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4420
            .lvl = 42,
#line 4419
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4423
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4428
    [TRAINER_PBL_ALLY_AND_EMMY] =
    {
#line 4429
        .trainerName = _("STEVEN"),
#line 4430
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4431
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4433
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4435
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4439
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4438
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4437
            .lvl = 42,
#line 4436
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4440
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4445
    [TRAINER_PBL_AMIR] =
    {
#line 4446
        .trainerName = _("STEVEN"),
#line 4447
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4448
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4450
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4452
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4456
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4455
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4454
            .lvl = 42,
#line 4453
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4457
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4462
    [TRAINER_PBL_GETHIN] =
    {
#line 4463
        .trainerName = _("STEVEN"),
#line 4464
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4465
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4467
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4469
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4473
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4472
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4471
            .lvl = 42,
#line 4470
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4474
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4479
    [TRAINER_PBL_BERNARD] =
    {
#line 4480
        .trainerName = _("STEVEN"),
#line 4481
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4482
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4484
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4486
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4490
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4489
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4488
            .lvl = 42,
#line 4487
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4491
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4496
    [TRAINER_PBL_ELLIE] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4503
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4507
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4506
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4505
            .lvl = 42,
#line 4504
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4508
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4513
    [TRAINER_PBL_RUSTY] =
    {
#line 4514
        .trainerName = _("STEVEN"),
#line 4515
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4516
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4518
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4520
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4524
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4523
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4522
            .lvl = 42,
#line 4521
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4525
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4530
    [TRAINER_PBL_CODY] =
    {
#line 4531
        .trainerName = _("STEVEN"),
#line 4532
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4533
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4535
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4537
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4541
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4540
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4539
            .lvl = 42,
#line 4538
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4542
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4547
    [TRAINER_PBL_LEWIS] =
    {
#line 4548
        .trainerName = _("STEVEN"),
#line 4549
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4550
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4552
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4554
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4558
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4557
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4556
            .lvl = 42,
#line 4555
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4559
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4564
    [TRAINER_PBL_CORNELIUS] =
    {
#line 4565
        .trainerName = _("STEVEN"),
#line 4566
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4567
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4569
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4571
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4575
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4574
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4573
            .lvl = 42,
#line 4572
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4576
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4581
    [TRAINER_PBL_INEZ_AND_EMMA] =
    {
#line 4582
        .trainerName = _("STEVEN"),
#line 4583
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4584
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4586
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4588
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4592
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4591
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4590
            .lvl = 42,
#line 4589
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4593
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4598
    [TRAINER_PBL_HELEN] =
    {
#line 4599
        .trainerName = _("STEVEN"),
#line 4600
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4601
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4603
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4605
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4609
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4608
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4607
            .lvl = 42,
#line 4606
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4610
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4615
    [TRAINER_PBL_WESLEY] =
    {
#line 4616
        .trainerName = _("STEVEN"),
#line 4617
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4618
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4620
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4622
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4626
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4625
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4624
            .lvl = 42,
#line 4623
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4627
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4632
    [TRAINER_PBL_ALFREDO] =
    {
#line 4633
        .trainerName = _("STEVEN"),
#line 4634
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4635
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4637
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4639
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4643
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4642
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4641
            .lvl = 42,
#line 4640
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4644
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4649
    [TRAINER_PBL_IAN] =
    {
#line 4650
        .trainerName = _("STEVEN"),
#line 4651
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4652
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4654
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4656
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4660
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4659
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4658
            .lvl = 42,
#line 4657
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4661
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4666
    [TRAINER_PBL_AUDREY] =
    {
#line 4667
        .trainerName = _("STEVEN"),
#line 4668
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4669
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4671
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4673
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4677
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4676
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4675
            .lvl = 42,
#line 4674
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4678
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4683
    [TRAINER_PBL_LEVIATHAN13] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4690
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4694
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4693
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4692
            .lvl = 42,
#line 4691
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4695
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4700
    [TRAINER_PBL_EDGARDO] =
    {
#line 4701
        .trainerName = _("STEVEN"),
#line 4702
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4703
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4705
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4707
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4711
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4710
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4709
            .lvl = 42,
#line 4708
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4712
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4717
    [TRAINER_PBL_JEAN] =
    {
#line 4718
        .trainerName = _("STEVEN"),
#line 4719
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4720
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4722
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4724
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4728
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4727
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4726
            .lvl = 42,
#line 4725
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4729
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4734
    [TRAINER_PBL_ROSE] =
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
    [TRAINER_PBL_JENNIFER] =
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
    [TRAINER_PBL_MATTHEW] =
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
    [TRAINER_PBL_KERRY] =
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
    [TRAINER_PBL_ANNIE] =
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
    [TRAINER_PBL_CHRISTI] =
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
    [TRAINER_PBL_SPENCER] =
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
    [TRAINER_PBL_HAYWOOD] =
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
    [TRAINER_PBL_MONROE] =
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
    [TRAINER_PBL_DAVID] =
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
    [TRAINER_PBL_DOMINIK] =
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
    [TRAINER_PBL_DOUGLAS] =
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
    [TRAINER_PBL_NADINE] =
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
    [TRAINER_PBL_SANDY] =
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
    [TRAINER_PBL_SHELDON] =
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
    [TRAINER_PBL_LEVIATHAN14] =
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
    [TRAINER_PBL_LEVIATHAN12_BRUTAL] =
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
    [TRAINER_PBL_LEVIATHAN13_BRUTAL] =
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
    [TRAINER_PBL_LEVIATHAN14_BRUTAL] =
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
    [TRAINER_PBL_LEVIATHAN12] =
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
