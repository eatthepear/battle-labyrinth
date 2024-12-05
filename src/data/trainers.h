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
            .species = SPECIES_HATENNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1179
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1177
            .ability = ABILITY_HEALER,
#line 1178
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1180
                MOVE_PLAY_NICE,
                MOVE_LIFE_DEW,
                MOVE_DISARMING_VOICE,
                MOVE_PSYBEAM,
            },
            },
            {
#line 1185
            .species = SPECIES_IMPIDIMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1188
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1186
            .ability = ABILITY_PICKPOCKET,
#line 1187
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1189
                MOVE_CONFIDE,
                MOVE_FLATTER,
                MOVE_FAKE_OUT,
                MOVE_ASSURANCE,
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
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1278
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1276
            .ability = ABILITY_OWN_TEMPO,
#line 1277
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1279
                MOVE_WATER_GUN,
                MOVE_YAWN,
                MOVE_DISABLE,
                MOVE_CONFUSION,
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
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1305
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1303
            .ability = ABILITY_POISON_POINT,
#line 1304
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1306
                MOVE_SCREECH,
                MOVE_BUG_BITE,
                MOVE_BITE,
                MOVE_TWINEEDLE,
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
            .species = SPECIES_PHANTUMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1395
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1393
            .ability = ABILITY_NATURAL_CURE,
#line 1394
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1396
                MOVE_BRANCH_POKE,
                MOVE_LEECH_SEED,
                MOVE_DISABLE,
                MOVE_FEINT_ATTACK,
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
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1601
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1599
            .ability = ABILITY_HYPER_CUTTER,
#line 1600
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1602
                MOVE_MUD_SHOT,
                MOVE_STOMP,
                MOVE_BUBBLE_BEAM,
                MOVE_SLAM,
            },
            },
            {
#line 1607
            .species = SPECIES_CHEWTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1610
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1608
            .ability = ABILITY_STRONG_JAW,
#line 1609
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1611
                MOVE_WATER_GUN,
                MOVE_BITE,
                MOVE_HEADBUTT,
                MOVE_GASTRO_ACID,
            },
            },
        },
    },
#line 1616
    [TRAINER_PBL_MELANIE] =
    {
#line 1617
        .trainerName = _("Melanie"),
#line 1618
        .trainerClass = TRAINER_CLASS_LASS,
#line 1619
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 1620
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1622
        .doubleBattle = FALSE,
#line 1621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1623
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1625
            .species = SPECIES_CUTIEFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1628
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1626
            .ability = ABILITY_SHIELD_DUST,
#line 1627
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1629
                MOVE_AROMATHERAPY,
                MOVE_STRUGGLE_BUG,
                MOVE_STUN_SPORE,
                MOVE_SWITCHEROO,
            },
            },
            {
#line 1634
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1637
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1635
            .ability = ABILITY_INTIMIDATE,
#line 1636
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1638
                MOVE_BITE,
                MOVE_HELPING_HAND,
                MOVE_DOUBLE_KICK,
                MOVE_FLAME_WHEEL,
            },
            },
            {
#line 1643
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1646
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1644
            .ability = ABILITY_TRUANT,
#line 1645
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1647
                MOVE_SNORE,
                MOVE_SLASH,
                MOVE_FEINT_ATTACK,
                MOVE_SLACK_OFF,
            },
            },
        },
    },
#line 1652
    [TRAINER_PBL_CONSTANCE] =
    {
#line 1653
        .trainerName = _("Constance"),
#line 1654
        .trainerClass = TRAINER_CLASS_LADY,
#line 1655
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 1656
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1658
        .doubleBattle = FALSE,
#line 1657
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1659
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1661
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1664
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1662
            .ability = ABILITY_TECHNICIAN,
#line 1663
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1665
                MOVE_HELPING_HAND,
                MOVE_DOUBLE_SLAP,
                MOVE_TICKLE,
                MOVE_SWIFT,
            },
            },
            {
#line 1670
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1673
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1671
            .ability = ABILITY_LEAF_GUARD,
#line 1672
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1674
                MOVE_SLEEP_POWDER,
                MOVE_MEGA_DRAIN,
                MOVE_HELPING_HAND,
                MOVE_WORRY_SEED,
            },
            },
            {
#line 1679
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1682
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1680
            .ability = ABILITY_GUTS,
#line 1681
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1683
                MOVE_FAKE_OUT,
                MOVE_FORCE_PALM,
                MOVE_BULLET_PUNCH,
                MOVE_SMELLING_SALTS,
            },
            },
            {
#line 1688
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1691
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1689
            .ability = ABILITY_THICK_FAT,
#line 1690
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1692
                MOVE_CONFUSE_RAY,
                MOVE_PAYBACK,
                MOVE_PSYBEAM,
                MOVE_TRICK,
            },
            },
        },
    },
#line 1697
    [TRAINER_PBL_FRANK] =
    {
#line 1698
        .trainerName = _("Frank"),
#line 1699
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 1700
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 1701
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1703
        .doubleBattle = FALSE,
#line 1702
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1704
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1706
            .species = SPECIES_FLABEBE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1709
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1707
            .ability = ABILITY_FLOWER_VEIL,
#line 1708
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1710
                MOVE_TEARFUL_LOOK,
                MOVE_LUCKY_CHANT,
                MOVE_SYNTHESIS,
                MOVE_RAZOR_LEAF,
            },
            },
            {
#line 1715
            .species = SPECIES_SKIDDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1718
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1716
            .ability = ABILITY_GRASS_PELT,
#line 1717
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1719
                MOVE_ROLLOUT,
                MOVE_LEECH_SEED,
                MOVE_RAZOR_LEAF,
                MOVE_BULLDOZE,
            },
            },
            {
#line 1724
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1727
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1725
            .ability = ABILITY_VOLT_ABSORB,
#line 1726
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1728
                MOVE_THUNDER_SHOCK,
                MOVE_FLATTER,
                MOVE_SPARK,
                MOVE_SWIFT,
            },
            },
        },
    },
#line 1733
    [TRAINER_PBL_DUDLEY] =
    {
#line 1734
        .trainerName = _("Dudley"),
#line 1735
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 1736
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 1737
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1739
        .doubleBattle = FALSE,
#line 1738
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1740
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1742
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1745
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1743
            .ability = ABILITY_KEEN_EYE,
#line 1744
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1746
                MOVE_TWISTER,
                MOVE_AQUA_RING,
                MOVE_WING_ATTACK,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1751
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1754
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1752
            .ability = ABILITY_SCRAPPY,
#line 1753
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1755
                MOVE_FOCUS_ENERGY,
                MOVE_WING_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_RAGE,
            },
            },
            {
#line 1760
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1763
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1761
            .ability = ABILITY_WIND_POWER,
#line 1762
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1764
                MOVE_THUNDER_SHOCK,
                MOVE_UPROAR,
                MOVE_FEATHER_DANCE,
                MOVE_PLUCK,
            },
            },
            {
#line 1769
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1772
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1770
            .ability = ABILITY_SUPER_LUCK,
#line 1771
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1773
                MOVE_FURY_ATTACK,
                MOVE_AERIAL_ACE,
                MOVE_QUICK_ATTACK,
                MOVE_FEATHER_DANCE,
            },
            },
        },
    },
#line 1778
    [TRAINER_PBL_DAISY] =
    {
#line 1779
        .trainerName = _("Daisy"),
#line 1780
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 1781
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 1782
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1784
        .doubleBattle = FALSE,
#line 1783
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1785
        .randomLead = TRUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 1787
            .species = SPECIES_SMEARGLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1790
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1788
            .ability = ABILITY_TECHNICIAN,
#line 1789
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1791
                MOVE_SKETCH,
            },
            },
            {
#line 1793
            .species = SPECIES_APPLIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1796
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1794
            .ability = ABILITY_RIPEN,
#line 1795
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1797
                MOVE_ASTONISH,
                MOVE_WITHDRAW,
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
            },
            },
            {
#line 1802
            .species = SPECIES_MILCERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1805
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1803
            .ability = ABILITY_SWEET_VEIL,
#line 1804
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1806
                MOVE_BABY_DOLL_EYES,
                MOVE_CHARM,
                MOVE_SWEET_KISS,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 1811
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1814
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1812
            .ability = ABILITY_SYNCHRONIZE,
#line 1813
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1815
                MOVE_TELEPORT,
            },
            },
            {
#line 1817
            .species = SPECIES_CLEFFA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1820
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1818
            .ability = ABILITY_MAGIC_GUARD,
#line 1819
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1821
                MOVE_DISARMING_VOICE,
                MOVE_CHARM,
                MOVE_ENCORE,
                MOVE_WISH,
            },
            },
            {
#line 1826
            .species = SPECIES_TYROGUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1829
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1827
            .ability = ABILITY_GUTS,
#line 1828
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1830
                MOVE_MACH_PUNCH,
                MOVE_RAPID_SPIN,
                MOVE_COUNTER,
                MOVE_VACUUM_WAVE,
            },
            },
        },
    },
#line 1835
    [TRAINER_PBL_VIC_AND_DELL] =
    {
#line 1836
        .trainerName = _("Vic&Dell"),
#line 1837
        .trainerClass = TRAINER_CLASS_TWINS,
#line 1838
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 1839
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 1841
        .doubleBattle = TRUE,
#line 1840
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1843
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1846
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1844
            .ability = ABILITY_PLUS,
#line 1845
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1847
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_CHARM,
                MOVE_ELECTRO_BALL,
            },
            },
            {
#line 1852
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1855
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1853
            .ability = ABILITY_MINUS,
#line 1854
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1856
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_CHARM,
                MOVE_ELECTRO_BALL,
            },
            },
        },
    },
#line 1861
    [TRAINER_PBL_MINA] =
    {
#line 1862
        .trainerName = _("Nina"),
#line 1863
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 1864
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 1865
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1867
        .doubleBattle = FALSE,
#line 1866
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1869
            .species = SPECIES_WIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1869
            .heldItem = ITEM_ORAN_BERRY,
#line 1872
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1870
            .ability = ABILITY_GOOEY,
#line 1871
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1873
                MOVE_AQUA_JET,
                MOVE_WATER_PULSE,
                MOVE_SLAM,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 1878
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1878
            .heldItem = ITEM_ORAN_BERRY,
#line 1881
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1879
            .ability = ABILITY_HYDRATION,
#line 1880
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1882
                MOVE_MAGNITUDE,
                MOVE_WATER_PULSE,
                MOVE_MUD_BOMB,
                MOVE_REST,
            },
            },
            {
#line 1887
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1887
            .heldItem = ITEM_ORAN_BERRY,
#line 1890
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1888
            .ability = ABILITY_SWIFT_SWIM,
#line 1889
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1891
                MOVE_WATER_PULSE,
                MOVE_HORN_ATTACK,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
            {
#line 1896
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1896
            .heldItem = ITEM_ORAN_BERRY,
#line 1899
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1897
            .ability = ABILITY_REGENERATOR,
#line 1898
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1900
                MOVE_WATER_PULSE,
                MOVE_HORN_ATTACK,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
        },
    },
#line 1905
    [TRAINER_PBL_ZACK_AND_COBY_LEVIATHAN_6] =
    {
#line 1906
        .trainerName = _("Zack&Coby"),
#line 1907
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 1908
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 1909
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1911
        .doubleBattle = TRUE,
#line 1910
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1912
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1914
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1914
            .heldItem = ITEM_ORAN_BERRY,
#line 1917
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1915
            .ability = ABILITY_SWIFT_SWIM,
#line 1916
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1918
                MOVE_WATER_PULSE,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 1921
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1921
            .heldItem = ITEM_ORAN_BERRY,
#line 1924
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1922
            .ability = ABILITY_SWIFT_SWIM,
#line 1923
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1925
                MOVE_WATER_PULSE,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 1928
    [TRAINER_PBL_ZACK_AND_COBY_LEVIATHAN_6_BRUTAL] =
    {
#line 1929
        .trainerName = _("Zack&Coby"),
#line 1930
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 1931
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 1932
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1934
        .doubleBattle = TRUE,
#line 1933
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1935
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1937
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1937
            .heldItem = ITEM_ORAN_BERRY,
#line 1940
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1938
            .ability = ABILITY_SWIFT_SWIM,
#line 1939
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1941
                MOVE_WATER_PULSE,
                MOVE_DRAINING_KISS,
                MOVE_HEAL_PULSE,
                MOVE_SWEET_KISS,
            },
            },
            {
#line 1946
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1946
            .heldItem = ITEM_ORAN_BERRY,
#line 1949
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 30, 30),
#line 1947
            .ability = ABILITY_SWIFT_SWIM,
#line 1948
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1950
                MOVE_WATER_PULSE,
                MOVE_TAILWIND,
                MOVE_GUST,
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 1956
    [TRAINER_PBL_MILLIE] =
    {
#line 1957
        .trainerName = _("Millie"),
#line 1958
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 1959
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 1960
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1962
        .doubleBattle = FALSE,
#line 1961
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1963
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1965
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1967
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1966
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1968
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1970
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1969
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1971
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1973
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1972
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1974
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1976
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1975
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1977
    [TRAINER_PBL_JAMAL] =
    {
#line 1978
        .trainerName = _("Jamal"),
#line 1979
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 1980
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 1981
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1983
        .doubleBattle = FALSE,
#line 1982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 1984
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1986
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1988
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1987
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1989
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1991
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1990
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1992
            .species = SPECIES_FOMANTIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1994
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1993
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1995
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1997
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1996
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1998
    [TRAINER_PBL_PAIGE] =
    {
#line 1999
        .trainerName = _("Paige"),
#line 2000
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 2001
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 2002
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2004
        .doubleBattle = FALSE,
#line 2003
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2005
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2007
            .species = SPECIES_COMBEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2009
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2008
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2010
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2012
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2011
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2013
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2015
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2014
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2016
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2018
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2017
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2019
    [TRAINER_PBL_SETH] =
    {
#line 2020
        .trainerName = _("Seth"),
#line 2021
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2022
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender = 
#line 2023
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2025
        .doubleBattle = FALSE,
#line 2024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2026
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2028
            .species = SPECIES_TYMPOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2030
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2029
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2031
            .species = SPECIES_MUDBRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2033
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2032
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2034
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2036
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2035
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2037
            .species = SPECIES_SHROODLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2039
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2038
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2040
    [TRAINER_PBL_CONNIE] =
    {
#line 2041
        .trainerName = _("Connie"),
#line 2042
        .trainerClass = TRAINER_CLASS_LASS,
#line 2043
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 2044
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2046
        .doubleBattle = FALSE,
#line 2045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2047
        .randomLead = TRUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2049
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2051
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2050
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2052
            .species = SPECIES_DEWPIDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2054
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2053
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2055
    [TRAINER_PBL_PETER] =
    {
#line 2056
        .trainerName = _("Peter"),
#line 2057
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 2058
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 2059
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2061
        .doubleBattle = FALSE,
#line 2060
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2062
        .randomLead = TRUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2064
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2066
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2065
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2067
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2069
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2068
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2070
    [TRAINER_PBL_WHITAKER] =
    {
#line 2071
        .trainerName = _("Whitaker"),
#line 2072
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 2073
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 2074
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 2076
        .doubleBattle = FALSE,
#line 2075
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2077
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2079
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2082
            .ivs = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2080
            .ability = ABILITY_SNIPER,
#line 2081
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2083
                MOVE_FURY_ATTACK,
                MOVE_QUICK_ATTACK,
                MOVE_WING_ATTACK,
                MOVE_PURSUIT,
            },
            },
            {
#line 2088
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2090
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2089
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2091
            .species = SPECIES_FLITTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2093
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2092
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2094
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2096
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2095
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2097
    [TRAINER_PBL_BETTY_LEVIATHAN_7] =
    {
#line 2098
        .trainerName = _("Betty"),
#line 2099
        .trainerClass = TRAINER_CLASS_LADY,
#line 2100
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 2101
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2103
        .doubleBattle = FALSE,
#line 2102
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2104
        .randomLead = TRUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2106
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2106
            .heldItem = ITEM_SITRUS_BERRY,
#line 2109
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2107
            .ability = ABILITY_ANGER_SHELL,
#line 2108
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2110
                MOVE_AQUA_JET,
                MOVE_WATER_PULSE,
                MOVE_SLAM,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 2115
            .species = SPECIES_DEDENNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2115
            .heldItem = ITEM_SITRUS_BERRY,
#line 2118
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2116
            .ability = ABILITY_CHEEK_POUCH,
#line 2117
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2119
                MOVE_AQUA_JET,
                MOVE_WATER_PULSE,
                MOVE_SLAM,
                MOVE_MUD_SLAP,
            },
            },
        },
    },
#line 2124
    [TRAINER_PBL_BETTY_LEVIATHAN_7_BRUTAL] =
    {
#line 2125
        .trainerName = _("Betty"),
#line 2126
        .trainerClass = TRAINER_CLASS_LADY,
#line 2127
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 2128
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2130
        .doubleBattle = FALSE,
#line 2129
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2131
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2133
            .species = SPECIES_KLAWF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2133
            .heldItem = ITEM_SITRUS_BERRY,
#line 2136
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2134
            .ability = ABILITY_ANGER_SHELL,
#line 2135
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2137
                MOVE_AQUA_JET,
                MOVE_WATER_PULSE,
                MOVE_SLAM,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 2142
            .species = SPECIES_DEDENNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2142
            .heldItem = ITEM_SITRUS_BERRY,
#line 2145
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2143
            .ability = ABILITY_CHEEK_POUCH,
#line 2144
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2146
                MOVE_AQUA_JET,
                MOVE_WATER_PULSE,
                MOVE_SLAM,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 2151
            .species = SPECIES_DRAMPA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2151
            .heldItem = ITEM_SITRUS_BERRY,
#line 2154
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2152
            .ability = ABILITY_BERSERK,
#line 2153
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2155
                MOVE_AQUA_JET,
                MOVE_WATER_PULSE,
                MOVE_SLAM,
                MOVE_MUD_SLAP,
            },
            },
        },
    },
#line 2160
    [TRAINER_PBL_JIMMY] =
    {
#line 2161
        .trainerName = _("Jimmy"),
#line 2162
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 2163
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 2164
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2166
        .doubleBattle = FALSE,
#line 2165
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2167
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2169
            .species = SPECIES_NOIBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2171
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2170
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2172
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2174
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2173
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2175
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2177
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2176
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2178
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2180
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2179
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2181
    [TRAINER_PBL_EMILIANO] =
    {
#line 2182
        .trainerName = _("Emiliano"),
#line 2183
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2184
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 2185
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2187
        .doubleBattle = FALSE,
#line 2186
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2188
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2190
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2192
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2191
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2193
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2195
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2194
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2196
            .species = SPECIES_CUFANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2198
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2197
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2199
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2201
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2200
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2202
    [TRAINER_PBL_BECKHAM] =
    {
#line 2203
        .trainerName = _("Beckham"),
#line 2204
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2205
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 2206
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2208
        .doubleBattle = FALSE,
#line 2207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2209
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2211
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2213
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2212
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2214
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2216
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2215
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2217
            .species = SPECIES_HELIOPTILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2219
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2218
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2220
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2222
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2221
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2223
    [TRAINER_PBL_KAREN] =
    {
#line 2224
        .trainerName = _("Karen"),
#line 2225
        .trainerClass = TRAINER_CLASS_BACKPACKER,
#line 2226
        .trainerPic = TRAINER_PIC_BACKPACKER_F,
        .encounterMusic_gender = 
#line 2227
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2229
        .doubleBattle = FALSE,
#line 2228
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2230
        .randomLead = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2232
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2234
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2233
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2235
    [TRAINER_PBL_JAYDEN] =
    {
#line 2236
        .trainerName = _("Jayden"),
#line 2237
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2238
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 2239
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2241
        .doubleBattle = FALSE,
#line 2240
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2242
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2244
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2246
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2245
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2247
            .species = SPECIES_ROLYCOLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2249
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2248
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2250
            .species = SPECIES_NACLI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2252
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2251
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2253
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2255
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2254
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2256
    [TRAINER_PBL_NEIL] =
    {
#line 2257
        .trainerName = _("Neil"),
#line 2258
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 2259
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 2260
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2262
        .doubleBattle = FALSE,
#line 2261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2263
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2265
            .species = SPECIES_RELLOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2267
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2266
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2268
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2270
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2269
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2271
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2273
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2272
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2274
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2276
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2275
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2277
    [TRAINER_PBL_TAMARA] =
    {
#line 2278
        .trainerName = _("Tamara"),
#line 2279
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 2280
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 2281
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2283
        .doubleBattle = FALSE,
#line 2282
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2284
        .randomLead = TRUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2286
            .species = SPECIES_SALANDIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2288
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2287
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2289
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2291
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2290
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2292
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2294
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2293
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2295
            .species = SPECIES_MORELULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2297
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2296
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2298
    [TRAINER_PBL_ALISTAIR_LEVIATHAN_8] =
    {
#line 2299
        .trainerName = _("Alistair"),
#line 2300
        .trainerClass = TRAINER_CLASS_ROUGHNECK,
#line 2301
        .trainerPic = TRAINER_PIC_ROUGHNECK,
        .encounterMusic_gender = 
#line 2302
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2304
        .doubleBattle = FALSE,
#line 2303
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2305
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2307
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2307
            .heldItem = ITEM_POISON_BARB,
#line 2310
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2308
            .ability = ABILITY_POISON_TOUCH,
#line 2309
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2311
                MOVE_SLUDGE,
                MOVE_ACID_SPRAY,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2316
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2316
            .heldItem = ITEM_SHARP_BEAK,
#line 2319
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2317
            .ability = ABILITY_AFTERMATH,
#line 2318
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2320
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_DEFOG,
            },
            },
            {
#line 2325
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2325
            .heldItem = ITEM_SITRUS_BERRY,
#line 2328
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2326
            .ability = ABILITY_POISON_TOUCH,
#line 2327
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2329
                MOVE_VENOSHOCK,
                MOVE_VACUUM_WAVE,
                MOVE_FAKE_OUT,
                MOVE_THIEF,
            },
            },
            {
#line 2334
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2334
            .heldItem = ITEM_SITRUS_BERRY,
#line 2337
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2335
            .ability = ABILITY_STRONG_JAW,
#line 2336
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2338
                MOVE_BITE,
                MOVE_HOWL,
                MOVE_HEADBUTT,
                MOVE_TRAILBLAZE,
            },
            },
            {
#line 2343
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2343
            .heldItem = ITEM_BLACK_BELT,
#line 2346
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2344
            .ability = ABILITY_GUTS,
#line 2345
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2347
                MOVE_REVENGE,
                MOVE_SEISMIC_TOSS,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 2352
    [TRAINER_PBL_ALISTAIR_LEVIATHAN_8_BRUTAL] =
    {
#line 2353
        .trainerName = _("Alistair"),
#line 2354
        .trainerClass = TRAINER_CLASS_ROUGHNECK,
#line 2355
        .trainerPic = TRAINER_PIC_ROUGHNECK,
        .encounterMusic_gender = 
#line 2356
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2358
        .doubleBattle = FALSE,
#line 2357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 2359
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2361
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2361
            .heldItem = ITEM_POISON_BARB,
#line 2364
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2362
            .ability = ABILITY_POISON_TOUCH,
#line 2363
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2365
                MOVE_SLUDGE,
                MOVE_ACID_SPRAY,
                MOVE_SHADOW_SNEAK,
                MOVE_POWER_UP_PUNCH,
            },
            },
            {
#line 2370
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2370
            .heldItem = ITEM_SHARP_BEAK,
#line 2373
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2371
            .ability = ABILITY_AFTERMATH,
#line 2372
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2374
                MOVE_HEX,
                MOVE_AIR_CUTTER,
                MOVE_CLEAR_SMOG,
                MOVE_DEFOG,
            },
            },
            {
#line 2379
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2379
            .heldItem = ITEM_SITRUS_BERRY,
#line 2382
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2380
            .ability = ABILITY_POISON_TOUCH,
#line 2381
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2383
                MOVE_VENOSHOCK,
                MOVE_VACUUM_WAVE,
                MOVE_FAKE_OUT,
                MOVE_THIEF,
            },
            },
            {
#line 2388
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2388
            .heldItem = ITEM_SITRUS_BERRY,
#line 2391
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2389
            .ability = ABILITY_STRONG_JAW,
#line 2390
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2392
                MOVE_BITE,
                MOVE_HOWL,
                MOVE_HEADBUTT,
                MOVE_TRAILBLAZE,
            },
            },
            {
#line 2397
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2397
            .heldItem = ITEM_BLACK_BELT,
#line 2400
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2398
            .ability = ABILITY_GUTS,
#line 2399
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2401
                MOVE_REVENGE,
                MOVE_SEISMIC_TOSS,
                MOVE_POWER_UP_PUNCH,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 2406
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2406
            .heldItem = ITEM_SITRUS_BERRY,
#line 2409
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2407
            .ability = ABILITY_MERCILESS,
#line 2408
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2410
                MOVE_VENOSHOCK,
                MOVE_POISON_FANG,
                MOVE_THIEF,
                MOVE_GLARE,
            },
            },
        },
    },
#line 2415
    [TRAINER_PBL_COOPER] =
    {
#line 2416
        .trainerName = _("STEVEN"),
#line 2417
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2418
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2420
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2422
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2426
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2425
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2424
            .lvl = 42,
#line 2423
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2427
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2432
    [TRAINER_PBL_CARMINE] =
    {
#line 2433
        .trainerName = _("STEVEN"),
#line 2434
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2435
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2437
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2439
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2443
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2442
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2441
            .lvl = 42,
#line 2440
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2444
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2449
    [TRAINER_PBL_ARI] =
    {
#line 2450
        .trainerName = _("STEVEN"),
#line 2451
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2452
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2454
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2456
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2460
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2459
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2458
            .lvl = 42,
#line 2457
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2461
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2466
    [TRAINER_PBL_BERTHA] =
    {
#line 2467
        .trainerName = _("STEVEN"),
#line 2468
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2469
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2471
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2473
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2477
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2476
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2475
            .lvl = 42,
#line 2474
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2478
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2483
    [TRAINER_PBL_CASSANDRA] =
    {
#line 2484
        .trainerName = _("STEVEN"),
#line 2485
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2486
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2488
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2490
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2494
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2493
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2492
            .lvl = 42,
#line 2491
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2495
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2500
    [TRAINER_PBL_DOMINIC] =
    {
#line 2501
        .trainerName = _("STEVEN"),
#line 2502
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2503
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2505
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2507
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2511
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2510
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2509
            .lvl = 42,
#line 2508
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2512
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2517
    [TRAINER_PBL_ERICA] =
    {
#line 2518
        .trainerName = _("STEVEN"),
#line 2519
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2520
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2522
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2524
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2528
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2527
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2526
            .lvl = 42,
#line 2525
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2529
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2534
    [TRAINER_PBL_KYLE] =
    {
#line 2535
        .trainerName = _("STEVEN"),
#line 2536
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2537
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2539
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2541
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2545
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2544
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2543
            .lvl = 42,
#line 2542
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2546
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2551
    [TRAINER_PBL_BELLE] =
    {
#line 2552
        .trainerName = _("STEVEN"),
#line 2553
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2554
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2556
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2558
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2562
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2561
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2560
            .lvl = 42,
#line 2559
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2563
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2568
    [TRAINER_PBL_DEWEY] =
    {
#line 2569
        .trainerName = _("STEVEN"),
#line 2570
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2571
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2573
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2575
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2579
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2578
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2577
            .lvl = 42,
#line 2576
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2580
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2585
    [TRAINER_PBL_PEARLIE] =
    {
#line 2586
        .trainerName = _("STEVEN"),
#line 2587
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2588
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2590
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2592
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2596
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2595
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2594
            .lvl = 42,
#line 2593
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2597
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2602
    [TRAINER_PBL_ERNEST] =
    {
#line 2603
        .trainerName = _("STEVEN"),
#line 2604
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2605
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2607
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2609
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2613
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2612
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2611
            .lvl = 42,
#line 2610
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2614
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2619
    [TRAINER_PBL_ALANA] =
    {
#line 2620
        .trainerName = _("STEVEN"),
#line 2621
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2622
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2624
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2626
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2630
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2629
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2628
            .lvl = 42,
#line 2627
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2631
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2636
    [TRAINER_PBL_SUSAN] =
    {
#line 2637
        .trainerName = _("STEVEN"),
#line 2638
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2639
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2641
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2643
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2647
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2646
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2645
            .lvl = 42,
#line 2644
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2648
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2653
    [TRAINER_PBL_CONRAD] =
    {
#line 2654
        .trainerName = _("STEVEN"),
#line 2655
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2656
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2658
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2660
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2664
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2663
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2662
            .lvl = 42,
#line 2661
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2665
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2670
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9] =
    {
#line 2671
        .trainerName = _("STEVEN"),
#line 2672
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2673
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2675
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2677
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2681
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2680
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2679
            .lvl = 42,
#line 2678
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2682
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2687
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9_BRUTAL] =
    {
#line 2688
        .trainerName = _("STEVEN"),
#line 2689
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2690
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2692
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2694
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2698
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2697
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2696
            .lvl = 42,
#line 2695
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2699
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2704
    [TRAINER_PBL_JEANETTE] =
    {
#line 2705
        .trainerName = _("STEVEN"),
#line 2706
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2707
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2709
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2711
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2715
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2714
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2713
            .lvl = 42,
#line 2712
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2716
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2721
    [TRAINER_PBL_EMMA_AND_LEO] =
    {
#line 2722
        .trainerName = _("STEVEN"),
#line 2723
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2724
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2726
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2728
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2732
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2731
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2730
            .lvl = 42,
#line 2729
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2733
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2738
    [TRAINER_PBL_JOEL] =
    {
#line 2739
        .trainerName = _("STEVEN"),
#line 2740
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2741
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2743
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2745
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2749
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2748
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2747
            .lvl = 42,
#line 2746
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2750
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2755
    [TRAINER_PBL_MARION] =
    {
#line 2756
        .trainerName = _("STEVEN"),
#line 2757
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2758
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2760
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2762
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2766
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2765
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2764
            .lvl = 42,
#line 2763
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2767
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2772
    [TRAINER_PBL_REGINA] =
    {
#line 2773
        .trainerName = _("STEVEN"),
#line 2774
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2775
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2777
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2779
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2783
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2782
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2781
            .lvl = 42,
#line 2780
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2784
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2789
    [TRAINER_PBL_NEWTON_LEVIATHAN_10] =
    {
#line 2790
        .trainerName = _("STEVEN"),
#line 2791
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2792
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2794
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2796
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2800
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2799
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2798
            .lvl = 42,
#line 2797
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2801
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2806
    [TRAINER_PBL_NEWTON_LEVIATHAN_10_BRUTAL] =
    {
#line 2807
        .trainerName = _("STEVEN"),
#line 2808
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2809
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2811
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2813
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2817
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2816
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2815
            .lvl = 42,
#line 2814
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2818
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2823
    [TRAINER_PBL_ESSENCE] =
    {
#line 2824
        .trainerName = _("STEVEN"),
#line 2825
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2826
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2828
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2830
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2834
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2833
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2832
            .lvl = 42,
#line 2831
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2835
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2840
    [TRAINER_PBL_DOLORES] =
    {
#line 2841
        .trainerName = _("STEVEN"),
#line 2842
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2843
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2845
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2847
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2851
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2850
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2849
            .lvl = 42,
#line 2848
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2852
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2857
    [TRAINER_PBL_JULIE] =
    {
#line 2858
        .trainerName = _("STEVEN"),
#line 2859
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2860
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2862
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2864
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2868
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2867
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2866
            .lvl = 42,
#line 2865
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2869
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2874
    [TRAINER_PBL_ROMULUS] =
    {
#line 2875
        .trainerName = _("STEVEN"),
#line 2876
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2877
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2879
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2881
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2885
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2884
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2883
            .lvl = 42,
#line 2882
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2886
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2891
    [TRAINER_PBL_TREVOR] =
    {
#line 2892
        .trainerName = _("STEVEN"),
#line 2893
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2894
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2896
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2898
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2902
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2901
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2900
            .lvl = 42,
#line 2899
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2903
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2908
    [TRAINER_PBL_FEDERICO] =
    {
#line 2909
        .trainerName = _("STEVEN"),
#line 2910
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2911
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2913
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2915
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2919
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2918
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2917
            .lvl = 42,
#line 2916
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2920
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2925
    [TRAINER_PBL_GENIE] =
    {
#line 2926
        .trainerName = _("STEVEN"),
#line 2927
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2928
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2930
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2932
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2936
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2935
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2934
            .lvl = 42,
#line 2933
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2937
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2942
    [TRAINER_PBL_HILDA] =
    {
#line 2943
        .trainerName = _("STEVEN"),
#line 2944
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2945
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2947
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2949
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2953
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2952
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2951
            .lvl = 42,
#line 2950
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2954
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2959
    [TRAINER_PBL_KINLEY] =
    {
#line 2960
        .trainerName = _("STEVEN"),
#line 2961
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2962
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2964
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2966
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2970
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2969
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2968
            .lvl = 42,
#line 2967
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2971
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2976
    [TRAINER_PBL_VIOLET] =
    {
#line 2977
        .trainerName = _("STEVEN"),
#line 2978
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2979
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2981
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2983
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2987
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2986
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2985
            .lvl = 42,
#line 2984
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2988
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2993
    [TRAINER_PBL_WANDA] =
    {
#line 2994
        .trainerName = _("STEVEN"),
#line 2995
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2996
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2998
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3000
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3004
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3003
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3002
            .lvl = 42,
#line 3001
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3005
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3010
    [TRAINER_PBL_AMBER_AND_KIM] =
    {
#line 3011
        .trainerName = _("STEVEN"),
#line 3012
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3013
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3015
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3017
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3021
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3020
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3019
            .lvl = 42,
#line 3018
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3022
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3027
    [TRAINER_PBL_JAN_AND_ERIN] =
    {
#line 3028
        .trainerName = _("STEVEN"),
#line 3029
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3030
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3032
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3034
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3038
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3037
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3036
            .lvl = 42,
#line 3035
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3039
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3044
    [TRAINER_PBL_STEVE] =
    {
#line 3045
        .trainerName = _("STEVEN"),
#line 3046
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3047
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3049
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3051
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3055
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3054
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3053
            .lvl = 42,
#line 3052
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3056
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3061
    [TRAINER_PBL_GOULD] =
    {
#line 3062
        .trainerName = _("STEVEN"),
#line 3063
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3064
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3066
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3068
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3072
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3071
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3070
            .lvl = 42,
#line 3069
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3073
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3078
    [TRAINER_PBL_MENDEL] =
    {
#line 3079
        .trainerName = _("STEVEN"),
#line 3080
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3081
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3083
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3085
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3089
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3088
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3087
            .lvl = 42,
#line 3086
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3090
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3095
    [TRAINER_PBL_DARWIN] =
    {
#line 3096
        .trainerName = _("STEVEN"),
#line 3097
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3098
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3100
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3102
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3106
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3105
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3104
            .lvl = 42,
#line 3103
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3107
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3112
    [TRAINER_PBL_JENNY_LEVIATHAN_11] =
    {
#line 3113
        .trainerName = _("STEVEN"),
#line 3114
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3115
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3117
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3119
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3123
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3122
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3121
            .lvl = 42,
#line 3120
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3124
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3129
    [TRAINER_PBL_JENNY_LEVIATHAN_11_BRUTAL] =
    {
#line 3130
        .trainerName = _("STEVEN"),
#line 3131
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3132
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3134
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3136
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3140
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3139
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3138
            .lvl = 42,
#line 3137
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3141
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3146
    [TRAINER_PBL_BART] =
    {
#line 3147
        .trainerName = _("STEVEN"),
#line 3148
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3149
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3151
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3153
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3157
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3156
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3155
            .lvl = 42,
#line 3154
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3158
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3163
    [TRAINER_PBL_NIGEL] =
    {
#line 3164
        .trainerName = _("STEVEN"),
#line 3165
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3166
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3168
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3170
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3174
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3173
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3172
            .lvl = 42,
#line 3171
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3175
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3180
    [TRAINER_PBL_LOLA] =
    {
#line 3181
        .trainerName = _("STEVEN"),
#line 3182
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3183
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3185
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3187
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3191
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3190
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3189
            .lvl = 42,
#line 3188
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3192
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3197
    [TRAINER_PBL_CHARLIE] =
    {
#line 3198
        .trainerName = _("STEVEN"),
#line 3199
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3200
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3202
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3204
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3208
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3207
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3206
            .lvl = 42,
#line 3205
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3209
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3214
    [TRAINER_PBL_RANDOLPH] =
    {
#line 3215
        .trainerName = _("STEVEN"),
#line 3216
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3217
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3219
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3221
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3225
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3224
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3223
            .lvl = 42,
#line 3222
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3226
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3231
    [TRAINER_PBL_TODD] =
    {
#line 3232
        .trainerName = _("STEVEN"),
#line 3233
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3234
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3236
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3238
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3242
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3241
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3240
            .lvl = 42,
#line 3239
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3243
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3248
    [TRAINER_PBL_RUSSELL] =
    {
#line 3249
        .trainerName = _("STEVEN"),
#line 3250
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3251
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3253
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3255
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3259
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3258
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3257
            .lvl = 42,
#line 3256
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3260
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3265
    [TRAINER_PBL_OTIS] =
    {
#line 3266
        .trainerName = _("STEVEN"),
#line 3267
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3268
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3270
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3272
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3276
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3275
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3274
            .lvl = 42,
#line 3273
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3277
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3282
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12] =
    {
#line 3283
        .trainerName = _("STEVEN"),
#line 3284
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3285
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3287
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3289
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3293
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3292
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3291
            .lvl = 42,
#line 3290
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3294
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3299
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12_BRUTAL] =
    {
#line 3300
        .trainerName = _("STEVEN"),
#line 3301
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3302
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3304
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3306
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3310
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3309
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3308
            .lvl = 42,
#line 3307
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3311
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3316
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13] =
    {
#line 3317
        .trainerName = _("STEVEN"),
#line 3318
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3319
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3321
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3323
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3327
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3326
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3325
            .lvl = 42,
#line 3324
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3328
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3333
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13_BRUTAL] =
    {
#line 3334
        .trainerName = _("STEVEN"),
#line 3335
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3336
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3338
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3340
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3344
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3343
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3342
            .lvl = 42,
#line 3341
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3345
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3350
    [TRAINER_PBL_IONA] =
    {
#line 3351
        .trainerName = _("STEVEN"),
#line 3352
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3353
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3355
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3357
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3361
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3360
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3359
            .lvl = 42,
#line 3358
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3362
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3367
    [TRAINER_PBL_BERKE] =
    {
#line 3368
        .trainerName = _("STEVEN"),
#line 3369
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3370
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3372
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3374
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3378
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3377
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3376
            .lvl = 42,
#line 3375
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3379
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3384
    [TRAINER_PBL_TANISHA] =
    {
#line 3385
        .trainerName = _("STEVEN"),
#line 3386
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3387
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3389
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3391
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3395
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3394
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3393
            .lvl = 42,
#line 3392
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3396
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3401
    [TRAINER_PBL_ROBERT] =
    {
#line 3402
        .trainerName = _("STEVEN"),
#line 3403
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3404
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3406
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3408
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3412
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3411
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3410
            .lvl = 42,
#line 3409
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3413
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3418
    [TRAINER_PBL_CHRIS] =
    {
#line 3419
        .trainerName = _("STEVEN"),
#line 3420
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3421
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3423
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3425
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3429
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3428
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3427
            .lvl = 42,
#line 3426
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3430
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3435
    [TRAINER_PBL_ANGUS] =
    {
#line 3436
        .trainerName = _("STEVEN"),
#line 3437
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3438
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3440
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3442
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3446
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3445
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3444
            .lvl = 42,
#line 3443
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3447
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3452
    [TRAINER_PBL_LILY_LEVIATHAN_14] =
    {
#line 3453
        .trainerName = _("STEVEN"),
#line 3454
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3455
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3457
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3459
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3463
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3462
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3461
            .lvl = 42,
#line 3460
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3464
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3469
    [TRAINER_PBL_LILY_LEVIATHAN_14_BRUTAL] =
    {
#line 3470
        .trainerName = _("STEVEN"),
#line 3471
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3472
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3474
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3476
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3480
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3479
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3478
            .lvl = 42,
#line 3477
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3481
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3486
    [TRAINER_PBL_AXLE] =
    {
#line 3487
        .trainerName = _("STEVEN"),
#line 3488
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3489
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3491
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3493
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3497
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3496
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3495
            .lvl = 42,
#line 3494
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3498
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3503
    [TRAINER_PBL_RAFAEL] =
    {
#line 3504
        .trainerName = _("STEVEN"),
#line 3505
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3506
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3508
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3510
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3514
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3513
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3512
            .lvl = 42,
#line 3511
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3515
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3520
    [TRAINER_PBL_GEORGINA] =
    {
#line 3521
        .trainerName = _("STEVEN"),
#line 3522
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3523
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3525
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3527
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3531
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3530
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3529
            .lvl = 42,
#line 3528
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3532
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3537
    [TRAINER_PBL_MIA_LEVIATHAN_15] =
    {
#line 3538
        .trainerName = _("STEVEN"),
#line 3539
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3540
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3542
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3544
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3548
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3547
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3546
            .lvl = 42,
#line 3545
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3549
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3554
    [TRAINER_PBL_MIA_LEVIATHAN_15_BRUTAL] =
    {
#line 3555
        .trainerName = _("STEVEN"),
#line 3556
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3557
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3559
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3561
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3565
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3564
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3563
            .lvl = 42,
#line 3562
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3566
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3571
    [TRAINER_PBL_DORIS] =
    {
#line 3572
        .trainerName = _("STEVEN"),
#line 3573
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3574
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3576
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3578
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3582
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3581
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3580
            .lvl = 42,
#line 3579
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3583
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3588
    [TRAINER_PBL_HOMER] =
    {
#line 3589
        .trainerName = _("STEVEN"),
#line 3590
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3591
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3593
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3595
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3599
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3598
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3597
            .lvl = 42,
#line 3596
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3600
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3605
    [TRAINER_PBL_JOHN] =
    {
#line 3606
        .trainerName = _("STEVEN"),
#line 3607
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3608
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3610
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3612
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3616
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3615
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3614
            .lvl = 42,
#line 3613
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3617
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3622
    [TRAINER_PBL_GLENN] =
    {
#line 3623
        .trainerName = _("STEVEN"),
#line 3624
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3625
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3627
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3629
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3633
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3632
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3631
            .lvl = 42,
#line 3630
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3634
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3639
    [TRAINER_PBL_JAY] =
    {
#line 3640
        .trainerName = _("STEVEN"),
#line 3641
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3642
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3644
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3646
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3650
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3649
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3648
            .lvl = 42,
#line 3647
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3651
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3656
    [TRAINER_PBL_TYLER] =
    {
#line 3657
        .trainerName = _("STEVEN"),
#line 3658
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3659
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3661
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3663
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3667
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3666
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3665
            .lvl = 42,
#line 3664
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3668
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3673
    [TRAINER_PBL_TERRENCE] =
    {
#line 3674
        .trainerName = _("STEVEN"),
#line 3675
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3676
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3678
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3680
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3684
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3683
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3682
            .lvl = 42,
#line 3681
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3685
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3690
    [TRAINER_PBL_MARTY] =
    {
#line 3691
        .trainerName = _("STEVEN"),
#line 3692
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3693
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3695
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3697
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3701
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3700
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3699
            .lvl = 42,
#line 3698
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3702
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3707
    [TRAINER_PBL_KARI] =
    {
#line 3708
        .trainerName = _("STEVEN"),
#line 3709
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3710
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3712
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3714
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3718
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3717
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3716
            .lvl = 42,
#line 3715
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3719
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3724
    [TRAINER_PBL_ABRAHAM] =
    {
#line 3725
        .trainerName = _("STEVEN"),
#line 3726
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3727
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3729
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3731
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3735
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3734
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3733
            .lvl = 42,
#line 3732
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3736
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3741
    [TRAINER_PBL_MELINDA] =
    {
#line 3742
        .trainerName = _("STEVEN"),
#line 3743
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3744
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3746
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3748
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3752
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3751
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3750
            .lvl = 42,
#line 3749
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3753
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3758
    [TRAINER_PBL_EMILIO] =
    {
#line 3759
        .trainerName = _("STEVEN"),
#line 3760
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3761
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3763
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3765
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3769
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3768
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3767
            .lvl = 42,
#line 3766
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3770
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3775
    [TRAINER_PBL_REX] =
    {
#line 3776
        .trainerName = _("STEVEN"),
#line 3777
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3778
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3780
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3782
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3786
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3785
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3784
            .lvl = 42,
#line 3783
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3787
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3792
    [TRAINER_PBL_LOUIS] =
    {
#line 3793
        .trainerName = _("STEVEN"),
#line 3794
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3795
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3797
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3799
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3803
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3802
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3801
            .lvl = 42,
#line 3800
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3804
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3809
    [TRAINER_PBL_LEROY] =
    {
#line 3810
        .trainerName = _("STEVEN"),
#line 3811
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3812
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3814
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3816
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3820
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3819
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3818
            .lvl = 42,
#line 3817
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3821
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3826
    [TRAINER_PBL_ELTON] =
    {
#line 3827
        .trainerName = _("STEVEN"),
#line 3828
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3829
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3831
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3833
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3837
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3836
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3835
            .lvl = 42,
#line 3834
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3838
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3843
    [TRAINER_PBL_WILLIE] =
    {
#line 3844
        .trainerName = _("STEVEN"),
#line 3845
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3846
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3848
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3850
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3854
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3853
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3852
            .lvl = 42,
#line 3851
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3855
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3860
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16] =
    {
#line 3861
        .trainerName = _("STEVEN"),
#line 3862
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3863
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3865
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3867
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3871
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3870
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3869
            .lvl = 42,
#line 3868
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3872
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3877
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16_BRUTAL] =
    {
#line 3878
        .trainerName = _("STEVEN"),
#line 3879
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3880
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3882
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3884
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3888
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3887
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3886
            .lvl = 42,
#line 3885
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3889
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3894
    [TRAINER_PBL_PIRATE_1] =
    {
#line 3895
        .trainerName = _("STEVEN"),
#line 3896
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3897
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3899
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3901
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3905
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3904
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3903
            .lvl = 42,
#line 3902
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3906
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3911
    [TRAINER_PBL_PIRATE_2] =
    {
#line 3912
        .trainerName = _("STEVEN"),
#line 3913
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3914
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3916
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3918
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3922
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3921
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3920
            .lvl = 42,
#line 3919
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3923
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3928
    [TRAINER_PBL_PIRATE_3] =
    {
#line 3929
        .trainerName = _("STEVEN"),
#line 3930
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3931
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3933
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3935
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3939
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3938
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3937
            .lvl = 42,
#line 3936
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3940
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3945
    [TRAINER_PBL_PIRATE_4] =
    {
#line 3946
        .trainerName = _("STEVEN"),
#line 3947
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3948
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3950
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3952
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3956
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3955
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3954
            .lvl = 42,
#line 3953
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3957
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3962
    [TRAINER_PBL_SHAWN] =
    {
#line 3963
        .trainerName = _("STEVEN"),
#line 3964
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3965
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3967
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3969
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3973
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3972
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3971
            .lvl = 42,
#line 3970
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3974
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3979
    [TRAINER_PBL_FERNANDO] =
    {
#line 3980
        .trainerName = _("STEVEN"),
#line 3981
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3982
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3984
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3986
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3990
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3989
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3988
            .lvl = 42,
#line 3987
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3991
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3996
    [TRAINER_PBL_KANE] =
    {
#line 3997
        .trainerName = _("STEVEN"),
#line 3998
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3999
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4001
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4003
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4007
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4006
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4005
            .lvl = 42,
#line 4004
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4008
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4013
    [TRAINER_PBL_KIRK] =
    {
#line 4014
        .trainerName = _("STEVEN"),
#line 4015
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4016
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4018
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4020
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4024
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4023
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4022
            .lvl = 42,
#line 4021
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4025
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4030
    [TRAINER_PBL_DALTON] =
    {
#line 4031
        .trainerName = _("STEVEN"),
#line 4032
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4033
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4035
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4037
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4041
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4040
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4039
            .lvl = 42,
#line 4038
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4042
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4047
    [TRAINER_PBL_LEE] =
    {
#line 4048
        .trainerName = _("STEVEN"),
#line 4049
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4050
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4052
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4054
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4058
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4057
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4056
            .lvl = 42,
#line 4055
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4059
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4064
    [TRAINER_PBL_BLANCHE] =
    {
#line 4065
        .trainerName = _("STEVEN"),
#line 4066
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4067
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4069
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4071
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4075
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4074
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4073
            .lvl = 42,
#line 4072
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4076
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4081
    [TRAINER_PBL_TROY] =
    {
#line 4082
        .trainerName = _("STEVEN"),
#line 4083
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4084
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4086
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4088
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4092
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4091
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4090
            .lvl = 42,
#line 4089
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4093
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4098
    [TRAINER_PBL_ABED] =
    {
#line 4099
        .trainerName = _("STEVEN"),
#line 4100
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4101
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4103
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4105
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4109
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4108
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4107
            .lvl = 42,
#line 4106
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4110
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4115
    [TRAINER_PBL_TROY_BRUTAL] =
    {
#line 4116
        .trainerName = _("STEVEN"),
#line 4117
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4118
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4120
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4122
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4126
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4125
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4124
            .lvl = 42,
#line 4123
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4127
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4132
    [TRAINER_PBL_ABED_BRUTAL] =
    {
#line 4133
        .trainerName = _("STEVEN"),
#line 4134
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4135
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4137
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4139
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4143
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4142
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4141
            .lvl = 42,
#line 4140
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4144
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4149
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17] =
    {
#line 4150
        .trainerName = _("STEVEN"),
#line 4151
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4152
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4154
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4156
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4160
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4159
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4158
            .lvl = 42,
#line 4157
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4161
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4166
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17_BRUTAL] =
    {
#line 4167
        .trainerName = _("STEVEN"),
#line 4168
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4169
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4171
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4173
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4177
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4176
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4175
            .lvl = 42,
#line 4174
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4178
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4183
    [TRAINER_PBL_ANITA] =
    {
#line 4184
        .trainerName = _("STEVEN"),
#line 4185
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4186
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4188
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4190
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4194
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4193
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4192
            .lvl = 42,
#line 4191
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4195
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4200
    [TRAINER_PBL_DESIREE] =
    {
#line 4201
        .trainerName = _("STEVEN"),
#line 4202
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4203
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4205
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4207
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4211
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4210
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4209
            .lvl = 42,
#line 4208
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4212
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4217
    [TRAINER_PBL_HOWARD] =
    {
#line 4218
        .trainerName = _("STEVEN"),
#line 4219
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4220
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4222
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4224
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4228
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4227
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4226
            .lvl = 42,
#line 4225
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4229
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4234
    [TRAINER_PBL_ELOISE] =
    {
#line 4235
        .trainerName = _("STEVEN"),
#line 4236
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4237
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4239
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4241
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4245
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4244
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4243
            .lvl = 42,
#line 4242
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4246
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4251
    [TRAINER_PBL_ALLY_AND_EMMY] =
    {
#line 4252
        .trainerName = _("STEVEN"),
#line 4253
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4254
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4256
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4258
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4262
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4261
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4260
            .lvl = 42,
#line 4259
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4263
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4268
    [TRAINER_PBL_AMIR] =
    {
#line 4269
        .trainerName = _("STEVEN"),
#line 4270
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4271
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4273
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4275
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4279
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4278
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4277
            .lvl = 42,
#line 4276
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4280
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4285
    [TRAINER_PBL_GETHIN] =
    {
#line 4286
        .trainerName = _("STEVEN"),
#line 4287
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4288
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4290
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4292
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4296
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4295
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4294
            .lvl = 42,
#line 4293
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4297
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4302
    [TRAINER_PBL_BERNARD] =
    {
#line 4303
        .trainerName = _("STEVEN"),
#line 4304
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4305
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4307
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4309
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4313
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4312
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4311
            .lvl = 42,
#line 4310
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4314
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4319
    [TRAINER_PBL_ELLIE] =
    {
#line 4320
        .trainerName = _("STEVEN"),
#line 4321
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4322
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4324
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4326
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4330
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4329
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4328
            .lvl = 42,
#line 4327
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4331
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4336
    [TRAINER_PBL_RUSTY] =
    {
#line 4337
        .trainerName = _("STEVEN"),
#line 4338
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4339
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4341
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4343
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4347
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4346
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4345
            .lvl = 42,
#line 4344
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4348
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4353
    [TRAINER_PBL_CODY] =
    {
#line 4354
        .trainerName = _("STEVEN"),
#line 4355
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4356
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4358
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4360
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4364
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4363
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4362
            .lvl = 42,
#line 4361
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4365
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4370
    [TRAINER_PBL_LEWIS] =
    {
#line 4371
        .trainerName = _("STEVEN"),
#line 4372
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4373
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4375
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4377
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4381
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4380
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4379
            .lvl = 42,
#line 4378
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4382
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4387
    [TRAINER_PBL_CORNELIUS] =
    {
#line 4388
        .trainerName = _("STEVEN"),
#line 4389
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4390
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4392
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4394
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4398
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4397
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4396
            .lvl = 42,
#line 4395
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4399
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4404
    [TRAINER_PBL_INEZ_AND_EMMA] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4411
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4415
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4414
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4413
            .lvl = 42,
#line 4412
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4416
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4421
    [TRAINER_PBL_HELEN] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4428
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4432
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4431
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4430
            .lvl = 42,
#line 4429
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4433
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4438
    [TRAINER_PBL_WESLEY] =
    {
#line 4439
        .trainerName = _("STEVEN"),
#line 4440
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4441
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4443
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4445
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4449
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4448
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4447
            .lvl = 42,
#line 4446
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4450
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4455
    [TRAINER_PBL_ALFREDO] =
    {
#line 4456
        .trainerName = _("STEVEN"),
#line 4457
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4458
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4460
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4462
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4466
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4465
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4464
            .lvl = 42,
#line 4463
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4467
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4472
    [TRAINER_PBL_IAN] =
    {
#line 4473
        .trainerName = _("STEVEN"),
#line 4474
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4475
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4477
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4479
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4483
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4482
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4481
            .lvl = 42,
#line 4480
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4484
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4489
    [TRAINER_PBL_AUDREY] =
    {
#line 4490
        .trainerName = _("STEVEN"),
#line 4491
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4492
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4494
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4496
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4500
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4499
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4498
            .lvl = 42,
#line 4497
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4501
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4506
    [TRAINER_PBL_LEVIATHAN13] =
    {
#line 4507
        .trainerName = _("STEVEN"),
#line 4508
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4509
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4511
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4513
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4517
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4516
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4515
            .lvl = 42,
#line 4514
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4518
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4523
    [TRAINER_PBL_EDGARDO] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4530
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4534
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4533
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4532
            .lvl = 42,
#line 4531
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4535
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4540
    [TRAINER_PBL_JEAN] =
    {
#line 4541
        .trainerName = _("STEVEN"),
#line 4542
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4543
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4545
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4547
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4551
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4550
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4549
            .lvl = 42,
#line 4548
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4552
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4557
    [TRAINER_PBL_ROSE] =
    {
#line 4558
        .trainerName = _("STEVEN"),
#line 4559
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4560
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4562
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4564
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4568
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4567
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4566
            .lvl = 42,
#line 4565
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4569
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4574
    [TRAINER_PBL_JENNIFER] =
    {
#line 4575
        .trainerName = _("STEVEN"),
#line 4576
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4577
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4579
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4581
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4585
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4584
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4583
            .lvl = 42,
#line 4582
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4586
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4591
    [TRAINER_PBL_MATTHEW] =
    {
#line 4592
        .trainerName = _("STEVEN"),
#line 4593
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4594
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4596
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4598
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4602
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4601
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4600
            .lvl = 42,
#line 4599
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4603
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4608
    [TRAINER_PBL_KERRY] =
    {
#line 4609
        .trainerName = _("STEVEN"),
#line 4610
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4611
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4613
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4615
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4619
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4618
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4617
            .lvl = 42,
#line 4616
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4620
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4625
    [TRAINER_PBL_ANNIE] =
    {
#line 4626
        .trainerName = _("STEVEN"),
#line 4627
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4628
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4630
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4632
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4636
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4635
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4634
            .lvl = 42,
#line 4633
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4637
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4642
    [TRAINER_PBL_CHRISTI] =
    {
#line 4643
        .trainerName = _("STEVEN"),
#line 4644
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4645
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4647
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4649
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4653
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4652
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4651
            .lvl = 42,
#line 4650
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4654
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4659
    [TRAINER_PBL_SPENCER] =
    {
#line 4660
        .trainerName = _("STEVEN"),
#line 4661
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4662
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4664
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4666
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4670
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4669
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4668
            .lvl = 42,
#line 4667
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4671
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4676
    [TRAINER_PBL_HAYWOOD] =
    {
#line 4677
        .trainerName = _("STEVEN"),
#line 4678
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4679
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4681
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4683
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4687
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4686
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4685
            .lvl = 42,
#line 4684
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4688
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4693
    [TRAINER_PBL_MONROE] =
    {
#line 4694
        .trainerName = _("STEVEN"),
#line 4695
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4696
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4698
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4700
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4704
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4703
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4702
            .lvl = 42,
#line 4701
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4705
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4710
    [TRAINER_PBL_DAVID] =
    {
#line 4711
        .trainerName = _("STEVEN"),
#line 4712
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4713
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4715
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4717
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4721
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4720
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4719
            .lvl = 42,
#line 4718
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4722
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4727
    [TRAINER_PBL_DOMINIK] =
    {
#line 4728
        .trainerName = _("STEVEN"),
#line 4729
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4730
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4732
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4734
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4738
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4737
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4736
            .lvl = 42,
#line 4735
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4739
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4744
    [TRAINER_PBL_DOUGLAS] =
    {
#line 4745
        .trainerName = _("STEVEN"),
#line 4746
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4747
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4749
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4751
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4755
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4754
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4753
            .lvl = 42,
#line 4752
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4756
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4761
    [TRAINER_PBL_NADINE] =
    {
#line 4762
        .trainerName = _("STEVEN"),
#line 4763
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4764
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4766
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4768
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4772
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4771
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4770
            .lvl = 42,
#line 4769
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4773
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4778
    [TRAINER_PBL_SANDY] =
    {
#line 4779
        .trainerName = _("STEVEN"),
#line 4780
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4781
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4783
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4785
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4789
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4788
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4787
            .lvl = 42,
#line 4786
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4790
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4795
    [TRAINER_PBL_SHELDON] =
    {
#line 4796
        .trainerName = _("STEVEN"),
#line 4797
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4798
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4800
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4802
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4806
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4805
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4804
            .lvl = 42,
#line 4803
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4807
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4812
    [TRAINER_PBL_LEVIATHAN14] =
    {
#line 4813
        .trainerName = _("STEVEN"),
#line 4814
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4815
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4817
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4819
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4823
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4822
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4821
            .lvl = 42,
#line 4820
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4824
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4829
    [TRAINER_PBL_LEVIATHAN12_BRUTAL] =
    {
#line 4830
        .trainerName = _("STEVEN"),
#line 4831
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4832
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4834
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4836
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4840
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4839
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4838
            .lvl = 42,
#line 4837
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4841
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4846
    [TRAINER_PBL_LEVIATHAN13_BRUTAL] =
    {
#line 4847
        .trainerName = _("STEVEN"),
#line 4848
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4849
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4851
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4853
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4857
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4856
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4855
            .lvl = 42,
#line 4854
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4858
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4863
    [TRAINER_PBL_LEVIATHAN14_BRUTAL] =
    {
#line 4864
        .trainerName = _("STEVEN"),
#line 4865
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4866
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4868
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4870
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4874
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4873
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4872
            .lvl = 42,
#line 4871
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4875
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 4880
    [TRAINER_PBL_LEVIATHAN12] =
    {
#line 4881
        .trainerName = _("STEVEN"),
#line 4882
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 4883
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 4885
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4887
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4891
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 4890
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4889
            .lvl = 42,
#line 4888
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4892
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
