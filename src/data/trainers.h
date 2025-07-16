//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/trainers.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/trainers.h' to remove #line markers.
//

#line 1 "src/data/trainers.party"

#line 76
    [DIFFICULTY_NORMAL][TRAINER_NONE] =
    {
#line 77
        .trainerName = _("Testing"),
#line 78
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 79
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 80
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 82
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 81
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 83
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_NINA] =
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
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 103
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 106
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 109
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 107
            .ability = ABILITY_RUN_AWAY,
#line 108
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 110
                MOVE_TACKLE,
                MOVE_LEER,
                MOVE_SAND_ATTACK,
            },
            },
            {
#line 114
            .species = SPECIES_PIDOVE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 118
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 115
            .ability = ABILITY_SUPER_LUCK,
#line 116
            .lvl = 4,
#line 117
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 119
                MOVE_QUICK_ATTACK,
                MOVE_GROWL,
                MOVE_LEER,
            },
            },
            {
#line 123
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 127
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 124
            .ability = ABILITY_NORMALIZE,
#line 125
            .lvl = 4,
#line 126
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 128
                MOVE_TACKLE,
                MOVE_TAIL_WHIP,
                MOVE_GROWL,
            },
            },
        },
    },
#line 132
    [DIFFICULTY_NORMAL][TRAINER_PBL_MARIAM] =
    {
#line 133
        .trainerName = _("Mariam"),
#line 134
        .trainerClass = TRAINER_CLASS_LASS,
#line 135
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 136
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 138
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 137
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 140
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 144
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 141
            .ability = ABILITY_GLUTTONY,
#line 142
            .lvl = 5,
#line 143
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 145
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_SAND_ATTACK,
            },
            },
            {
#line 149
            .species = SPECIES_PURRLOIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 152
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 150
            .ability = ABILITY_LIMBER,
#line 151
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 153
                MOVE_SCRATCH,
                MOVE_GROWL,
                MOVE_SAND_ATTACK,
                MOVE_YAWN,
            },
            },
            {
#line 158
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 159
            .ability = ABILITY_CHLOROPHYLL,
#line 160
            .lvl = 5,
#line 161
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 163
                MOVE_TACKLE,
                MOVE_ABSORB,
            },
            },
        },
    },
#line 166
    [DIFFICULTY_NORMAL][TRAINER_PBL_OSCAR] =
    {
#line 167
        .trainerName = _("Oscar"),
#line 168
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 169
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 170
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 172
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 171
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 174
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 178
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 175
            .ability = ABILITY_GUTS,
#line 176
            .lvl = 5,
#line 177
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 179
                MOVE_TACKLE,
                MOVE_TAIL_WHIP,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 183
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 186
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 184
            .ability = ABILITY_DAMP,
#line 185
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 187
                MOVE_SCRATCH,
                MOVE_TAIL_WHIP,
                MOVE_REFRESH,
                MOVE_WATER_GUN,
            },
            },
            {
#line 192
            .species = SPECIES_STARLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 196
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 193
            .ability = ABILITY_KEEN_EYE,
#line 194
            .lvl = 5,
#line 195
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 197
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 201
    [DIFFICULTY_NORMAL][TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER] =
    {
#line 202
        .trainerName = _("Corey"),
#line 203
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 204
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 205
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 207
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 206
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 208
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 210
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 213
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 211
            .ability = ABILITY_GLUTTONY,
#line 212
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 214
                MOVE_WATER_GUN,
                MOVE_SCRATCH,
            },
            },
            {
#line 217
            .species = SPECIES_PANSAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 220
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 218
            .ability = ABILITY_GLUTTONY,
#line 219
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 221
                MOVE_LEAFAGE,
                MOVE_SCRATCH,
            },
            },
            {
#line 224
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 227
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 225
            .ability = ABILITY_GLUTTONY,
#line 226
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 228
                MOVE_EMBER,
                MOVE_SCRATCH,
            },
            },
        },
    },
#line 231
    [DIFFICULTY_NORMAL][TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER_CHALLENGE] =
    {
#line 232
        .trainerName = _("Corey"),
#line 233
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 234
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 235
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 237
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 236
        .aiFlags = AI_FLAG_CHALLENGE,
#line 238
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 240
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 241
            .ability = ABILITY_TORRENT,
#line 242
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 244
                MOVE_WATER_GUN,
                MOVE_SCRATCH,
            },
            },
            {
#line 247
            .species = SPECIES_PANSAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 250
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 248
            .ability = ABILITY_OVERGROW,
#line 249
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 251
                MOVE_LEAFAGE,
                MOVE_SCRATCH,
            },
            },
            {
#line 254
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 257
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 255
            .ability = ABILITY_BLAZE,
#line 256
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 258
                MOVE_EMBER,
                MOVE_SCRATCH,
            },
            },
        },
    },
#line 261
    [DIFFICULTY_NORMAL][TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER] =
    {
#line 262
        .trainerName = _("Corey"),
#line 263
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 264
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 265
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 267
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 266
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 268
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 270
            .species = SPECIES_PANSAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 273
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 271
            .ability = ABILITY_GLUTTONY,
#line 272
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 274
                MOVE_LEAFAGE,
                MOVE_SCRATCH,
            },
            },
            {
#line 277
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 280
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 278
            .ability = ABILITY_GLUTTONY,
#line 279
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 281
                MOVE_EMBER,
                MOVE_SCRATCH,
            },
            },
            {
#line 284
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 287
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 285
            .ability = ABILITY_GLUTTONY,
#line 286
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 288
                MOVE_WATER_GUN,
                MOVE_SCRATCH,
            },
            },
        },
    },
#line 291
    [DIFFICULTY_NORMAL][TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER_CHALLENGE] =
    {
#line 292
        .trainerName = _("Corey"),
#line 293
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 294
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 295
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 297
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 296
        .aiFlags = AI_FLAG_CHALLENGE,
#line 298
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 300
            .species = SPECIES_PANSAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 303
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 301
            .ability = ABILITY_OVERGROW,
#line 302
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 304
                MOVE_LEAFAGE,
                MOVE_SCRATCH,
            },
            },
            {
#line 307
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 310
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 308
            .ability = ABILITY_BLAZE,
#line 309
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 311
                MOVE_EMBER,
                MOVE_SCRATCH,
            },
            },
            {
#line 314
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 317
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 315
            .ability = ABILITY_TORRENT,
#line 316
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 318
                MOVE_WATER_GUN,
                MOVE_SCRATCH,
            },
            },
        },
    },
#line 321
    [DIFFICULTY_NORMAL][TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER] =
    {
#line 322
        .trainerName = _("Corey"),
#line 323
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 324
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 325
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 327
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 326
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 328
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 330
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 333
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 331
            .ability = ABILITY_GLUTTONY,
#line 332
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 334
                MOVE_EMBER,
                MOVE_SCRATCH,
            },
            },
            {
#line 337
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 340
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 338
            .ability = ABILITY_GLUTTONY,
#line 339
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 341
                MOVE_WATER_GUN,
                MOVE_SCRATCH,
            },
            },
            {
#line 344
            .species = SPECIES_PANSAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 347
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 345
            .ability = ABILITY_GLUTTONY,
#line 346
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 348
                MOVE_LEAFAGE,
                MOVE_SCRATCH,
            },
            },
        },
    },
#line 351
    [DIFFICULTY_NORMAL][TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER_CHALLENGE] =
    {
#line 352
        .trainerName = _("Corey"),
#line 353
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 354
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 355
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 357
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 356
        .aiFlags = AI_FLAG_CHALLENGE,
#line 358
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 360
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 363
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 361
            .ability = ABILITY_BLAZE,
#line 362
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 364
                MOVE_EMBER,
                MOVE_SCRATCH,
            },
            },
            {
#line 367
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 370
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 368
            .ability = ABILITY_TORRENT,
#line 369
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 371
                MOVE_WATER_GUN,
                MOVE_SCRATCH,
            },
            },
            {
#line 374
            .species = SPECIES_PANSAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 377
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 375
            .ability = ABILITY_OVERGROW,
#line 376
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 378
                MOVE_LEAFAGE,
                MOVE_SCRATCH,
            },
            },
        },
    },
#line 381
    [DIFFICULTY_NORMAL][TRAINER_PBL_POLLY] =
    {
#line 382
        .trainerName = _("Polly"),
#line 383
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 384
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 385
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 387
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 386
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 389
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 392
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 390
            .ability = ABILITY_KEEN_EYE,
#line 391
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 393
                MOVE_SCRATCH,
                MOVE_GROWL,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 397
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 400
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 398
            .ability = ABILITY_EARLY_BIRD,
#line 399
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 401
                MOVE_HARDEN,
                MOVE_ASTONISH,
                MOVE_BIDE,
                MOVE_ABSORB,
            },
            },
            {
#line 406
            .species = SPECIES_NIDORAN_F,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 409
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 407
            .ability = ABILITY_POISON_POINT,
#line 408
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 410
                MOVE_SCRATCH,
                MOVE_TAIL_WHIP,
                MOVE_POISON_STING,
                MOVE_DISABLE,
            },
            },
        },
    },
#line 415
    [DIFFICULTY_NORMAL][TRAINER_PBL_JEREMIAH] =
    {
#line 416
        .trainerName = _("Jeremiah"),
#line 417
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 418
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 419
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 421
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 420
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 423
            .species = SPECIES_CATERPIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 426
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 424
            .ability = ABILITY_SHIELD_DUST,
#line 425
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 427
                MOVE_TACKLE,
                MOVE_STRING_SHOT,
            },
            },
            {
#line 430
            .species = SPECIES_WEEDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 433
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 431
            .ability = ABILITY_SHIELD_DUST,
#line 432
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 434
                MOVE_POISON_STING,
                MOVE_STRING_SHOT,
            },
            },
            {
#line 437
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 440
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 438
            .ability = ABILITY_SHIELD_DUST,
#line 439
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 441
                MOVE_TACKLE,
                MOVE_STRING_SHOT,
                MOVE_POISON_STING,
            },
            },
            {
#line 445
            .species = SPECIES_SCATTERBUG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 448
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 446
            .ability = ABILITY_SHIELD_DUST,
#line 447
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 449
                MOVE_TACKLE,
                MOVE_STRING_SHOT,
                MOVE_STRUGGLE_BUG,
            },
            },
        },
    },
#line 453
    [DIFFICULTY_NORMAL][TRAINER_PBL_JOSH] =
    {
#line 454
        .trainerName = _("Josh"),
#line 455
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 456
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 457
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 459
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 458
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 461
            .species = SPECIES_BLIPBUG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 464
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 462
            .ability = ABILITY_SWARM,
#line 463
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 465
                MOVE_STRUGGLE_BUG,
            },
            },
            {
#line 467
            .species = SPECIES_KRICKETOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 470
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 468
            .ability = ABILITY_SHED_SKIN,
#line 469
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 471
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_STRUGGLE_BUG,
                MOVE_BIDE,
            },
            },
            {
#line 476
            .species = SPECIES_BURMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 479
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 477
            .ability = ABILITY_SHED_SKIN,
#line 478
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 480
                MOVE_TACKLE,
                MOVE_STRING_SHOT,
                MOVE_PROTECT,
            },
            },
            {
#line 484
            .species = SPECIES_TAROUNTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 487
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 485
            .ability = ABILITY_INSOMNIA,
#line 486
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 488
                MOVE_TACKLE,
                MOVE_STRING_SHOT,
                MOVE_STRUGGLE_BUG,
                MOVE_ASSURANCE,
            },
            },
        },
    },
#line 493
    [DIFFICULTY_NORMAL][TRAINER_PBL_HARPER] =
    {
#line 494
        .trainerName = _("Harper"),
#line 495
        .trainerClass = TRAINER_CLASS_LASS,
#line 496
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 497
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 499
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 498
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 501
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 502
            .ability = ABILITY_RATTLED,
#line 503
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 505
                MOVE_ASTONISH,
                MOVE_POUND,
                MOVE_SUPERSONIC,
                MOVE_ECHOED_VOICE,
            },
            },
            {
#line 510
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 513
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 511
            .ability = ABILITY_INSOMNIA,
#line 512
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 514
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_PECK,
                MOVE_CONFUSION,
            },
            },
            {
#line 519
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 520
            .ability = ABILITY_SAND_FORCE,
#line 521
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 523
                MOVE_SCRATCH,
                MOVE_SAND_ATTACK,
                MOVE_GROWL,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 528
    [DIFFICULTY_NORMAL][TRAINER_PBL_ARTHUR] =
    {
#line 529
        .trainerName = _("Arthur"),
#line 530
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 531
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 532
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 534
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 533
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 536
            .species = SPECIES_YUNGOOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 539
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 537
            .ability = ABILITY_STRONG_JAW,
#line 538
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 540
                MOVE_TACKLE,
                MOVE_SAND_ATTACK,
                MOVE_LEER,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 545
            .species = SPECIES_PIKIPEK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 548
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 546
            .ability = ABILITY_SKILL_LINK,
#line 547
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 549
                MOVE_PECK,
                MOVE_GROWL,
                MOVE_MIRROR_MOVE,
            },
            },
            {
#line 553
            .species = SPECIES_NIDORAN_M,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 556
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 554
            .ability = ABILITY_POISON_POINT,
#line 555
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 557
                MOVE_PECK,
                MOVE_FOCUS_ENERGY,
                MOVE_POISON_STING,
                MOVE_DISABLE,
            },
            },
        },
    },
#line 562
    [DIFFICULTY_NORMAL][TRAINER_PBL_SHAUN_LEVIATHAN_2] =
    {
#line 563
        .trainerName = _("Shaun"),
#line 564
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 565
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 566
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 568
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 567
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 569
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 571
            .species = SPECIES_BUNNELBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 571
            .heldItem = ITEM_ORAN_BERRY,
#line 574
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 572
            .ability = ABILITY_CHEEK_POUCH,
#line 573
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 575
                MOVE_TACKLE,
                MOVE_LEER,
                MOVE_DEFENSE_CURL,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 580
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 580
            .heldItem = ITEM_ORAN_BERRY,
#line 583
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 581
            .ability = ABILITY_CHEEK_POUCH,
#line 582
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 584
                MOVE_TACKLE,
                MOVE_BITE,
                MOVE_BIDE,
                MOVE_TEARFUL_LOOK,
            },
            },
            {
#line 589
            .species = SPECIES_SKWOVET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 589
            .heldItem = ITEM_ORAN_BERRY,
#line 592
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 590
            .ability = ABILITY_CHEEK_POUCH,
#line 591
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 593
                MOVE_TACKLE,
                MOVE_STUFF_CHEEKS,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
        },
    },
#line 598
    [DIFFICULTY_NORMAL][TRAINER_PBL_SHAUN_LEVIATHAN_2_CHALLENGE] =
    {
#line 599
        .trainerName = _("Shaun"),
#line 600
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 601
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 602
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 604
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 603
        .aiFlags = AI_FLAG_CHALLENGE,
#line 605
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 607
            .species = SPECIES_BUNNELBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 607
            .heldItem = ITEM_ORAN_BERRY,
#line 610
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 608
            .ability = ABILITY_CHEEK_POUCH,
#line 609
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 611
                MOVE_TACKLE,
                MOVE_LEER,
                MOVE_DEFENSE_CURL,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 616
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 616
            .heldItem = ITEM_ORAN_BERRY,
#line 619
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 617
            .ability = ABILITY_CHEEK_POUCH,
#line 618
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 620
                MOVE_TACKLE,
                MOVE_BITE,
                MOVE_BIDE,
                MOVE_TEARFUL_LOOK,
            },
            },
            {
#line 625
            .species = SPECIES_LECHONK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 625
            .heldItem = ITEM_ORAN_BERRY,
#line 628
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 626
            .ability = ABILITY_THICK_FAT,
#line 627
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 629
                MOVE_TACKLE,
                MOVE_DISARMING_VOICE,
                MOVE_STUFF_CHEEKS,
            },
            },
            {
#line 633
            .species = SPECIES_SKWOVET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 633
            .heldItem = ITEM_ORAN_BERRY,
#line 636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 634
            .ability = ABILITY_CHEEK_POUCH,
#line 635
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 637
                MOVE_TACKLE,
                MOVE_STUFF_CHEEKS,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
        },
    },
#line 642
    [DIFFICULTY_NORMAL][TRAINER_PBL_JEMMA] =
    {
#line 643
        .trainerName = _("Jemma"),
#line 644
        .trainerClass = TRAINER_CLASS_LASS,
#line 645
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 646
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 648
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 647
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 650
            .species = SPECIES_BOUNSWEET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 653
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 651
            .ability = ABILITY_OBLIVIOUS,
#line 652
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 654
                MOVE_PLAY_NICE,
                MOVE_AROMATIC_MIST,
                MOVE_ABSORB,
                MOVE_GRASS_WHISTLE,
            },
            },
            {
#line 659
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 660
            .ability = ABILITY_KEEN_EYE,
#line 661
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 663
                MOVE_TACKLE,
                MOVE_SAND_ATTACK,
                MOVE_GUST,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 668
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 671
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 669
            .ability = ABILITY_STATIC,
#line 670
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 672
                MOVE_GROWL,
                MOVE_CHARGE,
                MOVE_THUNDER_SHOCK,
                MOVE_COTTON_SPORE,
            },
            },
        },
    },
#line 677
    [DIFFICULTY_NORMAL][TRAINER_PBL_PATRICK] =
    {
#line 678
        .trainerName = _("Patrick"),
#line 679
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 680
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 681
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 683
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 682
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 685
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 688
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 686
            .ability = ABILITY_SHED_SKIN,
#line 687
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 689
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
            {
#line 692
            .species = SPECIES_METAPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 695
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 693
            .ability = ABILITY_SHED_SKIN,
#line 694
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 696
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
            {
#line 699
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 702
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 700
            .ability = ABILITY_SHED_SKIN,
#line 701
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 703
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
            {
#line 706
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 709
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 707
            .ability = ABILITY_SHED_SKIN,
#line 708
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 710
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 713
    [DIFFICULTY_NORMAL][TRAINER_PBL_ANNABELLE] =
    {
#line 714
        .trainerName = _("Annabelle"),
#line 715
        .trainerClass = TRAINER_CLASS_LADY,
#line 716
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 717
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 719
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 718
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 721
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 724
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 722
            .ability = ABILITY_TECHNICIAN,
#line 723
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 725
                MOVE_SCRATCH,
                MOVE_GROWL,
                MOVE_FEINT,
            },
            },
            {
#line 729
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 732
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 730
            .ability = ABILITY_POISON_POINT,
#line 731
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 733
                MOVE_ABSORB,
                MOVE_WORRY_SEED,
                MOVE_LIFE_DEW,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 738
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 741
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 739
            .ability = ABILITY_HUGE_POWER,
#line 740
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 742
                MOVE_SOAK,
                MOVE_REFRESH,
                MOVE_CHARM,
                MOVE_BUBBLE,
            },
            },
            {
#line 747
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 748
            .ability = ABILITY_LEVITATE,
#line 749
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 751
                MOVE_GROWL,
                MOVE_ASTONISH,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
        },
    },
#line 756
    [DIFFICULTY_NORMAL][TRAINER_PBL_BORIS] =
    {
#line 757
        .trainerName = _("Boris"),
#line 758
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 759
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 760
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 762
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 761
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 764
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 767
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 765
            .ability = ABILITY_SWIFT_SWIM,
#line 766
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 768
                MOVE_ABSORB,
                MOVE_BUBBLE,
                MOVE_MIST,
                MOVE_ASTONISH,
            },
            },
            {
#line 773
            .species = SPECIES_FLETCHLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 774
            .ability = ABILITY_BIG_PECKS,
#line 775
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 777
                MOVE_GROWL,
                MOVE_PECK,
                MOVE_QUICK_ATTACK,
                MOVE_EMBER,
            },
            },
            {
#line 782
            .species = SPECIES_YAMPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 783
            .ability = ABILITY_BALL_FETCH,
#line 784
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 786
                MOVE_SAND_ATTACK,
                MOVE_NUZZLE,
                MOVE_SPARK,
                MOVE_CHARM,
            },
            },
        },
    },
#line 791
    [DIFFICULTY_NORMAL][TRAINER_PBL_RICHARD] =
    {
#line 792
        .trainerName = _("Richard"),
#line 793
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 794
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 795
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 797
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 796
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 799
            .species = SPECIES_WOOLOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 800
            .ability = ABILITY_FLUFFY,
#line 801
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 803
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_DEFENSE_CURL,
                MOVE_COPYCAT,
            },
            },
            {
#line 808
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 811
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 809
            .ability = ABILITY_STATIC,
#line 810
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 812
                MOVE_THUNDER_SHOCK,
                MOVE_SWEET_KISS,
                MOVE_FAKE_OUT,
                MOVE_CHARM,
            },
            },
            {
#line 817
            .species = SPECIES_SMOLIV,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 820
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 818
            .ability = ABILITY_EARLY_BIRD,
#line 819
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 821
                MOVE_TACKLE,
                MOVE_ABSORB,
                MOVE_HELPING_HAND,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 826
            .species = SPECIES_IGGLYBUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 829
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 827
            .ability = ABILITY_CUTE_CHARM,
#line 828
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 830
                MOVE_ECHOED_VOICE,
                MOVE_SWEET_KISS,
                MOVE_DISARMING_VOICE,
                MOVE_DISABLE,
            },
            },
        },
    },
#line 835
    [DIFFICULTY_NORMAL][TRAINER_PBL_PHILLIPA_LEVIATHAN_3] =
    {
#line 836
        .trainerName = _("Phillipa"),
#line 837
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 838
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 839
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 841
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 840
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 842
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 844
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 847
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 845
            .ability = ABILITY_UNAWARE,
#line 846
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 848
                MOVE_ROLLOUT,
            },
            },
            {
#line 850
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 853
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 851
            .ability = ABILITY_SAND_RUSH,
#line 852
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 854
                MOVE_ROLLOUT,
            },
            },
            {
#line 856
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 856
            .heldItem = ITEM_ORAN_BERRY,
#line 859
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 857
            .ability = ABILITY_HUGE_POWER,
#line 858
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 860
                MOVE_ROLLOUT,
            },
            },
        },
    },
#line 862
    [DIFFICULTY_NORMAL][TRAINER_PBL_PHILLIPA_LEVIATHAN_3_CHALLENGE] =
    {
#line 863
        .trainerName = _("Phillipa"),
#line 864
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 865
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 866
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 868
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 867
        .aiFlags = AI_FLAG_CHALLENGE,
#line 869
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 871
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 874
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 872
            .ability = ABILITY_UNAWARE,
#line 873
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 875
                MOVE_ROLLOUT,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 878
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 881
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 879
            .ability = ABILITY_SAND_RUSH,
#line 880
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 882
                MOVE_ROLLOUT,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 885
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 885
            .heldItem = ITEM_ORAN_BERRY,
#line 888
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 886
            .ability = ABILITY_AFTERMATH,
#line 887
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 889
                MOVE_ROLLOUT,
            },
            },
            {
#line 891
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 891
            .heldItem = ITEM_ORAN_BERRY,
#line 894
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 892
            .ability = ABILITY_HUGE_POWER,
#line 893
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 895
                MOVE_ROLLOUT,
                MOVE_DEFENSE_CURL,
            },
            },
        },
    },
#line 898
    [DIFFICULTY_NORMAL][TRAINER_PBL_HERMAN] =
    {
#line 899
        .trainerName = _("Herman"),
#line 900
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 901
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 902
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 904
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 903
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 906
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 909
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 907
            .ability = ABILITY_LIMBER,
#line 908
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 910
                MOVE_QUICK_ATTACK,
                MOVE_BABY_DOLL_EYES,
                MOVE_COPYCAT,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 915
            .species = SPECIES_DUCKLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 918
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 916
            .ability = ABILITY_BIG_PECKS,
#line 917
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 919
                MOVE_GUST,
                MOVE_AQUA_JET,
                MOVE_FEATHER_DANCE,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 924
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 927
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 925
            .ability = ABILITY_CHLOROPHYLL,
#line 926
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 928
                MOVE_ABSORB,
                MOVE_LEECH_SEED,
                MOVE_ROLLOUT,
                MOVE_GRASS_WHISTLE,
            },
            },
        },
    },
#line 933
    [DIFFICULTY_NORMAL][TRAINER_PBL_RALPH] =
    {
#line 934
        .trainerName = _("Ralph"),
#line 935
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 936
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 937
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 939
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 938
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 941
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 944
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 942
            .ability = ABILITY_INTIMIDATE,
#line 943
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 945
                MOVE_CHARGE,
                MOVE_THUNDER_SHOCK,
                MOVE_QUICK_ATTACK,
                MOVE_BITE,
            },
            },
            {
#line 950
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 953
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 951
            .ability = ABILITY_FLASH_FIRE,
#line 952
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 954
                MOVE_EMBER,
                MOVE_SMOG,
                MOVE_TORMENT,
                MOVE_BITE,
            },
            },
            {
#line 959
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 960
            .ability = ABILITY_WATER_ABSORB,
#line 961
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 963
                MOVE_WATER_GUN,
                MOVE_MUD_SHOT,
                MOVE_YAWN,
                MOVE_SLAM,
            },
            },
        },
    },
#line 968
    [DIFFICULTY_NORMAL][TRAINER_PBL_CALLIE] =
    {
#line 969
        .trainerName = _("Callie"),
#line 970
        .trainerClass = TRAINER_CLASS_LASS,
#line 971
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 972
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 974
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 973
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 976
            .species = SPECIES_LILLIPUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 979
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 977
            .ability = ABILITY_PICKUP,
#line 978
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 980
                MOVE_TACKLE,
                MOVE_HELPING_HAND,
                MOVE_BITE,
                MOVE_YAWN,
            },
            },
            {
#line 985
            .species = SPECIES_FIDOUGH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 988
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 986
            .ability = ABILITY_OWN_TEMPO,
#line 987
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 989
                MOVE_BABY_DOLL_EYES,
                MOVE_BITE,
                MOVE_YAWN,
                MOVE_COVET,
            },
            },
            {
#line 994
            .species = SPECIES_MASCHIFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 997
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 995
            .ability = ABILITY_INTIMIDATE,
#line 996
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 998
                MOVE_LICK,
                MOVE_SNARL,
                MOVE_SCARY_FACE,
                MOVE_BITE,
            },
            },
        },
    },
#line 1003
    [DIFFICULTY_NORMAL][TRAINER_PBL_SANTIAGO] =
    {
#line 1004
        .trainerName = _("Santiago"),
#line 1005
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1006
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 1007
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1009
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1008
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1011
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1012
            .ability = ABILITY_SWARM,
#line 1013
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1015
                MOVE_STRING_SHOT,
                MOVE_NIGHT_SHADE,
                MOVE_INFESTATION,
                MOVE_DISABLE,
            },
            },
            {
#line 1020
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1023
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1021
            .ability = ABILITY_SWARM,
#line 1022
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1024
                MOVE_SWIFT,
                MOVE_COMET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_ROOST,
            },
            },
            {
#line 1029
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1032
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1030
            .ability = ABILITY_EFFECT_SPORE,
#line 1031
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1033
                MOVE_POISON_POWDER,
                MOVE_ABSORB,
                MOVE_BUG_BITE,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 1038
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1041
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1039
            .ability = ABILITY_SHED_SKIN,
#line 1040
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1042
                MOVE_PROTECT,
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 1046
    [DIFFICULTY_NORMAL][TRAINER_PBL_CHLOE_AND_KAYA] =
    {
#line 1047
        .trainerName = _("Chloe&Kaya"),
#line 1048
        .trainerClass = TRAINER_CLASS_TWINS,
#line 1049
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 1050
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1052
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1051
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1054
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1057
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1055
            .ability = ABILITY_PRANKSTER,
#line 1056
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1058
                MOVE_FAIRY_WIND,
                MOVE_RAZOR_LEAF,
                MOVE_STUN_SPORE,
                MOVE_POISON_POWDER,
            },
            },
            {
#line 1063
            .species = SPECIES_PETILIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1066
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1064
            .ability = ABILITY_OWN_TEMPO,
#line 1065
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1067
                MOVE_ABSORB,
                MOVE_HELPING_HAND,
                MOVE_STUN_SPORE,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 1072
    [DIFFICULTY_NORMAL][TRAINER_PBL_FRED] =
    {
#line 1073
        .trainerName = _("Fred"),
#line 1074
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 1075
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 1076
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1078
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1077
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1080
            .species = SPECIES_GOSSIFLEUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1083
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1081
            .ability = ABILITY_COTTON_DOWN,
#line 1082
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1084
                MOVE_GRASS_WHISTLE,
                MOVE_RAPID_SPIN,
                MOVE_RAZOR_LEAF,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 1089
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1092
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1090
            .ability = ABILITY_INTIMIDATE,
#line 1091
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1093
                MOVE_GLARE,
                MOVE_BITE,
                MOVE_ACID,
                MOVE_DISABLE,
            },
            },
            {
#line 1098
            .species = SPECIES_BONSLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1101
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1099
            .ability = ABILITY_STURDY,
#line 1100
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1102
                MOVE_TEARFUL_LOOK,
                MOVE_ROCK_THROW,
                MOVE_LOW_KICK,
                MOVE_BLOCK,
            },
            },
            {
#line 1107
            .species = SPECIES_PANCHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1110
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1108
            .ability = ABILITY_IRON_FIST,
#line 1109
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1111
                MOVE_SEISMIC_TOSS,
                MOVE_COMET_PUNCH,
                MOVE_KARATE_CHOP,
                MOVE_TAUNT,
            },
            },
        },
    },
#line 1116
    [DIFFICULTY_NORMAL][TRAINER_PBL_LUCIA] =
    {
#line 1117
        .trainerName = _("Lucia"),
#line 1118
        .trainerClass = TRAINER_CLASS_FAIRY_TALE_GIRL,
#line 1119
        .trainerPic = TRAINER_PIC_FAIRY_TALE_GIRL,
        .encounterMusic_gender =
#line 1120
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1122
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1121
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1124
            .species = SPECIES_MORELULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1127
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1125
            .ability = ABILITY_EFFECT_SPORE,
#line 1126
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1128
                MOVE_ABSORB,
                MOVE_ASTONISH,
                MOVE_CONFUSE_RAY,
                MOVE_INGRAIN,
            },
            },
            {
#line 1133
            .species = SPECIES_SPRITZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1136
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1134
            .ability = ABILITY_HEALER,
#line 1135
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1137
                MOVE_FAIRY_WIND,
                MOVE_SWEET_KISS,
                MOVE_REFRESH,
                MOVE_DISARMING_VOICE,
            },
            },
            {
#line 1142
            .species = SPECIES_SWIRLIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1145
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1143
            .ability = ABILITY_SWEET_VEIL,
#line 1144
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1146
                MOVE_FAIRY_WIND,
                MOVE_YAWN,
                MOVE_COTTON_SPORE,
                MOVE_ROUND,
            },
            },
            {
#line 1151
            .species = SPECIES_MIME_JR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1154
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1152
            .ability = ABILITY_SOUNDPROOF,
#line 1153
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1155
                MOVE_TEETER_DANCE,
                MOVE_DOUBLE_SLAP,
                MOVE_CONFUSION,
                MOVE_FAKE_OUT,
            },
            },
        },
    },
#line 1160
    [DIFFICULTY_NORMAL][TRAINER_PBL_ELLA_AND_BELLA_LEVIATHAN_4] =
    {
#line 1161
        .trainerName = _("Ella&Bella"),
#line 1162
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 1163
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 1164
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1166
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1165
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1167
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1169
            .species = SPECIES_NICKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1170
            .ability = ABILITY_UNBURDEN,
#line 1171
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1173
                MOVE_SNARL,
                MOVE_GROWL,
            },
            },
            {
#line 1176
            .species = SPECIES_LITLEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1177
            .ability = ABILITY_UNNERVE,
#line 1178
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1180
                MOVE_INCINERATE,
                MOVE_GROWL,
            },
            },
            {
#line 1183
            .species = SPECIES_STEENEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1183
            .heldItem = ITEM_ORAN_BERRY,
#line 1186
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1184
            .ability = ABILITY_OBLIVIOUS,
#line 1185
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1187
                MOVE_RAZOR_LEAF,
                MOVE_GRASS_WHISTLE,
            },
            },
            {
#line 1190
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1190
            .heldItem = ITEM_ORAN_BERRY,
#line 1193
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1191
            .ability = ABILITY_FRIEND_GUARD,
#line 1192
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1194
                MOVE_SWIFT,
                MOVE_DISARMING_VOICE,
            },
            },
        },
    },
#line 1197
    [DIFFICULTY_NORMAL][TRAINER_PBL_ELLA_AND_BELLA_LEVIATHAN_4_CHALLENGE] =
    {
#line 1198
        .trainerName = _("Ella&Bella"),
#line 1199
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 1200
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 1201
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1203
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1202
        .aiFlags = AI_FLAG_CHALLENGE,
#line 1204
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1206
            .species = SPECIES_NICKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1209
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1207
            .ability = ABILITY_STAKEOUT,
#line 1208
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1210
                MOVE_SNARL,
                MOVE_QUICK_ATTACK,
                MOVE_GROWL,
            },
            },
            {
#line 1214
            .species = SPECIES_LITLEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1217
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1215
            .ability = ABILITY_UNNERVE,
#line 1216
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1218
                MOVE_INCINERATE,
                MOVE_ECHOED_VOICE,
                MOVE_GROWL,
            },
            },
            {
#line 1222
            .species = SPECIES_STEENEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1222
            .heldItem = ITEM_ORAN_BERRY,
#line 1225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1223
            .ability = ABILITY_OBLIVIOUS,
#line 1224
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1226
                MOVE_RAZOR_LEAF,
                MOVE_RAPID_SPIN,
                MOVE_GRASS_WHISTLE,
            },
            },
            {
#line 1230
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1230
            .heldItem = ITEM_ORAN_BERRY,
#line 1233
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1231
            .ability = ABILITY_FRIEND_GUARD,
#line 1232
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1234
                MOVE_SWIFT,
                MOVE_DISARMING_VOICE,
                MOVE_SING,
            },
            },
        },
    },
#line 1238
    [DIFFICULTY_NORMAL][TRAINER_PBL_ANNE_AND_JUNE] =
    {
#line 1239
        .trainerName = _("Anne&June"),
#line 1240
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 1241
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 1242
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1244
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1243
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1246
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1249
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1247
            .ability = ABILITY_AFTERMATH,
#line 1248
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1250
                MOVE_SMOG,
                MOVE_SCREECH,
                MOVE_POISON_GAS,
                MOVE_BITE,
            },
            },
            {
#line 1255
            .species = SPECIES_GLAMEOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1258
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1256
            .ability = ABILITY_LIMBER,
#line 1257
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1259
                MOVE_CHARM,
                MOVE_QUICK_ATTACK,
                MOVE_FEINT_ATTACK,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 1264
            .species = SPECIES_GOTHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1267
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1265
            .ability = ABILITY_TELEPATHY,
#line 1266
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1268
                MOVE_CONFUSION,
                MOVE_DOUBLE_SLAP,
                MOVE_FAKE_OUT,
                MOVE_TICKLE,
            },
            },
            {
#line 1273
            .species = SPECIES_SOLOSIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1276
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1274
            .ability = ABILITY_MAGIC_GUARD,
#line 1275
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1277
                MOVE_CONFUSION,
                MOVE_NIGHT_SHADE,
                MOVE_ROLLOUT,
                MOVE_RECOVER,
            },
            },
        },
    },
#line 1282
    [DIFFICULTY_NORMAL][TRAINER_PBL_NOVA_AND_CORA] =
    {
#line 1283
        .trainerName = _("Nova&Cora"),
#line 1284
        .trainerClass = TRAINER_CLASS_TWINS,
#line 1285
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 1286
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1288
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1287
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1290
            .species = SPECIES_HATENNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1293
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1291
            .ability = ABILITY_HEALER,
#line 1292
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1294
                MOVE_PLAY_NICE,
                MOVE_LIFE_DEW,
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
            },
            },
            {
#line 1299
            .species = SPECIES_IMPIDIMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1300
            .ability = ABILITY_PICKPOCKET,
#line 1301
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1303
                MOVE_CONFIDE,
                MOVE_FLATTER,
                MOVE_FAKE_OUT,
                MOVE_ASSURANCE,
            },
            },
        },
    },
#line 1308
    [DIFFICULTY_NORMAL][TRAINER_PBL_CLINTON] =
    {
#line 1309
        .trainerName = _("Clinton"),
#line 1310
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1311
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1312
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1314
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1313
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1316
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1319
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1317
            .ability = ABILITY_TRACE,
#line 1318
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1320
                MOVE_CONFUSION,
                MOVE_SHADOW_SNEAK,
                MOVE_TELEPORT,
                MOVE_MAGICAL_LEAF,
            },
            },
            {
#line 1325
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1328
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1326
            .ability = ABILITY_LEAF_GUARD,
#line 1327
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1329
                MOVE_POISON_POWDER,
                MOVE_SLEEP_POWDER,
                MOVE_MEGA_DRAIN,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 1334
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1337
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1335
            .ability = ABILITY_FLAME_BODY,
#line 1336
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1338
                MOVE_YAWN,
                MOVE_ROCK_THROW,
                MOVE_CLEAR_SMOG,
                MOVE_INCINERATE,
            },
            },
            {
#line 1343
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1346
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1344
            .ability = ABILITY_THICK_FAT,
#line 1345
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1347
                MOVE_ICE_SHARD,
                MOVE_FAKE_OUT,
                MOVE_HEADBUTT,
                MOVE_WATER_GUN,
            },
            },
        },
    },
#line 1352
    [DIFFICULTY_NORMAL][TRAINER_PBL_REBECCA] =
    {
#line 1353
        .trainerName = _("Rebecca"),
#line 1354
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 1355
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 1356
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1358
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1357
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1360
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1363
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1361
            .ability = ABILITY_FLASH_FIRE,
#line 1362
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1364
                MOVE_BABY_DOLL_EYES,
                MOVE_DISABLE,
                MOVE_QUICK_ATTACK,
                MOVE_INCINERATE,
            },
            },
            {
#line 1369
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1372
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1370
            .ability = ABILITY_GRASS_PELT,
#line 1371
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1373
                MOVE_VINE_WHIP,
                MOVE_ROLLOUT,
                MOVE_LEECH_SEED,
                MOVE_RAZOR_LEAF,
            },
            },
            {
#line 1378
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1381
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1379
            .ability = ABILITY_HYPER_CUTTER,
#line 1380
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1382
                MOVE_ROCK_SMASH,
                MOVE_BUBBLE,
                MOVE_LEER,
                MOVE_DIZZY_PUNCH,
            },
            },
            {
#line 1387
            .species = SPECIES_PAWMI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1390
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1388
            .ability = ABILITY_STATIC,
#line 1389
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1391
                MOVE_THUNDER_SHOCK,
                MOVE_BITE,
                MOVE_FAKE_OUT,
                MOVE_SWEET_KISS,
            },
            },
        },
    },
#line 1396
    [DIFFICULTY_NORMAL][TRAINER_PBL_RYAN] =
    {
#line 1397
        .trainerName = _("Ryan"),
#line 1398
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 1399
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 1400
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1402
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1401
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1404
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1407
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1405
            .ability = ABILITY_FLASH_FIRE,
#line 1406
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1408
                MOVE_DEFENSE_CURL,
                MOVE_BUG_BITE,
                MOVE_ROLLOUT,
                MOVE_BITE,
            },
            },
            {
#line 1413
            .species = SPECIES_DEERLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1416
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1414
            .ability = ABILITY_SERENE_GRACE,
#line 1415
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1417
                MOVE_LEECH_SEED,
                MOVE_CHARM,
                MOVE_DOUBLE_KICK,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 1422
            .species = SPECIES_STUFFUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1425
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1423
            .ability = ABILITY_FLUFFY,
#line 1424
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1426
                MOVE_BRUTAL_SWING,
                MOVE_BIDE,
                MOVE_FORCE_PALM,
                MOVE_STOMP,
            },
            },
            {
#line 1431
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1434
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1432
            .ability = ABILITY_STATIC,
#line 1433
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1435
                MOVE_QUICK_ATTACK,
                MOVE_SPARK,
                MOVE_BITE,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 1440
    [DIFFICULTY_NORMAL][TRAINER_PBL_CAITLYN] =
    {
#line 1441
        .trainerName = _("Caitlyn"),
#line 1442
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1443
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 1444
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1446
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1445
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1448
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1451
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1449
            .ability = ABILITY_INTIMIDATE,
#line 1450
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1452
                MOVE_BITE,
                MOVE_RAGE,
                MOVE_FAKE_TEARS,
                MOVE_COVET,
            },
            },
            {
#line 1457
            .species = SPECIES_PUMPKABOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1460
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1458
            .ability = ABILITY_PICKUP,
#line 1459
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1461
                MOVE_RAZOR_LEAF,
                MOVE_LEECH_SEED,
                MOVE_DISABLE,
                MOVE_SHADOW_SNEAK,
            },
            },
            {
#line 1466
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1469
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1467
            .ability = ABILITY_AFTERMATH,
#line 1468
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1470
                MOVE_DOUBLE_SLAP,
                MOVE_ROLLOUT,
                MOVE_SLUDGE,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 1475
            .species = SPECIES_ESPURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1478
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1476
            .ability = ABILITY_OWN_TEMPO,
#line 1477
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1479
                MOVE_TICKLE,
                MOVE_CONFUSION,
                MOVE_DISARMING_VOICE,
                MOVE_YAWN,
            },
            },
        },
    },
#line 1484
    [DIFFICULTY_NORMAL][TRAINER_PBL_KENNETH] =
    {
#line 1485
        .trainerName = _("Kenneth"),
#line 1486
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 1487
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 1488
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1490
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1489
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1492
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1495
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1493
            .ability = ABILITY_STURDY,
#line 1494
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1496
                MOVE_FLAIL,
                MOVE_ROLLOUT,
                MOVE_SLAM,
                MOVE_BULLDOZE,
            },
            },
            {
#line 1501
            .species = SPECIES_PHANTUMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1502
            .ability = ABILITY_NATURAL_CURE,
#line 1503
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1505
                MOVE_BRANCH_POKE,
                MOVE_LEECH_SEED,
                MOVE_DISABLE,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 1510
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1513
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1511
            .ability = ABILITY_CUD_CHEW,
#line 1512
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1514
                MOVE_MUD_SLAP,
                MOVE_ACID_SPRAY,
                MOVE_STUFF_CHEEKS,
                MOVE_SLUDGE,
            },
            },
            {
#line 1519
            .species = SPECIES_MUNNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1520
            .ability = ABILITY_SYNCHRONIZE,
#line 1521
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1523
                MOVE_LUCKY_CHANT,
                MOVE_HYPNOSIS,
                MOVE_IMPRISON,
                MOVE_PSYBEAM,
            },
            },
        },
    },
#line 1528
    [DIFFICULTY_NORMAL][TRAINER_PBL_KEVIN] =
    {
#line 1529
        .trainerName = _("Kevin"),
#line 1530
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1531
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 1532
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1534
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1533
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1536
            .species = SPECIES_GRUBBIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1539
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1537
            .ability = ABILITY_SWARM,
#line 1538
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1540
                MOVE_STRING_SHOT,
                MOVE_VISE_GRIP,
                MOVE_BUG_BITE,
                MOVE_BITE,
            },
            },
            {
#line 1545
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1548
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1546
            .ability = ABILITY_SWARM,
#line 1547
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1549
                MOVE_RAZOR_LEAF,
                MOVE_BUG_BITE,
                MOVE_SYNTHESIS,
                MOVE_FLAIL,
            },
            },
            {
#line 1554
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1557
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1555
            .ability = ABILITY_COMPOUND_EYES,
#line 1556
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1558
                MOVE_FURY_SWIPES,
                MOVE_BUG_BITE,
                MOVE_MUD_SLAP,
                MOVE_ABSORB,
            },
            },
            {
#line 1563
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1566
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1564
            .ability = ABILITY_POISON_POINT,
#line 1565
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1567
                MOVE_SCREECH,
                MOVE_BUG_BITE,
                MOVE_PROTECT,
                MOVE_TWINEEDLE,
            },
            },
        },
    },
#line 1572
    [DIFFICULTY_NORMAL][TRAINER_PBL_MARIA_LEVIATHAN_5] =
    {
#line 1573
        .trainerName = _("Maria"),
#line 1574
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 1575
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 1576
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1578
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1577
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1579
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1581
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1581
            .heldItem = ITEM_EVIOLITE,
#line 1584
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1582
            .ability = ABILITY_EARLY_BIRD,
#line 1583
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1585
                MOVE_PSYBEAM,
                MOVE_STOMP,
                MOVE_DOUBLE_KICK,
            },
            },
        },
    },
#line 1589
    [DIFFICULTY_NORMAL][TRAINER_PBL_MARIA_LEVIATHAN_5_CHALLENGE] =
    {
#line 1590
        .trainerName = _("Maria"),
#line 1591
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 1592
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 1593
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1595
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1594
        .aiFlags = AI_FLAG_CHALLENGE,
#line 1596
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1598
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1598
            .heldItem = ITEM_EVIOLITE,
#line 1601
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1599
            .ability = ABILITY_EARLY_BIRD,
#line 1600
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1602
                MOVE_PSYBEAM,
                MOVE_STOMP,
                MOVE_DOUBLE_KICK,
                MOVE_REST,
            },
            },
        },
    },
#line 1607
    [DIFFICULTY_NORMAL][TRAINER_PBL_GILBERT] =
    {
#line 1608
        .trainerName = _("Gilbert"),
#line 1609
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 1610
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 1611
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1613
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1612
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1615
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1618
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1616
            .ability = ABILITY_SWIFT_SWIM,
#line 1617
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1619
                MOVE_SPLASH,
                MOVE_TACKLE,
                MOVE_FLAIL,
            },
            },
            {
#line 1623
            .species = SPECIES_FINNEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1626
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1624
            .ability = ABILITY_STORM_DRAIN,
#line 1625
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1627
                MOVE_SWEET_KISS,
                MOVE_TICKLE,
                MOVE_WATER_PULSE,
                MOVE_TAILWIND,
            },
            },
            {
#line 1632
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1635
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1633
            .ability = ABILITY_SHEER_FORCE,
#line 1634
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1636
                MOVE_MUD_SHOT,
                MOVE_STOMP,
                MOVE_BUBBLE_BEAM,
                MOVE_SLAM,
            },
            },
            {
#line 1641
            .species = SPECIES_CHEWTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1644
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1642
            .ability = ABILITY_STRONG_JAW,
#line 1643
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1645
                MOVE_WATER_GUN,
                MOVE_BITE,
                MOVE_HEADBUTT,
                MOVE_GASTRO_ACID,
            },
            },
        },
    },
#line 1650
    [DIFFICULTY_NORMAL][TRAINER_PBL_MELANIE] =
    {
#line 1651
        .trainerName = _("Melanie"),
#line 1652
        .trainerClass = TRAINER_CLASS_LASS,
#line 1653
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 1654
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1656
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1655
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1658
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1661
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1659
            .ability = ABILITY_SAP_SIPPER,
#line 1660
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1662
                MOVE_THUNDER_WAVE,
                MOVE_SHOCK_WAVE,
                MOVE_STOMP,
                MOVE_CHARGE,
            },
            },
            {
#line 1667
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1670
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1668
            .ability = ABILITY_FLAME_BODY,
#line 1669
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1671
                MOVE_QUICK_ATTACK,
                MOVE_DOUBLE_KICK,
                MOVE_FIRE_SPIN,
                MOVE_FLAME_WHEEL,
            },
            },
            {
#line 1676
            .species = SPECIES_MUDBRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1679
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1677
            .ability = ABILITY_STAMINA,
#line 1678
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1680
                MOVE_SMACK_DOWN,
                MOVE_BULLDOZE,
                MOVE_DOUBLE_KICK,
                MOVE_STOMP,
            },
            },
        },
    },
#line 1685
    [DIFFICULTY_NORMAL][TRAINER_PBL_CONSTANCE] =
    {
#line 1686
        .trainerName = _("Constance"),
#line 1687
        .trainerClass = TRAINER_CLASS_LADY,
#line 1688
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1689
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1691
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1690
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1693
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1696
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1694
            .ability = ABILITY_TECHNICIAN,
#line 1695
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1697
                MOVE_HELPING_HAND,
                MOVE_DOUBLE_SLAP,
                MOVE_TICKLE,
                MOVE_SWIFT,
            },
            },
            {
#line 1702
            .species = SPECIES_ROCKRUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1705
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1703
            .ability = ABILITY_VITAL_SPIRIT,
#line 1704
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1706
                MOVE_ROCK_THROW,
                MOVE_BITE,
                MOVE_ROAR,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 1711
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1712
            .ability = ABILITY_GUTS,
#line 1713
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1715
                MOVE_FAKE_OUT,
                MOVE_FORCE_PALM,
                MOVE_BULLET_PUNCH,
                MOVE_SMELLING_SALTS,
            },
            },
            {
#line 1720
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1723
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1721
            .ability = ABILITY_THICK_FAT,
#line 1722
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1724
                MOVE_CONFUSE_RAY,
                MOVE_PAYBACK,
                MOVE_PSYBEAM,
                MOVE_TRICK,
            },
            },
        },
    },
#line 1729
    [DIFFICULTY_NORMAL][TRAINER_PBL_FRANK] =
    {
#line 1730
        .trainerName = _("Frank"),
#line 1731
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 1732
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 1733
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1735
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1734
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1737
            .species = SPECIES_FLABEBE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1740
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1738
            .ability = ABILITY_FLOWER_VEIL,
#line 1739
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1741
                MOVE_TEARFUL_LOOK,
                MOVE_LUCKY_CHANT,
                MOVE_SYNTHESIS,
                MOVE_RAZOR_LEAF,
            },
            },
            {
#line 1746
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1747
            .ability = ABILITY_INTIMIDATE,
#line 1748
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1750
                MOVE_BITE,
                MOVE_HELPING_HAND,
                MOVE_DOUBLE_KICK,
                MOVE_FLAME_WHEEL,
            },
            },
            {
#line 1755
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1758
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1756
            .ability = ABILITY_TRUANT,
#line 1757
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1759
                MOVE_SNORE,
                MOVE_SLASH,
                MOVE_FEINT_ATTACK,
                MOVE_SLACK_OFF,
            },
            },
        },
    },
#line 1764
    [DIFFICULTY_NORMAL][TRAINER_PBL_DUDLEY] =
    {
#line 1765
        .trainerName = _("Dudley"),
#line 1766
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 1767
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 1768
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1770
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1769
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1772
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1773
            .ability = ABILITY_KEEN_EYE,
#line 1774
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1776
                MOVE_TWISTER,
                MOVE_AQUA_RING,
                MOVE_WING_ATTACK,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1781
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1784
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1782
            .ability = ABILITY_SCRAPPY,
#line 1783
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1785
                MOVE_FOCUS_ENERGY,
                MOVE_WING_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_RAGE,
            },
            },
            {
#line 1790
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1791
            .ability = ABILITY_WIND_POWER,
#line 1792
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1794
                MOVE_THUNDER_SHOCK,
                MOVE_UPROAR,
                MOVE_FEATHER_DANCE,
                MOVE_PLUCK,
            },
            },
            {
#line 1799
            .species = SPECIES_ROOKIDEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1800
            .ability = ABILITY_BIG_PECKS,
#line 1801
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1803
                MOVE_POWER_TRIP,
                MOVE_FURY_ATTACK,
                MOVE_ROCK_SMASH,
                MOVE_PLUCK,
            },
            },
        },
    },
#line 1808
    [DIFFICULTY_NORMAL][TRAINER_PBL_DAISY] =
    {
#line 1809
        .trainerName = _("Daisy"),
#line 1810
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 1811
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 1812
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1814
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1813
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1816
            .species = SPECIES_SMEARGLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1819
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1817
            .ability = ABILITY_TECHNICIAN,
#line 1818
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1820
                MOVE_SKETCH,
            },
            },
            {
#line 1822
            .species = SPECIES_APPLIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1825
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1823
            .ability = ABILITY_RIPEN,
#line 1824
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1826
                MOVE_ASTONISH,
                MOVE_WITHDRAW,
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
            },
            },
            {
#line 1831
            .species = SPECIES_MILCERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1832
            .ability = ABILITY_SWEET_VEIL,
#line 1833
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1835
                MOVE_BABY_DOLL_EYES,
                MOVE_CHARM,
                MOVE_SWEET_KISS,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 1840
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1843
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1841
            .ability = ABILITY_SYNCHRONIZE,
#line 1842
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1844
                MOVE_TELEPORT,
            },
            },
            {
#line 1846
            .species = SPECIES_CLEFFA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1849
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1847
            .ability = ABILITY_CUTE_CHARM,
#line 1848
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1850
                MOVE_DISARMING_VOICE,
                MOVE_CHARM,
                MOVE_ENCORE,
                MOVE_WISH,
            },
            },
            {
#line 1855
            .species = SPECIES_SNOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1856
            .ability = ABILITY_ICE_SCALES,
#line 1857
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1859
                MOVE_STRUGGLE_BUG,
                MOVE_POWDER_SNOW,
                MOVE_MIRROR_COAT,
                MOVE_FAIRY_WIND,
            },
            },
        },
    },
#line 1864
    [DIFFICULTY_NORMAL][TRAINER_PBL_VIC_AND_DELL] =
    {
#line 1865
        .trainerName = _("Vic&Dell"),
#line 1866
        .trainerClass = TRAINER_CLASS_TWINS,
#line 1867
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 1868
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1870
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1869
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1872
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1875
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1873
            .ability = ABILITY_PLUS,
#line 1874
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1876
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_CHARM,
                MOVE_ELECTRO_BALL,
            },
            },
            {
#line 1881
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1884
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1882
            .ability = ABILITY_MINUS,
#line 1883
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1885
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_CHARM,
                MOVE_ELECTRO_BALL,
            },
            },
        },
    },
#line 1890
    [DIFFICULTY_NORMAL][TRAINER_PBL_MINA] =
    {
#line 1891
        .trainerName = _("Nina"),
#line 1892
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 1893
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 1894
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1896
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1895
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1898
            .species = SPECIES_WIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1901
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1899
            .ability = ABILITY_GOOEY,
#line 1900
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1902
                MOVE_AQUA_JET,
                MOVE_WATER_PULSE,
                MOVE_SLAM,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 1907
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1910
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1908
            .ability = ABILITY_HYDRATION,
#line 1909
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1911
                MOVE_MAGNITUDE,
                MOVE_WATER_PULSE,
                MOVE_MUD_BOMB,
                MOVE_REST,
            },
            },
            {
#line 1916
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1919
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1917
            .ability = ABILITY_SWIFT_SWIM,
#line 1918
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1920
                MOVE_WATER_PULSE,
                MOVE_HORN_ATTACK,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
            {
#line 1925
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1925
            .heldItem = ITEM_ORAN_BERRY,
#line 1928
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1926
            .ability = ABILITY_REGENERATOR,
#line 1927
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1929
                MOVE_BUBBLE_BEAM,
                MOVE_ANCIENT_POWER,
                MOVE_SPIKE_CANNON,
                MOVE_REFRESH,
            },
            },
        },
    },
#line 1934
    [DIFFICULTY_NORMAL][TRAINER_PBL_ZACK_AND_COBY_LEVIATHAN_6] =
    {
#line 1935
        .trainerName = _("Zack&Coby"),
#line 1936
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 1937
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 1938
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1940
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1939
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 1941
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1943
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1943
            .heldItem = ITEM_ORAN_BERRY,
#line 1946
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1944
            .ability = ABILITY_SWIFT_SWIM,
#line 1945
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1947
                MOVE_CHILLING_WATER,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 1950
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1950
            .heldItem = ITEM_ORAN_BERRY,
#line 1953
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 30, 30),
#line 1951
            .ability = ABILITY_STORM_DRAIN,
#line 1952
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1954
                MOVE_CHILLING_WATER,
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 1958
    [DIFFICULTY_NORMAL][TRAINER_PBL_ZACK_AND_COBY_LEVIATHAN_6_CHALLENGE] =
    {
#line 1959
        .trainerName = _("Zack&Coby"),
#line 1960
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 1961
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 1962
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1964
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1963
        .aiFlags = AI_FLAG_CHALLENGE,
#line 1965
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1967
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1967
            .heldItem = ITEM_ORAN_BERRY,
#line 1970
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1968
            .ability = ABILITY_SWIFT_SWIM,
#line 1969
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1971
                MOVE_CHILLING_WATER,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 1974
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1974
            .heldItem = ITEM_ORAN_BERRY,
#line 1977
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 30, 30),
#line 1975
            .ability = ABILITY_STORM_DRAIN,
#line 1976
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1978
                MOVE_SURF,
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 1982
    [DIFFICULTY_NORMAL][TRAINER_PBL_MILLIE] =
    {
#line 1983
        .trainerName = _("Millie"),
#line 1984
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 1985
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 1986
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1988
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1987
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1990
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1993
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1991
            .ability = ABILITY_INNER_FOCUS,
#line 1992
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1994
                MOVE_FAKE_OUT,
                MOVE_FORCE_PALM,
                MOVE_ME_FIRST,
                MOVE_VITAL_THROW,
            },
            },
            {
#line 1999
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2000
            .ability = ABILITY_VITAL_SPIRIT,
#line 2001
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2003
                MOVE_SWAGGER,
                MOVE_RETALIATE,
                MOVE_KARATE_CHOP,
                MOVE_ASSURANCE,
            },
            },
            {
#line 2008
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2011
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2009
            .ability = ABILITY_PURE_POWER,
#line 2010
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2012
                MOVE_FEINT,
                MOVE_SECRET_POWER,
                MOVE_FORCE_PALM,
                MOVE_PSYBEAM,
            },
            },
            {
#line 2017
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2020
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2018
            .ability = ABILITY_IRON_FIST,
#line 2019
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2021
                MOVE_ROCK_THROW,
                MOVE_WAKE_UP_SLAP,
                MOVE_CHIP_AWAY,
                MOVE_MACH_PUNCH,
            },
            },
        },
    },
#line 2026
    [DIFFICULTY_NORMAL][TRAINER_PBL_JAMAL] =
    {
#line 2027
        .trainerName = _("Jamal"),
#line 2028
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2029
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2030
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2032
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2031
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2034
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2037
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2035
            .ability = ABILITY_OBLIVIOUS,
#line 2036
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2038
                MOVE_BULLDOZE,
                MOVE_YAWN,
                MOVE_FLAME_WHEEL,
                MOVE_MAGNITUDE,
            },
            },
            {
#line 2043
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2044
            .ability = ABILITY_INNER_FOCUS,
#line 2045
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2047
                MOVE_POISON_FANG,
                MOVE_QUICK_GUARD,
                MOVE_WING_ATTACK,
                MOVE_SWIFT,
            },
            },
            {
#line 2052
            .species = SPECIES_FOMANTIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2055
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2053
            .ability = ABILITY_LEAF_GUARD,
#line 2054
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2056
                MOVE_WORRY_SEED,
                MOVE_RAZOR_LEAF,
                MOVE_SYNTHESIS,
                MOVE_SLASH,
            },
            },
            {
#line 2061
            .species = SPECIES_BUIZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2064
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2062
            .ability = ABILITY_WATER_VEIL,
#line 2063
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2065
                MOVE_BITE,
                MOVE_AQUA_JET,
                MOVE_SONIC_BOOM,
                MOVE_PURSUIT,
            },
            },
        },
    },
#line 2070
    [DIFFICULTY_NORMAL][TRAINER_PBL_PAIGE] =
    {
#line 2071
        .trainerName = _("Paige"),
#line 2072
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 2073
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 2074
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2076
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2075
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2078
            .species = SPECIES_COMBEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2081
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2079
            .ability = ABILITY_HONEY_GATHER,
#line 2080
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2082
                MOVE_GUST,
                MOVE_SWEET_SCENT,
                MOVE_STRUGGLE_BUG,
                MOVE_BUG_BITE,
            },
            },
            {
#line 2087
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2090
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2088
            .ability = ABILITY_CHLOROPHYLL,
#line 2089
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2091
                MOVE_CONFUSION,
                MOVE_MEGA_DRAIN,
                MOVE_POISON_POWDER,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 2096
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2099
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2097
            .ability = ABILITY_EFFECT_SPORE,
#line 2098
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2100
                MOVE_HEADBUTT,
                MOVE_MEGA_DRAIN,
                MOVE_FAKE_TEARS,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 2105
            .species = SPECIES_CUTIEFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2108
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2106
            .ability = ABILITY_SHIELD_DUST,
#line 2107
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2109
                MOVE_STRUGGLE_BUG,
                MOVE_STUN_SPORE,
                MOVE_SWITCHEROO,
                MOVE_DRAINING_KISS,
            },
            },
        },
    },
#line 2114
    [DIFFICULTY_NORMAL][TRAINER_PBL_SETH] =
    {
#line 2115
        .trainerName = _("Seth"),
#line 2116
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2117
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 2118
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2120
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2119
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2122
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2123
            .ability = ABILITY_PRANKSTER,
#line 2124
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2126
                MOVE_FLATTER,
                MOVE_SPARK,
                MOVE_SWIFT,
                MOVE_NUZZLE,
            },
            },
            {
#line 2131
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2134
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2132
            .ability = ABILITY_QUICK_FEET,
#line 2133
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2135
                MOVE_YAWN,
                MOVE_COVET,
                MOVE_METAL_CLAW,
                MOVE_CHIP_AWAY,
            },
            },
            {
#line 2140
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2143
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2141
            .ability = ABILITY_PICKUP,
#line 2142
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2144
                MOVE_FAKE_OUT,
                MOVE_ASTONISH,
                MOVE_QUICK_GUARD,
                MOVE_SLAM,
            },
            },
            {
#line 2149
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2152
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2150
            .ability = ABILITY_UNBURDEN,
#line 2151
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2153
                MOVE_SWITCHEROO,
                MOVE_POISON_FANG,
                MOVE_SUPER_FANG,
                MOVE_FLATTER,
            },
            },
        },
    },
#line 2159
    [DIFFICULTY_NORMAL][TRAINER_PBL_CONNIE] =
    {
#line 2160
        .trainerName = _("Connie"),
#line 2161
        .trainerClass = TRAINER_CLASS_LASS,
#line 2162
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 2163
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2165
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2164
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2167
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2170
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2168
            .ability = ABILITY_CHLOROPHYLL,
#line 2169
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2171
                MOVE_LEECH_SEED,
                MOVE_RAZOR_LEAF,
                MOVE_SECRET_POWER,
                MOVE_MEGA_DRAIN,
            },
            },
            {
#line 2176
            .species = SPECIES_DEWPIDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2177
            .ability = ABILITY_WATER_BUBBLE,
#line 2178
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2180
                MOVE_AQUA_RING,
                MOVE_SPIDER_WEB,
                MOVE_BUG_BITE,
                MOVE_BUBBLE_BEAM,
            },
            },
        },
    },
#line 2186
    [DIFFICULTY_NORMAL][TRAINER_PBL_PETER] =
    {
#line 2187
        .trainerName = _("Peter"),
#line 2188
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 2189
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 2190
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2192
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2191
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2194
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2197
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2195
            .ability = ABILITY_CHLOROPHYLL,
#line 2196
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2198
                MOVE_CLEAR_SMOG,
                MOVE_RAZOR_LEAF,
                MOVE_ACID_SPRAY,
                MOVE_MAGICAL_LEAF,
            },
            },
            {
#line 2203
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2206
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2204
            .ability = ABILITY_SWIFT_SWIM,
#line 2205
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2207
                MOVE_STRUGGLE_BUG,
                MOVE_BUBBLE_BEAM,
                MOVE_PSYBEAM,
                MOVE_SIGNAL_BEAM,
            },
            },
        },
    },
#line 2212
    [DIFFICULTY_NORMAL][TRAINER_PBL_WHITAKER] =
    {
#line 2213
        .trainerName = _("Whitaker"),
#line 2214
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 2215
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 2216
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 2218
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2217
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2220
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2223
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2221
            .ability = ABILITY_SNIPER,
#line 2222
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2224
                MOVE_FURY_ATTACK,
                MOVE_QUICK_ATTACK,
                MOVE_WING_ATTACK,
                MOVE_PURSUIT,
            },
            },
            {
#line 2229
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2232
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2230
            .ability = ABILITY_MAGIC_BOUNCE,
#line 2231
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2233
                MOVE_NIGHT_SHADE,
                MOVE_REFRESH,
                MOVE_AIR_CUTTER,
                MOVE_OMINOUS_WIND,
            },
            },
            {
#line 2238
            .species = SPECIES_FLITTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2241
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2239
            .ability = ABILITY_FRISK,
#line 2240
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2242
                MOVE_DISARMING_VOICE,
                MOVE_BABY_DOLL_EYES,
                MOVE_PSYBEAM,
                MOVE_PLUCK,
            },
            },
            {
#line 2247
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2250
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2248
            .ability = ABILITY_SUPER_LUCK,
#line 2249
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2251
                MOVE_AERIAL_ACE,
                MOVE_QUICK_ATTACK,
                MOVE_FEATHER_DANCE,
                MOVE_AIR_CUTTER,
            },
            },
        },
    },
#line 2256
    [DIFFICULTY_NORMAL][TRAINER_PBL_BETTY_LEVIATHAN_7] =
    {
#line 2257
        .trainerName = _("Betty"),
#line 2258
        .trainerClass = TRAINER_CLASS_LADY,
#line 2259
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 2260
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2262
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2261
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2263
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2265
            .species = SPECIES_DEDENNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2265
            .heldItem = ITEM_SITRUS_BERRY,
#line 2268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2266
            .ability = ABILITY_PLUS,
#line 2267
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2269
                MOVE_SHOCK_WAVE,
                MOVE_DRAINING_KISS,
                MOVE_NUZZLE,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 2274
            .species = SPECIES_DRAMPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2274
            .heldItem = ITEM_SITRUS_BERRY,
#line 2277
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2275
            .ability = ABILITY_CLOUD_NINE,
#line 2276
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2278
                MOVE_DRAGON_BREATH,
                MOVE_GLARE,
                MOVE_NATURAL_GIFT,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 2283
    [DIFFICULTY_NORMAL][TRAINER_PBL_BETTY_LEVIATHAN_7_CHALLENGE] =
    {
#line 2284
        .trainerName = _("Betty"),
#line 2285
        .trainerClass = TRAINER_CLASS_LADY,
#line 2286
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 2287
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2289
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2288
        .aiFlags = AI_FLAG_CHALLENGE,
#line 2290
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2292
            .species = SPECIES_DEDENNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2292
            .heldItem = ITEM_SITRUS_BERRY,
#line 2295
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2293
            .ability = ABILITY_CHEEK_POUCH,
#line 2294
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2296
                MOVE_SHOCK_WAVE,
                MOVE_DRAINING_KISS,
                MOVE_NUZZLE,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 2301
            .species = SPECIES_DRAMPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2301
            .heldItem = ITEM_SITRUS_BERRY,
#line 2304
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2302
            .ability = ABILITY_BERSERK,
#line 2303
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2305
                MOVE_DRAGON_BREATH,
                MOVE_GLARE,
                MOVE_NATURAL_GIFT,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 2310
    [DIFFICULTY_NORMAL][TRAINER_PBL_JIMMY] =
    {
#line 2311
        .trainerName = _("Jimmy"),
#line 2312
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 2313
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 2314
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2316
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2315
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2318
            .species = SPECIES_NOIBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2321
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2319
            .ability = ABILITY_INFILTRATOR,
#line 2320
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2322
                MOVE_WING_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_BITE,
                MOVE_ROOST,
            },
            },
            {
#line 2327
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2328
            .ability = ABILITY_SWIFT_SWIM,
#line 2329
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2331
                MOVE_SPLASH,
                MOVE_TACKLE,
                MOVE_FLAIL,
            },
            },
            {
#line 2335
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2336
            .ability = ABILITY_CLEAR_BODY,
#line 2337
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2339
                MOVE_TACKLE,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 2342
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2345
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2343
            .ability = ABILITY_SHED_SKIN,
#line 2344
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2346
                MOVE_HAZE,
                MOVE_THUNDER_WAVE,
                MOVE_WATER_PULSE,
                MOVE_DRAGON_BREATH,
            },
            },
        },
    },
#line 2351
    [DIFFICULTY_NORMAL][TRAINER_PBL_EMILIANO] =
    {
#line 2352
        .trainerName = _("Emiliano"),
#line 2353
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2354
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 2355
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2357
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2356
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2359
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2360
            .ability = ABILITY_STURDY,
#line 2361
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2363
                MOVE_SMACK_DOWN,
                MOVE_SAND_TOMB,
                MOVE_SCREECH,
                MOVE_SLAM,
            },
            },
            {
#line 2368
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2371
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2369
            .ability = ABILITY_STURDY,
#line 2370
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2372
                MOVE_SMACK_DOWN,
                MOVE_MUD_SLAP,
                MOVE_MAGNITUDE,
                MOVE_HEADBUTT,
            },
            },
            {
#line 2377
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2380
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2378
            .ability = ABILITY_STURDY,
#line 2379
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2381
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_MAGNITUDE,
                MOVE_ROCK_BLAST,
            },
            },
            {
#line 2386
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2389
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2387
            .ability = ABILITY_NO_GUARD,
#line 2388
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2390
                MOVE_SEISMIC_TOSS,
                MOVE_LOW_SWEEP,
                MOVE_STRENGTH,
                MOVE_VITAL_THROW,
            },
            },
        },
    },
#line 2395
    [DIFFICULTY_NORMAL][TRAINER_PBL_BECKHAM] =
    {
#line 2396
        .trainerName = _("Beckham"),
#line 2397
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2398
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2399
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2401
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2400
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2403
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2404
            .ability = ABILITY_OWN_TEMPO,
#line 2405
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2407
                MOVE_YAWN,
                MOVE_DISABLE,
                MOVE_CONFUSION,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 2412
            .species = SPECIES_SALANDIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2415
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2413
            .ability = ABILITY_CORROSION,
#line 2414
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2416
                MOVE_MUD_SLAP,
                MOVE_FAKE_OUT,
                MOVE_POISON_FANG,
                MOVE_INCINERATE,
            },
            },
            {
#line 2421
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2424
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2422
            .ability = ABILITY_BATTLE_ARMOR,
#line 2423
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2425
                MOVE_BONE_CLUB,
                MOVE_FOCUS_ENERGY,
                MOVE_DOUBLE_KICK,
                MOVE_BONE_RUSH,
            },
            },
            {
#line 2430
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2433
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2431
            .ability = ABILITY_UNAWARE,
#line 2432
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2434
                MOVE_DISABLE,
                MOVE_STOMP,
                MOVE_WRAP,
                MOVE_MAGNITUDE,
            },
            },
        },
    },
#line 2439
    [DIFFICULTY_NORMAL][TRAINER_PBL_KAREN] =
    {
#line 2440
        .trainerName = _("Karen"),
#line 2441
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 2442
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 2443
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2445
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2444
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2447
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2450
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2448
            .ability = ABILITY_CONTRARY,
#line 2449
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2451
                MOVE_SMELLING_SALTS,
                MOVE_FEINT_ATTACK,
                MOVE_PSYBEAM,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 2456
    [DIFFICULTY_NORMAL][TRAINER_PBL_JAYDEN] =
    {
#line 2457
        .trainerName = _("Jayden"),
#line 2458
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2459
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 2460
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2462
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2461
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2464
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2467
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2465
            .ability = ABILITY_STURDY,
#line 2466
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2468
                MOVE_ROLLOUT,
                MOVE_MAGNITUDE,
                MOVE_SMACK_DOWN,
                MOVE_BULLDOZE,
            },
            },
            {
#line 2473
            .species = SPECIES_ROLYCOLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2476
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2474
            .ability = ABILITY_STEAM_ENGINE,
#line 2475
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2477
                MOVE_SMACK_DOWN,
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_INCINERATE,
            },
            },
            {
#line 2482
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2485
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2483
            .ability = ABILITY_PURIFYING_SALT,
#line 2484
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2486
                MOVE_MUD_SHOT,
                MOVE_HEADBUTT,
                MOVE_SMACK_DOWN,
                MOVE_RECOVER,
            },
            },
            {
#line 2491
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2492
            .ability = ABILITY_SOLID_ROCK,
#line 2493
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2495
                MOVE_STRUGGLE_BUG,
                MOVE_ACID,
                MOVE_ROCK_THROW,
                MOVE_BUG_BITE,
            },
            },
        },
    },
#line 2500
    [DIFFICULTY_NORMAL][TRAINER_PBL_NEIL] =
    {
#line 2501
        .trainerName = _("Neil"),
#line 2502
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 2503
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 2504
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2506
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2505
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2508
            .species = SPECIES_RELLOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2511
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2509
            .ability = ABILITY_COMPOUND_EYES,
#line 2510
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2512
                MOVE_STRUGGLE_BUG,
                MOVE_MUD_SHOT,
                MOVE_BUG_BITE,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 2517
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2520
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2518
            .ability = ABILITY_LEVITATE,
#line 2519
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2521
                MOVE_ROCK_TOMB,
                MOVE_RAPID_SPIN,
                MOVE_ANCIENT_POWER,
                MOVE_PSYBEAM,
            },
            },
            {
#line 2526
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2529
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2527
            .ability = ABILITY_MUMMY,
#line 2528
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2530
                MOVE_IMPRISON,
                MOVE_HEX,
                MOVE_CURSE,
                MOVE_FAKE_TEARS,
            },
            },
            {
#line 2535
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2536
            .ability = ABILITY_PLUS,
#line 2537
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2539
                MOVE_CHARGE,
                MOVE_METAL_SOUND,
                MOVE_SCREECH,
                MOVE_MIRROR_SHOT,
            },
            },
        },
    },
#line 2544
    [DIFFICULTY_NORMAL][TRAINER_PBL_TAMARA] =
    {
#line 2545
        .trainerName = _("Tamara"),
#line 2546
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 2547
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 2548
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2550
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2549
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2552
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2555
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2553
            .ability = ABILITY_STORM_DRAIN,
#line 2554
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2556
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_HIDDEN_POWER,
                MOVE_SLUDGE,
            },
            },
            {
#line 2561
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2564
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2562
            .ability = ABILITY_SERENE_GRACE,
#line 2563
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2565
                MOVE_HEART_STAMP,
                MOVE_FLATTER,
                MOVE_ASSURANCE,
                MOVE_AIR_CUTTER,
            },
            },
            {
#line 2570
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2573
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2571
            .ability = ABILITY_INSOMNIA,
#line 2572
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2574
                MOVE_POISON_GAS,
                MOVE_HEADBUTT,
                MOVE_WAKE_UP_SLAP,
                MOVE_PSYBEAM,
            },
            },
            {
#line 2579
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2580
            .ability = ABILITY_UNNERVE,
#line 2581
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2583
                MOVE_POISON_STING,
                MOVE_FEINT_ATTACK,
                MOVE_STRUGGLE_BUG,
                MOVE_ELECTROWEB,
            },
            },
        },
    },
#line 2588
    [DIFFICULTY_NORMAL][TRAINER_PBL_ALISTAIR_LEVIATHAN_8] =
    {
#line 2589
        .trainerName = _("Alistair"),
#line 2590
        .trainerClass = TRAINER_CLASS_ROUGHNECK,
#line 2591
        .trainerPic = TRAINER_PIC_ROUGHNECK,
        .encounterMusic_gender =
#line 2592
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2594
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2593
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 2595
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2597
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2597
            .heldItem = ITEM_POISON_BARB,
#line 2600
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2598
            .ability = ABILITY_POISON_TOUCH,
#line 2599
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2601
                MOVE_ACID_SPRAY,
                MOVE_POISON_GAS,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2606
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2606
            .heldItem = ITEM_SHARP_BEAK,
#line 2609
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2607
            .ability = ABILITY_AFTERMATH,
#line 2608
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2610
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 2615
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2615
            .heldItem = ITEM_BLACK_BELT,
#line 2618
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2616
            .ability = ABILITY_POISON_TOUCH,
#line 2617
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2619
                MOVE_VENOSHOCK,
                MOVE_POWER_UP_PUNCH,
                MOVE_FAKE_OUT,
                MOVE_THIEF,
            },
            },
            {
#line 2624
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2624
            .heldItem = ITEM_SITRUS_BERRY,
#line 2627
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2625
            .ability = ABILITY_STRONG_JAW,
#line 2626
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2628
                MOVE_BITE,
                MOVE_THUNDER_FANG,
                MOVE_FIRE_FANG,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 2633
    [DIFFICULTY_NORMAL][TRAINER_PBL_ALISTAIR_LEVIATHAN_8_CHALLENGE] =
    {
#line 2634
        .trainerName = _("Alistair"),
#line 2635
        .trainerClass = TRAINER_CLASS_ROUGHNECK,
#line 2636
        .trainerPic = TRAINER_PIC_ROUGHNECK,
        .encounterMusic_gender =
#line 2637
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2639
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2638
        .aiFlags = AI_FLAG_CHALLENGE,
#line 2640
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2642
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2642
            .heldItem = ITEM_POISON_BARB,
#line 2645
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2643
            .ability = ABILITY_POISON_TOUCH,
#line 2644
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2646
                MOVE_ACID_SPRAY,
                MOVE_POISON_GAS,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2651
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2651
            .heldItem = ITEM_SHARP_BEAK,
#line 2654
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2652
            .ability = ABILITY_AFTERMATH,
#line 2653
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2655
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 2660
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2660
            .heldItem = ITEM_BLACK_BELT,
#line 2663
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2661
            .ability = ABILITY_POISON_TOUCH,
#line 2662
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2664
                MOVE_VENOSHOCK,
                MOVE_POWER_UP_PUNCH,
                MOVE_FAKE_OUT,
                MOVE_THIEF,
            },
            },
            {
#line 2669
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2669
            .heldItem = ITEM_EVIOLITE,
#line 2672
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2670
            .ability = ABILITY_SERENE_GRACE,
#line 2671
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2673
                MOVE_HEADBUTT,
                MOVE_BITE,
                MOVE_GLARE,
                MOVE_ROOST,
            },
            },
            {
#line 2678
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2678
            .heldItem = ITEM_SITRUS_BERRY,
#line 2681
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2679
            .ability = ABILITY_STRONG_JAW,
#line 2680
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2682
                MOVE_BITE,
                MOVE_THUNDER_FANG,
                MOVE_FIRE_FANG,
                MOVE_ICE_FANG,
            },
            },
        },
    },
#line 2687
    [DIFFICULTY_NORMAL][TRAINER_PBL_COOPER] =
    {
#line 2688
        .trainerName = _("Cooper"),
#line 2689
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 2690
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 2691
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2693
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2692
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2695
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2698
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2696
            .ability = ABILITY_EFFECT_SPORE,
#line 2697
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2699
                MOVE_GASTRO_ACID,
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 2704
            .species = SPECIES_SKORUPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2707
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2705
            .ability = ABILITY_SNIPER,
#line 2706
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2708
                MOVE_POISON_FANG,
                MOVE_BUG_BITE,
                MOVE_FEINT_ATTACK,
                MOVE_HONE_CLAWS,
            },
            },
            {
#line 2713
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2716
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2714
            .ability = ABILITY_LEVITATE,
#line 2715
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2717
                MOVE_SLUDGE,
                MOVE_STOCKPILE,
                MOVE_SPIT_UP,
                MOVE_SWALLOW,
            },
            },
            {
#line 2722
            .species = SPECIES_VENONAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2725
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2723
            .ability = ABILITY_COMPOUND_EYES,
#line 2724
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2726
                MOVE_STRUGGLE_BUG,
                MOVE_POISON_POWDER,
                MOVE_PSYBEAM,
                MOVE_STUN_SPORE,
            },
            },
        },
    },
#line 2731
    [DIFFICULTY_NORMAL][TRAINER_PBL_CARMINE] =
    {
#line 2732
        .trainerName = _("Carmine"),
#line 2733
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 2734
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 2735
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2737
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2736
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2739
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2742
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2740
            .ability = ABILITY_MOTOR_DRIVE,
#line 2741
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2743
                MOVE_SHOCK_WAVE,
                MOVE_CHARGE_BEAM,
                MOVE_AERIAL_ACE,
                MOVE_ENCORE,
            },
            },
        },
    },
#line 2748
    [DIFFICULTY_NORMAL][TRAINER_PBL_JONATHAN] =
    {
#line 2749
        .trainerName = _("Jonathan"),
#line 2750
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 2751
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 2752
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2754
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2753
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2756
            .species = SPECIES_NYMBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2759
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2757
            .ability = ABILITY_SWARM,
#line 2758
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2760
                MOVE_DOUBLE_KICK,
                MOVE_SCREECH,
                MOVE_BUG_BITE,
                MOVE_FEINT,
            },
            },
            {
#line 2765
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2768
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2766
            .ability = ABILITY_STURDY,
#line 2767
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2769
                MOVE_BUG_BITE,
                MOVE_PAYBACK,
                MOVE_RAPID_SPIN,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 2774
            .species = SPECIES_SHELMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2777
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2775
            .ability = ABILITY_SHELL_ARMOR,
#line 2776
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2778
                MOVE_MUD_SLAP,
                MOVE_STRUGGLE_BUG,
                MOVE_MEGA_DRAIN,
                MOVE_RECOVER,
            },
            },
            {
#line 2783
            .species = SPECIES_KARRABLAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2784
            .ability = ABILITY_SWARM,
#line 2785
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2787
                MOVE_FEINT_ATTACK,
                MOVE_BUG_BITE,
                MOVE_SLASH,
                MOVE_RECOVER,
            },
            },
        },
    },
#line 2792
    [DIFFICULTY_NORMAL][TRAINER_PBL_CALVIN] =
    {
#line 2793
        .trainerName = _("Calvin"),
#line 2794
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 2795
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 2796
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2798
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2797
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2800
            .species = SPECIES_ARROKUDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2803
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2801
            .ability = ABILITY_PROPELLER_TAIL,
#line 2802
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2804
                MOVE_AQUA_JET,
                MOVE_BITE,
                MOVE_FOCUS_ENERGY,
                MOVE_LASER_FOCUS,
            },
            },
            {
#line 2809
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2812
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2810
            .ability = ABILITY_WATER_ABSORB,
#line 2811
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2813
                MOVE_MUD_SHOT,
                MOVE_BUBBLE_BEAM,
                MOVE_ENDEAVOR,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 2818
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2821
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2819
            .ability = ABILITY_SNIPER,
#line 2820
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2822
                MOVE_FOCUS_ENERGY,
                MOVE_BUBBLE_BEAM,
                MOVE_PSYBEAM,
                MOVE_AURORA_BEAM,
            },
            },
            {
#line 2827
            .species = SPECIES_TYMPOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2830
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2828
            .ability = ABILITY_WATER_ABSORB,
#line 2829
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2831
                MOVE_UPROAR,
                MOVE_BUBBLE_BEAM,
                MOVE_MUD_BOMB,
                MOVE_AQUA_RING,
            },
            },
        },
    },
#line 2836
    [DIFFICULTY_NORMAL][TRAINER_PBL_LUIS] =
    {
#line 2837
        .trainerName = _("Luis"),
#line 2838
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 2839
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 2840
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2842
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2841
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2844
            .species = SPECIES_CHARCADET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2847
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2845
            .ability = ABILITY_FLASH_FIRE,
#line 2846
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2848
                MOVE_NIGHT_SHADE,
                MOVE_INCINERATE,
                MOVE_WILL_O_WISP,
                MOVE_FLAME_CHARGE,
            },
            },
            {
#line 2853
            .species = SPECIES_CAPSAKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2856
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2854
            .ability = ABILITY_CHLOROPHYLL,
#line 2855
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2857
                MOVE_LEECH_SEED,
                MOVE_RAZOR_LEAF,
                MOVE_WORRY_SEED,
                MOVE_HEADBUTT,
            },
            },
            {
#line 2862
            .species = SPECIES_WIMPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2865
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2863
            .ability = ABILITY_WIMP_OUT,
#line 2864
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2866
                MOVE_STRUGGLE_BUG,
                MOVE_SAND_ATTACK,
                MOVE_HARDEN,
                MOVE_AQUA_JET,
            },
            },
            {
#line 2871
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2874
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2872
            .ability = ABILITY_LEVITATE,
#line 2873
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2875
                MOVE_TACKLE,
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_CHARGE_BEAM,
            },
            },
            {
#line 2880
            .species = SPECIES_CETODDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2883
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2881
            .ability = ABILITY_THICK_FAT,
#line 2882
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2884
                MOVE_YAWN,
                MOVE_ICE_SHARD,
                MOVE_ENTRAINMENT,
                MOVE_FLAIL,
            },
            },
            {
#line 2889
            .species = SPECIES_TOXEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2892
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2890
            .ability = ABILITY_STATIC,
#line 2891
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2893
                MOVE_GROWL,
                MOVE_ACID,
                MOVE_NUZZLE,
                MOVE_TEARFUL_LOOK,
            },
            },
        },
    },
#line 2898
    [DIFFICULTY_NORMAL][TRAINER_PBL_ARI] =
    {
#line 2899
        .trainerName = _("Ari"),
#line 2900
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 2901
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2902
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2904
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2903
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2906
            .species = SPECIES_TANDEMAUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2909
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2907
            .ability = ABILITY_PICKUP,
#line 2908
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2910
                MOVE_SUPER_FANG,
            },
            },
            {
#line 2912
            .species = SPECIES_TADBULB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2915
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2913
            .ability = ABILITY_STATIC,
#line 2914
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2916
                MOVE_PARABOLIC_CHARGE,
            },
            },
            {
#line 2918
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2921
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2919
            .ability = ABILITY_RUN_AWAY,
#line 2920
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2922
                MOVE_DOUBLE_HIT,
            },
            },
        },
    },
#line 2924
    [DIFFICULTY_NORMAL][TRAINER_PBL_BERTHA] =
    {
#line 2925
        .trainerName = _("Bertha"),
#line 2926
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 2927
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 2928
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2930
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2929
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2932
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2935
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2933
            .ability = ABILITY_STATIC,
#line 2934
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2936
                MOVE_MUD_SHOT,
                MOVE_SPARK,
            },
            },
        },
    },
#line 2939
    [DIFFICULTY_NORMAL][TRAINER_PBL_CASSANDRA] =
    {
#line 2940
        .trainerName = _("Cassandra"),
#line 2941
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 2942
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 2943
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 2945
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2944
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2947
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2950
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2948
            .ability = ABILITY_INTIMIDATE,
#line 2949
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2951
                MOVE_PLUCK,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 2954
    [DIFFICULTY_NORMAL][TRAINER_PBL_DOMINIC] =
    {
#line 2955
        .trainerName = _("Dominic"),
#line 2956
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 2957
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 2958
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 2960
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2959
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2962
            .species = SPECIES_CARNIVINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2965
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2963
            .ability = ABILITY_LEVITATE,
#line 2964
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2966
                MOVE_LEAF_TORNADO,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 2969
    [DIFFICULTY_NORMAL][TRAINER_PBL_ERICA] =
    {
#line 2970
        .trainerName = _("Erica"),
#line 2971
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 2972
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 2973
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2975
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2974
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2977
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2980
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2978
            .ability = ABILITY_GUTS,
#line 2979
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2981
                MOVE_RETALIATE,
                MOVE_REVENGE,
            },
            },
            {
#line 2984
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2987
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2985
            .ability = ABILITY_STURDY,
#line 2986
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2988
                MOVE_RETALIATE,
                MOVE_LOW_SWEEP,
            },
            },
        },
    },
#line 2991
    [DIFFICULTY_NORMAL][TRAINER_PBL_ARI_CHALLENGE] =
    {
#line 2992
        .trainerName = _("Ari"),
#line 2993
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 2994
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2995
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2997
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2996
        .aiFlags = AI_FLAG_CHALLENGE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2999
            .species = SPECIES_TANDEMAUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2999
            .heldItem = ITEM_ORAN_BERRY,
#line 3002
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3000
            .ability = ABILITY_PICKUP,
#line 3001
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3003
                MOVE_DOUBLE_HIT,
                MOVE_SUPER_FANG,
            },
            },
            {
#line 3006
            .species = SPECIES_TADBULB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3006
            .heldItem = ITEM_ORAN_BERRY,
#line 3009
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3007
            .ability = ABILITY_STATIC,
#line 3008
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3010
                MOVE_PARABOLIC_CHARGE,
                MOVE_CHARGE_BEAM,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3014
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3014
            .heldItem = ITEM_ORAN_BERRY,
#line 3017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3015
            .ability = ABILITY_RUN_AWAY,
#line 3016
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3018
                MOVE_DOUBLE_HIT,
                MOVE_PLUCK,
                MOVE_QUICK_ATTACK,
                MOVE_PURSUIT,
            },
            },
        },
    },
#line 3023
    [DIFFICULTY_NORMAL][TRAINER_PBL_BERTHA_CHALLENGE] =
    {
#line 3024
        .trainerName = _("Bertha"),
#line 3025
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3026
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 3027
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3029
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3028
        .aiFlags = AI_FLAG_CHALLENGE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3031
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3031
            .heldItem = ITEM_ORAN_BERRY,
#line 3034
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3032
            .ability = ABILITY_STATIC,
#line 3033
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3035
                MOVE_SPARK,
                MOVE_MUD_SHOT,
                MOVE_YAWN,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 3040
    [DIFFICULTY_NORMAL][TRAINER_PBL_CASSANDRA_CHALLENGE] =
    {
#line 3041
        .trainerName = _("Cassandra"),
#line 3042
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3043
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3044
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3046
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3045
        .aiFlags = AI_FLAG_CHALLENGE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3048
            .species = SPECIES_SQUAWKABILLY_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3048
            .heldItem = ITEM_SITRUS_BERRY,
#line 3051
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3049
            .ability = ABILITY_INTIMIDATE,
#line 3050
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3052
                MOVE_PLUCK,
                MOVE_QUICK_ATTACK,
                MOVE_THIEF,
                MOVE_TAUNT,
            },
            },
        },
    },
#line 3057
    [DIFFICULTY_NORMAL][TRAINER_PBL_DOMINIC_CHALLENGE] =
    {
#line 3058
        .trainerName = _("Dominic"),
#line 3059
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3060
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3061
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3063
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3062
        .aiFlags = AI_FLAG_CHALLENGE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3065
            .species = SPECIES_CARNIVINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3065
            .heldItem = ITEM_SITRUS_BERRY,
#line 3068
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3066
            .ability = ABILITY_LEVITATE,
#line 3067
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3069
                MOVE_LEAF_TORNADO,
                MOVE_LEECH_SEED,
                MOVE_TRAILBLAZE,
                MOVE_SYNTHESIS,
            },
            },
        },
    },
#line 3074
    [DIFFICULTY_NORMAL][TRAINER_PBL_ERICA_CHALLENGE] =
    {
#line 3075
        .trainerName = _("Erica"),
#line 3076
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3077
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3078
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3080
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3079
        .aiFlags = AI_FLAG_CHALLENGE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3082
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3082
            .heldItem = ITEM_SITRUS_BERRY,
#line 3085
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3083
            .ability = ABILITY_STURDY,
#line 3084
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3086
                MOVE_RETALIATE,
                MOVE_LOW_SWEEP,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3091
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3091
            .heldItem = ITEM_SITRUS_BERRY,
#line 3094
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3092
            .ability = ABILITY_GUTS,
#line 3093
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3095
                MOVE_RETALIATE,
                MOVE_REVENGE,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 3100
    [DIFFICULTY_NORMAL][TRAINER_PBL_ALANA] =
    {
#line 3101
        .trainerName = _("Alana"),
#line 3102
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 3103
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 3104
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3106
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3105
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3108
            .species = SPECIES_TINKATINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3111
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3109
            .ability = ABILITY_MOLD_BREAKER,
#line 3110
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3112
                MOVE_METAL_CLAW,
                MOVE_COVET,
                MOVE_SWEET_KISS,
                MOVE_SLAM,
            },
            },
            {
#line 3117
            .species = SPECIES_HELIOPTILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3120
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3118
            .ability = ABILITY_SAND_VEIL,
#line 3119
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3121
                MOVE_THUNDER_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_RAZOR_WIND,
                MOVE_PARABOLIC_CHARGE,
            },
            },
            {
#line 3126
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3129
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3127
            .ability = ABILITY_HUSTLE,
#line 3128
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3130
                MOVE_INCINERATE,
                MOVE_FLAME_WHEEL,
                MOVE_HEADBUTT,
                MOVE_FIRE_FANG,
            },
            },
            {
#line 3135
            .species = SPECIES_TOEDSCOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3136
            .ability = ABILITY_MYCELIUM_MIGHT,
#line 3137
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3139
                MOVE_STUN_SPORE,
                MOVE_MEGA_DRAIN,
                MOVE_LEECH_SEED,
                MOVE_MUD_SHOT,
            },
            },
        },
    },
#line 3144
    [DIFFICULTY_NORMAL][TRAINER_PBL_JACOB] =
    {
#line 3145
        .trainerName = _("Jacob"),
#line 3146
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 3147
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 3148
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3150
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3149
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3152
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3155
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3153
            .ability = ABILITY_SHEER_FORCE,
#line 3154
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3156
                MOVE_AERIAL_ACE,
                MOVE_SCARY_FACE,
                MOVE_ROOST,
                MOVE_SKY_DROP,
            },
            },
            {
#line 3161
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3164
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3162
            .ability = ABILITY_NATURAL_CURE,
#line 3163
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3165
                MOVE_ROUND,
                MOVE_HAZE,
                MOVE_FEATHER_DANCE,
                MOVE_DRAGON_BREATH,
            },
            },
            {
#line 3170
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3173
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3171
            .ability = ABILITY_SUPER_LUCK,
#line 3172
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3174
                MOVE_NIGHT_SHADE,
                MOVE_ASSURANCE,
                MOVE_AIR_CUTTER,
                MOVE_WHIRLWIND,
            },
            },
            {
#line 3179
            .species = SPECIES_TRUMBEAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3182
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3180
            .ability = ABILITY_SKILL_LINK,
#line 3181
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3183
                MOVE_FURY_ATTACK,
                MOVE_PLUCK,
                MOVE_ROOST,
                MOVE_SCREECH,
            },
            },
        },
    },
#line 3188
    [DIFFICULTY_NORMAL][TRAINER_PBL_DEWEY] =
    {
#line 3189
        .trainerName = _("Dewey"),
#line 3190
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3191
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 3192
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3194
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3193
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3196
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3199
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3197
            .ability = ABILITY_WATER_ABSORB,
#line 3198
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3200
                MOVE_PIN_MISSILE,
                MOVE_PAYBACK,
                MOVE_GRASS_WHISTLE,
                MOVE_NEEDLE_ARM,
            },
            },
            {
#line 3205
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3208
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3206
            .ability = ABILITY_INTIMIDATE,
#line 3207
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3209
                MOVE_FEINT_ATTACK,
                MOVE_BRICK_BREAK,
                MOVE_TORMENT,
                MOVE_SWAGGER,
            },
            },
            {
#line 3214
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3217
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3215
            .ability = ABILITY_HYPER_CUTTER,
#line 3216
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3218
                MOVE_FEINT_ATTACK,
                MOVE_BULLDOZE,
                MOVE_FLAIL,
                MOVE_LASER_FOCUS,
            },
            },
            {
#line 3223
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3224
            .ability = ABILITY_STURDY,
#line 3225
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3227
                MOVE_BUG_BITE,
                MOVE_SLASH,
                MOVE_KNOCK_OFF,
                MOVE_ROCK_BLAST,
            },
            },
        },
    },
#line 3232
    [DIFFICULTY_NORMAL][TRAINER_PBL_ERNEST] =
    {
#line 3233
        .trainerName = _("Ernest"),
#line 3234
        .trainerClass = TRAINER_CLASS_HIKER,
#line 3235
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 3236
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3238
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3237
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3240
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3243
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3241
            .ability = ABILITY_SAND_FORCE,
#line 3242
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3244
                MOVE_FURY_SWIPES,
                MOVE_METAL_CLAW,
                MOVE_SLASH,
                MOVE_DIG,
            },
            },
            {
#line 3249
            .species = SPECIES_CUFANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3252
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3250
            .ability = ABILITY_SHEER_FORCE,
#line 3251
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3253
                MOVE_BULLDOZE,
                MOVE_SLAM,
                MOVE_DIG,
                MOVE_WHIRLWIND,
            },
            },
            {
#line 3258
            .species = SPECIES_SILICOBRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3261
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3259
            .ability = ABILITY_SHED_SKIN,
#line 3260
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3262
                MOVE_SAND_TOMB,
                MOVE_HEADBUTT,
                MOVE_BULLDOZE,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 3267
            .species = SPECIES_SANDYGAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3270
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3268
            .ability = ABILITY_WATER_COMPACTION,
#line 3269
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3271
                MOVE_HYPNOSIS,
                MOVE_MEGA_DRAIN,
                MOVE_BULLDOZE,
                MOVE_ANCIENT_POWER,
            },
            },
        },
    },
#line 3276
    [DIFFICULTY_NORMAL][TRAINER_PBL_KYLE] =
    {
#line 3277
        .trainerName = _("Kyle"),
#line 3278
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 3279
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 3280
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3282
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3281
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3284
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3287
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3285
            .ability = ABILITY_GUTS,
#line 3286
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3288
                MOVE_SMACK_DOWN,
                MOVE_SCREECH,
                MOVE_PAYBACK,
                MOVE_CHIP_AWAY,
            },
            },
            {
#line 3293
            .species = SPECIES_RIOLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3296
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3294
            .ability = ABILITY_STEADFAST,
#line 3295
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3297
                MOVE_FORCE_PALM,
                MOVE_COUNTER,
                MOVE_BULLET_PUNCH,
                MOVE_VACUUM_WAVE,
            },
            },
            {
#line 3302
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3305
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3303
            .ability = ABILITY_MOLD_BREAKER,
#line 3304
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3306
                MOVE_TAUNT,
                MOVE_BREAKING_SWIPE,
                MOVE_FOCUS_ENERGY,
                MOVE_SLASH,
            },
            },
            {
#line 3311
            .species = SPECIES_LARVESTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3314
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3312
            .ability = ABILITY_FLAME_BODY,
#line 3313
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3315
                MOVE_ABSORB,
                MOVE_FLAME_CHARGE,
                MOVE_STRUGGLE_BUG,
                MOVE_FLAME_WHEEL,
            },
            },
        },
    },
#line 3320
    [DIFFICULTY_NORMAL][TRAINER_PBL_ELIAS] =
    {
#line 3321
        .trainerName = _("Elias"),
#line 3322
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 3323
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 3324
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3326
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3325
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3328
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3331
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3329
            .ability = ABILITY_HUSTLE,
#line 3330
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3332
                MOVE_DRAGON_BREATH,
                MOVE_BITE,
                MOVE_HEADBUTT,
                MOVE_SCREECH,
            },
            },
            {
#line 3337
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3340
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3338
            .ability = ABILITY_ROCK_HEAD,
#line 3339
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3341
                MOVE_HEADBUTT,
                MOVE_DRAGON_BREATH,
                MOVE_SCARY_FACE,
                MOVE_FIRE_FANG,
            },
            },
            {
#line 3346
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3349
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3347
            .ability = ABILITY_SAND_VEIL,
#line 3348
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3350
                MOVE_BITE,
                MOVE_BULLDOZE,
                MOVE_TAKE_DOWN,
                MOVE_SCARY_FACE,
            },
            },
            {
#line 3355
            .species = SPECIES_JANGMO_O,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3358
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3356
            .ability = ABILITY_SOUNDPROOF,
#line 3357
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3359
                MOVE_SCARY_FACE,
                MOVE_HEADBUTT,
                MOVE_SCREECH,
                MOVE_DRAGON_TAIL,
            },
            },
        },
    },
#line 3364
    [DIFFICULTY_NORMAL][TRAINER_PBL_PEARLIE] =
    {
#line 3365
        .trainerName = _("Pearlie"),
#line 3366
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 3367
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 3368
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3370
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3369
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3372
            .species = SPECIES_PASSIMIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3375
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3373
            .ability = ABILITY_RECEIVER,
#line 3374
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3376
                MOVE_FEINT,
                MOVE_VITAL_THROW,
                MOVE_SCARY_FACE,
                MOVE_TAKE_DOWN,
            },
            },
        },
    },
#line 3381
    [DIFFICULTY_NORMAL][TRAINER_PBL_SUSAN] =
    {
#line 3382
        .trainerName = _("Susan"),
#line 3383
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 3384
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender =
#line 3385
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3387
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3386
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3389
            .species = SPECIES_ORANGURU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3392
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3390
            .ability = ABILITY_SYMBIOSIS,
#line 3391
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3393
                MOVE_PSYCH_UP,
                MOVE_EXTRASENSORY,
                MOVE_INSTRUCT,
                MOVE_AFTER_YOU,
            },
            },
        },
    },
#line 3398
    [DIFFICULTY_NORMAL][TRAINER_PBL_CONRAD] =
    {
#line 3399
        .trainerName = _("Ernest"),
#line 3400
        .trainerClass = TRAINER_CLASS_HIKER,
#line 3401
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 3402
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3404
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3403
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3406
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3409
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3407
            .ability = ABILITY_STURDY,
#line 3408
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3410
                MOVE_METAL_SOUND,
                MOVE_METAL_CLAW,
                MOVE_ROCK_TOMB,
                MOVE_TAKE_DOWN,
            },
            },
            {
#line 3415
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3418
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3416
            .ability = ABILITY_SAND_FORCE,
#line 3417
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3419
                MOVE_SAND_TOMB,
                MOVE_DIG,
                MOVE_TAKE_DOWN,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 3424
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3427
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3425
            .ability = ABILITY_INTIMIDATE,
#line 3426
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3428
                MOVE_SCARY_FACE,
                MOVE_DIG,
                MOVE_ASSURANCE,
                MOVE_ROCK_CLIMB,
            },
            },
            {
#line 3433
            .species = SPECIES_RHYHORN,
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
                MOVE_HORN_ATTACK,
                MOVE_SMACK_DOWN,
                MOVE_BULLDOZE,
                MOVE_TAKE_DOWN,
            },
            },
        },
    },
#line 3442
    [DIFFICULTY_NORMAL][TRAINER_PBL_BRETT] =
    {
#line 3443
        .trainerName = _("Brett"),
#line 3444
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3445
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3446
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3448
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3447
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3450
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3453
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3451
            .ability = ABILITY_LIQUID_OOZE,
#line 3452
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3454
                MOVE_ACID_SPRAY,
                MOVE_TICKLE,
                MOVE_HAZE,
                MOVE_BRINE,
            },
            },
            {
#line 3459
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3462
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3460
            .ability = ABILITY_VOLT_ABSORB,
#line 3461
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3463
                MOVE_CONFUSE_RAY,
                MOVE_BUBBLE_BEAM,
                MOVE_THUNDER_WAVE,
                MOVE_SHOCK_WAVE,
            },
            },
            {
#line 3468
            .species = SPECIES_BINACLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3471
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3469
            .ability = ABILITY_TOUGH_CLAWS,
#line 3470
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3472
                MOVE_FURY_CUTTER,
                MOVE_ANCIENT_POWER,
                MOVE_RAZOR_SHELL,
                MOVE_SLASH,
            },
            },
            {
#line 3477
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3480
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3478
            .ability = ABILITY_HYPER_CUTTER,
#line 3479
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3481
                MOVE_AQUA_JET,
                MOVE_CHIP_AWAY,
                MOVE_BUBBLE_BEAM,
                MOVE_RAZOR_SHELL,
            },
            },
        },
    },
#line 3486
    [DIFFICULTY_NORMAL][TRAINER_PBL_ADAMINA_LEVIATHAN_9] =
    {
#line 3487
        .trainerName = _("Adamina"),
#line 3488
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 3489
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 3490
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3492
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3491
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3493
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3495
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3495
            .heldItem = ITEM_HARD_STONE,
#line 3498
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3496
            .ability = ABILITY_ANGER_SHELL,
#line 3497
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3499
                MOVE_ROCK_TOMB,
                MOVE_BULLDOZE,
                MOVE_KNOCK_OFF,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 3504
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3504
            .heldItem = ITEM_BLACK_GLASSES,
#line 3507
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3505
            .ability = ABILITY_OVERCOAT,
#line 3506
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3508
                MOVE_PLUCK,
                MOVE_FEINT_ATTACK,
                MOVE_ROOST,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3513
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3513
            .heldItem = ITEM_MIRACLE_SEED,
#line 3516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3514
            .ability = ABILITY_SAND_RUSH,
#line 3515
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3517
                MOVE_MEGA_DRAIN,
                MOVE_PIN_MISSILE,
                MOVE_BOUNCE,
                MOVE_GROWTH,
            },
            },
            {
#line 3522
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3522
            .heldItem = ITEM_SITRUS_BERRY,
#line 3525
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3523
            .ability = ABILITY_MAGIC_GUARD,
#line 3524
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3526
                MOVE_PSYBEAM,
                MOVE_AIR_CUTTER,
                MOVE_ANCIENT_POWER,
                MOVE_ROOST,
            },
            },
        },
    },
#line 3531
    [DIFFICULTY_NORMAL][TRAINER_PBL_ADAMINA_LEVIATHAN_9_CHALLENGE] =
    {
#line 3532
        .trainerName = _("Adamina"),
#line 3533
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 3534
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 3535
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 3537
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3536
        .aiFlags = AI_FLAG_CHALLENGE,
#line 3538
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3540
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3540
            .heldItem = ITEM_HARD_STONE,
#line 3543
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3541
            .ability = ABILITY_ANGER_SHELL,
#line 3542
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3544
                MOVE_ROCK_TOMB,
                MOVE_BULLDOZE,
                MOVE_KNOCK_OFF,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 3549
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3549
            .heldItem = ITEM_BLACK_GLASSES,
#line 3552
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3550
            .ability = ABILITY_OVERCOAT,
#line 3551
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3553
                MOVE_PLUCK,
                MOVE_FEINT_ATTACK,
                MOVE_ROOST,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3558
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3558
            .heldItem = ITEM_MIRACLE_SEED,
#line 3561
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3559
            .ability = ABILITY_SAND_RUSH,
#line 3560
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3562
                MOVE_MEGA_DRAIN,
                MOVE_PIN_MISSILE,
                MOVE_BOUNCE,
                MOVE_GROWTH,
            },
            },
            {
#line 3567
            .species = SPECIES_BRAIXEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3567
            .heldItem = ITEM_CHARCOAL,
#line 3570
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3568
            .ability = ABILITY_MAGIC_GUARD,
#line 3569
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3571
                MOVE_INCINERATE,
                MOVE_PSYBEAM,
                MOVE_SHOCK_WAVE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 3576
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3576
            .heldItem = ITEM_SITRUS_BERRY,
#line 3579
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3577
            .ability = ABILITY_MAGIC_GUARD,
#line 3578
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3580
                MOVE_PSYBEAM,
                MOVE_AIR_CUTTER,
                MOVE_ANCIENT_POWER,
                MOVE_ROOST,
            },
            },
        },
    },
#line 3585
    [DIFFICULTY_NORMAL][TRAINER_PBL_JEANETTE] =
    {
#line 3586
        .trainerName = _("Jeanette"),
#line 3587
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 3588
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 3589
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3591
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3590
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3593
            .species = SPECIES_GASTLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3596
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3594
            .ability = ABILITY_LEVITATE,
#line 3595
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3597
                MOVE_CLEAR_SMOG,
                MOVE_HEX,
                MOVE_HAZE,
                MOVE_SCARY_FACE,
            },
            },
            {
#line 3602
            .species = SPECIES_FRILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3605
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3603
            .ability = ABILITY_CURSED_BODY,
#line 3604
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3606
                MOVE_BUBBLE_BEAM,
                MOVE_WHIRLPOOL,
                MOVE_HEX,
                MOVE_RECOVER,
            },
            },
            {
#line 3611
            .species = SPECIES_HONEDGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3614
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3612
            .ability = ABILITY_NO_GUARD,
#line 3613
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3615
                MOVE_SHADOW_SNEAK,
                MOVE_METAL_SOUND,
                MOVE_RETALIATE,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 3620
            .species = SPECIES_GREAVARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3623
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3621
            .ability = ABILITY_FLUFFY,
#line 3622
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3624
                MOVE_SHADOW_SNEAK,
                MOVE_YAWN,
                MOVE_HEADBUTT,
                MOVE_DIG,
            },
            },
        },
    },
#line 3629
    [DIFFICULTY_NORMAL][TRAINER_PBL_EMMA_AND_LEO] =
    {
#line 3630
        .trainerName = _("Emma&Leo"),
#line 3631
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 3632
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 3633
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3635
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3634
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3637
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3640
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3638
            .ability = ABILITY_PRANKSTER,
#line 3639
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3641
                MOVE_SHOCK_WAVE,
                MOVE_ENCORE,
                MOVE_MOONLIGHT,
                MOVE_SIGNAL_BEAM,
            },
            },
            {
#line 3646
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3649
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3647
            .ability = ABILITY_PRANKSTER,
#line 3648
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3650
                MOVE_COVET,
                MOVE_ENCORE,
                MOVE_MOONLIGHT,
                MOVE_SIGNAL_BEAM,
            },
            },
            {
#line 3655
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3656
            .ability = ABILITY_EARLY_BIRD,
#line 3657
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3659
                MOVE_FEINT_ATTACK,
                MOVE_DEFOG,
                MOVE_MEGA_DRAIN,
                MOVE_BEAT_UP,
            },
            },
            {
#line 3664
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3667
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3665
            .ability = ABILITY_RAIN_DISH,
#line 3666
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3668
                MOVE_BUBBLE_BEAM,
                MOVE_MEGA_DRAIN,
                MOVE_TICKLE,
                MOVE_SYNTHESIS,
            },
            },
        },
    },
#line 3673
    [DIFFICULTY_NORMAL][TRAINER_PBL_JOEL] =
    {
#line 3674
        .trainerName = _("Joel"),
#line 3675
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3676
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3677
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3679
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3678
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3681
            .species = SPECIES_BRONZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3684
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3682
            .ability = ABILITY_LEVITATE,
#line 3683
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3685
                MOVE_IMPRISON,
                MOVE_FEINT_ATTACK,
                MOVE_METAL_SOUND,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 3690
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3693
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3691
            .ability = ABILITY_IRON_FIST,
#line 3692
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3694
                MOVE_MAGNITUDE,
                MOVE_CURSE,
                MOVE_SHADOW_PUNCH,
                MOVE_STOMPING_TANTRUM,
            },
            },
            {
#line 3699
            .species = SPECIES_POLTCHAGEIST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3702
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3700
            .ability = ABILITY_HOSPITALITY,
#line 3701
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3703
                MOVE_LIFE_DEW,
                MOVE_MEGA_DRAIN,
                MOVE_HEX,
                MOVE_FOUL_PLAY,
            },
            },
            {
#line 3708
            .species = SPECIES_INKAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3711
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3709
            .ability = ABILITY_CONTRARY,
#line 3710
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3712
                MOVE_SLASH,
                MOVE_PLUCK,
                MOVE_PSYBEAM,
                MOVE_SWITCHEROO,
            },
            },
        },
    },
#line 3717
    [DIFFICULTY_NORMAL][TRAINER_PBL_MARION] =
    {
#line 3718
        .trainerName = _("Marion"),
#line 3719
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3720
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3721
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3723
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3722
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3725
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3728
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3726
            .ability = ABILITY_LEVITATE,
#line 3727
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3729
                MOVE_NIGHT_SHADE,
                MOVE_CONFUSE_RAY,
                MOVE_CURSE,
                MOVE_HEX,
            },
            },
            {
#line 3734
            .species = SPECIES_SINISTEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3737
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3735
            .ability = ABILITY_CURSED_BODY,
#line 3736
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3738
                MOVE_NIGHT_SHADE,
                MOVE_SUCKER_PUNCH,
                MOVE_HEX,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 3743
            .species = SPECIES_ELGYEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3744
            .ability = ABILITY_SYNCHRONIZE,
#line 3745
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3747
                MOVE_PSYBEAM,
                MOVE_TELEPORT,
                MOVE_COSMIC_POWER,
                MOVE_RECOVER,
            },
            },
            {
#line 3752
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3755
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3753
            .ability = ABILITY_FLAME_BODY,
#line 3754
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3756
                MOVE_IMPRISON,
                MOVE_HEX,
                MOVE_FLAME_BURST,
                MOVE_WILL_O_WISP,
            },
            },
        },
    },
#line 3761
    [DIFFICULTY_NORMAL][TRAINER_PBL_REGINA] =
    {
#line 3762
        .trainerName = _("Regina"),
#line 3763
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 3764
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 3765
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3767
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3766
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3769
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3772
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3770
            .ability = ABILITY_LEVITATE,
#line 3771
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3773
                MOVE_CURSE,
                MOVE_HEX,
                MOVE_PSYBEAM,
                MOVE_OMINOUS_WIND,
            },
            },
            {
#line 3778
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3781
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3779
            .ability = ABILITY_CURSED_BODY,
#line 3780
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3782
                MOVE_SHADOW_SNEAK,
                MOVE_SNATCH,
                MOVE_OMINOUS_WIND,
                MOVE_TRICK,
            },
            },
            {
#line 3787
            .species = SPECIES_GIMMIGHOUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3790
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3788
            .ability = ABILITY_RATTLED,
#line 3789
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3791
                MOVE_ASTONISH,
                MOVE_TACKLE,
            },
            },
            {
#line 3794
            .species = SPECIES_BRAMBLIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3797
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3795
            .ability = ABILITY_WIND_RIDER,
#line 3796
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3798
                MOVE_LEECH_SEED,
                MOVE_SHADOW_SNEAK,
                MOVE_MEGA_DRAIN,
                MOVE_HEX,
            },
            },
        },
    },
#line 3803
    [DIFFICULTY_NORMAL][TRAINER_PBL_NEWTON_LEVIATHAN_10] =
    {
#line 3804
        .trainerName = _("Newton"),
#line 3805
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 3806
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .encounterMusic_gender =
#line 3807
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3809
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3808
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3810
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3812
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3815
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3813
            .ability = ABILITY_FRIEND_GUARD,
#line 3814
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3816
                MOVE_GRAVITY,
                MOVE_DRAINING_KISS,
                MOVE_MOONLIGHT,
                MOVE_SING,
            },
            },
            {
#line 3821
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3824
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3822
            .ability = ABILITY_INTIMIDATE,
#line 3823
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3825
                MOVE_STOMP,
                MOVE_DOUBLE_KICK,
                MOVE_HYPNOSIS,
                MOVE_PSYSHIELD_BASH,
            },
            },
            {
#line 3830
            .species = SPECIES_STONJOURNER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3833
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3831
            .ability = ABILITY_POWER_SPOT,
#line 3832
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3834
                MOVE_GRAVITY,
                MOVE_ROCK_TOMB,
                MOVE_WIDE_GUARD,
                MOVE_MEGA_KICK,
            },
            },
            {
#line 3839
            .species = SPECIES_FLAPPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3839
            .heldItem = ITEM_SITRUS_BERRY,
#line 3842
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3840
            .ability = ABILITY_HUSTLE,
#line 3841
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3843
                MOVE_GRAV_APPLE,
                MOVE_ACROBATICS,
                MOVE_ROOST,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 3848
    [DIFFICULTY_NORMAL][TRAINER_PBL_NEWTON_LEVIATHAN_10_CHALLENGE] =
    {
#line 3849
        .trainerName = _("Newton"),
#line 3850
        .trainerClass = TRAINER_CLASS_SCIENTIST,
#line 3851
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .encounterMusic_gender =
#line 3852
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3854
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3853
        .aiFlags = AI_FLAG_CHALLENGE,
#line 3855
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3857
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3857
            .heldItem = ITEM_EVIOLITE,
#line 3860
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3858
            .ability = ABILITY_FRIEND_GUARD,
#line 3859
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3861
                MOVE_GRAVITY,
                MOVE_DRAINING_KISS,
                MOVE_MOONLIGHT,
                MOVE_SING,
            },
            },
            {
#line 3866
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3866
            .heldItem = ITEM_EVIOLITE,
#line 3869
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3867
            .ability = ABILITY_INTIMIDATE,
#line 3868
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3870
                MOVE_STOMP,
                MOVE_DOUBLE_KICK,
                MOVE_HYPNOSIS,
                MOVE_PSYSHIELD_BASH,
            },
            },
            {
#line 3875
            .species = SPECIES_STONJOURNER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3875
            .heldItem = ITEM_SITRUS_BERRY,
#line 3878
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3876
            .ability = ABILITY_POWER_SPOT,
#line 3877
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3879
                MOVE_GRAVITY,
                MOVE_ROCK_TOMB,
                MOVE_WIDE_GUARD,
                MOVE_MEGA_KICK,
            },
            },
            {
#line 3884
            .species = SPECIES_FLAPPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3884
            .heldItem = ITEM_SITRUS_BERRY,
#line 3888
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3885
            .ability = ABILITY_HUSTLE,
#line 3887
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 3886
            .teraType = TYPE_DRAGON,
            .moves = {
#line 3889
                MOVE_GRAV_APPLE,
                MOVE_ACROBATICS,
                MOVE_ROOST,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 3894
    [DIFFICULTY_NORMAL][TRAINER_PBL_ESSENCE] =
    {
#line 3895
        .trainerName = _("Essence"),
#line 3896
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 3897
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 3898
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3900
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3899
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3902
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3904
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3903
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3906
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3908
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3907
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3910
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3912
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3911
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3914
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3916
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3915
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3918
    [DIFFICULTY_NORMAL][TRAINER_PBL_DOLORES] =
    {
#line 3919
        .trainerName = _("Dolores"),
#line 3920
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 3921
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 3922
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3924
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3923
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3926
            .species = SPECIES_SNOVER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3928
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3927
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3930
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3932
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3931
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3934
            .species = SPECIES_CUBCHOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3936
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3935
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3938
            .species = SPECIES_SNORUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3940
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3939
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3942
    [DIFFICULTY_NORMAL][TRAINER_PBL_GENIE] =
    {
#line 3943
        .trainerName = _("Genie"),
#line 3944
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3945
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3946
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3948
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3947
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3950
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3952
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3951
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3954
            .species = SPECIES_VAROOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3956
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3955
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3958
            .species = SPECIES_PAWMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3960
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3959
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3962
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3964
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3963
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3966
    [DIFFICULTY_NORMAL][TRAINER_PBL_ABIGAIL] =
    {
#line 3967
        .trainerName = _("Abigail"),
#line 3968
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3969
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3970
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3972
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3971
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3974
            .species = SPECIES_GLIMMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3976
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3975
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3978
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3980
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3979
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3982
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3984
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3983
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3986
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3988
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3987
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3990
    [DIFFICULTY_NORMAL][TRAINER_PBL_FEDERICO] =
    {
#line 3991
        .trainerName = _("Federico"),
#line 3992
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 3993
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 3994
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3996
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3995
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3998
            .species = SPECIES_CLOBBOPUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4000
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3999
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4002
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4004
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4003
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4006
            .species = SPECIES_MAREANIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4008
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4007
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4010
            .species = SPECIES_MANTYKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4012
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4011
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4015
    [DIFFICULTY_NORMAL][TRAINER_PBL_ROMULUS] =
    {
#line 4016
        .trainerName = _("Romulus"),
#line 4017
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 4018
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 4019
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4021
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4020
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4023
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4025
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4024
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4027
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4029
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4028
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4031
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4033
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4032
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4036
    [DIFFICULTY_NORMAL][TRAINER_PBL_JULIE] =
    {
#line 4037
        .trainerName = _("Julie"),
#line 4038
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 4039
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 4040
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4042
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4041
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4044
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4045
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4048
            .species = SPECIES_CLAUNCHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4050
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4049
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4052
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4054
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4053
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4056
    [DIFFICULTY_NORMAL][TRAINER_PBL_HILDA] =
    {
#line 4057
        .trainerName = _("Hilda"),
#line 4058
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4059
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4060
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4062
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4061
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4064
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4066
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4065
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4068
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4070
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4069
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4072
            .species = SPECIES_SKRELP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4074
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4073
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4076
            .species = SPECIES_FINIZEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4078
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4077
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4080
    [DIFFICULTY_NORMAL][TRAINER_PBL_TREVOR] =
    {
#line 4081
        .trainerName = _("Trevor"),
#line 4082
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 4083
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 4084
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4086
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4085
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4088
            .species = SPECIES_TOGEPI,
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
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4094
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4093
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4096
            .species = SPECIES_MUNCHLAX,
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
            .species = SPECIES_SMOOCHUM,
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
            .species = SPECIES_ELEKID,
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
            .species = SPECIES_MAGBY,
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_RUFUS] =
    {
#line 4113
        .trainerName = _("Rufus"),
#line 4114
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 4115
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 4116
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4118
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4117
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4120
            .species = SPECIES_FRIGIBAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4122
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4121
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4124
            .species = SPECIES_DREEPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4126
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4125
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4128
            .species = SPECIES_GOOMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4131
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4129
            .ability = ABILITY_SAP_SIPPER,
#line 4130
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4132
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_LIFE_DEW,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 4137
            .species = SPECIES_ZORUA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4139
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4138
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4141
    [DIFFICULTY_NORMAL][TRAINER_PBL_KINLEY] =
    {
#line 4142
        .trainerName = _("Kinley"),
#line 4143
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 4144
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 4145
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 4147
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4146
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4149
            .species = SPECIES_HERDIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4151
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4150
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4153
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4155
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4154
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4157
            .species = SPECIES_CROCONAW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4159
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4158
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4161
            .species = SPECIES_RABOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4163
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4162
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4165
            .species = SPECIES_FLORAGATO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4167
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4166
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4169
    [DIFFICULTY_NORMAL][TRAINER_PBL_REID] =
    {
#line 4170
        .trainerName = _("Reid"),
#line 4171
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 4172
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 4173
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4175
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4174
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4177
            .species = SPECIES_DOTTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4178
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4181
            .species = SPECIES_WHIRLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4183
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4182
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4185
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4187
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4186
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4189
    [DIFFICULTY_NORMAL][TRAINER_PBL_DECLAN_LEVIATHAN_11] =
    {
#line 4190
        .trainerName = _("Declan"),
#line 4191
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 4192
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 4193
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4195
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4194
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4196
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4198
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4200
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4199
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4202
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4204
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4203
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4206
            .species = SPECIES_RABSCA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4208
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4207
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4210
            .species = SPECIES_LURANTIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4212
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4211
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4214
    [DIFFICULTY_NORMAL][TRAINER_PBL_DECLAN_LEVIATHAN_11_CHALLENGE] =
    {
#line 4215
        .trainerName = _("Declan"),
#line 4216
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 4217
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 4218
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4220
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4219
        .aiFlags = AI_FLAG_CHALLENGE,
#line 4221
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4223
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4224
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4227
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4228
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4231
            .species = SPECIES_RABSCA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4233
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4232
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4235
            .species = SPECIES_LURANTIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4237
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4236
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4239
            .species = SPECIES_LOKIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4241
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4240
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4243
    [DIFFICULTY_NORMAL][TRAINER_PBL_VIOLET] =
    {
#line 4244
        .trainerName = _("STEVEN"),
#line 4245
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4246
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4248
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4250
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4252
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4251
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4254
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4256
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4255
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4258
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4260
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4259
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4262
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4264
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4263
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4266
    [DIFFICULTY_NORMAL][TRAINER_PBL_WANDA] =
    {
#line 4267
        .trainerName = _("STEVEN"),
#line 4268
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4269
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4271
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4273
            .species = SPECIES_TRANQUILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4275
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4274
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4277
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4279
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4278
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4281
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4283
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4282
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4285
            .species = SPECIES_WEEPINBELL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4287
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4286
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4289
    [DIFFICULTY_NORMAL][TRAINER_PBL_AMBER_AND_KIM] =
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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4296
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4297
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4300
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4301
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4304
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4306
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4305
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4308
            .species = SPECIES_DOLLIV,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4310
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4309
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4312
    [DIFFICULTY_NORMAL][TRAINER_PBL_JAN_AND_ERIN] =
    {
#line 4313
        .trainerName = _("STEVEN"),
#line 4314
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4315
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4317
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4319
            .species = SPECIES_FURFROU_STAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4321
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4320
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4323
            .species = SPECIES_FURFROU_HEART,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4325
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4324
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4327
            .species = SPECIES_FURFROU_DANDY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4329
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4328
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4331
            .species = SPECIES_FURFROU_DEBUTANTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4333
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4332
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4335
    [DIFFICULTY_NORMAL][TRAINER_PBL_STEVE] =
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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4342
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4344
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4343
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4346
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4348
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4347
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4350
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4352
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4351
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4354
            .species = SPECIES_NIDORINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4356
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4355
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4358
    [DIFFICULTY_NORMAL][TRAINER_PBL_GOULD] =
    {
#line 4359
        .trainerName = _("STEVEN"),
#line 4360
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4361
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4363
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4365
            .species = SPECIES_CRANIDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4367
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4366
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4369
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4371
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4370
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4373
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4375
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4374
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4377
            .species = SPECIES_ANORITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4379
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4378
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4381
            .species = SPECIES_ARCHEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4383
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4382
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4385
    [DIFFICULTY_NORMAL][TRAINER_PBL_MENDEL] =
    {
#line 4386
        .trainerName = _("STEVEN"),
#line 4387
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4388
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4390
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4392
            .species = SPECIES_OMANYTE,
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
            .species = SPECIES_KABUTO,
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
            .species = SPECIES_TYRUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4402
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4401
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4404
            .species = SPECIES_AMAURA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4405
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4408
            .species = SPECIES_TIRTOUGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4410
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4409
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4412
    [DIFFICULTY_NORMAL][TRAINER_PBL_DARWIN] =
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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4419
            .species = SPECIES_COMFEY,
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
            .species = SPECIES_KOMALA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4425
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4424
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4427
            .species = SPECIES_FLOETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4429
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4428
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4431
            .species = SPECIES_CHARJABUG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4433
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4432
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4435
    [DIFFICULTY_NORMAL][TRAINER_PBL_JENNY_LEVIATHAN_11] =
    {
#line 4436
        .trainerName = _("STEVEN"),
#line 4437
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4438
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4440
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4442
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4446
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4445
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4444
            .lvl = 42,
#line 4443
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4447
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4452
    [DIFFICULTY_NORMAL][TRAINER_PBL_JENNY_LEVIATHAN_11_CHALLENGE] =
    {
#line 4453
        .trainerName = _("STEVEN"),
#line 4454
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4455
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4457
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4459
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4463
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4462
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4461
            .lvl = 42,
#line 4460
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4464
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4469
    [DIFFICULTY_NORMAL][TRAINER_PBL_BART] =
    {
#line 4470
        .trainerName = _("STEVEN"),
#line 4471
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4472
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4474
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4476
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4478
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4477
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4480
            .species = SPECIES_LUNATONE,
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
            .species = SPECIES_TOGEDEMARU,
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
            .species = SPECIES_WISHIWASHI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4490
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4489
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4492
    [DIFFICULTY_NORMAL][TRAINER_PBL_NIGEL] =
    {
#line 4493
        .trainerName = _("STEVEN"),
#line 4494
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4495
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4497
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4499
            .species = SPECIES_CARKOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4501
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4500
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4503
            .species = SPECIES_KECLEON,
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
            .species = SPECIES_CARBINK,
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
            .species = SPECIES_BOLDORE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4513
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4512
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4515
    [DIFFICULTY_NORMAL][TRAINER_PBL_LOLA] =
    {
#line 4516
        .trainerName = _("STEVEN"),
#line 4517
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4518
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4520
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4522
            .species = SPECIES_CORVISQUIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4524
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4523
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4526
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4528
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4527
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4530
            .species = SPECIES_MARSHTOMP,
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
            .species = SPECIES_SERVINE,
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
            .species = SPECIES_MONFERNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4540
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4539
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4542
    [DIFFICULTY_NORMAL][TRAINER_PBL_CHARLIE] =
    {
#line 4543
        .trainerName = _("STEVEN"),
#line 4544
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4545
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4547
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4549
            .species = SPECIES_PIDGEOTTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4551
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4550
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4553
            .species = SPECIES_PIGNITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4555
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4554
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4557
            .species = SPECIES_QUAXWELL,
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
            .species = SPECIES_LOUDRED,
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
            .species = SPECIES_GROTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4566
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4569
    [DIFFICULTY_NORMAL][TRAINER_PBL_RANDOLPH] =
    {
#line 4570
        .trainerName = _("STEVEN"),
#line 4571
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4572
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4574
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4576
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4578
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4577
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4580
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4581
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4584
            .species = SPECIES_QUILAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4585
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4588
            .species = SPECIES_BRIONNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4590
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4589
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4592
            .species = SPECIES_IVYSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4594
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4593
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4596
    [DIFFICULTY_NORMAL][TRAINER_PBL_TODD] =
    {
#line 4597
        .trainerName = _("STEVEN"),
#line 4598
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4599
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4601
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4603
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4607
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4606
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4605
            .lvl = 42,
#line 4604
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4608
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4613
    [DIFFICULTY_NORMAL][TRAINER_PBL_RUSSELL] =
    {
#line 4614
        .trainerName = _("STEVEN"),
#line 4615
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4616
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4618
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4620
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4624
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4623
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4622
            .lvl = 42,
#line 4621
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4625
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4630
    [DIFFICULTY_NORMAL][TRAINER_PBL_OTIS] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4637
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4641
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4640
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4639
            .lvl = 42,
#line 4638
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4642
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4647
    [DIFFICULTY_NORMAL][TRAINER_PBL_MIGUEL_LEVIATHAN_12] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4654
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4658
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4657
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4656
            .lvl = 42,
#line 4655
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4659
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4664
    [DIFFICULTY_NORMAL][TRAINER_PBL_MIGUEL_LEVIATHAN_12_CHALLENGE] =
    {
#line 4665
        .trainerName = _("STEVEN"),
#line 4666
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4667
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4669
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4671
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4675
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4674
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4673
            .lvl = 42,
#line 4672
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4676
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4681
    [DIFFICULTY_NORMAL][TRAINER_PBL_MIRAGE_LEVIATHAN_13] =
    {
#line 4682
        .trainerName = _("STEVEN"),
#line 4683
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4684
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4686
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4688
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4692
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4691
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4690
            .lvl = 42,
#line 4689
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4693
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4698
    [DIFFICULTY_NORMAL][TRAINER_PBL_MIRAGE_LEVIATHAN_13_CHALLENGE] =
    {
#line 4699
        .trainerName = _("STEVEN"),
#line 4700
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4701
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4703
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4705
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4709
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4708
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4707
            .lvl = 42,
#line 4706
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4710
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4715
    [DIFFICULTY_NORMAL][TRAINER_PBL_IONA] =
    {
#line 4716
        .trainerName = _("STEVEN"),
#line 4717
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4718
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 4720
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4722
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4726
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4725
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4724
            .lvl = 42,
#line 4723
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4727
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4732
    [DIFFICULTY_NORMAL][TRAINER_PBL_BERKE] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_TANISHA] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_ROBERT] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_CHRIS] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_ANGUS] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_LILY_LEVIATHAN_14] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_LILY_LEVIATHAN_14_CHALLENGE] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_AXLE] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_RAFAEL] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_GEORGINA] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_MIA_LEVIATHAN_15] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_MIA_LEVIATHAN_15_CHALLENGE] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_DORIS] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_HOMER] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_JOHN] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_GLENN] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_JAY] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_TYLER] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_TERRENCE] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_MARTY] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_KARI] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_ABRAHAM] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_MELINDA] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_EMILIO] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_REX] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_LOUIS] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_LEROY] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_ELTON] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_WILLIE] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16_CHALLENGE] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_PIRATE_1] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_PIRATE_2] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_PIRATE_3] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_PIRATE_4] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_SHAWN] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_FERNANDO] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_KANE] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_KIRK] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_DALTON] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_LEE] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_BLANCHE] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_TROY] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_ABED] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_TROY_BRUTAL] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_ABED_BRUTAL] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_MIRAGE_LEVIATHAN_17] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_MIRAGE_LEVIATHAN_17_CHALLENGE] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_ANITA] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_DESIREE] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_HOWARD] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_ELOISE] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_ALLY_AND_EMMY] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_AMIR] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_GETHIN] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_BERNARD] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_ELLIE] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_RUSTY] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_CODY] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_LEWIS] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_CORNELIUS] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_INEZ_AND_EMMA] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_HELEN] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_WESLEY] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_ALFREDO] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_IAN] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_AUDREY] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_LEVIATHAN13] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_EDGARDO] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_JEAN] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_ROSE] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_JENNIFER] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_MATTHEW] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_KERRY] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_ANNIE] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_CHRISTI] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_SPENCER] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_HAYWOOD] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_MONROE] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_DAVID] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_DOMINIK] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_DOUGLAS] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_NADINE] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_SANDY] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_SHELDON] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_LEVIATHAN14] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_LEVIATHAN12_BRUTAL] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_LEVIATHAN13_BRUTAL] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_LEVIATHAN14_BRUTAL] =
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
    [DIFFICULTY_NORMAL][TRAINER_PBL_LEVIATHAN12] =
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
