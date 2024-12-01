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
    [TRAINER_PBL_MIRAGE_LEVIATHAN_8] =
    {
#line 2300
        .trainerName = _("STEVEN"),
#line 2301
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2302
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2304
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2306
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2306
            .heldItem = ITEM_POISON_BARB,
#line 2309
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2307
            .ability = ABILITY_POISON_TOUCH,
#line 2308
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2310
                MOVE_SLUDGE,
                MOVE_ACID_SPRAY,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2315
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2315
            .heldItem = ITEM_SHARP_BEAK,
#line 2318
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2316
            .ability = ABILITY_AFTERMATH,
#line 2317
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2319
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_DEFOG,
            },
            },
            {
#line 2324
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2324
            .heldItem = ITEM_SITRUS_BERRY,
#line 2327
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2325
            .ability = ABILITY_POISON_TOUCH,
#line 2326
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2328
                MOVE_VENOSHOCK,
                MOVE_VACUUM_WAVE,
                MOVE_FAKE_OUT,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 2333
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2333
            .heldItem = ITEM_SITRUS_BERRY,
#line 2336
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2334
            .ability = ABILITY_STRONG_JAW,
#line 2335
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2337
                MOVE_BITE,
                MOVE_HOWL,
                MOVE_ICE_FANG,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 2342
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2342
            .heldItem = ITEM_BLACK_BELT,
#line 2345
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2343
            .ability = ABILITY_GUTS,
#line 2344
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2346
                MOVE_REVENGE,
                MOVE_SEISMIC_TOSS,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 2351
    [TRAINER_PBL_MIRAGE_LEVIATHAN_8_BRUTAL] =
    {
#line 2352
        .trainerName = _("STEVEN"),
#line 2353
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2354
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2356
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2358
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2362
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2361
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2360
            .lvl = 42,
#line 2359
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2363
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2368
    [TRAINER_PBL_WALLY_ZONE8D] =
    {
#line 2369
        .trainerName = _("STEVEN"),
#line 2370
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2371
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2373
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2375
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2379
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2378
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2377
            .lvl = 42,
#line 2376
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2380
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2385
    [TRAINER_PBL_COOPER] =
    {
#line 2386
        .trainerName = _("STEVEN"),
#line 2387
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2388
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2390
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2392
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2396
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2395
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2394
            .lvl = 42,
#line 2393
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2397
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2402
    [TRAINER_PBL_CARMINE] =
    {
#line 2403
        .trainerName = _("STEVEN"),
#line 2404
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2405
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2407
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2409
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2413
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2412
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2411
            .lvl = 42,
#line 2410
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2414
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2419
    [TRAINER_PBL_ARI] =
    {
#line 2420
        .trainerName = _("STEVEN"),
#line 2421
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2422
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2424
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2426
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2430
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2429
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2428
            .lvl = 42,
#line 2427
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2431
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2436
    [TRAINER_PBL_BERTHA] =
    {
#line 2437
        .trainerName = _("STEVEN"),
#line 2438
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2439
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2441
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2443
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2447
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2446
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2445
            .lvl = 42,
#line 2444
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2448
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2453
    [TRAINER_PBL_CASSANDRA] =
    {
#line 2454
        .trainerName = _("STEVEN"),
#line 2455
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2456
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2458
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2460
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2464
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2463
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2462
            .lvl = 42,
#line 2461
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2465
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2470
    [TRAINER_PBL_DOMINIC] =
    {
#line 2471
        .trainerName = _("STEVEN"),
#line 2472
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2473
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2475
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2477
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2481
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2480
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2479
            .lvl = 42,
#line 2478
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2482
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2487
    [TRAINER_PBL_ERICA] =
    {
#line 2488
        .trainerName = _("STEVEN"),
#line 2489
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2490
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2492
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2494
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2498
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2497
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2496
            .lvl = 42,
#line 2495
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2499
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2504
    [TRAINER_PBL_KYLE] =
    {
#line 2505
        .trainerName = _("STEVEN"),
#line 2506
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2507
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2509
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2511
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2515
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2514
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2513
            .lvl = 42,
#line 2512
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2516
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2521
    [TRAINER_PBL_BELLE] =
    {
#line 2522
        .trainerName = _("STEVEN"),
#line 2523
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2524
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2526
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2528
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2532
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2531
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2530
            .lvl = 42,
#line 2529
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2533
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2538
    [TRAINER_PBL_DEWEY] =
    {
#line 2539
        .trainerName = _("STEVEN"),
#line 2540
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2541
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2543
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2545
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2549
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2548
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2547
            .lvl = 42,
#line 2546
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2550
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2555
    [TRAINER_PBL_PEARLIE] =
    {
#line 2556
        .trainerName = _("STEVEN"),
#line 2557
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2558
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2560
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2562
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2566
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2565
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2564
            .lvl = 42,
#line 2563
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2567
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2572
    [TRAINER_PBL_ERNEST] =
    {
#line 2573
        .trainerName = _("STEVEN"),
#line 2574
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2575
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2577
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2579
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2583
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2582
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2581
            .lvl = 42,
#line 2580
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2584
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2589
    [TRAINER_PBL_ALANA] =
    {
#line 2590
        .trainerName = _("STEVEN"),
#line 2591
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2592
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2594
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2596
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2600
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2599
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2598
            .lvl = 42,
#line 2597
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2601
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2606
    [TRAINER_PBL_SUSAN] =
    {
#line 2607
        .trainerName = _("STEVEN"),
#line 2608
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2609
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2611
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2613
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2617
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2616
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2615
            .lvl = 42,
#line 2614
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2618
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2623
    [TRAINER_PBL_CONRAD] =
    {
#line 2624
        .trainerName = _("STEVEN"),
#line 2625
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2626
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2628
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2630
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2634
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2633
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2632
            .lvl = 42,
#line 2631
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2635
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2640
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9] =
    {
#line 2641
        .trainerName = _("STEVEN"),
#line 2642
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2643
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2645
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2647
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2651
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2650
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2649
            .lvl = 42,
#line 2648
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2652
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2657
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9_BRUTAL] =
    {
#line 2658
        .trainerName = _("STEVEN"),
#line 2659
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2660
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2662
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2664
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2668
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2667
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2666
            .lvl = 42,
#line 2665
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2669
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2674
    [TRAINER_PBL_JEANETTE] =
    {
#line 2675
        .trainerName = _("STEVEN"),
#line 2676
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2677
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2679
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2681
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2685
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2684
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2683
            .lvl = 42,
#line 2682
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2686
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2691
    [TRAINER_PBL_EMMA_AND_LEO] =
    {
#line 2692
        .trainerName = _("STEVEN"),
#line 2693
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2694
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2696
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2698
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2702
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2701
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2700
            .lvl = 42,
#line 2699
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2703
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2708
    [TRAINER_PBL_JOEL] =
    {
#line 2709
        .trainerName = _("STEVEN"),
#line 2710
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2711
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2713
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2715
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2719
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2718
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2717
            .lvl = 42,
#line 2716
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2720
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2725
    [TRAINER_PBL_MARION] =
    {
#line 2726
        .trainerName = _("STEVEN"),
#line 2727
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2728
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2730
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2732
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2736
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2735
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2734
            .lvl = 42,
#line 2733
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2737
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2742
    [TRAINER_PBL_REGINA] =
    {
#line 2743
        .trainerName = _("STEVEN"),
#line 2744
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2745
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2747
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2749
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2753
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2752
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2751
            .lvl = 42,
#line 2750
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2754
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2759
    [TRAINER_PBL_NEWTON_LEVIATHAN_10] =
    {
#line 2760
        .trainerName = _("STEVEN"),
#line 2761
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2762
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2764
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2766
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2770
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2769
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2768
            .lvl = 42,
#line 2767
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2771
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2776
    [TRAINER_PBL_NEWTON_LEVIATHAN_10_BRUTAL] =
    {
#line 2777
        .trainerName = _("STEVEN"),
#line 2778
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2779
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2781
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2783
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2787
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2786
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2785
            .lvl = 42,
#line 2784
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2788
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2793
    [TRAINER_PBL_ESSENCE] =
    {
#line 2794
        .trainerName = _("STEVEN"),
#line 2795
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2796
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2798
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2800
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2804
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2803
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2802
            .lvl = 42,
#line 2801
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2805
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2810
    [TRAINER_PBL_DOLORES] =
    {
#line 2811
        .trainerName = _("STEVEN"),
#line 2812
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2813
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2815
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2817
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2821
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2820
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2819
            .lvl = 42,
#line 2818
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2822
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2827
    [TRAINER_PBL_JULIE] =
    {
#line 2828
        .trainerName = _("STEVEN"),
#line 2829
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2830
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2832
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2834
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2838
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2837
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2836
            .lvl = 42,
#line 2835
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2839
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2844
    [TRAINER_PBL_ROMULUS] =
    {
#line 2845
        .trainerName = _("STEVEN"),
#line 2846
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2847
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2849
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2851
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2855
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2854
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2853
            .lvl = 42,
#line 2852
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2856
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2861
    [TRAINER_PBL_TREVOR] =
    {
#line 2862
        .trainerName = _("STEVEN"),
#line 2863
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2864
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2866
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2868
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2872
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2871
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2870
            .lvl = 42,
#line 2869
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2873
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2878
    [TRAINER_PBL_FEDERICO] =
    {
#line 2879
        .trainerName = _("STEVEN"),
#line 2880
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2881
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2883
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2885
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2889
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2888
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2887
            .lvl = 42,
#line 2886
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2890
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2895
    [TRAINER_PBL_GENIE] =
    {
#line 2896
        .trainerName = _("STEVEN"),
#line 2897
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2898
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2900
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2902
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2906
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2905
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2904
            .lvl = 42,
#line 2903
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2907
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2912
    [TRAINER_PBL_HILDA] =
    {
#line 2913
        .trainerName = _("STEVEN"),
#line 2914
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2915
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2917
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2919
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2923
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2922
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2921
            .lvl = 42,
#line 2920
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2924
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2929
    [TRAINER_PBL_KINLEY] =
    {
#line 2930
        .trainerName = _("STEVEN"),
#line 2931
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2932
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2934
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2936
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2940
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2939
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2938
            .lvl = 42,
#line 2937
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2941
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2946
    [TRAINER_PBL_VIOLET] =
    {
#line 2947
        .trainerName = _("STEVEN"),
#line 2948
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2949
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2951
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2953
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2957
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2956
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2955
            .lvl = 42,
#line 2954
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2958
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2963
    [TRAINER_PBL_WANDA] =
    {
#line 2964
        .trainerName = _("STEVEN"),
#line 2965
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2966
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2968
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2970
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2974
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2973
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2972
            .lvl = 42,
#line 2971
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2975
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2980
    [TRAINER_PBL_AMBER_AND_KIM] =
    {
#line 2981
        .trainerName = _("STEVEN"),
#line 2982
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2983
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2985
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2987
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2991
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2990
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2989
            .lvl = 42,
#line 2988
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2992
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2997
    [TRAINER_PBL_JAN_AND_ERIN] =
    {
#line 2998
        .trainerName = _("STEVEN"),
#line 2999
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3000
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3002
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3004
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3008
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3007
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3006
            .lvl = 42,
#line 3005
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3009
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3014
    [TRAINER_PBL_STEVE] =
    {
#line 3015
        .trainerName = _("STEVEN"),
#line 3016
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3017
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3019
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3021
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3025
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3024
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3023
            .lvl = 42,
#line 3022
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3026
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3031
    [TRAINER_PBL_GOULD] =
    {
#line 3032
        .trainerName = _("STEVEN"),
#line 3033
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3034
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3036
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3038
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3042
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3041
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3040
            .lvl = 42,
#line 3039
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3043
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3048
    [TRAINER_PBL_MENDEL] =
    {
#line 3049
        .trainerName = _("STEVEN"),
#line 3050
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3051
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3053
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3055
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3059
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3058
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3057
            .lvl = 42,
#line 3056
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3060
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3065
    [TRAINER_PBL_DARWIN] =
    {
#line 3066
        .trainerName = _("STEVEN"),
#line 3067
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3068
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3070
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3072
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3076
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3075
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3074
            .lvl = 42,
#line 3073
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3077
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3082
    [TRAINER_PBL_JENNY_LEVIATHAN_11] =
    {
#line 3083
        .trainerName = _("STEVEN"),
#line 3084
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3085
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3087
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3089
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3093
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3092
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3091
            .lvl = 42,
#line 3090
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3094
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3099
    [TRAINER_PBL_JENNY_LEVIATHAN_11_BRUTAL] =
    {
#line 3100
        .trainerName = _("STEVEN"),
#line 3101
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3102
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3104
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3106
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3110
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3109
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3108
            .lvl = 42,
#line 3107
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3111
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3116
    [TRAINER_PBL_BART] =
    {
#line 3117
        .trainerName = _("STEVEN"),
#line 3118
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3119
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3121
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3123
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3127
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3126
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3125
            .lvl = 42,
#line 3124
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3128
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3133
    [TRAINER_PBL_NIGEL] =
    {
#line 3134
        .trainerName = _("STEVEN"),
#line 3135
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3136
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3138
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3140
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3144
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3143
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3142
            .lvl = 42,
#line 3141
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3145
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3150
    [TRAINER_PBL_LOLA] =
    {
#line 3151
        .trainerName = _("STEVEN"),
#line 3152
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3153
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3155
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3157
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3161
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3160
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3159
            .lvl = 42,
#line 3158
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3162
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3167
    [TRAINER_PBL_CHARLIE] =
    {
#line 3168
        .trainerName = _("STEVEN"),
#line 3169
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3170
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3172
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3174
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3178
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3177
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3176
            .lvl = 42,
#line 3175
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3179
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3184
    [TRAINER_PBL_RANDOLPH] =
    {
#line 3185
        .trainerName = _("STEVEN"),
#line 3186
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3187
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3189
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3191
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3195
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3194
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3193
            .lvl = 42,
#line 3192
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3196
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3201
    [TRAINER_PBL_TODD] =
    {
#line 3202
        .trainerName = _("STEVEN"),
#line 3203
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3204
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3206
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3208
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3212
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3211
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3210
            .lvl = 42,
#line 3209
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3213
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3218
    [TRAINER_PBL_RUSSELL] =
    {
#line 3219
        .trainerName = _("STEVEN"),
#line 3220
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3221
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3223
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3225
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3229
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3228
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3227
            .lvl = 42,
#line 3226
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3230
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3235
    [TRAINER_PBL_OTIS] =
    {
#line 3236
        .trainerName = _("STEVEN"),
#line 3237
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3238
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3240
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3242
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3246
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3245
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3244
            .lvl = 42,
#line 3243
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3247
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3252
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12] =
    {
#line 3253
        .trainerName = _("STEVEN"),
#line 3254
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3255
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3257
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3259
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3263
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3262
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3261
            .lvl = 42,
#line 3260
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3264
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3269
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12_BRUTAL] =
    {
#line 3270
        .trainerName = _("STEVEN"),
#line 3271
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3272
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3274
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3276
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3280
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3279
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3278
            .lvl = 42,
#line 3277
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3281
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3286
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13] =
    {
#line 3287
        .trainerName = _("STEVEN"),
#line 3288
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3289
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3291
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3293
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3297
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3296
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3295
            .lvl = 42,
#line 3294
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3298
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3303
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13_BRUTAL] =
    {
#line 3304
        .trainerName = _("STEVEN"),
#line 3305
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3306
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3308
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3310
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3314
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3313
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3312
            .lvl = 42,
#line 3311
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3315
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3320
    [TRAINER_PBL_IONA] =
    {
#line 3321
        .trainerName = _("STEVEN"),
#line 3322
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3323
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3325
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3327
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3331
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3330
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3329
            .lvl = 42,
#line 3328
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3332
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3337
    [TRAINER_PBL_BERKE] =
    {
#line 3338
        .trainerName = _("STEVEN"),
#line 3339
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3340
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3342
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3344
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3348
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3347
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3346
            .lvl = 42,
#line 3345
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3349
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3354
    [TRAINER_PBL_TANISHA] =
    {
#line 3355
        .trainerName = _("STEVEN"),
#line 3356
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3357
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3359
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3361
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3365
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3364
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3363
            .lvl = 42,
#line 3362
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3366
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3371
    [TRAINER_PBL_ROBERT] =
    {
#line 3372
        .trainerName = _("STEVEN"),
#line 3373
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3374
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3376
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3378
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3382
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3381
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3380
            .lvl = 42,
#line 3379
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3383
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3388
    [TRAINER_PBL_CHRIS] =
    {
#line 3389
        .trainerName = _("STEVEN"),
#line 3390
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3391
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3393
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3395
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3399
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3398
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3397
            .lvl = 42,
#line 3396
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3400
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3405
    [TRAINER_PBL_ANGUS] =
    {
#line 3406
        .trainerName = _("STEVEN"),
#line 3407
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3408
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3410
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3412
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3416
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3415
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3414
            .lvl = 42,
#line 3413
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3417
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3422
    [TRAINER_PBL_LILY_LEVIATHAN_14] =
    {
#line 3423
        .trainerName = _("STEVEN"),
#line 3424
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3425
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3427
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3429
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3433
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3432
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3431
            .lvl = 42,
#line 3430
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3434
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3439
    [TRAINER_PBL_LILY_LEVIATHAN_14_BRUTAL] =
    {
#line 3440
        .trainerName = _("STEVEN"),
#line 3441
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3442
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3444
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3446
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3450
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3449
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3448
            .lvl = 42,
#line 3447
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3451
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3456
    [TRAINER_PBL_AXLE] =
    {
#line 3457
        .trainerName = _("STEVEN"),
#line 3458
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3459
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3461
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3463
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3467
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3466
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3465
            .lvl = 42,
#line 3464
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3468
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3473
    [TRAINER_PBL_RAFAEL] =
    {
#line 3474
        .trainerName = _("STEVEN"),
#line 3475
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3476
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3478
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3480
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3484
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3483
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3482
            .lvl = 42,
#line 3481
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3485
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3490
    [TRAINER_PBL_GEORGINA] =
    {
#line 3491
        .trainerName = _("STEVEN"),
#line 3492
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3493
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3495
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3497
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3501
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3500
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3499
            .lvl = 42,
#line 3498
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3502
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3507
    [TRAINER_PBL_MIA_LEVIATHAN_15] =
    {
#line 3508
        .trainerName = _("STEVEN"),
#line 3509
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3510
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3512
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3514
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3518
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3517
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3516
            .lvl = 42,
#line 3515
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3519
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3524
    [TRAINER_PBL_MIA_LEVIATHAN_15_BRUTAL] =
    {
#line 3525
        .trainerName = _("STEVEN"),
#line 3526
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3527
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3529
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3531
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3535
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3534
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3533
            .lvl = 42,
#line 3532
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3536
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3541
    [TRAINER_PBL_DORIS] =
    {
#line 3542
        .trainerName = _("STEVEN"),
#line 3543
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3544
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3546
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3548
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3552
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3551
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3550
            .lvl = 42,
#line 3549
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3553
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3558
    [TRAINER_PBL_HOMER] =
    {
#line 3559
        .trainerName = _("STEVEN"),
#line 3560
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3561
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3563
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3565
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3569
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3568
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3567
            .lvl = 42,
#line 3566
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3570
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3575
    [TRAINER_PBL_JOHN] =
    {
#line 3576
        .trainerName = _("STEVEN"),
#line 3577
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3578
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3580
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3582
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3586
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3585
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3584
            .lvl = 42,
#line 3583
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3587
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3592
    [TRAINER_PBL_GLENN] =
    {
#line 3593
        .trainerName = _("STEVEN"),
#line 3594
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3595
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3597
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3599
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3603
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3602
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3601
            .lvl = 42,
#line 3600
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3604
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3609
    [TRAINER_PBL_JAY] =
    {
#line 3610
        .trainerName = _("STEVEN"),
#line 3611
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3612
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3614
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3616
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3620
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3619
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3618
            .lvl = 42,
#line 3617
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3621
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3626
    [TRAINER_PBL_TYLER] =
    {
#line 3627
        .trainerName = _("STEVEN"),
#line 3628
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3629
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3631
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3633
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3637
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3636
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3635
            .lvl = 42,
#line 3634
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3638
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3643
    [TRAINER_PBL_TERRENCE] =
    {
#line 3644
        .trainerName = _("STEVEN"),
#line 3645
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3646
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3648
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3650
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3654
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3653
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3652
            .lvl = 42,
#line 3651
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3655
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3660
    [TRAINER_PBL_MARTY] =
    {
#line 3661
        .trainerName = _("STEVEN"),
#line 3662
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3663
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3665
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3667
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3671
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3670
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3669
            .lvl = 42,
#line 3668
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3672
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3677
    [TRAINER_PBL_KARI] =
    {
#line 3678
        .trainerName = _("STEVEN"),
#line 3679
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3680
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3682
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3684
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3688
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3687
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3686
            .lvl = 42,
#line 3685
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3689
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3694
    [TRAINER_PBL_ABRAHAM] =
    {
#line 3695
        .trainerName = _("STEVEN"),
#line 3696
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3697
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3699
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3701
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3705
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3704
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3703
            .lvl = 42,
#line 3702
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3706
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3711
    [TRAINER_PBL_MELINDA] =
    {
#line 3712
        .trainerName = _("STEVEN"),
#line 3713
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3714
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3716
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3718
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3722
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3721
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3720
            .lvl = 42,
#line 3719
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3723
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3728
    [TRAINER_PBL_EMILIO] =
    {
#line 3729
        .trainerName = _("STEVEN"),
#line 3730
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3731
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3733
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3735
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3739
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3738
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3737
            .lvl = 42,
#line 3736
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3740
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3745
    [TRAINER_PBL_REX] =
    {
#line 3746
        .trainerName = _("STEVEN"),
#line 3747
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3748
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3750
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3752
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3756
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3755
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3754
            .lvl = 42,
#line 3753
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3757
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3762
    [TRAINER_PBL_LOUIS] =
    {
#line 3763
        .trainerName = _("STEVEN"),
#line 3764
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3765
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3767
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3769
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3773
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3772
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3771
            .lvl = 42,
#line 3770
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3774
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3779
    [TRAINER_PBL_LEROY] =
    {
#line 3780
        .trainerName = _("STEVEN"),
#line 3781
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3782
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3784
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3786
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3790
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3789
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3788
            .lvl = 42,
#line 3787
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3791
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3796
    [TRAINER_PBL_ELTON] =
    {
#line 3797
        .trainerName = _("STEVEN"),
#line 3798
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3799
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3801
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3803
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3807
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3806
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3805
            .lvl = 42,
#line 3804
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3808
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3813
    [TRAINER_PBL_WILLIE] =
    {
#line 3814
        .trainerName = _("STEVEN"),
#line 3815
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3816
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3818
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3820
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3824
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3823
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3822
            .lvl = 42,
#line 3821
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3825
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3830
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16] =
    {
#line 3831
        .trainerName = _("STEVEN"),
#line 3832
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3833
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3835
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3837
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3841
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3840
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3839
            .lvl = 42,
#line 3838
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3842
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3847
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16_BRUTAL] =
    {
#line 3848
        .trainerName = _("STEVEN"),
#line 3849
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3850
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3852
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3854
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3858
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3857
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3856
            .lvl = 42,
#line 3855
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3859
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3864
    [TRAINER_PBL_PIRATE_1] =
    {
#line 3865
        .trainerName = _("STEVEN"),
#line 3866
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3867
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3869
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3871
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3875
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3874
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3873
            .lvl = 42,
#line 3872
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3876
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3881
    [TRAINER_PBL_PIRATE_2] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3888
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3892
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3891
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3890
            .lvl = 42,
#line 3889
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3893
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3898
    [TRAINER_PBL_PIRATE_3] =
    {
#line 3899
        .trainerName = _("STEVEN"),
#line 3900
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3901
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3903
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3905
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3909
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3908
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3907
            .lvl = 42,
#line 3906
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3910
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3915
    [TRAINER_PBL_PIRATE_4] =
    {
#line 3916
        .trainerName = _("STEVEN"),
#line 3917
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3918
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3920
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3922
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3926
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3925
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3924
            .lvl = 42,
#line 3923
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3927
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3932
    [TRAINER_PBL_SHAWN] =
    {
#line 3933
        .trainerName = _("STEVEN"),
#line 3934
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3935
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3937
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3939
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3943
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3942
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3941
            .lvl = 42,
#line 3940
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3944
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3949
    [TRAINER_PBL_FERNANDO] =
    {
#line 3950
        .trainerName = _("STEVEN"),
#line 3951
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3952
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3954
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3956
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3960
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3959
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3958
            .lvl = 42,
#line 3957
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3961
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3966
    [TRAINER_PBL_KANE] =
    {
#line 3967
        .trainerName = _("STEVEN"),
#line 3968
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3969
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3971
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3973
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3977
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3976
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3975
            .lvl = 42,
#line 3974
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3978
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3983
    [TRAINER_PBL_KIRK] =
    {
#line 3984
        .trainerName = _("STEVEN"),
#line 3985
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3986
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3988
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3990
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3994
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3993
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3992
            .lvl = 42,
#line 3991
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3995
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4000
    [TRAINER_PBL_DALTON] =
    {
#line 4001
        .trainerName = _("STEVEN"),
#line 4002
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4003
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4005
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4007
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4011
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4010
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4009
            .lvl = 42,
#line 4008
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4012
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4017
    [TRAINER_PBL_LEE] =
    {
#line 4018
        .trainerName = _("STEVEN"),
#line 4019
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4020
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4022
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4024
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4028
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4027
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4026
            .lvl = 42,
#line 4025
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4029
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4034
    [TRAINER_PBL_BLANCHE] =
    {
#line 4035
        .trainerName = _("STEVEN"),
#line 4036
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4037
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4039
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4041
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4045
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4044
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4043
            .lvl = 42,
#line 4042
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4046
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4051
    [TRAINER_PBL_TROY] =
    {
#line 4052
        .trainerName = _("STEVEN"),
#line 4053
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4054
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4056
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4058
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4062
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4061
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4060
            .lvl = 42,
#line 4059
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4063
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4068
    [TRAINER_PBL_ABED] =
    {
#line 4069
        .trainerName = _("STEVEN"),
#line 4070
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4071
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4073
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4075
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4079
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4078
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4077
            .lvl = 42,
#line 4076
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4080
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4085
    [TRAINER_PBL_TROY_BRUTAL] =
    {
#line 4086
        .trainerName = _("STEVEN"),
#line 4087
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4088
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4090
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4092
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4096
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4095
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4094
            .lvl = 42,
#line 4093
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4097
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4102
    [TRAINER_PBL_ABED_BRUTAL] =
    {
#line 4103
        .trainerName = _("STEVEN"),
#line 4104
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4105
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4107
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4109
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4113
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4112
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4111
            .lvl = 42,
#line 4110
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4114
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4119
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17] =
    {
#line 4120
        .trainerName = _("STEVEN"),
#line 4121
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4122
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4124
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4126
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4130
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4129
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4128
            .lvl = 42,
#line 4127
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4131
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4136
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17_BRUTAL] =
    {
#line 4137
        .trainerName = _("STEVEN"),
#line 4138
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4139
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4141
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4143
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4147
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4146
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4145
            .lvl = 42,
#line 4144
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4148
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4153
    [TRAINER_PBL_ANITA] =
    {
#line 4154
        .trainerName = _("STEVEN"),
#line 4155
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4156
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4158
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4160
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4164
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4163
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4162
            .lvl = 42,
#line 4161
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4165
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4170
    [TRAINER_PBL_DESIREE] =
    {
#line 4171
        .trainerName = _("STEVEN"),
#line 4172
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4173
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4175
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4177
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4181
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4180
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4179
            .lvl = 42,
#line 4178
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4182
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4187
    [TRAINER_PBL_HOWARD] =
    {
#line 4188
        .trainerName = _("STEVEN"),
#line 4189
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4190
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4192
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4194
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4198
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4197
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4196
            .lvl = 42,
#line 4195
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4199
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4204
    [TRAINER_PBL_ELOISE] =
    {
#line 4205
        .trainerName = _("STEVEN"),
#line 4206
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4207
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4209
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4211
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4215
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4214
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4213
            .lvl = 42,
#line 4212
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4216
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4221
    [TRAINER_PBL_ALLY_AND_EMMY] =
    {
#line 4222
        .trainerName = _("STEVEN"),
#line 4223
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4224
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4226
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4228
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4232
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4231
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4230
            .lvl = 42,
#line 4229
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4233
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4238
    [TRAINER_PBL_AMIR] =
    {
#line 4239
        .trainerName = _("STEVEN"),
#line 4240
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4241
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4243
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4245
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4249
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4248
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4247
            .lvl = 42,
#line 4246
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4250
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4255
    [TRAINER_PBL_GETHIN] =
    {
#line 4256
        .trainerName = _("STEVEN"),
#line 4257
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4258
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4260
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4262
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4266
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4265
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4264
            .lvl = 42,
#line 4263
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4267
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4272
    [TRAINER_PBL_BERNARD] =
    {
#line 4273
        .trainerName = _("STEVEN"),
#line 4274
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4275
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4277
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4279
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4283
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4282
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4281
            .lvl = 42,
#line 4280
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4284
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4289
    [TRAINER_PBL_ELLIE] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4296
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4300
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4299
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4298
            .lvl = 42,
#line 4297
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4301
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4306
    [TRAINER_PBL_RUSTY] =
    {
#line 4307
        .trainerName = _("STEVEN"),
#line 4308
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4309
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4311
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4313
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4317
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4316
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4315
            .lvl = 42,
#line 4314
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4318
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4323
    [TRAINER_PBL_CODY] =
    {
#line 4324
        .trainerName = _("STEVEN"),
#line 4325
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4326
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4328
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4330
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4334
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4333
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4332
            .lvl = 42,
#line 4331
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4335
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4340
    [TRAINER_PBL_LEWIS] =
    {
#line 4341
        .trainerName = _("STEVEN"),
#line 4342
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4343
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4345
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4347
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4351
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4350
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4349
            .lvl = 42,
#line 4348
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4352
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4357
    [TRAINER_PBL_CORNELIUS] =
    {
#line 4358
        .trainerName = _("STEVEN"),
#line 4359
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4360
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4362
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4364
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4368
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4367
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4366
            .lvl = 42,
#line 4365
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4369
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4374
    [TRAINER_PBL_INEZ_AND_EMMA] =
    {
#line 4375
        .trainerName = _("STEVEN"),
#line 4376
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4377
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4379
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4381
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4385
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4384
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4383
            .lvl = 42,
#line 4382
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4386
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4391
    [TRAINER_PBL_HELEN] =
    {
#line 4392
        .trainerName = _("STEVEN"),
#line 4393
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4394
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4396
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4398
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4402
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4401
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4400
            .lvl = 42,
#line 4399
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4403
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4408
    [TRAINER_PBL_WESLEY] =
    {
#line 4409
        .trainerName = _("STEVEN"),
#line 4410
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4411
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4413
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4415
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4419
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4418
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4417
            .lvl = 42,
#line 4416
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4420
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4425
    [TRAINER_PBL_ALFREDO] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4432
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4436
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4435
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4434
            .lvl = 42,
#line 4433
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4437
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4442
    [TRAINER_PBL_IAN] =
    {
#line 4443
        .trainerName = _("STEVEN"),
#line 4444
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4445
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4447
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4449
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4453
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4452
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4451
            .lvl = 42,
#line 4450
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4454
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4459
    [TRAINER_PBL_AUDREY] =
    {
#line 4460
        .trainerName = _("STEVEN"),
#line 4461
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4462
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4464
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4466
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4470
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4469
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4468
            .lvl = 42,
#line 4467
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4471
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4476
    [TRAINER_PBL_LEVIATHAN13] =
    {
#line 4477
        .trainerName = _("STEVEN"),
#line 4478
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4479
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4481
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4483
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4487
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4486
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4485
            .lvl = 42,
#line 4484
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4488
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4493
    [TRAINER_PBL_EDGARDO] =
    {
#line 4494
        .trainerName = _("STEVEN"),
#line 4495
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4496
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4498
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4500
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4504
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4503
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4502
            .lvl = 42,
#line 4501
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4505
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4510
    [TRAINER_PBL_JEAN] =
    {
#line 4511
        .trainerName = _("STEVEN"),
#line 4512
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4513
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4515
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4517
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4521
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4520
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4519
            .lvl = 42,
#line 4518
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4522
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4527
    [TRAINER_PBL_ROSE] =
    {
#line 4528
        .trainerName = _("STEVEN"),
#line 4529
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4530
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4532
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4534
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4538
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4537
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4536
            .lvl = 42,
#line 4535
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4539
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4544
    [TRAINER_PBL_JENNIFER] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4551
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4555
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4554
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4553
            .lvl = 42,
#line 4552
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4556
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4561
    [TRAINER_PBL_MATTHEW] =
    {
#line 4562
        .trainerName = _("STEVEN"),
#line 4563
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4564
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4566
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4568
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4572
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4571
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4570
            .lvl = 42,
#line 4569
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4573
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4578
    [TRAINER_PBL_KERRY] =
    {
#line 4579
        .trainerName = _("STEVEN"),
#line 4580
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4581
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4583
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4585
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4589
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4588
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4587
            .lvl = 42,
#line 4586
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4590
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4595
    [TRAINER_PBL_ANNIE] =
    {
#line 4596
        .trainerName = _("STEVEN"),
#line 4597
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4598
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4600
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4602
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4606
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4605
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4604
            .lvl = 42,
#line 4603
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4607
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4612
    [TRAINER_PBL_CHRISTI] =
    {
#line 4613
        .trainerName = _("STEVEN"),
#line 4614
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4615
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4617
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4619
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4623
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4622
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4621
            .lvl = 42,
#line 4620
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4624
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4629
    [TRAINER_PBL_SPENCER] =
    {
#line 4630
        .trainerName = _("STEVEN"),
#line 4631
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4632
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4634
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4636
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4640
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4639
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4638
            .lvl = 42,
#line 4637
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4641
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4646
    [TRAINER_PBL_HAYWOOD] =
    {
#line 4647
        .trainerName = _("STEVEN"),
#line 4648
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4649
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4651
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4653
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4657
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4656
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4655
            .lvl = 42,
#line 4654
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4658
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4663
    [TRAINER_PBL_MONROE] =
    {
#line 4664
        .trainerName = _("STEVEN"),
#line 4665
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4666
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4668
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4670
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4674
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4673
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4672
            .lvl = 42,
#line 4671
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4675
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4680
    [TRAINER_PBL_DAVID] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4687
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4691
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4690
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4689
            .lvl = 42,
#line 4688
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4692
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4697
    [TRAINER_PBL_DOMINIK] =
    {
#line 4698
        .trainerName = _("STEVEN"),
#line 4699
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4700
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4702
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4704
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4708
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4707
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4706
            .lvl = 42,
#line 4705
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4709
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4714
    [TRAINER_PBL_DOUGLAS] =
    {
#line 4715
        .trainerName = _("STEVEN"),
#line 4716
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4717
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4719
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4721
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4725
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4724
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4723
            .lvl = 42,
#line 4722
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4726
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4731
    [TRAINER_PBL_NADINE] =
    {
#line 4732
        .trainerName = _("STEVEN"),
#line 4733
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4734
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4736
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4738
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4742
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4741
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4740
            .lvl = 42,
#line 4739
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4743
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4748
    [TRAINER_PBL_SANDY] =
    {
#line 4749
        .trainerName = _("STEVEN"),
#line 4750
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4751
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4753
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4755
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4759
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4758
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4757
            .lvl = 42,
#line 4756
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4760
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4765
    [TRAINER_PBL_SHELDON] =
    {
#line 4766
        .trainerName = _("STEVEN"),
#line 4767
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4768
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4770
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4772
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4776
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4775
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4774
            .lvl = 42,
#line 4773
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4777
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4782
    [TRAINER_PBL_LEVIATHAN14] =
    {
#line 4783
        .trainerName = _("STEVEN"),
#line 4784
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4785
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4787
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4789
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4793
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4792
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4791
            .lvl = 42,
#line 4790
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4794
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4799
    [TRAINER_PBL_LEVIATHAN12_BRUTAL] =
    {
#line 4800
        .trainerName = _("STEVEN"),
#line 4801
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4802
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4804
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4806
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4810
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4809
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4808
            .lvl = 42,
#line 4807
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4811
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4816
    [TRAINER_PBL_LEVIATHAN13_BRUTAL] =
    {
#line 4817
        .trainerName = _("STEVEN"),
#line 4818
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4819
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4821
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4823
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4827
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4826
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4825
            .lvl = 42,
#line 4824
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4828
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4833
    [TRAINER_PBL_LEVIATHAN14_BRUTAL] =
    {
#line 4834
        .trainerName = _("STEVEN"),
#line 4835
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4836
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4838
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4840
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4844
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4843
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4842
            .lvl = 42,
#line 4841
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4845
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4850
    [TRAINER_PBL_LEVIATHAN12] =
    {
#line 4851
        .trainerName = _("STEVEN"),
#line 4852
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4853
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4855
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4857
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4861
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4860
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4859
            .lvl = 42,
#line 4858
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4862
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
