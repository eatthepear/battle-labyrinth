#include "global.h"
#include "battle.h"
#include "event_data.h"
#include "caps.h"
#include "difficulty.h"
#include "pokemon.h"

static const u32 sLevelCapFlagMap[] =
{
    5,
    7,
    9,
    11,
    13,
    15,
    17,
    21,
    21,
    23,
    25,
    31,
    33,
    42,
    46,
    58,
};

u32 GetCurrentLevelCap(void)
{
    u32 i;

    if (B_LEVEL_CAP_TYPE == LEVEL_CAP_FLAG_LIST)
    {
        for (i = 0; i < ARRAY_COUNT(sLevelCapFlagMap); i++)
        {
            if (VarGet(VAR_LEVEL_CAP) == i)
                return sLevelCapFlagMap[i];
        }
    }
    else if (B_LEVEL_CAP_TYPE == LEVEL_CAP_VARIABLE)
    {
        return VarGet(B_LEVEL_CAP_VARIABLE);
    }

    return MAX_LEVEL;
}

// If the player is in a New Zone, they are only allowed to Rare Candy up to the prior level cap.
u32 GetInfiniteCandyLevelCap(void)
{
    u32 i;

    if (FlagGet(FLAG_IN_NEW_ZONE))
    {
        if (B_LEVEL_CAP_TYPE == LEVEL_CAP_FLAG_LIST)
        {
            for (i = 0; i < ARRAY_COUNT(sLevelCapFlagMap); i++)
            {
                if (VarGet(VAR_LEVEL_CAP) - 1 == i)
                    return sLevelCapFlagMap[i];
            }
        }
    }
    else
    {
        return GetCurrentLevelCap();
    }
    return MAX_LEVEL;
}

u32 GetSoftLevelCapExpValue(u32 level, u32 expValue)
{
    static const u32 sExpScalingDown[5] = { 4, 8, 16, 32, 64 };
    static const u32 sExpScalingUp[5]   = { 16, 8, 4, 2, 1 };

    u32 levelDifference;
    u32 currentLevelCap = GetCurrentLevelCap();

    if (B_EXP_CAP_TYPE == EXP_CAP_NONE)
        return expValue;

    if (level < currentLevelCap)
    {
        if (B_LEVEL_CAP_EXP_UP)
        {
            levelDifference = currentLevelCap - level;
            if (levelDifference > ARRAY_COUNT(sExpScalingUp) - 1)
                return expValue + (expValue / sExpScalingUp[ARRAY_COUNT(sExpScalingUp) - 1]);
            else
                return expValue + (expValue / sExpScalingUp[levelDifference]);
        }
        else
        {
            return expValue;
        }
    }
    else if (B_EXP_CAP_TYPE == EXP_CAP_HARD)
    {
        return 0;
    }
    else if (B_EXP_CAP_TYPE == EXP_CAP_SOFT)
    {
        levelDifference = level - currentLevelCap;
        if (levelDifference > ARRAY_COUNT(sExpScalingDown) - 1)
            return expValue / sExpScalingDown[ARRAY_COUNT(sExpScalingDown) - 1];
        else
            return expValue / sExpScalingDown[levelDifference];
    }
    else
    {
       return expValue;
    }
}

u32 GetCurrentEVCap(void)
{
#if FREE_OTHER_PBL == FALSE
    static const u16 sEvCapFlagMap[][2] = {
        // Define EV caps for each milestone
        {FLAG_BADGE01_GET, MAX_TOTAL_EVS *  1 / 17},
        {FLAG_BADGE02_GET, MAX_TOTAL_EVS *  3 / 17},
        {FLAG_BADGE03_GET, MAX_TOTAL_EVS *  5 / 17},
        {FLAG_BADGE04_GET, MAX_TOTAL_EVS *  7 / 17},
        {FLAG_BADGE05_GET, MAX_TOTAL_EVS *  9 / 17},
        {FLAG_BADGE06_GET, MAX_TOTAL_EVS * 11 / 17},
        {FLAG_BADGE07_GET, MAX_TOTAL_EVS * 13 / 17},
        {FLAG_BADGE08_GET, MAX_TOTAL_EVS * 15 / 17},
        {FLAG_IS_CHAMPION, MAX_TOTAL_EVS},
    };

    if (B_EV_CAP_TYPE == EV_CAP_FLAG_LIST)
    {
        for (u32 evCap = 0; evCap < ARRAY_COUNT(sEvCapFlagMap); evCap++)
        {
            if (!FlagGet(sEvCapFlagMap[evCap][0]))
                return sEvCapFlagMap[evCap][1];
        }
    }
    else if (B_EV_CAP_TYPE == EV_CAP_VARIABLE)
    {
        return VarGet(B_EV_CAP_VARIABLE);
    }
    else if (B_EV_CAP_TYPE == EV_CAP_NO_GAIN)
    {
        return 0;
    }
#endif //FREE_OTHER_PBL
    if (GetCurrentDifficultyLevel() >= DIFFICULTY_HARD)
        return 0;

    return MAX_TOTAL_EVS;
}

static const u32 sNumFoes[] =
{
    9,
    12,
    15,
    16,
    18, // zone 5
    18,
    32,
    32,
};

u32 GetExpValue(void)
{
    u32 i;
    u32 levelCap;
    u32 pastLevelCap;
    u32 numFoes;
    for (i = 1; i < ARRAY_COUNT(sNumFoes); i++)
    {
        if (VarGet(VAR_LEVEL_CAP) == i)
        {
            levelCap = sLevelCapFlagMap[i];
            pastLevelCap = sLevelCapFlagMap[i-1];
            numFoes = sNumFoes[i];
            return (levelCap * levelCap * levelCap - pastLevelCap * pastLevelCap * pastLevelCap) * 1000 / numFoes / 575;
        }
    }

    return 1;
}
