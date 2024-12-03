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
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
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
            .evs = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
#line 92
            .ivs = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
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
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
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
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
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
            .species = SPECIES_FLETCHLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 119
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 116
            .ability = ABILITY_BIG_PECKS,
#line 117
            .lvl = 4,
#line 118
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 120
                MOVE_TACKLE,
                MOVE_GROWL,
            },
            },
            {
#line 123
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 127
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
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
    [TRAINER_PBL_MARIAM] =
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
        .doubleBattle = FALSE,
#line 137
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 139
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 141
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 145
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 142
            .ability = ABILITY_GLUTTONY,
#line 143
            .lvl = 5,
#line 144
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 146
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_SAND_ATTACK,
            },
            },
            {
#line 150
            .species = SPECIES_PIDOVE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 154
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 151
            .ability = ABILITY_BIG_PECKS,
#line 152
            .lvl = 5,
#line 153
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 155
                MOVE_QUICK_ATTACK,
                MOVE_GROWL,
                MOVE_LEER,
            },
            },
            {
#line 159
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 163
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 160
            .ability = ABILITY_CHLOROPHYLL,
#line 161
            .lvl = 5,
#line 162
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 164
                MOVE_TACKLE,
                MOVE_ABSORB,
            },
            },
        },
    },
#line 167
    [TRAINER_PBL_OSCAR] =
    {
#line 168
        .trainerName = _("Oscar"),
#line 169
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 170
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 171
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 173
        .doubleBattle = FALSE,
#line 172
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 174
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 176
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 180
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 177
            .ability = ABILITY_GUTS,
#line 178
            .lvl = 5,
#line 179
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 181
                MOVE_TACKLE,
                MOVE_TAIL_WHIP,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 185
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 188
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 186
            .ability = ABILITY_DAMP,
#line 187
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 189
                MOVE_SCRATCH,
                MOVE_TAIL_WHIP,
                MOVE_REFRESH,
                MOVE_WATER_GUN,
            },
            },
            {
#line 194
            .species = SPECIES_STARLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 198
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 195
            .ability = ABILITY_KEEN_EYE,
#line 196
            .lvl = 5,
#line 197
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 199
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 203
    [TRAINER_PBL_COREY_LEVIATHAN_1] =
    {
#line 204
        .trainerName = _("Corey"),
#line 205
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 206
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender = 
#line 207
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 209
        .doubleBattle = FALSE,
#line 208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 210
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 212
            .species = SPECIES_PANSAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 215
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 213
            .ability = ABILITY_GLUTTONY,
#line 214
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 216
                MOVE_LEAFAGE,
                MOVE_SCRATCH,
            },
            },
            {
#line 219
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 222
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 220
            .ability = ABILITY_GLUTTONY,
#line 221
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 223
                MOVE_EMBER,
                MOVE_SCRATCH,
            },
            },
            {
#line 226
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 229
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 227
            .ability = ABILITY_GLUTTONY,
#line 228
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 230
                MOVE_WATER_GUN,
                MOVE_SCRATCH,
            },
            },
        },
    },
#line 233
    [TRAINER_PBL_COREY_LEVIATHAN_1_BRUTAL] =
    {
#line 234
        .trainerName = _("Corey"),
#line 235
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 236
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender = 
#line 237
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 239
        .doubleBattle = FALSE,
#line 238
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 240
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 242
            .species = SPECIES_PANSAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 245
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 243
            .ability = ABILITY_OVERGROW,
#line 244
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 246
                MOVE_LEAFAGE,
                MOVE_SCRATCH,
            },
            },
            {
#line 249
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 252
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 250
            .ability = ABILITY_BLAZE,
#line 251
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 253
                MOVE_EMBER,
                MOVE_SCRATCH,
            },
            },
            {
#line 256
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 259
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 257
            .ability = ABILITY_TORRENT,
#line 258
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 260
                MOVE_WATER_GUN,
                MOVE_SCRATCH,
            },
            },
        },
    },
#line 263
    [TRAINER_PBL_POLLY] =
    {
#line 264
        .trainerName = _("Polly"),
#line 265
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 266
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender = 
#line 267
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 269
        .doubleBattle = FALSE,
#line 268
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 270
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 272
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 275
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 273
            .ability = ABILITY_KEEN_EYE,
#line 274
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 276
                MOVE_SCRATCH,
                MOVE_GROWL,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 280
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 283
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 281
            .ability = ABILITY_EARLY_BIRD,
#line 282
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 284
                MOVE_HARDEN,
                MOVE_ASTONISH,
                MOVE_BIDE,
                MOVE_ABSORB,
            },
            },
            {
#line 289
            .species = SPECIES_NIDORAN_F,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 292
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 290
            .ability = ABILITY_POISON_POINT,
#line 291
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 293
                MOVE_SCRATCH,
                MOVE_TAIL_WHIP,
                MOVE_POISON_STING,
                MOVE_DISABLE,
            },
            },
        },
    },
#line 298
    [TRAINER_PBL_JEREMIAH] =
    {
#line 299
        .trainerName = _("Jeremiah"),
#line 300
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 301
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 302
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 304
        .doubleBattle = FALSE,
#line 303
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 305
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 307
            .species = SPECIES_CATERPIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 310
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 308
            .ability = ABILITY_SHIELD_DUST,
#line 309
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 311
                MOVE_TACKLE,
                MOVE_STRING_SHOT,
                MOVE_BUG_BITE,
            },
            },
            {
#line 315
            .species = SPECIES_WEEDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 318
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 316
            .ability = ABILITY_SHIELD_DUST,
#line 317
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 319
                MOVE_POISON_STING,
                MOVE_STRING_SHOT,
                MOVE_BUG_BITE,
            },
            },
            {
#line 323
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 326
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 324
            .ability = ABILITY_SHIELD_DUST,
#line 325
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 327
                MOVE_TACKLE,
                MOVE_STRING_SHOT,
                MOVE_POISON_STING,
                MOVE_BUG_BITE,
            },
            },
            {
#line 332
            .species = SPECIES_SCATTERBUG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 335
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 333
            .ability = ABILITY_SHIELD_DUST,
#line 334
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 336
                MOVE_TACKLE,
                MOVE_STRING_SHOT,
                MOVE_STRUGGLE_BUG,
                MOVE_STUN_SPORE,
            },
            },
        },
    },
#line 341
    [TRAINER_PBL_JOSH] =
    {
#line 342
        .trainerName = _("Josh"),
#line 343
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 344
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 345
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 347
        .doubleBattle = FALSE,
#line 346
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 348
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 350
            .species = SPECIES_BLIPBUG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 353
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 351
            .ability = ABILITY_SWARM,
#line 352
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 354
                MOVE_STRUGGLE_BUG,
            },
            },
            {
#line 356
            .species = SPECIES_KRICKETOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 359
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 357
            .ability = ABILITY_SHED_SKIN,
#line 358
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 360
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_STRUGGLE_BUG,
                MOVE_BIDE,
            },
            },
            {
#line 365
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 368
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 366
            .ability = ABILITY_SWARM,
#line 367
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 369
                MOVE_POISON_STING,
                MOVE_STRING_SHOT,
                MOVE_NIGHT_SHADE,
                MOVE_BUG_BITE,
            },
            },
            {
#line 374
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 377
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 375
            .ability = ABILITY_COMPOUND_EYES,
#line 376
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 378
                MOVE_SAND_ATTACK,
                MOVE_HARDEN,
                MOVE_FALSE_SWIPE,
                MOVE_FURY_SWIPES,
            },
            },
        },
    },
#line 383
    [TRAINER_PBL_HARPER] =
    {
#line 384
        .trainerName = _("Harper"),
#line 385
        .trainerClass = TRAINER_CLASS_LASS,
#line 386
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 387
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 389
        .doubleBattle = FALSE,
#line 388
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 390
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 392
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 395
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 393
            .ability = ABILITY_RATTLED,
#line 394
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 396
                MOVE_ASTONISH,
                MOVE_POUND,
                MOVE_SUPERSONIC,
                MOVE_ECHOED_VOICE,
            },
            },
            {
#line 401
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 404
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 402
            .ability = ABILITY_INSOMNIA,
#line 403
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 405
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_PECK,
                MOVE_CONFUSION,
            },
            },
            {
#line 410
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 413
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 411
            .ability = ABILITY_STATIC,
#line 412
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 414
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_CHARGE,
                MOVE_THUNDER_SHOCK,
            },
            },
        },
    },
#line 419
    [TRAINER_PBL_ARTHUR] =
    {
#line 420
        .trainerName = _("Arthur"),
#line 421
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 422
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender = 
#line 423
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 425
        .doubleBattle = FALSE,
#line 424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 426
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 428
            .species = SPECIES_YUNGOOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 431
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 429
            .ability = ABILITY_STRONG_JAW,
#line 430
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 432
                MOVE_TACKLE,
                MOVE_SAND_ATTACK,
                MOVE_LEER,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 437
            .species = SPECIES_PIKIPEK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 440
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 438
            .ability = ABILITY_SKILL_LINK,
#line 439
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 441
                MOVE_PECK,
                MOVE_GROWL,
                MOVE_ECHOED_VOICE,
            },
            },
            {
#line 445
            .species = SPECIES_NIDORAN_M,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 448
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 446
            .ability = ABILITY_POISON_POINT,
#line 447
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 449
                MOVE_PECK,
                MOVE_FOCUS_ENERGY,
                MOVE_POISON_STING,
                MOVE_DISABLE,
            },
            },
        },
    },
#line 454
    [TRAINER_PBL_SHAUN_LEVIATHAN_2] =
    {
#line 455
        .trainerName = _("Shaun"),
#line 456
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 457
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 458
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 460
        .doubleBattle = FALSE,
#line 459
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 461
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 463
            .species = SPECIES_BUNNELBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 463
            .heldItem = ITEM_ORAN_BERRY,
#line 466
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 464
            .ability = ABILITY_CHEEK_POUCH,
#line 465
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 467
                MOVE_DOUBLE_SLAP,
                MOVE_LEER,
                MOVE_DEFENSE_CURL,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 472
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 472
            .heldItem = ITEM_ORAN_BERRY,
#line 475
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 473
            .ability = ABILITY_CHEEK_POUCH,
#line 474
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 476
                MOVE_TACKLE,
                MOVE_BITE,
                MOVE_BIDE,
                MOVE_TEARFUL_LOOK,
            },
            },
            {
#line 481
            .species = SPECIES_SKWOVET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 481
            .heldItem = ITEM_ORAN_BERRY,
#line 484
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 482
            .ability = ABILITY_CHEEK_POUCH,
#line 483
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 485
                MOVE_TACKLE,
                MOVE_STUFF_CHEEKS,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
        },
    },
#line 490
    [TRAINER_PBL_SHAUN_LEVIATHAN_2_BRUTAL] =
    {
#line 491
        .trainerName = _("Shaun"),
#line 492
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 493
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 494
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 496
        .doubleBattle = FALSE,
#line 495
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 497
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 499
            .species = SPECIES_BUNNELBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 499
            .heldItem = ITEM_ORAN_BERRY,
#line 502
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 500
            .ability = ABILITY_CHEEK_POUCH,
#line 501
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 503
                MOVE_DOUBLE_SLAP,
                MOVE_LEER,
                MOVE_DEFENSE_CURL,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 508
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 508
            .heldItem = ITEM_ORAN_BERRY,
#line 511
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 509
            .ability = ABILITY_CHEEK_POUCH,
#line 510
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 512
                MOVE_TACKLE,
                MOVE_BITE,
                MOVE_BIDE,
                MOVE_TEARFUL_LOOK,
            },
            },
            {
#line 517
            .species = SPECIES_SKWOVET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 517
            .heldItem = ITEM_ORAN_BERRY,
#line 520
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 518
            .ability = ABILITY_CHEEK_POUCH,
#line 519
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 521
                MOVE_TACKLE,
                MOVE_STUFF_CHEEKS,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 526
            .species = SPECIES_LECHONK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 526
            .heldItem = ITEM_ORAN_BERRY,
#line 529
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 527
            .ability = ABILITY_THICK_FAT,
#line 528
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 530
                MOVE_TACKLE,
                MOVE_DISARMING_VOICE,
                MOVE_STUFF_CHEEKS,
                MOVE_YAWN,
            },
            },
        },
    },
#line 535
    [TRAINER_PBL_JEMMA] =
    {
#line 536
        .trainerName = _("Jemma"),
#line 537
        .trainerClass = TRAINER_CLASS_LASS,
#line 538
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 539
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 541
        .doubleBattle = FALSE,
#line 540
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 542
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 544
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 547
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 545
            .ability = ABILITY_POISON_POINT,
#line 546
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 548
                MOVE_ABSORB,
                MOVE_WORRY_SEED,
                MOVE_LIFE_DEW,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 553
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 556
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 554
            .ability = ABILITY_KEEN_EYE,
#line 555
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 557
                MOVE_TACKLE,
                MOVE_SAND_ATTACK,
                MOVE_GUST,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 562
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 565
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 563
            .ability = ABILITY_SAND_FORCE,
#line 564
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 566
                MOVE_SCRATCH,
                MOVE_SAND_ATTACK,
                MOVE_GROWL,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 571
    [TRAINER_PBL_PATRICK] =
    {
#line 572
        .trainerName = _("Patrick"),
#line 573
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 574
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 575
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 577
        .doubleBattle = FALSE,
#line 576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 578
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 580
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 583
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 581
            .ability = ABILITY_SHED_SKIN,
#line 582
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 584
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
            {
#line 587
            .species = SPECIES_METAPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 590
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 588
            .ability = ABILITY_SHED_SKIN,
#line 589
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 591
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
            {
#line 594
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 597
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 595
            .ability = ABILITY_SHED_SKIN,
#line 596
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 598
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
            {
#line 601
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 604
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 602
            .ability = ABILITY_SHED_SKIN,
#line 603
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 605
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 608
    [TRAINER_PBL_ANNABELLE] =
    {
#line 609
        .trainerName = _("Annabelle"),
#line 610
        .trainerClass = TRAINER_CLASS_LADY,
#line 611
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 612
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 614
        .doubleBattle = FALSE,
#line 613
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 615
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 617
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 620
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 618
            .ability = ABILITY_TECHNICIAN,
#line 619
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 621
                MOVE_GROWL,
                MOVE_SCRATCH,
                MOVE_FEINT,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 626
            .species = SPECIES_GOSSIFLEUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 629
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 627
            .ability = ABILITY_COTTON_DOWN,
#line 628
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 630
                MOVE_LEAFAGE,
                MOVE_GRASS_WHISTLE,
                MOVE_RAPID_SPIN,
                MOVE_RAZOR_LEAF,
            },
            },
            {
#line 635
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 638
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 636
            .ability = ABILITY_HUGE_POWER,
#line 637
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 639
                MOVE_SOAK,
                MOVE_REFRESH,
                MOVE_CHARM,
                MOVE_BUBBLE,
            },
            },
            {
#line 644
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 647
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 645
            .ability = ABILITY_INTIMIDATE,
#line 646
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 648
                MOVE_LEER,
                MOVE_CHARGE,
                MOVE_THUNDER_SHOCK,
                MOVE_BABY_DOLL_EYES,
            },
            },
        },
    },
#line 653
    [TRAINER_PBL_BORIS] =
    {
#line 654
        .trainerName = _("Boris"),
#line 655
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 656
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 657
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 659
        .doubleBattle = FALSE,
#line 658
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 660
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 662
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 665
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 663
            .ability = ABILITY_SWIFT_SWIM,
#line 664
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 666
                MOVE_ABSORB,
                MOVE_BUBBLE,
                MOVE_MIST,
                MOVE_ASTONISH,
            },
            },
            {
#line 671
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 674
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 672
            .ability = ABILITY_LIMBER,
#line 673
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 675
                MOVE_DEFENSE_CURL,
                MOVE_QUICK_ATTACK,
                MOVE_BABY_DOLL_EYES,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 680
            .species = SPECIES_MASCHIFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 683
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 681
            .ability = ABILITY_INTIMIDATE,
#line 682
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 684
                MOVE_LICK,
                MOVE_SNARL,
                MOVE_SCARY_FACE,
                MOVE_BITE,
            },
            },
        },
    },
#line 689
    [TRAINER_PBL_RICHARD] =
    {
#line 690
        .trainerName = _("Richard"),
#line 691
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 692
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender = 
#line 693
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 695
        .doubleBattle = FALSE,
#line 694
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 696
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 698
            .species = SPECIES_WOOLOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 701
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 699
            .ability = ABILITY_FLUFFY,
#line 700
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 702
                MOVE_TACKLE,
                MOVE_GROWL,
                MOVE_DEFENSE_CURL,
                MOVE_COPYCAT,
            },
            },
            {
#line 707
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 710
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 708
            .ability = ABILITY_STATIC,
#line 709
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 711
                MOVE_THUNDER_SHOCK,
                MOVE_SWEET_KISS,
                MOVE_FAKE_OUT,
                MOVE_CHARM,
            },
            },
            {
#line 716
            .species = SPECIES_SMOLIV,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 719
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 717
            .ability = ABILITY_EARLY_BIRD,
#line 718
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 720
                MOVE_TACKLE,
                MOVE_ABSORB,
                MOVE_HELPING_HAND,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 725
            .species = SPECIES_DUCKLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 728
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 726
            .ability = ABILITY_BIG_PECKS,
#line 727
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 729
                MOVE_AQUA_RING,
                MOVE_GUST,
                MOVE_AQUA_JET,
                MOVE_FEATHER_DANCE,
            },
            },
        },
    },
#line 734
    [TRAINER_PBL_PHILLIPA_LEVIATHAN_3] =
    {
#line 735
        .trainerName = _("Phillipa"),
#line 736
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 737
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender = 
#line 738
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 740
        .doubleBattle = FALSE,
#line 739
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 741
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 743
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 746
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 744
            .ability = ABILITY_UNAWARE,
#line 745
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 747
                MOVE_ROLLOUT,
            },
            },
            {
#line 749
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 752
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 750
            .ability = ABILITY_SAND_RUSH,
#line 751
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 753
                MOVE_ROLLOUT,
            },
            },
            {
#line 755
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 755
            .heldItem = ITEM_ORAN_BERRY,
#line 758
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 756
            .ability = ABILITY_HUGE_POWER,
#line 757
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 759
                MOVE_ROLLOUT,
            },
            },
        },
    },
#line 761
    [TRAINER_PBL_PHILLIPA_LEVIATHAN_3_BRUTAL] =
    {
#line 762
        .trainerName = _("Phillipa"),
#line 763
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 764
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender = 
#line 765
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 767
        .doubleBattle = FALSE,
#line 766
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 768
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 770
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 773
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 771
            .ability = ABILITY_UNAWARE,
#line 772
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 774
                MOVE_ROLLOUT,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 777
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 780
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 778
            .ability = ABILITY_SAND_RUSH,
#line 779
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 781
                MOVE_ROLLOUT,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 784
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 784
            .heldItem = ITEM_ORAN_BERRY,
#line 787
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 785
            .ability = ABILITY_HUGE_POWER,
#line 786
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 788
                MOVE_ROLLOUT,
                MOVE_DEFENSE_CURL,
            },
            },
            {
#line 791
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 791
            .heldItem = ITEM_ORAN_BERRY,
#line 794
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 792
            .ability = ABILITY_CHLOROPHYLL,
#line 793
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 795
                MOVE_ROLLOUT,
                MOVE_DEFENSE_CURL,
            },
            },
        },
    },
#line 798
    [TRAINER_PBL_HERMAN] =
    {
#line 799
        .trainerName = _("Herman"),
#line 800
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 801
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender = 
#line 802
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 804
        .doubleBattle = FALSE,
#line 803
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 805
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 807
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 810
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 808
            .ability = ABILITY_FLASH_FIRE,
#line 809
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 811
                MOVE_EMBER,
                MOVE_BABY_DOLL_EYES,
                MOVE_DISABLE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 816
            .species = SPECIES_BOUNSWEET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 819
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 817
            .ability = ABILITY_OBLIVIOUS,
#line 818
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 820
                MOVE_ABSORB,
                MOVE_GRASS_WHISTLE,
                MOVE_RAPID_SPIN,
                MOVE_RAZOR_LEAF,
            },
            },
            {
#line 825
            .species = SPECIES_ESPURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 828
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 826
            .ability = ABILITY_OWN_TEMPO,
#line 827
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 829
                MOVE_FAKE_OUT,
                MOVE_TICKLE,
                MOVE_CONFUSION,
                MOVE_DISARMING_VOICE,
            },
            },
        },
    },
#line 834
    [TRAINER_PBL_RALPH] =
    {
#line 835
        .trainerName = _("Ralph"),
#line 836
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 837
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 838
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 840
        .doubleBattle = FALSE,
#line 839
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 841
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 843
            .species = SPECIES_MUNNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 846
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 844
            .ability = ABILITY_SYNCHRONIZE,
#line 845
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 847
                MOVE_PSYWAVE,
                MOVE_LUCKY_CHANT,
                MOVE_HYPNOSIS,
                MOVE_IMPRISON,
            },
            },
            {
#line 852
            .species = SPECIES_PURRLOIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 855
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 853
            .ability = ABILITY_LIMBER,
#line 854
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 856
                MOVE_FAKE_OUT,
                MOVE_SAND_ATTACK,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 861
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 864
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 862
            .ability = ABILITY_INTIMIDATE,
#line 863
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 865
                MOVE_GLARE,
                MOVE_BITE,
                MOVE_ACID,
                MOVE_DISABLE,
            },
            },
        },
    },
#line 870
    [TRAINER_PBL_CALLIE] =
    {
#line 871
        .trainerName = _("Callie"),
#line 872
        .trainerClass = TRAINER_CLASS_LASS,
#line 873
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 874
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 876
        .doubleBattle = FALSE,
#line 875
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 877
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 879
            .species = SPECIES_LILLIPUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 882
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 880
            .ability = ABILITY_PICKUP,
#line 881
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 883
                MOVE_TACKLE,
                MOVE_HELPING_HAND,
                MOVE_BITE,
                MOVE_YAWN,
            },
            },
            {
#line 888
            .species = SPECIES_FIDOUGH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 891
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 889
            .ability = ABILITY_OWN_TEMPO,
#line 890
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 892
                MOVE_TAIL_WHIP,
                MOVE_BITE,
                MOVE_YAWN,
                MOVE_COVET,
            },
            },
            {
#line 897
            .species = SPECIES_YAMPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 900
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 898
            .ability = ABILITY_BALL_FETCH,
#line 899
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 901
                MOVE_NUZZLE,
                MOVE_SPARK,
                MOVE_CHARGE,
                MOVE_BITE,
            },
            },
        },
    },
#line 906
    [TRAINER_PBL_SANTIAGO] =
    {
#line 907
        .trainerName = _("Santiago"),
#line 908
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 909
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 910
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 912
        .doubleBattle = FALSE,
#line 911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 913
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 915
            .species = SPECIES_BURMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 918
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 916
            .ability = ABILITY_SHED_SKIN,
#line 917
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 919
                MOVE_TACKLE,
                MOVE_STRING_SHOT,
                MOVE_BUG_BITE,
            },
            },
            {
#line 923
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 926
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 924
            .ability = ABILITY_SWARM,
#line 925
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 927
                MOVE_SWIFT,
                MOVE_COMET_PUNCH,
                MOVE_BUG_BITE,
                MOVE_ROOST,
            },
            },
            {
#line 932
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 935
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 933
            .ability = ABILITY_EFFECT_SPORE,
#line 934
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 936
                MOVE_POISON_POWDER,
                MOVE_ABSORB,
                MOVE_BUG_BITE,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 941
            .species = SPECIES_SPEWPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 944
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 942
            .ability = ABILITY_SHED_SKIN,
#line 943
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 945
                MOVE_HARDEN,
                MOVE_TACKLE,
            },
            },
        },
    },
#line 948
    [TRAINER_PBL_CHLOE_AND_KAYA] =
    {
#line 949
        .trainerName = _("Chloe&Kaya"),
#line 950
        .trainerClass = TRAINER_CLASS_TWINS,
#line 951
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 952
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 954
        .doubleBattle = TRUE,
#line 953
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 956
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 959
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 957
            .ability = ABILITY_PRANKSTER,
#line 958
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 960
                MOVE_FAIRY_WIND,
                MOVE_RAZOR_LEAF,
                MOVE_STUN_SPORE,
                MOVE_POISON_POWDER,
            },
            },
            {
#line 965
            .species = SPECIES_PETILIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 968
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 966
            .ability = ABILITY_OWN_TEMPO,
#line 967
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 969
                MOVE_ABSORB,
                MOVE_HELPING_HAND,
                MOVE_STUN_SPORE,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 974
    [TRAINER_PBL_FRED] =
    {
#line 975
        .trainerName = _("Fred"),
#line 976
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 977
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 978
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 980
        .doubleBattle = FALSE,
#line 979
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 981
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 983
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 986
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 984
            .ability = ABILITY_LEVITATE,
#line 985
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 987
                MOVE_ASTONISH,
                MOVE_CONFUSION,
                MOVE_DISABLE,
                MOVE_YAWN,
            },
            },
            {
#line 992
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 995
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 993
            .ability = ABILITY_WATER_ABSORB,
#line 994
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 996
                MOVE_WATER_GUN,
                MOVE_MUD_SHOT,
                MOVE_YAWN,
                MOVE_SLAM,
            },
            },
            {
#line 1001
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1004
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1002
            .ability = ABILITY_FLAME_BODY,
#line 1003
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1005
                MOVE_EMBER,
                MOVE_YAWN,
                MOVE_ROCK_THROW,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 1010
            .species = SPECIES_PANCHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1013
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1011
            .ability = ABILITY_IRON_FIST,
#line 1012
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1014
                MOVE_SEISMIC_TOSS,
                MOVE_COMET_PUNCH,
                MOVE_KARATE_CHOP,
                MOVE_TAUNT,
            },
            },
        },
    },
#line 1019
    [TRAINER_PBL_LUCIA] =
    {
#line 1020
        .trainerName = _("Lucia"),
#line 1021
        .trainerClass = TRAINER_CLASS_FAIRY_TALE_GIRL,
#line 1022
        .trainerPic = TRAINER_PIC_FAIRY_TALE_GIRL,
        .encounterMusic_gender = 
#line 1023
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1025
        .doubleBattle = FALSE,
#line 1024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1026
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1028
            .species = SPECIES_IGGLYBUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1031
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1029
            .ability = ABILITY_COMPETITIVE,
#line 1030
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1032
                MOVE_SWEET_KISS,
                MOVE_DISARMING_VOICE,
                MOVE_DISABLE,
                MOVE_CHARM,
            },
            },
            {
#line 1037
            .species = SPECIES_SPRITZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1040
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1038
            .ability = ABILITY_HEALER,
#line 1039
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1041
                MOVE_FAIRY_WIND,
                MOVE_SWEET_KISS,
                MOVE_REFRESH,
                MOVE_DISARMING_VOICE,
            },
            },
            {
#line 1046
            .species = SPECIES_SWIRLIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1049
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1047
            .ability = ABILITY_SWEET_VEIL,
#line 1048
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1050
                MOVE_FAIRY_WIND,
                MOVE_YAWN,
                MOVE_COTTON_SPORE,
                MOVE_ROUND,
            },
            },
            {
#line 1055
            .species = SPECIES_MIME_JR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1058
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1056
            .ability = ABILITY_SOUNDPROOF,
#line 1057
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1059
                MOVE_TEETER_DANCE,
                MOVE_DOUBLE_SLAP,
                MOVE_CONFUSION,
                MOVE_FAKE_OUT,
            },
            },
        },
    },
#line 1064
    [TRAINER_PBL_ELLA_AND_BELLA_LEVIATHAN_4] =
    {
#line 1065
        .trainerName = _("Ella&Bella"),
#line 1066
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 1067
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 1068
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1070
        .doubleBattle = TRUE,
#line 1069
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1071
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1073
            .species = SPECIES_NICKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1076
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1074
            .ability = ABILITY_UNBURDEN,
#line 1075
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1077
                MOVE_SNARL,
                MOVE_GROWL,
            },
            },
            {
#line 1080
            .species = SPECIES_LITLEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1083
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1081
            .ability = ABILITY_UNNERVE,
#line 1082
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1084
                MOVE_INCINERATE,
                MOVE_GROWL,
            },
            },
            {
#line 1087
            .species = SPECIES_STEENEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1087
            .heldItem = ITEM_ORAN_BERRY,
#line 1090
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1088
            .ability = ABILITY_OBLIVIOUS,
#line 1089
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1091
                MOVE_RAZOR_LEAF,
                MOVE_GRASS_WHISTLE,
            },
            },
            {
#line 1094
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1094
            .heldItem = ITEM_ORAN_BERRY,
#line 1097
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1095
            .ability = ABILITY_FRIEND_GUARD,
#line 1096
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1098
                MOVE_SWIFT,
                MOVE_DISARMING_VOICE,
            },
            },
        },
    },
#line 1101
    [TRAINER_PBL_ELLA_AND_BELLA_LEVIATHAN_4_BRUTAL] =
    {
#line 1102
        .trainerName = _("Ella&Bella"),
#line 1103
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 1104
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 1105
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1107
        .doubleBattle = TRUE,
#line 1106
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1108
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1110
            .species = SPECIES_NICKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1113
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1111
            .ability = ABILITY_STAKEOUT,
#line 1112
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1114
                MOVE_SNARL,
                MOVE_QUICK_ATTACK,
                MOVE_GROWL,
            },
            },
            {
#line 1118
            .species = SPECIES_LITLEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1121
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1119
            .ability = ABILITY_UNNERVE,
#line 1120
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1122
                MOVE_INCINERATE,
                MOVE_ECHOED_VOICE,
                MOVE_GROWL,
            },
            },
            {
#line 1126
            .species = SPECIES_STEENEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1126
            .heldItem = ITEM_ORAN_BERRY,
#line 1129
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1127
            .ability = ABILITY_OBLIVIOUS,
#line 1128
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1130
                MOVE_RAZOR_LEAF,
                MOVE_RAPID_SPIN,
                MOVE_GRASS_WHISTLE,
            },
            },
            {
#line 1134
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1134
            .heldItem = ITEM_ORAN_BERRY,
#line 1137
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1135
            .ability = ABILITY_FRIEND_GUARD,
#line 1136
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1138
                MOVE_SWIFT,
                MOVE_DISARMING_VOICE,
                MOVE_SING,
            },
            },
        },
    },
#line 1142
    [TRAINER_PBL_ANNE_AND_JUNE] =
    {
#line 1143
        .trainerName = _("Anne&June"),
#line 1144
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 1145
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 1146
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1148
        .doubleBattle = TRUE,
#line 1147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1150
            .species = SPECIES_GOTHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1153
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1151
            .ability = ABILITY_TELEPATHY,
#line 1152
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1154
                MOVE_CONFUSION,
                MOVE_DOUBLE_SLAP,
                MOVE_FAKE_OUT,
                MOVE_TICKLE,
            },
            },
            {
#line 1159
            .species = SPECIES_SOLOSIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1162
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1160
            .ability = ABILITY_MAGIC_GUARD,
#line 1161
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1163
                MOVE_CONFUSION,
                MOVE_NIGHT_SHADE,
                MOVE_ROLLOUT,
                MOVE_RECOVER,
            },
            },
        },
    },
#line 1168
    [TRAINER_PBL_NOVA_AND_CORA] =
    {
#line 1169
        .trainerName = _("Nova&Cora"),
#line 1170
        .trainerClass = TRAINER_CLASS_TWINS,
#line 1171
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 1172
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1174
        .doubleBattle = TRUE,
#line 1173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1176
            .species = SPECIES_PUMPKABOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1179
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1177
            .ability = ABILITY_FLARE_BOOST,
#line 1178
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1180
                MOVE_RAZOR_LEAF,
                MOVE_LEECH_SEED,
                MOVE_DISABLE,
                MOVE_SHADOW_SNEAK,
            },
            },
            {
#line 1185
            .species = SPECIES_PHANTUMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1188
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1186
            .ability = ABILITY_NATURAL_CURE,
#line 1187
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1189
                MOVE_BRANCH_POKE,
                MOVE_LEECH_SEED,
                MOVE_DISABLE,
                MOVE_FEINT_ATTACK,
            },
            },
        },
    },
#line 1194
    [TRAINER_PBL_CLINTON] =
    {
#line 1195
        .trainerName = _("Clinton"),
#line 1196
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1197
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender = 
#line 1198
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1200
        .doubleBattle = FALSE,
#line 1199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1201
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1203
            .species = SPECIES_STUFFUL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1206
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1204
            .ability = ABILITY_FLUFFY,
#line 1205
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1207
                MOVE_BRUTAL_SWING,
                MOVE_BIDE,
                MOVE_FORCE_PALM,
                MOVE_STOMP,
            },
            },
            {
#line 1212
            .species = SPECIES_ROCKRUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1215
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1213
            .ability = ABILITY_VITAL_SPIRIT,
#line 1214
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1216
                MOVE_DOUBLE_TEAM,
                MOVE_ROCK_THROW,
                MOVE_BITE,
                MOVE_ROAR,
            },
            },
            {
#line 1221
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1224
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1222
            .ability = ABILITY_TRACE,
#line 1223
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1225
                MOVE_CONFUSION,
                MOVE_SHADOW_SNEAK,
                MOVE_TELEPORT,
                MOVE_MAGICAL_LEAF,
            },
            },
            {
#line 1230
            .species = SPECIES_PAWMI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1233
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1231
            .ability = ABILITY_STATIC,
#line 1232
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1234
                MOVE_THUNDER_SHOCK,
                MOVE_BITE,
                MOVE_FAKE_OUT,
                MOVE_SWEET_KISS,
            },
            },
        },
    },
#line 1239
    [TRAINER_PBL_REBECCA] =
    {
#line 1240
        .trainerName = _("Rebecca"),
#line 1241
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 1242
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 1243
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1245
        .doubleBattle = FALSE,
#line 1244
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1246
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1248
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1251
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1249
            .ability = ABILITY_STATIC,
#line 1250
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1252
                MOVE_QUICK_ATTACK,
                MOVE_SPARK,
                MOVE_BITE,
                MOVE_SWIFT,
            },
            },
            {
#line 1257
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1260
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1259
            .ability = ABILITY_WATER_ABSORB,
#line 1258
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1261
                MOVE_LEECH_SEED,
                MOVE_DISABLE,
                MOVE_MAGICAL_LEAF,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 1266
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1269
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1267
            .ability = ABILITY_AFTERMATH,
#line 1268
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1270
                MOVE_SCREECH,
                MOVE_POISON_GAS,
                MOVE_BITE,
                MOVE_ACID_SPRAY,
            },
            },
            {
#line 1275
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1278
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1276
            .ability = ABILITY_SWIFT_SWIM,
#line 1277
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1279
                MOVE_MUD_SHOT,
                MOVE_MIND_READER,
                MOVE_BUG_BITE,
                MOVE_BUBBLE_BEAM,
            },
            },
        },
    },
#line 1284
    [TRAINER_PBL_RYAN] =
    {
#line 1285
        .trainerName = _("Ryan"),
#line 1286
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 1287
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 1288
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1290
        .doubleBattle = FALSE,
#line 1289
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1291
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1293
            .species = SPECIES_CRABRAWLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1296
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1294
            .ability = ABILITY_HYPER_CUTTER,
#line 1295
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1297
                MOVE_ROCK_SMASH,
                MOVE_BUBBLE,
                MOVE_LEER,
                MOVE_DIZZY_PUNCH,
            },
            },
            {
#line 1302
            .species = SPECIES_HATENNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1305
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1303
            .ability = ABILITY_HEALER,
#line 1304
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1306
                MOVE_PLAY_NICE,
                MOVE_LIFE_DEW,
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
            },
            },
            {
#line 1311
            .species = SPECIES_DEERLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1314
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1312
            .ability = ABILITY_SERENE_GRACE,
#line 1313
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1315
                MOVE_CHARM,
                MOVE_LEECH_SEED,
                MOVE_FEINT_ATTACK,
                MOVE_DOUBLE_KICK,
            },
            },
            {
#line 1320
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1323
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1321
            .ability = ABILITY_FLASH_FIRE,
#line 1322
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1324
                MOVE_TORMENT,
                MOVE_RAGE,
                MOVE_BITE,
                MOVE_FIRE_FANG,
            },
            },
        },
    },
#line 1329
    [TRAINER_PBL_CAITLYN] =
    {
#line 1330
        .trainerName = _("Caitlyn"),
#line 1331
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 1332
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 1333
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1335
        .doubleBattle = FALSE,
#line 1334
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1336
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1338
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1341
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1339
            .ability = ABILITY_INTIMIDATE,
#line 1340
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1342
                MOVE_BITE,
                MOVE_RAGE,
                MOVE_FAKE_TEARS,
                MOVE_COVET,
            },
            },
            {
#line 1347
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1350
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1348
            .ability = ABILITY_THICK_FAT,
#line 1349
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1351
                MOVE_ICE_SHARD,
                MOVE_FAKE_OUT,
                MOVE_HEADBUTT,
                MOVE_WATER_GUN,
            },
            },
            {
#line 1356
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1359
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1357
            .ability = ABILITY_FLAME_BODY,
#line 1358
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1360
                MOVE_EMBER,
                MOVE_QUICK_ATTACK,
                MOVE_DOUBLE_KICK,
                MOVE_FIRE_SPIN,
            },
            },
            {
#line 1365
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1368
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1366
            .ability = ABILITY_CUD_CHEW,
#line 1367
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1369
                MOVE_MUD_SLAP,
                MOVE_ACID_SPRAY,
                MOVE_STUFF_CHEEKS,
                MOVE_SLUDGE,
            },
            },
        },
    },
#line 1374
    [TRAINER_PBL_KENNETH] =
    {
#line 1375
        .trainerName = _("Kenneth"),
#line 1376
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 1377
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 1378
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1380
        .doubleBattle = FALSE,
#line 1379
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1381
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1383
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1386
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1384
            .ability = ABILITY_STURDY,
#line 1385
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1387
                MOVE_FLAIL,
                MOVE_ROLLOUT,
                MOVE_SLAM,
                MOVE_BULLDOZE,
            },
            },
            {
#line 1392
            .species = SPECIES_IMPIDIMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1395
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1393
            .ability = ABILITY_PICKPOCKET,
#line 1394
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1396
                MOVE_CONFIDE,
                MOVE_FLATTER,
                MOVE_FAKE_OUT,
                MOVE_ASSURANCE,
            },
            },
            {
#line 1401
            .species = SPECIES_ROOKIDEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1404
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1402
            .ability = ABILITY_BIG_PECKS,
#line 1403
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1405
                MOVE_POWER_TRIP,
                MOVE_FURY_ATTACK,
                MOVE_ROCK_SMASH,
                MOVE_PLUCK,
            },
            },
            {
#line 1410
            .species = SPECIES_GLAMEOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1413
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1411
            .ability = ABILITY_LIMBER,
#line 1412
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1414
                MOVE_CHARM,
                MOVE_QUICK_ATTACK,
                MOVE_FEINT_ATTACK,
                MOVE_FAKE_OUT,
            },
            },
        },
    },
#line 1419
    [TRAINER_PBL_KEVIN] =
    {
#line 1420
        .trainerName = _("Kevin"),
#line 1421
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 1422
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 1423
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1425
        .doubleBattle = FALSE,
#line 1424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1426
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1428
            .species = SPECIES_GRUBBIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1431
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1429
            .ability = ABILITY_SWARM,
#line 1430
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1432
                MOVE_STRING_SHOT,
                MOVE_VISE_GRIP,
                MOVE_BUG_BITE,
                MOVE_BITE,
            },
            },
            {
#line 1437
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1440
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1438
            .ability = ABILITY_SWARM,
#line 1439
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1441
                MOVE_RAZOR_LEAF,
                MOVE_BUG_BITE,
                MOVE_SYNTHESIS,
                MOVE_FLAIL,
            },
            },
            {
#line 1446
            .species = SPECIES_TAROUNTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1449
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1447
            .ability = ABILITY_INSOMNIA,
#line 1448
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1450
                MOVE_ASSURANCE,
                MOVE_BUG_BITE,
                MOVE_FEINT,
                MOVE_BLOCK,
            },
            },
            {
#line 1455
            .species = SPECIES_SIZZLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1458
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1456
            .ability = ABILITY_FLASH_FIRE,
#line 1457
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1459
                MOVE_DEFENSE_CURL,
                MOVE_BUG_BITE,
                MOVE_ROLLOUT,
                MOVE_BITE,
            },
            },
        },
    },
#line 1464
    [TRAINER_PBL_DECLAN_LEVIATHAN_5] =
    {
#line 1465
        .trainerName = _("Declan"),
#line 1466
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 1467
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 1468
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1470
        .doubleBattle = FALSE,
#line 1469
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1471
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1473
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1476
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1474
            .ability = ABILITY_AFTERMATH,
#line 1475
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1477
                MOVE_SLUDGE,
                MOVE_ACID_SPRAY,
                MOVE_POISON_GAS,
                MOVE_DOUBLE_SLAP,
            },
            },
            {
#line 1482
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1485
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1483
            .ability = ABILITY_INSOMNIA,
#line 1484
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1486
                MOVE_CONFUSION,
                MOVE_WAKE_UP_SLAP,
                MOVE_HYPNOSIS,
                MOVE_HEADBUTT,
            },
            },
            {
#line 1491
            .species = SPECIES_BONSLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1494
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1492
            .ability = ABILITY_STURDY,
#line 1493
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1495
                MOVE_ROCK_THROW,
                MOVE_LOW_KICK,
                MOVE_FEINT_ATTACK,
                MOVE_TEARFUL_LOOK,
            },
            },
            {
#line 1500
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1503
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1501
            .ability = ABILITY_SAP_SIPPER,
#line 1502
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1504
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
                MOVE_STOMP,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 1509
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1509
            .heldItem = ITEM_EVIOLITE,
#line 1512
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1510
            .ability = ABILITY_SERENE_GRACE,
#line 1511
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1513
                MOVE_HEADBUTT,
                MOVE_ANCIENT_POWER,
                MOVE_GLARE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 1518
    [TRAINER_PBL_DECLAN_LEVIATHAN_5_BRUTAL] =
    {
#line 1519
        .trainerName = _("Declan"),
#line 1520
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 1521
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 1522
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1524
        .doubleBattle = FALSE,
#line 1523
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1525
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1527
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1527
            .heldItem = ITEM_EVIOLITE,
#line 1530
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1528
            .ability = ABILITY_AFTERMATH,
#line 1529
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1531
                MOVE_SLUDGE,
                MOVE_ACID_SPRAY,
                MOVE_POISON_GAS,
                MOVE_DOUBLE_SLAP,
            },
            },
            {
#line 1536
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1536
            .heldItem = ITEM_EVIOLITE,
#line 1539
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1537
            .ability = ABILITY_BAD_DREAMS,
#line 1538
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1540
                MOVE_CONFUSION,
                MOVE_WAKE_UP_SLAP,
                MOVE_HYPNOSIS,
                MOVE_HEADBUTT,
            },
            },
            {
#line 1545
            .species = SPECIES_BONSLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1545
            .heldItem = ITEM_EVIOLITE,
#line 1548
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1546
            .ability = ABILITY_STURDY,
#line 1547
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1549
                MOVE_ROCK_THROW,
                MOVE_LOW_KICK,
                MOVE_FEINT_ATTACK,
                MOVE_TEARFUL_LOOK,
            },
            },
            {
#line 1554
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1554
            .heldItem = ITEM_EVIOLITE,
#line 1557
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1555
            .ability = ABILITY_SAP_SIPPER,
#line 1556
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1558
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
                MOVE_STOMP,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 1563
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1563
            .heldItem = ITEM_EVIOLITE,
#line 1566
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1564
            .ability = ABILITY_SERENE_GRACE,
#line 1565
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1567
                MOVE_HEADBUTT,
                MOVE_ANCIENT_POWER,
                MOVE_GLARE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 1572
    [TRAINER_PBL_GILBERT] =
    {
#line 1573
        .trainerName = _("Gilbert"),
#line 1574
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 1575
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 1576
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 1578
        .doubleBattle = FALSE,
#line 1577
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1579
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1581
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1584
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1582
            .ability = ABILITY_SWIFT_SWIM,
#line 1583
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1585
                MOVE_SPLASH,
                MOVE_TACKLE,
                MOVE_FLAIL,
            },
            },
            {
#line 1589
            .species = SPECIES_FINNEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1592
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1590
            .ability = ABILITY_STORM_DRAIN,
#line 1591
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1593
                MOVE_SWEET_KISS,
                MOVE_TICKLE,
                MOVE_WATER_PULSE,
                MOVE_TAILWIND,
            },
            },
            {
#line 1598
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1601
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1599
            .ability = ABILITY_STORM_DRAIN,
#line 1600
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1602
                MOVE_ANCIENT_POWER,
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_HIDDEN_POWER,
            },
            },
            {
#line 1608
            .species = SPECIES_CHEWTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1611
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1609
            .ability = ABILITY_STRONG_JAW,
#line 1610
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1612
                MOVE_WATER_GUN,
                MOVE_BITE,
                MOVE_HEADBUTT,
                MOVE_GASTRO_ACID,
            },
            },
        },
    },
#line 1617
    [TRAINER_PBL_MELANIE] =
    {
#line 1618
        .trainerName = _("Melanie"),
#line 1619
        .trainerClass = TRAINER_CLASS_LASS,
#line 1620
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 1621
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1623
        .doubleBattle = FALSE,
#line 1622
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1624
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1626
            .species = SPECIES_CUTIEFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1629
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1627
            .ability = ABILITY_SHIELD_DUST,
#line 1628
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1630
                MOVE_AROMATHERAPY,
                MOVE_STRUGGLE_BUG,
                MOVE_STUN_SPORE,
                MOVE_SWITCHEROO,
            },
            },
            {
#line 1635
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1638
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1636
            .ability = ABILITY_INTIMIDATE,
#line 1637
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1639
                MOVE_BITE,
                MOVE_HELPING_HAND,
                MOVE_DOUBLE_KICK,
                MOVE_FLAME_WHEEL,
            },
            },
            {
#line 1644
            .species = SPECIES_SLOWPOKE_GALARIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1647
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1645
            .ability = ABILITY_OWN_TEMPO,
#line 1646
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1648
                MOVE_ACID,
                MOVE_YAWN,
                MOVE_DISABLE,
                MOVE_CONFUSION,
            },
            },
        },
    },
#line 1653
    [TRAINER_PBL_CONSTANCE] =
    {
#line 1654
        .trainerName = _("Constance"),
#line 1655
        .trainerClass = TRAINER_CLASS_LADY,
#line 1656
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 1657
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1659
        .doubleBattle = FALSE,
#line 1658
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1660
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1662
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1665
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1663
            .ability = ABILITY_TECHNICIAN,
#line 1664
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1666
                MOVE_HELPING_HAND,
                MOVE_DOUBLE_SLAP,
                MOVE_TICKLE,
                MOVE_SWIFT,
            },
            },
            {
#line 1671
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1674
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1672
            .ability = ABILITY_LEAF_GUARD,
#line 1673
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1675
                MOVE_SLEEP_POWDER,
                MOVE_MEGA_DRAIN,
                MOVE_HELPING_HAND,
                MOVE_WORRY_SEED,
            },
            },
            {
#line 1680
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1683
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1681
            .ability = ABILITY_GUTS,
#line 1682
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1684
                MOVE_FAKE_OUT,
                MOVE_FORCE_PALM,
                MOVE_BULLET_PUNCH,
                MOVE_SMELLING_SALTS,
            },
            },
            {
#line 1689
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1692
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1690
            .ability = ABILITY_THICK_FAT,
#line 1691
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1693
                MOVE_CONFUSE_RAY,
                MOVE_PAYBACK,
                MOVE_PSYBEAM,
                MOVE_TRICK,
            },
            },
        },
    },
#line 1698
    [TRAINER_PBL_FRANK] =
    {
#line 1699
        .trainerName = _("Frank"),
#line 1700
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 1701
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 1702
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1704
        .doubleBattle = FALSE,
#line 1703
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1705
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1707
            .species = SPECIES_FLABEBE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1710
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1708
            .ability = ABILITY_FLOWER_VEIL,
#line 1709
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1711
                MOVE_TEARFUL_LOOK,
                MOVE_LUCKY_CHANT,
                MOVE_SYNTHESIS,
                MOVE_RAZOR_LEAF,
            },
            },
            {
#line 1716
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1719
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1717
            .ability = ABILITY_GRASS_PELT,
#line 1718
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1720
                MOVE_ROLLOUT,
                MOVE_LEECH_SEED,
                MOVE_RAZOR_LEAF,
                MOVE_BULLDOZE,
            },
            },
            {
#line 1725
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1728
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1726
            .ability = ABILITY_POISON_POINT,
#line 1727
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1729
                MOVE_BUG_BITE,
                MOVE_BITE,
                MOVE_TWINEEDLE,
                MOVE_SCREECH,
            },
            },
        },
    },
#line 1734
    [TRAINER_PBL_DUDLEY] =
    {
#line 1735
        .trainerName = _("Dudley"),
#line 1736
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 1737
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 1738
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1740
        .doubleBattle = FALSE,
#line 1739
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1741
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1743
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1746
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1744
            .ability = ABILITY_KEEN_EYE,
#line 1745
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1747
                MOVE_TWISTER,
                MOVE_AQUA_RING,
                MOVE_WING_ATTACK,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1752
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1755
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1753
            .ability = ABILITY_SCRAPPY,
#line 1754
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1756
                MOVE_FOCUS_ENERGY,
                MOVE_WING_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_RAGE,
            },
            },
            {
#line 1761
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1764
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1762
            .ability = ABILITY_WIND_POWER,
#line 1763
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1765
                MOVE_THUNDER_SHOCK,
                MOVE_UPROAR,
                MOVE_FEATHER_DANCE,
                MOVE_PLUCK,
            },
            },
            {
#line 1770
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1773
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1771
            .ability = ABILITY_SUPER_LUCK,
#line 1772
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1774
                MOVE_FURY_ATTACK,
                MOVE_AERIAL_ACE,
                MOVE_QUICK_ATTACK,
                MOVE_FEATHER_DANCE,
            },
            },
        },
    },
#line 1779
    [TRAINER_PBL_DAISY] =
    {
#line 1780
        .trainerName = _("Daisy"),
#line 1781
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 1782
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 1783
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1785
        .doubleBattle = FALSE,
#line 1784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1786
        .randomLead = TRUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1788
            .species = SPECIES_SMEARGLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1791
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1789
            .ability = ABILITY_TECHNICIAN,
#line 1790
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1792
                MOVE_SKETCH,
            },
            },
            {
#line 1794
            .species = SPECIES_APPLIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1797
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1795
            .ability = ABILITY_RIPEN,
#line 1796
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1798
                MOVE_ASTONISH,
                MOVE_WITHDRAW,
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
            },
            },
            {
#line 1803
            .species = SPECIES_MILCERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1806
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1804
            .ability = ABILITY_SWEET_VEIL,
#line 1805
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1807
                MOVE_BABY_DOLL_EYES,
                MOVE_CHARM,
                MOVE_SWEET_KISS,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 1812
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1815
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1813
            .ability = ABILITY_SYNCHRONIZE,
#line 1814
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1816
                MOVE_TELEPORT,
            },
            },
            {
#line 1818
            .species = SPECIES_CLEFFA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1821
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1819
            .ability = ABILITY_MAGIC_GUARD,
#line 1820
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1822
                MOVE_DISARMING_VOICE,
                MOVE_CHARM,
                MOVE_ENCORE,
                MOVE_WISH,
            },
            },
            {
#line 1827
            .species = SPECIES_TYROGUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1830
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1828
            .ability = ABILITY_GUTS,
#line 1829
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1831
                MOVE_MACH_PUNCH,
                MOVE_RAPID_SPIN,
                MOVE_COUNTER,
                MOVE_VACUUM_WAVE,
            },
            },
        },
    },
#line 1836
    [TRAINER_PBL_VIC_AND_DELL] =
    {
#line 1837
        .trainerName = _("Vic&Dell"),
#line 1838
        .trainerClass = TRAINER_CLASS_TWINS,
#line 1839
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 1840
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1842
        .doubleBattle = TRUE,
#line 1841
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1844
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1847
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1845
            .ability = ABILITY_PLUS,
#line 1846
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1848
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_CHARM,
                MOVE_ELECTRO_BALL,
            },
            },
            {
#line 1853
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1856
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1854
            .ability = ABILITY_MINUS,
#line 1855
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1857
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_CHARM,
                MOVE_ELECTRO_BALL,
            },
            },
        },
    },
#line 1862
    [TRAINER_PBL_MINA] =
    {
#line 1863
        .trainerName = _("Nina"),
#line 1864
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 1865
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 1866
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1868
        .doubleBattle = FALSE,
#line 1867
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1870
            .species = SPECIES_WIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1870
            .heldItem = ITEM_ORAN_BERRY,
#line 1873
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1871
            .ability = ABILITY_GOOEY,
#line 1872
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1874
                MOVE_AQUA_JET,
                MOVE_WATER_PULSE,
                MOVE_SLAM,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 1879
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1879
            .heldItem = ITEM_ORAN_BERRY,
#line 1882
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1880
            .ability = ABILITY_HYDRATION,
#line 1881
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1883
                MOVE_MAGNITUDE,
                MOVE_WATER_PULSE,
                MOVE_MUD_BOMB,
                MOVE_REST,
            },
            },
            {
#line 1888
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1888
            .heldItem = ITEM_ORAN_BERRY,
#line 1891
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1889
            .ability = ABILITY_SWIFT_SWIM,
#line 1890
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1892
                MOVE_WATER_PULSE,
                MOVE_HORN_ATTACK,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
            {
#line 1897
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1897
            .heldItem = ITEM_ORAN_BERRY,
#line 1900
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1898
            .ability = ABILITY_REGENERATOR,
#line 1899
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1901
                MOVE_WATER_PULSE,
                MOVE_HORN_ATTACK,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
        },
    },
#line 1906
    [TRAINER_PBL_ZACK_AND_COBY_LEVIATHAN_6] =
    {
#line 1907
        .trainerName = _("Zack&Coby"),
#line 1908
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 1909
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 1910
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1912
        .doubleBattle = TRUE,
#line 1911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1913
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1915
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1915
            .heldItem = ITEM_ORAN_BERRY,
#line 1918
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1916
            .ability = ABILITY_SWIFT_SWIM,
#line 1917
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1919
                MOVE_WATER_PULSE,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 1922
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1922
            .heldItem = ITEM_ORAN_BERRY,
#line 1925
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1923
            .ability = ABILITY_SWIFT_SWIM,
#line 1924
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1926
                MOVE_WATER_PULSE,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 1929
    [TRAINER_PBL_ZACK_AND_COBY_LEVIATHAN_6_BRUTAL] =
    {
#line 1930
        .trainerName = _("Zack&Coby"),
#line 1931
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 1932
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 1933
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1935
        .doubleBattle = TRUE,
#line 1934
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1936
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1938
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1938
            .heldItem = ITEM_ORAN_BERRY,
#line 1941
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1939
            .ability = ABILITY_SWIFT_SWIM,
#line 1940
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1942
                MOVE_WATER_PULSE,
                MOVE_DRAINING_KISS,
                MOVE_HEAL_PULSE,
                MOVE_SWEET_KISS,
            },
            },
            {
#line 1947
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1947
            .heldItem = ITEM_ORAN_BERRY,
#line 1950
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 30, 30),
#line 1948
            .ability = ABILITY_SWIFT_SWIM,
#line 1949
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1951
                MOVE_WATER_PULSE,
                MOVE_TAILWIND,
                MOVE_GUST,
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 1957
    [TRAINER_PBL_MILLIE] =
    {
#line 1958
        .trainerName = _("Millie"),
#line 1959
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 1960
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 1961
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1963
        .doubleBattle = FALSE,
#line 1962
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1964
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1966
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1968
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1967
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1969
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1971
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1970
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1972
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1974
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1973
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1975
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1977
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1976
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1978
    [TRAINER_PBL_JAMAL] =
    {
#line 1979
        .trainerName = _("Jamal"),
#line 1980
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 1981
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 1982
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1984
        .doubleBattle = FALSE,
#line 1983
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1985
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1987
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1989
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1988
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1990
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1992
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1991
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1993
            .species = SPECIES_FOMANTIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1995
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1994
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1996
            .species = SPECIES_BUIZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1998
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1997
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1999
    [TRAINER_PBL_PAIGE] =
    {
#line 2000
        .trainerName = _("Paige"),
#line 2001
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 2002
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 2003
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2005
        .doubleBattle = FALSE,
#line 2004
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2006
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2008
            .species = SPECIES_COMBEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2010
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2009
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2011
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2013
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2012
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2014
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2016
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2015
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2017
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2019
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2018
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2020
    [TRAINER_PBL_SETH] =
    {
#line 2021
        .trainerName = _("Seth"),
#line 2022
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2023
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender = 
#line 2024
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2026
        .doubleBattle = FALSE,
#line 2025
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2027
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2029
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2031
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2030
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2032
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2034
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2033
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2035
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2037
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2036
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2038
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2040
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2039
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2041
    [TRAINER_PBL_CONNIE] =
    {
#line 2042
        .trainerName = _("Connie"),
#line 2043
        .trainerClass = TRAINER_CLASS_LASS,
#line 2044
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 2045
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2047
        .doubleBattle = FALSE,
#line 2046
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2048
        .randomLead = TRUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2050
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2052
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2051
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2053
            .species = SPECIES_DEWPIDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2055
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2054
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2056
    [TRAINER_PBL_PETER] =
    {
#line 2057
        .trainerName = _("Peter"),
#line 2058
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 2059
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 2060
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2062
        .doubleBattle = FALSE,
#line 2061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2063
        .randomLead = TRUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2065
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2067
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2066
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2068
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2070
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2069
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2071
    [TRAINER_PBL_WHITAKER] =
    {
#line 2072
        .trainerName = _("Whitaker"),
#line 2073
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 2074
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 2075
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 2077
        .doubleBattle = FALSE,
#line 2076
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2078
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2080
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2083
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2081
            .ability = ABILITY_SNIPER,
#line 2082
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2084
                MOVE_FURY_ATTACK,
                MOVE_QUICK_ATTACK,
                MOVE_WING_ATTACK,
                MOVE_PURSUIT,
            },
            },
            {
#line 2089
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2091
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2090
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2092
            .species = SPECIES_FLITTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2094
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2093
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2095
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2097
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2096
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2098
    [TRAINER_PBL_BETTY_LEVIATHAN_7] =
    {
#line 2099
        .trainerName = _("Betty"),
#line 2100
        .trainerClass = TRAINER_CLASS_LADY,
#line 2101
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 2102
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2104
        .doubleBattle = FALSE,
#line 2103
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2105
        .randomLead = TRUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2107
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2107
            .heldItem = ITEM_SITRUS_BERRY,
#line 2110
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2108
            .ability = ABILITY_ANGER_SHELL,
#line 2109
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2111
                MOVE_AQUA_JET,
                MOVE_WATER_PULSE,
                MOVE_SLAM,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 2116
            .species = SPECIES_DEDENNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2116
            .heldItem = ITEM_SITRUS_BERRY,
#line 2119
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2117
            .ability = ABILITY_CHEEK_POUCH,
#line 2118
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2120
                MOVE_AQUA_JET,
                MOVE_WATER_PULSE,
                MOVE_SLAM,
                MOVE_MUD_SLAP,
            },
            },
        },
    },
#line 2125
    [TRAINER_PBL_BETTY_LEVIATHAN_7_BRUTAL] =
    {
#line 2126
        .trainerName = _("Betty"),
#line 2127
        .trainerClass = TRAINER_CLASS_LADY,
#line 2128
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 2129
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2131
        .doubleBattle = FALSE,
#line 2130
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2132
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2134
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2134
            .heldItem = ITEM_SITRUS_BERRY,
#line 2137
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2135
            .ability = ABILITY_ANGER_SHELL,
#line 2136
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2138
                MOVE_AQUA_JET,
                MOVE_WATER_PULSE,
                MOVE_SLAM,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 2143
            .species = SPECIES_DEDENNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2143
            .heldItem = ITEM_SITRUS_BERRY,
#line 2146
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2144
            .ability = ABILITY_CHEEK_POUCH,
#line 2145
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2147
                MOVE_AQUA_JET,
                MOVE_WATER_PULSE,
                MOVE_SLAM,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 2152
            .species = SPECIES_DRAMPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2152
            .heldItem = ITEM_SITRUS_BERRY,
#line 2155
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2153
            .ability = ABILITY_BERSERK,
#line 2154
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2156
                MOVE_AQUA_JET,
                MOVE_WATER_PULSE,
                MOVE_SLAM,
                MOVE_MUD_SLAP,
            },
            },
        },
    },
#line 2161
    [TRAINER_PBL_JIMMY] =
    {
#line 2162
        .trainerName = _("Jimmy"),
#line 2163
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 2164
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 2165
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2167
        .doubleBattle = FALSE,
#line 2166
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2168
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2170
            .species = SPECIES_NOIBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2172
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2171
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2173
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2175
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2174
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2176
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2178
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2177
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2179
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2181
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2180
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2182
    [TRAINER_PBL_EMILIANO] =
    {
#line 2183
        .trainerName = _("Emiliano"),
#line 2184
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2185
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 2186
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2188
        .doubleBattle = FALSE,
#line 2187
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2189
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2191
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2193
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2192
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2194
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2196
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2195
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2197
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2199
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2198
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2200
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2202
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2201
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2203
    [TRAINER_PBL_BECKHAM] =
    {
#line 2204
        .trainerName = _("Beckham"),
#line 2205
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2206
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 2207
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2209
        .doubleBattle = FALSE,
#line 2208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2210
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2212
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2214
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2213
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2215
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2217
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2216
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2218
            .species = SPECIES_HELIOPTILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2220
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2219
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2221
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2223
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2222
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2224
    [TRAINER_PBL_KAREN] =
    {
#line 2225
        .trainerName = _("Karen"),
#line 2226
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 2227
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender = 
#line 2228
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2230
        .doubleBattle = FALSE,
#line 2229
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2231
        .randomLead = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2233
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2235
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2234
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2236
    [TRAINER_PBL_JAYDEN] =
    {
#line 2237
        .trainerName = _("Jayden"),
#line 2238
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2239
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 2240
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2242
        .doubleBattle = FALSE,
#line 2241
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2243
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2245
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2247
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2246
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2248
            .species = SPECIES_ROLYCOLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2250
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2249
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2251
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2253
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2252
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2254
            .species = SPECIES_MUDBRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2256
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2255
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2257
    [TRAINER_PBL_NEIL] =
    {
#line 2258
        .trainerName = _("Neil"),
#line 2259
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 2260
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 2261
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2263
        .doubleBattle = FALSE,
#line 2262
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2264
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2266
            .species = SPECIES_RELLOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2268
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2267
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2269
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2271
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2270
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2272
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2274
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2273
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2275
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2277
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2276
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2278
    [TRAINER_PBL_TAMARA] =
    {
#line 2279
        .trainerName = _("Tamara"),
#line 2280
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 2281
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 2282
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2284
        .doubleBattle = FALSE,
#line 2283
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2285
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2287
            .species = SPECIES_SALANDIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2289
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2288
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2290
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2292
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2291
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2293
            .species = SPECIES_CUFANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2295
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2294
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2296
            .species = SPECIES_MORELULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2298
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2297
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2299
    [TRAINER_PBL_ALISTAIR_LEVIATHAN_8] =
    {
#line 2300
        .trainerName = _("Alistair"),
#line 2301
        .trainerClass = TRAINER_CLASS_ROUGHNECK,
#line 2302
        .trainerPic = TRAINER_PIC_ROUGHNECK,
        .encounterMusic_gender = 
#line 2303
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2305
        .doubleBattle = FALSE,
#line 2304
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2306
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2308
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2308
            .heldItem = ITEM_POISON_BARB,
#line 2311
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2309
            .ability = ABILITY_POISON_TOUCH,
#line 2310
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2312
                MOVE_SLUDGE,
                MOVE_ACID_SPRAY,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2317
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2317
            .heldItem = ITEM_SHARP_BEAK,
#line 2320
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2318
            .ability = ABILITY_AFTERMATH,
#line 2319
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2321
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_DEFOG,
            },
            },
            {
#line 2326
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2326
            .heldItem = ITEM_SITRUS_BERRY,
#line 2329
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2327
            .ability = ABILITY_POISON_TOUCH,
#line 2328
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2330
                MOVE_VENOSHOCK,
                MOVE_VACUUM_WAVE,
                MOVE_FAKE_OUT,
                MOVE_THIEF,
            },
            },
            {
#line 2335
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2335
            .heldItem = ITEM_SITRUS_BERRY,
#line 2338
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2336
            .ability = ABILITY_STRONG_JAW,
#line 2337
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2339
                MOVE_BITE,
                MOVE_HOWL,
                MOVE_HEADBUTT,
                MOVE_TRAILBLAZE,
            },
            },
            {
#line 2344
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2344
            .heldItem = ITEM_BLACK_BELT,
#line 2347
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2345
            .ability = ABILITY_GUTS,
#line 2346
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2348
                MOVE_REVENGE,
                MOVE_SEISMIC_TOSS,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 2353
    [TRAINER_PBL_ALISTAIR_LEVIATHAN_8_BRUTAL] =
    {
#line 2354
        .trainerName = _("Alistair"),
#line 2355
        .trainerClass = TRAINER_CLASS_ROUGHNECK,
#line 2356
        .trainerPic = TRAINER_PIC_ROUGHNECK,
        .encounterMusic_gender = 
#line 2357
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2359
        .doubleBattle = FALSE,
#line 2358
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2360
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2362
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2362
            .heldItem = ITEM_POISON_BARB,
#line 2365
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2363
            .ability = ABILITY_POISON_TOUCH,
#line 2364
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2366
                MOVE_SLUDGE,
                MOVE_ACID_SPRAY,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2371
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2371
            .heldItem = ITEM_SHARP_BEAK,
#line 2374
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2372
            .ability = ABILITY_AFTERMATH,
#line 2373
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2375
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_DEFOG,
            },
            },
            {
#line 2380
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2380
            .heldItem = ITEM_SITRUS_BERRY,
#line 2383
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2381
            .ability = ABILITY_POISON_TOUCH,
#line 2382
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2384
                MOVE_VENOSHOCK,
                MOVE_VACUUM_WAVE,
                MOVE_FAKE_OUT,
                MOVE_THIEF,
            },
            },
            {
#line 2389
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2389
            .heldItem = ITEM_SITRUS_BERRY,
#line 2392
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2390
            .ability = ABILITY_STRONG_JAW,
#line 2391
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2393
                MOVE_BITE,
                MOVE_HOWL,
                MOVE_HEADBUTT,
                MOVE_TRAILBLAZE,
            },
            },
            {
#line 2398
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2398
            .heldItem = ITEM_BLACK_BELT,
#line 2401
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2399
            .ability = ABILITY_GUTS,
#line 2400
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2402
                MOVE_REVENGE,
                MOVE_SEISMIC_TOSS,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 2407
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2407
            .heldItem = ITEM_SITRUS_BERRY,
#line 2410
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2408
            .ability = ABILITY_MERCILESS,
#line 2409
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2411
                MOVE_VENOSHOCK,
                MOVE_POISON_FANG,
                MOVE_THIEF,
                MOVE_GLARE,
            },
            },
        },
    },
#line 2416
    [TRAINER_PBL_COOPER] =
    {
#line 2417
        .trainerName = _("STEVEN"),
#line 2418
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2419
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2421
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2423
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2427
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2426
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2425
            .lvl = 42,
#line 2424
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2428
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2433
    [TRAINER_PBL_CARMINE] =
    {
#line 2434
        .trainerName = _("STEVEN"),
#line 2435
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2436
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2438
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2440
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2444
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2443
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2442
            .lvl = 42,
#line 2441
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2445
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2450
    [TRAINER_PBL_ARI] =
    {
#line 2451
        .trainerName = _("STEVEN"),
#line 2452
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2453
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2455
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2457
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2461
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2460
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2459
            .lvl = 42,
#line 2458
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2462
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2467
    [TRAINER_PBL_BERTHA] =
    {
#line 2468
        .trainerName = _("STEVEN"),
#line 2469
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2470
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2472
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2474
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2478
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2477
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2476
            .lvl = 42,
#line 2475
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2479
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2484
    [TRAINER_PBL_CASSANDRA] =
    {
#line 2485
        .trainerName = _("STEVEN"),
#line 2486
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2487
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2489
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2491
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2495
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2494
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2493
            .lvl = 42,
#line 2492
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2496
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2501
    [TRAINER_PBL_DOMINIC] =
    {
#line 2502
        .trainerName = _("STEVEN"),
#line 2503
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2504
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2506
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2508
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2512
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2511
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2510
            .lvl = 42,
#line 2509
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2513
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2518
    [TRAINER_PBL_ERICA] =
    {
#line 2519
        .trainerName = _("STEVEN"),
#line 2520
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2521
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2523
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2525
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2529
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2528
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2527
            .lvl = 42,
#line 2526
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2530
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2535
    [TRAINER_PBL_KYLE] =
    {
#line 2536
        .trainerName = _("STEVEN"),
#line 2537
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2538
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2540
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2542
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2546
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2545
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2544
            .lvl = 42,
#line 2543
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2547
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2552
    [TRAINER_PBL_BELLE] =
    {
#line 2553
        .trainerName = _("STEVEN"),
#line 2554
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2555
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2557
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2559
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2563
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2562
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2561
            .lvl = 42,
#line 2560
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2564
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2569
    [TRAINER_PBL_DEWEY] =
    {
#line 2570
        .trainerName = _("STEVEN"),
#line 2571
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2572
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2574
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2576
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2580
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2579
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2578
            .lvl = 42,
#line 2577
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2581
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2586
    [TRAINER_PBL_PEARLIE] =
    {
#line 2587
        .trainerName = _("STEVEN"),
#line 2588
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2589
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2591
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2593
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2597
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2596
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2595
            .lvl = 42,
#line 2594
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2598
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2603
    [TRAINER_PBL_ERNEST] =
    {
#line 2604
        .trainerName = _("STEVEN"),
#line 2605
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2606
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2608
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2610
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2614
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2613
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2612
            .lvl = 42,
#line 2611
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2615
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2620
    [TRAINER_PBL_ALANA] =
    {
#line 2621
        .trainerName = _("STEVEN"),
#line 2622
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2623
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2625
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2627
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2631
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2630
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2629
            .lvl = 42,
#line 2628
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2632
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2637
    [TRAINER_PBL_SUSAN] =
    {
#line 2638
        .trainerName = _("STEVEN"),
#line 2639
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2640
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2642
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2644
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2648
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2647
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2646
            .lvl = 42,
#line 2645
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2649
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2654
    [TRAINER_PBL_CONRAD] =
    {
#line 2655
        .trainerName = _("STEVEN"),
#line 2656
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2657
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2659
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2661
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2665
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2664
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2663
            .lvl = 42,
#line 2662
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2666
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2671
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9] =
    {
#line 2672
        .trainerName = _("STEVEN"),
#line 2673
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2674
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2676
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2678
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2682
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2681
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2680
            .lvl = 42,
#line 2679
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2683
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2688
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9_BRUTAL] =
    {
#line 2689
        .trainerName = _("STEVEN"),
#line 2690
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2691
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2693
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2695
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2699
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2698
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2697
            .lvl = 42,
#line 2696
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2700
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2705
    [TRAINER_PBL_JEANETTE] =
    {
#line 2706
        .trainerName = _("STEVEN"),
#line 2707
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2708
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2710
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2712
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2716
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2715
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2714
            .lvl = 42,
#line 2713
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2717
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2722
    [TRAINER_PBL_EMMA_AND_LEO] =
    {
#line 2723
        .trainerName = _("STEVEN"),
#line 2724
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2725
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2727
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2729
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2733
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2732
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2731
            .lvl = 42,
#line 2730
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2734
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2739
    [TRAINER_PBL_JOEL] =
    {
#line 2740
        .trainerName = _("STEVEN"),
#line 2741
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2742
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2744
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2746
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2750
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2749
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2748
            .lvl = 42,
#line 2747
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2751
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2756
    [TRAINER_PBL_MARION] =
    {
#line 2757
        .trainerName = _("STEVEN"),
#line 2758
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2759
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2761
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2763
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2767
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2766
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2765
            .lvl = 42,
#line 2764
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2768
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2773
    [TRAINER_PBL_REGINA] =
    {
#line 2774
        .trainerName = _("STEVEN"),
#line 2775
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2776
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2778
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2780
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2784
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2783
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2782
            .lvl = 42,
#line 2781
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2785
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2790
    [TRAINER_PBL_NEWTON_LEVIATHAN_10] =
    {
#line 2791
        .trainerName = _("STEVEN"),
#line 2792
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2793
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2795
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2797
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2801
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2800
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2799
            .lvl = 42,
#line 2798
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2802
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2807
    [TRAINER_PBL_NEWTON_LEVIATHAN_10_BRUTAL] =
    {
#line 2808
        .trainerName = _("STEVEN"),
#line 2809
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2810
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2812
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2814
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2818
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2817
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2816
            .lvl = 42,
#line 2815
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2819
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2824
    [TRAINER_PBL_ESSENCE] =
    {
#line 2825
        .trainerName = _("STEVEN"),
#line 2826
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2827
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2829
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2831
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2835
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2834
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2833
            .lvl = 42,
#line 2832
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2836
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2841
    [TRAINER_PBL_DOLORES] =
    {
#line 2842
        .trainerName = _("STEVEN"),
#line 2843
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2844
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2846
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2848
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2852
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2851
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2850
            .lvl = 42,
#line 2849
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2853
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2858
    [TRAINER_PBL_JULIE] =
    {
#line 2859
        .trainerName = _("STEVEN"),
#line 2860
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2861
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2863
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2865
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2869
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2868
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2867
            .lvl = 42,
#line 2866
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2870
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2875
    [TRAINER_PBL_ROMULUS] =
    {
#line 2876
        .trainerName = _("STEVEN"),
#line 2877
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2878
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2880
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2882
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2886
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2885
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2884
            .lvl = 42,
#line 2883
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2887
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2892
    [TRAINER_PBL_TREVOR] =
    {
#line 2893
        .trainerName = _("STEVEN"),
#line 2894
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2895
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2897
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2899
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2903
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2902
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2901
            .lvl = 42,
#line 2900
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2904
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2909
    [TRAINER_PBL_FEDERICO] =
    {
#line 2910
        .trainerName = _("STEVEN"),
#line 2911
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2912
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2914
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2916
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2920
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2919
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2918
            .lvl = 42,
#line 2917
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2921
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2926
    [TRAINER_PBL_GENIE] =
    {
#line 2927
        .trainerName = _("STEVEN"),
#line 2928
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2929
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2931
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2933
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2937
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2936
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2935
            .lvl = 42,
#line 2934
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2938
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2943
    [TRAINER_PBL_HILDA] =
    {
#line 2944
        .trainerName = _("STEVEN"),
#line 2945
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2946
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2948
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2950
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2954
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2953
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2952
            .lvl = 42,
#line 2951
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2955
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2960
    [TRAINER_PBL_KINLEY] =
    {
#line 2961
        .trainerName = _("STEVEN"),
#line 2962
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2963
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2965
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2967
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2971
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2970
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2969
            .lvl = 42,
#line 2968
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2972
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2977
    [TRAINER_PBL_VIOLET] =
    {
#line 2978
        .trainerName = _("STEVEN"),
#line 2979
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2980
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2982
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2984
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2988
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2987
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2986
            .lvl = 42,
#line 2985
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2989
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2994
    [TRAINER_PBL_WANDA] =
    {
#line 2995
        .trainerName = _("STEVEN"),
#line 2996
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2997
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2999
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3001
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3005
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3004
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3003
            .lvl = 42,
#line 3002
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3006
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3011
    [TRAINER_PBL_AMBER_AND_KIM] =
    {
#line 3012
        .trainerName = _("STEVEN"),
#line 3013
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3014
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3016
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3018
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3022
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3021
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3020
            .lvl = 42,
#line 3019
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3023
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3028
    [TRAINER_PBL_JAN_AND_ERIN] =
    {
#line 3029
        .trainerName = _("STEVEN"),
#line 3030
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3031
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3033
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3035
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3039
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3038
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3037
            .lvl = 42,
#line 3036
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3040
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3045
    [TRAINER_PBL_STEVE] =
    {
#line 3046
        .trainerName = _("STEVEN"),
#line 3047
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3048
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3050
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3052
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3056
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3055
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3054
            .lvl = 42,
#line 3053
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3057
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3062
    [TRAINER_PBL_GOULD] =
    {
#line 3063
        .trainerName = _("STEVEN"),
#line 3064
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3065
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3067
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3069
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3073
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3072
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3071
            .lvl = 42,
#line 3070
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3074
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3079
    [TRAINER_PBL_MENDEL] =
    {
#line 3080
        .trainerName = _("STEVEN"),
#line 3081
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3082
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3084
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3086
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3090
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3089
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3088
            .lvl = 42,
#line 3087
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3091
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3096
    [TRAINER_PBL_DARWIN] =
    {
#line 3097
        .trainerName = _("STEVEN"),
#line 3098
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3099
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3101
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3103
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3107
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3106
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3105
            .lvl = 42,
#line 3104
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3108
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3113
    [TRAINER_PBL_JENNY_LEVIATHAN_11] =
    {
#line 3114
        .trainerName = _("STEVEN"),
#line 3115
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3116
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3118
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3120
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3124
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3123
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3122
            .lvl = 42,
#line 3121
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3125
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3130
    [TRAINER_PBL_JENNY_LEVIATHAN_11_BRUTAL] =
    {
#line 3131
        .trainerName = _("STEVEN"),
#line 3132
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3133
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3135
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3137
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3141
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3140
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3139
            .lvl = 42,
#line 3138
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3142
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3147
    [TRAINER_PBL_BART] =
    {
#line 3148
        .trainerName = _("STEVEN"),
#line 3149
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3150
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3152
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3154
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3158
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3157
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3156
            .lvl = 42,
#line 3155
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3159
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3164
    [TRAINER_PBL_NIGEL] =
    {
#line 3165
        .trainerName = _("STEVEN"),
#line 3166
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3167
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3169
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3171
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3175
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3174
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3173
            .lvl = 42,
#line 3172
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3176
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3181
    [TRAINER_PBL_LOLA] =
    {
#line 3182
        .trainerName = _("STEVEN"),
#line 3183
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3184
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3186
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3188
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3192
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3191
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3190
            .lvl = 42,
#line 3189
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3193
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3198
    [TRAINER_PBL_CHARLIE] =
    {
#line 3199
        .trainerName = _("STEVEN"),
#line 3200
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3201
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3203
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3205
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3209
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3208
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3207
            .lvl = 42,
#line 3206
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3210
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3215
    [TRAINER_PBL_RANDOLPH] =
    {
#line 3216
        .trainerName = _("STEVEN"),
#line 3217
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3218
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3220
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3222
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3226
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3225
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3224
            .lvl = 42,
#line 3223
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3227
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3232
    [TRAINER_PBL_TODD] =
    {
#line 3233
        .trainerName = _("STEVEN"),
#line 3234
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3235
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3237
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3239
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3243
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3242
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3241
            .lvl = 42,
#line 3240
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3244
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3249
    [TRAINER_PBL_RUSSELL] =
    {
#line 3250
        .trainerName = _("STEVEN"),
#line 3251
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3252
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3254
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3256
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3260
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3259
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3258
            .lvl = 42,
#line 3257
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3261
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3266
    [TRAINER_PBL_OTIS] =
    {
#line 3267
        .trainerName = _("STEVEN"),
#line 3268
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3269
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3271
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3273
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3277
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3276
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3275
            .lvl = 42,
#line 3274
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3278
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3283
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12] =
    {
#line 3284
        .trainerName = _("STEVEN"),
#line 3285
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3286
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3288
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3290
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3294
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3293
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3292
            .lvl = 42,
#line 3291
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3295
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3300
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12_BRUTAL] =
    {
#line 3301
        .trainerName = _("STEVEN"),
#line 3302
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3303
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3305
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3307
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3311
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3310
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3309
            .lvl = 42,
#line 3308
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3312
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3317
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13] =
    {
#line 3318
        .trainerName = _("STEVEN"),
#line 3319
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3320
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3322
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3324
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3328
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3327
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3326
            .lvl = 42,
#line 3325
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3329
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3334
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13_BRUTAL] =
    {
#line 3335
        .trainerName = _("STEVEN"),
#line 3336
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3337
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3339
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3341
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3345
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3344
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3343
            .lvl = 42,
#line 3342
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3346
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3351
    [TRAINER_PBL_IONA] =
    {
#line 3352
        .trainerName = _("STEVEN"),
#line 3353
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3354
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3356
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3358
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3362
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3361
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3360
            .lvl = 42,
#line 3359
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3363
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3368
    [TRAINER_PBL_BERKE] =
    {
#line 3369
        .trainerName = _("STEVEN"),
#line 3370
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3371
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3373
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3375
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3379
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3378
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3377
            .lvl = 42,
#line 3376
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3380
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3385
    [TRAINER_PBL_TANISHA] =
    {
#line 3386
        .trainerName = _("STEVEN"),
#line 3387
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3388
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3390
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3392
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3396
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3395
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3394
            .lvl = 42,
#line 3393
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3397
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3402
    [TRAINER_PBL_ROBERT] =
    {
#line 3403
        .trainerName = _("STEVEN"),
#line 3404
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3405
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3407
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3409
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3413
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3412
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3411
            .lvl = 42,
#line 3410
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3414
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3419
    [TRAINER_PBL_CHRIS] =
    {
#line 3420
        .trainerName = _("STEVEN"),
#line 3421
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3422
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3424
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3426
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3430
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3429
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3428
            .lvl = 42,
#line 3427
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3431
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3436
    [TRAINER_PBL_ANGUS] =
    {
#line 3437
        .trainerName = _("STEVEN"),
#line 3438
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3439
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3441
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3443
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3447
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3446
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3445
            .lvl = 42,
#line 3444
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3448
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3453
    [TRAINER_PBL_LILY_LEVIATHAN_14] =
    {
#line 3454
        .trainerName = _("STEVEN"),
#line 3455
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3456
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3458
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3460
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3464
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3463
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3462
            .lvl = 42,
#line 3461
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3465
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3470
    [TRAINER_PBL_LILY_LEVIATHAN_14_BRUTAL] =
    {
#line 3471
        .trainerName = _("STEVEN"),
#line 3472
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3473
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3475
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3477
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3481
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3480
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3479
            .lvl = 42,
#line 3478
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3482
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3487
    [TRAINER_PBL_AXLE] =
    {
#line 3488
        .trainerName = _("STEVEN"),
#line 3489
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3490
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3492
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3494
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3498
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3497
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3496
            .lvl = 42,
#line 3495
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3499
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3504
    [TRAINER_PBL_RAFAEL] =
    {
#line 3505
        .trainerName = _("STEVEN"),
#line 3506
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3507
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3509
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3511
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3515
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3514
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3513
            .lvl = 42,
#line 3512
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3516
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3521
    [TRAINER_PBL_GEORGINA] =
    {
#line 3522
        .trainerName = _("STEVEN"),
#line 3523
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3524
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3526
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3528
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3532
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3531
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3530
            .lvl = 42,
#line 3529
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3533
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3538
    [TRAINER_PBL_MIA_LEVIATHAN_15] =
    {
#line 3539
        .trainerName = _("STEVEN"),
#line 3540
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3541
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3543
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3545
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3549
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3548
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3547
            .lvl = 42,
#line 3546
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3550
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3555
    [TRAINER_PBL_MIA_LEVIATHAN_15_BRUTAL] =
    {
#line 3556
        .trainerName = _("STEVEN"),
#line 3557
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3558
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3560
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3562
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3566
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3565
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3564
            .lvl = 42,
#line 3563
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3567
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3572
    [TRAINER_PBL_DORIS] =
    {
#line 3573
        .trainerName = _("STEVEN"),
#line 3574
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3575
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3577
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3579
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3583
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3582
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3581
            .lvl = 42,
#line 3580
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3584
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3589
    [TRAINER_PBL_HOMER] =
    {
#line 3590
        .trainerName = _("STEVEN"),
#line 3591
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3592
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3594
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3596
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3600
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3599
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3598
            .lvl = 42,
#line 3597
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3601
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3606
    [TRAINER_PBL_JOHN] =
    {
#line 3607
        .trainerName = _("STEVEN"),
#line 3608
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3609
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3611
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3613
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3617
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3616
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3615
            .lvl = 42,
#line 3614
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3618
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3623
    [TRAINER_PBL_GLENN] =
    {
#line 3624
        .trainerName = _("STEVEN"),
#line 3625
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3626
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3628
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3630
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3634
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3633
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3632
            .lvl = 42,
#line 3631
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3635
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3640
    [TRAINER_PBL_JAY] =
    {
#line 3641
        .trainerName = _("STEVEN"),
#line 3642
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3643
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3645
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3647
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3651
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3650
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3649
            .lvl = 42,
#line 3648
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3652
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3657
    [TRAINER_PBL_TYLER] =
    {
#line 3658
        .trainerName = _("STEVEN"),
#line 3659
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3660
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3662
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3664
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3668
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3667
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3666
            .lvl = 42,
#line 3665
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3669
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3674
    [TRAINER_PBL_TERRENCE] =
    {
#line 3675
        .trainerName = _("STEVEN"),
#line 3676
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3677
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3679
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3681
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3685
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3684
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3683
            .lvl = 42,
#line 3682
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3686
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3691
    [TRAINER_PBL_MARTY] =
    {
#line 3692
        .trainerName = _("STEVEN"),
#line 3693
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3694
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3696
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3698
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3702
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3701
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3700
            .lvl = 42,
#line 3699
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3703
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3708
    [TRAINER_PBL_KARI] =
    {
#line 3709
        .trainerName = _("STEVEN"),
#line 3710
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3711
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3713
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3715
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3719
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3718
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3717
            .lvl = 42,
#line 3716
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3720
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3725
    [TRAINER_PBL_ABRAHAM] =
    {
#line 3726
        .trainerName = _("STEVEN"),
#line 3727
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3728
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3730
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3732
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3736
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3735
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3734
            .lvl = 42,
#line 3733
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3737
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3742
    [TRAINER_PBL_MELINDA] =
    {
#line 3743
        .trainerName = _("STEVEN"),
#line 3744
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3745
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3747
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3749
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3753
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3752
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3751
            .lvl = 42,
#line 3750
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3754
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3759
    [TRAINER_PBL_EMILIO] =
    {
#line 3760
        .trainerName = _("STEVEN"),
#line 3761
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3762
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3764
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3766
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3770
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3769
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3768
            .lvl = 42,
#line 3767
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3771
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3776
    [TRAINER_PBL_REX] =
    {
#line 3777
        .trainerName = _("STEVEN"),
#line 3778
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3779
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3781
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3783
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3787
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3786
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3785
            .lvl = 42,
#line 3784
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3788
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3793
    [TRAINER_PBL_LOUIS] =
    {
#line 3794
        .trainerName = _("STEVEN"),
#line 3795
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3796
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3798
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3800
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3804
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3803
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3802
            .lvl = 42,
#line 3801
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3805
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3810
    [TRAINER_PBL_LEROY] =
    {
#line 3811
        .trainerName = _("STEVEN"),
#line 3812
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3813
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3815
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3817
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3821
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3820
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3819
            .lvl = 42,
#line 3818
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3822
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3827
    [TRAINER_PBL_ELTON] =
    {
#line 3828
        .trainerName = _("STEVEN"),
#line 3829
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3830
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3832
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3834
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3838
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3837
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3836
            .lvl = 42,
#line 3835
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3839
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3844
    [TRAINER_PBL_WILLIE] =
    {
#line 3845
        .trainerName = _("STEVEN"),
#line 3846
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3847
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3849
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3851
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3855
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3854
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3853
            .lvl = 42,
#line 3852
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3856
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3861
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16] =
    {
#line 3862
        .trainerName = _("STEVEN"),
#line 3863
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3864
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3866
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3868
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3872
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3871
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3870
            .lvl = 42,
#line 3869
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3873
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3878
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16_BRUTAL] =
    {
#line 3879
        .trainerName = _("STEVEN"),
#line 3880
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3881
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3883
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3885
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3889
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3888
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3887
            .lvl = 42,
#line 3886
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3890
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3895
    [TRAINER_PBL_PIRATE_1] =
    {
#line 3896
        .trainerName = _("STEVEN"),
#line 3897
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3898
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3900
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3902
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3906
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3905
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3904
            .lvl = 42,
#line 3903
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3907
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3912
    [TRAINER_PBL_PIRATE_2] =
    {
#line 3913
        .trainerName = _("STEVEN"),
#line 3914
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3915
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3917
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3919
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3923
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3922
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3921
            .lvl = 42,
#line 3920
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3924
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3929
    [TRAINER_PBL_PIRATE_3] =
    {
#line 3930
        .trainerName = _("STEVEN"),
#line 3931
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3932
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3934
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3936
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3940
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3939
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3938
            .lvl = 42,
#line 3937
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3941
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3946
    [TRAINER_PBL_PIRATE_4] =
    {
#line 3947
        .trainerName = _("STEVEN"),
#line 3948
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3949
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3951
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3953
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3957
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3956
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3955
            .lvl = 42,
#line 3954
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3958
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3963
    [TRAINER_PBL_SHAWN] =
    {
#line 3964
        .trainerName = _("STEVEN"),
#line 3965
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3966
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3968
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3970
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3974
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3973
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3972
            .lvl = 42,
#line 3971
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3975
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3980
    [TRAINER_PBL_FERNANDO] =
    {
#line 3981
        .trainerName = _("STEVEN"),
#line 3982
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3983
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3985
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3987
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3991
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3990
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3989
            .lvl = 42,
#line 3988
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3992
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3997
    [TRAINER_PBL_KANE] =
    {
#line 3998
        .trainerName = _("STEVEN"),
#line 3999
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4000
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4002
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4004
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4008
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4007
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4006
            .lvl = 42,
#line 4005
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4009
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4014
    [TRAINER_PBL_KIRK] =
    {
#line 4015
        .trainerName = _("STEVEN"),
#line 4016
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4017
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4019
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4021
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4025
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4024
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4023
            .lvl = 42,
#line 4022
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4026
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4031
    [TRAINER_PBL_DALTON] =
    {
#line 4032
        .trainerName = _("STEVEN"),
#line 4033
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4034
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4036
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4038
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4042
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4041
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4040
            .lvl = 42,
#line 4039
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4043
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4048
    [TRAINER_PBL_LEE] =
    {
#line 4049
        .trainerName = _("STEVEN"),
#line 4050
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4051
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4053
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4055
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4059
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4058
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4057
            .lvl = 42,
#line 4056
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4060
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4065
    [TRAINER_PBL_BLANCHE] =
    {
#line 4066
        .trainerName = _("STEVEN"),
#line 4067
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4068
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4070
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4072
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4076
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4075
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4074
            .lvl = 42,
#line 4073
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4077
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4082
    [TRAINER_PBL_TROY] =
    {
#line 4083
        .trainerName = _("STEVEN"),
#line 4084
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4085
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4087
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4089
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4093
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4092
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4091
            .lvl = 42,
#line 4090
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4094
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4099
    [TRAINER_PBL_ABED] =
    {
#line 4100
        .trainerName = _("STEVEN"),
#line 4101
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4102
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4104
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4106
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4110
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4109
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4108
            .lvl = 42,
#line 4107
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4111
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4116
    [TRAINER_PBL_TROY_BRUTAL] =
    {
#line 4117
        .trainerName = _("STEVEN"),
#line 4118
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4119
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4121
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4123
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4127
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4126
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4125
            .lvl = 42,
#line 4124
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4128
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4133
    [TRAINER_PBL_ABED_BRUTAL] =
    {
#line 4134
        .trainerName = _("STEVEN"),
#line 4135
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4136
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4138
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4140
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4144
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4143
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4142
            .lvl = 42,
#line 4141
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4145
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4150
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17] =
    {
#line 4151
        .trainerName = _("STEVEN"),
#line 4152
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4153
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4155
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4157
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4161
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4160
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4159
            .lvl = 42,
#line 4158
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4162
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4167
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17_BRUTAL] =
    {
#line 4168
        .trainerName = _("STEVEN"),
#line 4169
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4170
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4172
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4174
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4178
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4177
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4176
            .lvl = 42,
#line 4175
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4179
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4184
    [TRAINER_PBL_ANITA] =
    {
#line 4185
        .trainerName = _("STEVEN"),
#line 4186
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4187
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4189
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4191
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4195
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4194
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4193
            .lvl = 42,
#line 4192
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4196
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4201
    [TRAINER_PBL_DESIREE] =
    {
#line 4202
        .trainerName = _("STEVEN"),
#line 4203
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4204
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4206
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4208
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4212
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4211
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4210
            .lvl = 42,
#line 4209
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4213
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4218
    [TRAINER_PBL_HOWARD] =
    {
#line 4219
        .trainerName = _("STEVEN"),
#line 4220
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4221
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4223
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4225
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4229
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4228
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4227
            .lvl = 42,
#line 4226
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4230
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4235
    [TRAINER_PBL_ELOISE] =
    {
#line 4236
        .trainerName = _("STEVEN"),
#line 4237
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4238
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4240
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4242
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4246
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4245
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4244
            .lvl = 42,
#line 4243
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4247
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4252
    [TRAINER_PBL_ALLY_AND_EMMY] =
    {
#line 4253
        .trainerName = _("STEVEN"),
#line 4254
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4255
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4257
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4259
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4263
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4262
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4261
            .lvl = 42,
#line 4260
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4264
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4269
    [TRAINER_PBL_AMIR] =
    {
#line 4270
        .trainerName = _("STEVEN"),
#line 4271
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4272
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4274
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4276
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4280
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4279
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4278
            .lvl = 42,
#line 4277
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4281
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4286
    [TRAINER_PBL_GETHIN] =
    {
#line 4287
        .trainerName = _("STEVEN"),
#line 4288
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4289
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4291
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4293
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4297
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4296
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4295
            .lvl = 42,
#line 4294
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4298
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4303
    [TRAINER_PBL_BERNARD] =
    {
#line 4304
        .trainerName = _("STEVEN"),
#line 4305
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4306
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4308
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4310
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4314
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4313
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4312
            .lvl = 42,
#line 4311
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4315
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4320
    [TRAINER_PBL_ELLIE] =
    {
#line 4321
        .trainerName = _("STEVEN"),
#line 4322
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4323
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4325
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4327
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4331
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4330
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4329
            .lvl = 42,
#line 4328
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4332
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4337
    [TRAINER_PBL_RUSTY] =
    {
#line 4338
        .trainerName = _("STEVEN"),
#line 4339
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4340
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4342
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4344
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4348
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4347
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4346
            .lvl = 42,
#line 4345
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4349
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4354
    [TRAINER_PBL_CODY] =
    {
#line 4355
        .trainerName = _("STEVEN"),
#line 4356
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4357
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4359
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4361
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4365
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4364
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4363
            .lvl = 42,
#line 4362
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4366
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4371
    [TRAINER_PBL_LEWIS] =
    {
#line 4372
        .trainerName = _("STEVEN"),
#line 4373
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4374
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4376
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4378
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4382
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4381
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4380
            .lvl = 42,
#line 4379
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4383
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4388
    [TRAINER_PBL_CORNELIUS] =
    {
#line 4389
        .trainerName = _("STEVEN"),
#line 4390
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4391
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4393
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4395
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4399
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4398
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4397
            .lvl = 42,
#line 4396
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4400
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4405
    [TRAINER_PBL_INEZ_AND_EMMA] =
    {
#line 4406
        .trainerName = _("STEVEN"),
#line 4407
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4408
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4410
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4412
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4416
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4415
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4414
            .lvl = 42,
#line 4413
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4417
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4422
    [TRAINER_PBL_HELEN] =
    {
#line 4423
        .trainerName = _("STEVEN"),
#line 4424
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4425
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4427
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4429
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4433
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4432
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4431
            .lvl = 42,
#line 4430
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4434
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4439
    [TRAINER_PBL_WESLEY] =
    {
#line 4440
        .trainerName = _("STEVEN"),
#line 4441
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4442
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4444
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4446
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4450
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4449
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4448
            .lvl = 42,
#line 4447
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4451
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4456
    [TRAINER_PBL_ALFREDO] =
    {
#line 4457
        .trainerName = _("STEVEN"),
#line 4458
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4459
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4461
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4463
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4467
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4466
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4465
            .lvl = 42,
#line 4464
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4468
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4473
    [TRAINER_PBL_IAN] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4480
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4484
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4483
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4482
            .lvl = 42,
#line 4481
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4485
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4490
    [TRAINER_PBL_AUDREY] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4497
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4501
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4500
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4499
            .lvl = 42,
#line 4498
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4502
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4507
    [TRAINER_PBL_LEVIATHAN13] =
    {
#line 4508
        .trainerName = _("STEVEN"),
#line 4509
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4510
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4512
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4514
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4518
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4517
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4516
            .lvl = 42,
#line 4515
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4519
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4524
    [TRAINER_PBL_EDGARDO] =
    {
#line 4525
        .trainerName = _("STEVEN"),
#line 4526
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4527
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4529
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4531
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4535
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4534
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4533
            .lvl = 42,
#line 4532
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4536
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4541
    [TRAINER_PBL_JEAN] =
    {
#line 4542
        .trainerName = _("STEVEN"),
#line 4543
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4544
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4546
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4548
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4552
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4551
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4550
            .lvl = 42,
#line 4549
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4553
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4558
    [TRAINER_PBL_ROSE] =
    {
#line 4559
        .trainerName = _("STEVEN"),
#line 4560
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4561
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4563
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4565
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4569
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4568
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4567
            .lvl = 42,
#line 4566
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4570
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4575
    [TRAINER_PBL_JENNIFER] =
    {
#line 4576
        .trainerName = _("STEVEN"),
#line 4577
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4578
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4580
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4582
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4586
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4585
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4584
            .lvl = 42,
#line 4583
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4587
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4592
    [TRAINER_PBL_MATTHEW] =
    {
#line 4593
        .trainerName = _("STEVEN"),
#line 4594
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4595
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4597
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4599
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4603
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4602
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4601
            .lvl = 42,
#line 4600
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4604
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4609
    [TRAINER_PBL_KERRY] =
    {
#line 4610
        .trainerName = _("STEVEN"),
#line 4611
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4612
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4614
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4616
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4620
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4619
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4618
            .lvl = 42,
#line 4617
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4621
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4626
    [TRAINER_PBL_ANNIE] =
    {
#line 4627
        .trainerName = _("STEVEN"),
#line 4628
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4629
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4631
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4633
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4637
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4636
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4635
            .lvl = 42,
#line 4634
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4638
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4643
    [TRAINER_PBL_CHRISTI] =
    {
#line 4644
        .trainerName = _("STEVEN"),
#line 4645
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4646
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4648
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4650
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4654
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4653
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4652
            .lvl = 42,
#line 4651
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4655
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4660
    [TRAINER_PBL_SPENCER] =
    {
#line 4661
        .trainerName = _("STEVEN"),
#line 4662
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4663
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4665
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4667
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4671
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4670
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4669
            .lvl = 42,
#line 4668
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4672
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4677
    [TRAINER_PBL_HAYWOOD] =
    {
#line 4678
        .trainerName = _("STEVEN"),
#line 4679
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4680
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4682
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4684
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4688
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4687
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4686
            .lvl = 42,
#line 4685
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4689
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4694
    [TRAINER_PBL_MONROE] =
    {
#line 4695
        .trainerName = _("STEVEN"),
#line 4696
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4697
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4699
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4701
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4705
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4704
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4703
            .lvl = 42,
#line 4702
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4706
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4711
    [TRAINER_PBL_DAVID] =
    {
#line 4712
        .trainerName = _("STEVEN"),
#line 4713
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4714
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4716
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4718
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4722
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4721
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4720
            .lvl = 42,
#line 4719
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4723
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4728
    [TRAINER_PBL_DOMINIK] =
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
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4738
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_DOUGLAS] =
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
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4755
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_NADINE] =
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
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4772
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_SANDY] =
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
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4789
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_SHELDON] =
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
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4806
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_LEVIATHAN14] =
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
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4823
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_LEVIATHAN12_BRUTAL] =
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
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4840
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_LEVIATHAN13_BRUTAL] =
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
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4857
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_LEVIATHAN14_BRUTAL] =
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
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4874
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    [TRAINER_PBL_LEVIATHAN12] =
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
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4891
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
