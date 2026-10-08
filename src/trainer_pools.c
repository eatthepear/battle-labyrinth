#include "global.h"
#include "data.h"
#include "item.h"
#include "malloc.h"
#include "pokedex.h"
#include "pokemon.h"
#include "random.h"
#include "trainer_pools.h"
#include "constants/battle.h"
#include "constants/battle_ai.h"
#include "constants/items.h"
#include "event_data.h"

#include "data/battle_pool_rules.h"

static void HasRequiredTag(const struct Trainer *trainer, u8* poolIndexArray, struct PoolRules *rules, u32 *arrayIndex, bool32 *foundRequiredTag, u32 currIndex)
{
    //  Start from index 2, since lead and ace has special handling
    for (u32 currTag = 2; currTag < POOL_NUM_TAGS; currTag++)
    {
        if (rules->tagRequired[currTag]
         && trainer->party[poolIndexArray[currIndex]].tags & (1u << currTag))
        {
            *arrayIndex = currIndex;
            *foundRequiredTag = TRUE;
            break;
        }
    }
}

static u32 DefaultLeadPickFunction(const struct Trainer *trainer, u8 *poolIndexArray, u32 partyIndex, u32 monsCount, u32 battleTypeFlags, struct PoolRules *rules)
{
    u32 arrayIndex = 0;
    u32 monIndex = POOL_SLOT_DISABLED;
    //  monIndex is set to 255 if nothing has been chosen yet, this gives an upper limit on pool size of 255
    if ((partyIndex == 0)
     || (partyIndex == 1 && (battleTypeFlags & BATTLE_TYPE_DOUBLE)))
    {
        //  Find required + lead tags
        bool32 foundRequiredTag = FALSE;
        u32 firstLeadIndex = POOL_SLOT_DISABLED;
        for (u32 currIndex = 0; currIndex < trainer->poolSize; currIndex++)
        {
            if ((poolIndexArray[currIndex] != POOL_SLOT_DISABLED)
             && (trainer->party[poolIndexArray[currIndex]].tags & (1u << POOL_TAG_LEAD)))
            {
                if (firstLeadIndex == POOL_SLOT_DISABLED)
                    firstLeadIndex = currIndex;
                //  Start from index 2, since lead and ace has special handling
                HasRequiredTag(trainer, poolIndexArray, rules, &arrayIndex, &foundRequiredTag, currIndex);
            }
            if (foundRequiredTag)
                break;
        }
        //  If a combination of required + lead wasn't found, apply the first found lead
        if (foundRequiredTag)
        {
            monIndex = poolIndexArray[arrayIndex];
            poolIndexArray[arrayIndex] = POOL_SLOT_DISABLED;
        }
        else if (firstLeadIndex != POOL_SLOT_DISABLED)
        {
            monIndex = poolIndexArray[firstLeadIndex];
            poolIndexArray[firstLeadIndex] = POOL_SLOT_DISABLED;
        }
    }
    return monIndex;
}

static u32 DefaultAcePickFunction(const struct Trainer *trainer, u8 *poolIndexArray, u32 partyIndex, u32 monsCount, u32 battleTypeFlags, struct PoolRules *rules)
{
    u32 arrayIndex = 0;
    u32 monIndex = POOL_SLOT_DISABLED;
    //  monIndex is set to 255 if nothing has been chosen yet, this gives an upper limit on pool size of 255
    if (((partyIndex == monsCount - 1) || (partyIndex == monsCount - 2 && battleTypeFlags & BATTLE_TYPE_DOUBLE))
     && (rules->tagMaxMembers[1] == POOL_MEMBER_COUNT_UNLIMITED || rules->tagMaxMembers[1] >= 1))
    {
        //  Find required + ace tags
        bool32 foundRequiredTag = FALSE;
        u32 firstAceIndex = POOL_SLOT_DISABLED;
        for (u32 currIndex = 0; currIndex < trainer->poolSize; currIndex++)
        {
            if ((poolIndexArray[currIndex] != POOL_SLOT_DISABLED)
             && (trainer->party[poolIndexArray[currIndex]].tags & (1u << POOL_TAG_ACE)))
            {
                if (firstAceIndex == POOL_SLOT_DISABLED)
                    firstAceIndex = currIndex;
                HasRequiredTag(trainer, poolIndexArray, rules, &arrayIndex, &foundRequiredTag, currIndex);
            }
            if (foundRequiredTag)
                break;
        }
        //  If a combination of required + ace wasn't found, apply the first found lead
        if (foundRequiredTag)
        {
            monIndex = poolIndexArray[arrayIndex];
            poolIndexArray[arrayIndex] = POOL_SLOT_DISABLED;
        }
        else if (firstAceIndex != POOL_SLOT_DISABLED)
        {
            monIndex = poolIndexArray[firstAceIndex];
            poolIndexArray[firstAceIndex] = POOL_SLOT_DISABLED;
        }
    }
    return monIndex;
}

static u32 DefaultOtherPickFunction(const struct Trainer *trainer, u8 *poolIndexArray, u32 partyIndex, u32 monsCount, u32 battleTypeFlags, struct PoolRules *rules)
{
    u32 arrayIndex = 0;
    u32 monIndex = POOL_SLOT_DISABLED;
    //  monIndex is set to 255 if nothing has been chosen yet, this gives an upper limit on pool size of 255
    //  Find required tag
    bool32 foundRequiredTag = FALSE;
    u32 firstUnpickedIndex = POOL_SLOT_DISABLED;
    for (u32 currIndex = 0; currIndex < trainer->poolSize; currIndex++)
    {
        if (poolIndexArray[currIndex] != POOL_SLOT_DISABLED
         && !(trainer->party[poolIndexArray[currIndex]].tags & (1u << POOL_TAG_LEAD))
         && !(trainer->party[poolIndexArray[currIndex]].tags & (1u << POOL_TAG_ACE)))
        {
            if (firstUnpickedIndex == POOL_SLOT_DISABLED)
                firstUnpickedIndex = currIndex;
            HasRequiredTag(trainer, poolIndexArray, rules, &arrayIndex, &foundRequiredTag, currIndex);
        }
        if (foundRequiredTag)
            break;
    }
    //  If a combination of required + ace wasn't found, apply the first found lead
    if (foundRequiredTag)
    {
        monIndex = poolIndexArray[arrayIndex];
        poolIndexArray[arrayIndex] = POOL_SLOT_DISABLED;
    }
    else if (firstUnpickedIndex != POOL_SLOT_DISABLED)
    {
        monIndex = poolIndexArray[firstUnpickedIndex];
        poolIndexArray[firstUnpickedIndex] = POOL_SLOT_DISABLED;
    }
    return monIndex;
}

static u32 PickLowest(const struct Trainer *trainer, u8 *poolIndexArray, u32 partyIndex, u32 monsCount, u32 battleTypeFlags, struct PoolRules *rules)
{
    u32 monIndex = POOL_SLOT_DISABLED;
    u32 lowestIndex = POOL_SLOT_DISABLED;
    for (u32 i = 0; i < trainer->poolSize; i++)
    {
        if (poolIndexArray[i] < monIndex)
        {
            lowestIndex = i;
            monIndex = poolIndexArray[i];
        }
    }
    if (lowestIndex == POOL_SLOT_DISABLED)
        return POOL_SLOT_DISABLED;
    poolIndexArray[lowestIndex] = POOL_SLOT_DISABLED;
    return monIndex;
}

static u32 PickMonFromPool(const struct Trainer *trainer, u8 *poolIndexArray, u32 partyIndex, u32 monsCount, u32 battleTypeFlags, struct PoolRules *rules, struct PickFunctions pickFunctions)
{
    u32 monIndex = POOL_SLOT_DISABLED;
    //  Pick Lead
    if (monIndex == POOL_SLOT_DISABLED)
        monIndex = pickFunctions.LeadFunction(trainer, poolIndexArray, partyIndex, monsCount, battleTypeFlags, rules);
    //  Pick Ace
    if (monIndex == POOL_SLOT_DISABLED)
        monIndex = pickFunctions.AceFunction(trainer, poolIndexArray, partyIndex, monsCount, battleTypeFlags, rules);
    //  If no mon has been found yet continue looking
    if (monIndex == POOL_SLOT_DISABLED)
        monIndex = pickFunctions.OtherFunction(trainer, poolIndexArray, partyIndex, monsCount, battleTypeFlags, rules);
    //  If a mon still hasn't been found, return POOL_SLOT_DISABLED which makes party generation default to regular party generation
    if (monIndex == POOL_SLOT_DISABLED)
        return monIndex;

    u32 chosenTags = trainer->party[monIndex].tags;
    enum Species chosenSpecies = trainer->party[monIndex].species;
    enum Item chosenItem = trainer->party[monIndex].heldItem;
    enum NationalDexOrder chosenNatDex = gSpeciesInfo[chosenSpecies].natDexNum;
    //  If tag was required, change pool rule to account for the required tag already being picked
    u32 tagsToEliminate = 0;
    for (u32 currTag = 0; currTag < POOL_NUM_TAGS; currTag++)
    {
        if (chosenTags & (1u << currTag)
         && rules->tagMaxMembers[currTag] != POOL_MEMBER_COUNT_UNLIMITED)
        {
            if (rules->tagMaxMembers[currTag] == 1)
                rules->tagMaxMembers[currTag] = POOL_MEMBER_COUNT_NONE;
            else
                rules->tagMaxMembers[currTag]--;
        }
        if (chosenTags & (1u << currTag))
            rules->tagRequired[currTag] = FALSE;
        if (rules->tagMaxMembers[currTag] == POOL_MEMBER_COUNT_NONE)
            tagsToEliminate |= 1u << currTag;
    }
    //  If species clause, remove picked species from pool
    //  If item clause, remove all mons with same held item from pool
    //  If matching a tag that's been exhausted, remove from pool
    for (u32 currIndex = 0; currIndex < trainer->poolSize; currIndex++)
    {
        if (poolIndexArray[currIndex] != POOL_SLOT_DISABLED)
        {
            u32 currentTags = trainer->party[poolIndexArray[currIndex]].tags;
            enum Species currentSpecies = trainer->party[poolIndexArray[currIndex]].species;
            enum Item currentItem = trainer->party[poolIndexArray[currIndex]].heldItem;
            enum NationalDexOrder currentNatDex = gSpeciesInfo[currentSpecies].natDexNum;
            if (currentTags & tagsToEliminate)
            {
                poolIndexArray[currIndex] = POOL_SLOT_DISABLED;
            }
            if (rules->speciesClause && chosenSpecies == currentSpecies)
                poolIndexArray[currIndex] = POOL_SLOT_DISABLED;
            if (!rules->excludeForms && chosenNatDex == currentNatDex)
                poolIndexArray[currIndex] = POOL_SLOT_DISABLED;
            if (rules->itemClause && currentItem != ITEM_NONE)
            {
                if (rules->itemClauseExclusions)
                {
                    bool32 isExcluded = FALSE;
                    for (u32 i = 0; i < ARRAY_COUNT(poolItemClauseExclusions); i++)
                    {
                        if (chosenItem == poolItemClauseExclusions[i])
                        {
                            isExcluded = TRUE;
                            break;
                        }
                    }
                    if (!isExcluded)
                        poolIndexArray[currIndex] = POOL_SLOT_DISABLED;
                }
                else if (chosenItem == currentItem)
                {
                    poolIndexArray[currIndex] = POOL_SLOT_DISABLED;
                }
            }
            if (rules->megaStoneClause && gItemsInfo[currentItem].sortType == ITEM_TYPE_MEGA_STONE && gItemsInfo[chosenItem].sortType == ITEM_TYPE_MEGA_STONE)
                poolIndexArray[currIndex] = POOL_SLOT_DISABLED;
            if (rules->zCrystalClause && gItemsInfo[currentItem].sortType == ITEM_TYPE_Z_CRYSTAL && gItemsInfo[chosenItem].sortType == ITEM_TYPE_Z_CRYSTAL)
                poolIndexArray[currIndex] = POOL_SLOT_DISABLED;
            if (rules->uniqueTypeClause)
            {
                u8 chosenType1 = GetSpeciesType(chosenSpecies, 0);
                u8 chosenType2 = GetSpeciesType(chosenSpecies, 1);
                u8 currentType1 = GetSpeciesType(currentSpecies, 0);
                u8 currentType2 = GetSpeciesType(currentSpecies, 1);

                // Special case: Treat Normal/Flying as pure Flying
                if (chosenType1 == TYPE_NORMAL && chosenType2 == TYPE_FLYING)
                    chosenType1 = TYPE_FLYING;
                if (currentType1 == TYPE_NORMAL && currentType2 == TYPE_FLYING)
                    currentType1 = TYPE_FLYING;

                if (chosenType1 == currentType1
                 || chosenType1 == currentType2
                 || chosenType2 == currentType1
                 || chosenType2 == currentType2)
                {
                    poolIndexArray[currIndex] = POOL_SLOT_DISABLED;
                }
            }
        }
    }
    return monIndex;
}

static u32 GetPoolSeed(const struct Trainer *trainer)
{
    u32 seed;
    if (B_POOL_SETTING_USE_FIXED_SEED)
        seed = B_POOL_SETTING_FIXED_SEED;
    else
        seed = READ_OTID_FROM_SAVE;
    seed ^= (u32)trainer;
    return seed;
}

static void RandomizePoolIndices(const struct Trainer *trainer, u8 *poolIndexArray)
{
    //  Basically the modern (Durstenfield's) Fisher-Yates shuffle
    //  Reducing the amount of calls to random needed by only using as many bits as needed per shuffle
    u32 poolSize = trainer->poolSize;
    for (u32 i = 0; i < poolSize; i++)
        poolIndexArray[i] = i;
    u32 rnd;
    rng_value_t localRngState;
    if (B_POOL_SETTING_CONSISTENT_RNG)
    {
        u32 seed = GetPoolSeed(trainer);
        localRngState = LocalRandomSeed(seed);
        //  Replace the LocalRandom with LocalRandom32 when implemented
        rnd = LocalRandom32(&localRngState);
    }
    else
    {
        rnd = Random32();
    }
    u32 usedBits = 0;
    for (u32 i = 0; i < poolSize - 1; i++)
    {
        u32 numBits = 1;
        if (poolSize - i > 127)
            numBits = 8;
        else if (poolSize - i > 63)
            numBits = 7;
        else if (poolSize - i > 31)
            numBits = 6;
        else if (poolSize - i > 15)
            numBits = 5;
        else if (poolSize - i > 7)
            numBits = 4;
        else if (poolSize - i > 3)
            numBits = 3;
        else if (poolSize - i > 1)
            numBits = 2;
        if (usedBits + numBits > 32)
        {
            if (B_POOL_SETTING_CONSISTENT_RNG)
                rnd = LocalRandom32(&localRngState);
            else
                rnd = Random32();
            usedBits = 0;
        }
        u32 currIndex = (rnd & ((1u << numBits) - 1)) % (poolSize - i);
        rnd = rnd >> numBits;
        usedBits += numBits;
        u32 tempValue = poolIndexArray[poolSize - 1 - i];
        poolIndexArray[poolSize - 1 - i] = poolIndexArray[currIndex];
        poolIndexArray[currIndex] = tempValue;
    }
}

static struct PickFunctions GetPickFunctions(const struct Trainer *trainer)
{
    struct PickFunctions pickFunctions;
    switch (trainer->poolPickIndex)
    {
        //  Repeats, but better to have the safety
    case POOL_PICK_DEFAULT:
        pickFunctions.LeadFunction = &DefaultLeadPickFunction;
        pickFunctions.AceFunction = &DefaultAcePickFunction;
        pickFunctions.OtherFunction = &DefaultOtherPickFunction;
        break;
    case POOL_PICK_LOWEST:
        pickFunctions.LeadFunction = &PickLowest;
        pickFunctions.AceFunction = &PickLowest;
        pickFunctions.OtherFunction = &PickLowest;
        break;
    default:
        pickFunctions.LeadFunction = &DefaultLeadPickFunction;
        pickFunctions.AceFunction = &DefaultAcePickFunction;
        pickFunctions.OtherFunction = &DefaultOtherPickFunction;
        break;
    }
    return pickFunctions;
}

static void TestPrune(const struct Trainer *trainer, u8 *poolIndexArray, const struct PoolRules *rules)
{
    //  Test function to demonstrate pruning
    for (u32 i = 0; i < trainer->poolSize; i++)
        if (trainer->party[poolIndexArray[i]].species == SPECIES_WOBBUFFET)
            poolIndexArray[i] = POOL_SLOT_DISABLED;
}

static void RandomTagPrune(const struct Trainer *trainer, u8 *poolIndexArray, const struct PoolRules *rules)
{
    u32 tagToUse = trainer->party[poolIndexArray[0]].tags;
    for (u32 i = 0; i < trainer->poolSize; i++)
        if (!(trainer->party[poolIndexArray[i]].tags & tagToUse))
            poolIndexArray[i] = POOL_SLOT_DISABLED;
}

// Prunes forms as well
static void PruneBattled(const struct Trainer *trainer, u8 *poolIndexArray, const struct PoolRules *rules)
{
    for (u32 i = 0; i < trainer->poolSize; i++)
        if (GetSetBattledFlag(trainer->party[poolIndexArray[i]].species, FLAG_GET_BATTLED))
            poolIndexArray[i] = POOL_SLOT_DISABLED;
}

// The second value in this array is which zone the boss is in.
static const u16 bossTrainers[][2] = {
    {TRAINER_PBL_CORI_BOSS_1_GRASS_STARTER, 1},
    {TRAINER_PBL_SHAUN_OPTIONAL_2, 2},
    {TRAINER_PBL_LEAF_BOSS_2, 2},
    {TRAINER_PBL_FERN_OPTIONAL_3, 3},
    {TRAINER_PBL_GRANT_BOSS_3, 3},
    {TRAINER_PBL_PROTON_BOSS_4, 4},
    {TRAINER_PBL_BILL_OPTIONAL_5, 5},
    {TRAINER_PBL_LIZA_BOSS_5, 5},
    {TRAINER_PBL_MINA, 6},
    {TRAINER_PBL_ZACK, 6},
    {TRAINER_PBL_COBY, 6},
    {TRAINER_PBL_MELINDA_OPTIONAL_7, 7},
    {TRAINER_PBL_WALLY_BOSS_7, 7},
    {TRAINER_PBL_MARS_BOSS_8, 7},
    {TRAINER_PBL_ARI_BOSS_9, 9},
    {TRAINER_PBL_BERTHA_BOSS_9, 9},
    {TRAINER_PBL_CASSANDRA_BOSS_9, 9},
    {TRAINER_PBL_DOMINIC_BOSS_9, 9},
    {TRAINER_PBL_JASMINE_BOSS_10, 10},
    {TRAINER_PBL_ARCHER_BOSS_11, 11},
    {TRAINER_PBL_SERENA_BOSS_13, 13},
    {TRAINER_PBL_COURTNEY_BOSS_14, 13},
    {TRAINER_PBL_JUPITER_BOSS_16, 16},
    {TRAINER_PBL_LEAF_BOSS_17, 17},
    {TRAINER_PBL_LARRY_BOSS_18, 18},
    {TRAINER_PBL_AQUA_GRUNT_19D_1_BOSS_19, 18},
    {TRAINER_PBL_AQUA_GRUNT_19D_2_BOSS_19, 18},
    {TRAINER_PBL_MATT_BOSS_19, 18},
    {TRAINER_PBL_CILAN_BOSS_20, 20},
    {TRAINER_PBL_CHILI_BOSS_20, 20},
    {TRAINER_PBL_CRESS_BOSS_20, 20},
    {TRAINER_PBL_LACEY_BOSS_20, 20},
    {TRAINER_PBL_WALLY_BOSS_21, 21},
    {TRAINER_PBL_AMELIA_OPTIONAL_22, 22},
    {TRAINER_PBL_MAYLENE_BOSS_22, 22},
    {TRAINER_PBL_LACEY_BOSS_23, 23},
    {TRAINER_PBL_ROCKET_GRUNT_24A_1_BOSS_24, 24},
    {TRAINER_PBL_ROCKET_GRUNT_24A_2_BOSS_24, 24},
    {TRAINER_PBL_ROCKET_GRUNT_24A_3_BOSS_24, 24},
    {TRAINER_PBL_ROCKET_GRUNT_24A_4_BOSS_24, 24},
    {TRAINER_PBL_ARIANA_BOSS_25, 24},
    {TRAINER_PBL_LEAF_BOSS_27, 27},
    {TRAINER_PBL_WALLY_BOSS_27, 27},
    {TRAINER_PBL_SERENA_BOSS_27, 27},
    {TRAINER_PBL_RAIHAN_BOSS_28, 27},
    {TRAINER_PBL_KUNI_BOSS_29, 29},
    {TRAINER_PBL_MIKI_BOSS_29, 29},
    {TRAINER_PBL_SAYO_BOSS_29, 29},
    {TRAINER_PBL_ZUKI_BOSS_29, 29},
    {TRAINER_PBL_ARITA_BOSS_29, 29},
    {TRAINER_PBL_EMIKO_BOSS_29, 29},
    {TRAINER_PBL_NAOKO_BOSS_29, 29},
    {TRAINER_PBL_SAITO_BOSS_29, 29},
    {TRAINER_PBL_PROTON_BOSS_30, 30},
    {TRAINER_PBL_TABITHA_BOSS_30, 30},
    {TRAINER_PBL_COURTNEY_BOSS_30, 30},
    {TRAINER_PBL_SHELLY_BOSS_30, 30},
    {TRAINER_PBL_MATT_BOSS_30, 30},
    {TRAINER_PBL_MARS_BOSS_30, 30},
    {TRAINER_PBL_JUPITER_BOSS_30, 30},
    {TRAINER_PBL_ARCHER_BOSS_30, 30},
    {TRAINER_PBL_ARIANA_BOSS_30, 30},
    {TRAINER_PBL_LEAF_BOSS_31, 31},
    {TRAINER_PBL_SERENA_BOSS_31, 31},
    {TRAINER_PBL_WALLY_BOSS_32, 31},
    {TRAINER_PBL_MAXIE_BOSS_34, 34},
    {TRAINER_PBL_ARCHIE_BOSS_34, 34},
    {TRAINER_PBL_CYRUS_BOSS_34, 34},
    {TRAINER_PBL_GIOVANNI_BOSS_34, 34},
    {TRAINER_PBL_GIOVANNI_BOSS_34_MEWTWO_Y, 34},
    {TRAINER_PBL_GIOVANNI_BOSS_34_MEWTWO_X, 34},
    {TRAINER_PBL_LACEY_BOSS_35, 35},
    {TRAINER_PBL_GLACIA_BOSS_35, 35},
    {TRAINER_PBL_KOGA_BOSS_35, 35},
    {TRAINER_PBL_SHAUNTAL_BOSS_35, 35},
    {TRAINER_PBL_CYNTHIA_BOSS_35, 35},
};

// Only prune boss mons for that corresponding zone. For example, in Zone 5, you shouldn't be able to roll a Natu because it's on Liza's team.
static void PruneBossMons(const struct Trainer *trainer, u8 *poolIndexArray, const struct PoolRules *rules)
{
    u16 currentZone = VarGet(VAR_ZONE);
    for (u32 i = 0; i < trainer->poolSize; i++)
    {
        if (poolIndexArray[i] == POOL_SLOT_DISABLED)
            continue;
        u16 currentSpecies = trainer->party[poolIndexArray[i]].species;
        for (u32 j = 0; j < ARRAY_COUNT(bossTrainers); j++)
        {
            if (currentZone == bossTrainers[j][1])
            {
                u16 trainerID = bossTrainers[j][0];
                u32 count = GetTrainerPartySizeFromId(trainerID);
                const struct TrainerMon *party = GetTrainerPartyFromId(trainerID);
                for (u32 k = 0; k < count; k++)
                {
                    if (currentSpecies == party[k].species)
                    {
                        poolIndexArray[i] = POOL_SLOT_DISABLED;
                        break;
                    }
                }

            }
        }
    }
}

static void PruneNonType(const struct Trainer *trainer, u8 *poolIndexArray, const struct PoolRules *rules, u32 type)
{
    for (u32 i = 0; i < trainer->poolSize; i++)
        if (!IsSpeciesOfType(trainer->party[poolIndexArray[i]].species, type))
            poolIndexArray[i] = POOL_SLOT_DISABLED;
}

static void PruneNonType2(const struct Trainer *trainer, u8 *poolIndexArray, const struct PoolRules *rules, u32 type1, u32 type2)
{
    for (u32 i = 0; i < trainer->poolSize; i++)
    {
        if (!IsSpeciesOfType(trainer->party[poolIndexArray[i]].species, type1) && !IsSpeciesOfType(trainer->party[poolIndexArray[i]].species, type2))
            poolIndexArray[i] = POOL_SLOT_DISABLED;
    }
}

static void PruneNonType3(const struct Trainer *trainer, u8 *poolIndexArray, const struct PoolRules *rules, u32 type1, u32 type2, u32 type3)
{
    for (u32 i = 0; i < trainer->poolSize; i++)
    {
        if (!IsSpeciesOfType(trainer->party[poolIndexArray[i]].species, type1) && !IsSpeciesOfType(trainer->party[poolIndexArray[i]].species, type2) && !IsSpeciesOfType(trainer->party[poolIndexArray[i]].species, type3))
            poolIndexArray[i] = POOL_SLOT_DISABLED;
    }
}

static void PrunePool(const struct Trainer *trainer, u8 *poolIndexArray, const struct PoolRules *rules)
{
    //  Use defined pruning functions go here
    switch (trainer->poolPruneIndex)
    {
    case POOL_PRUNE_TEST:
        TestPrune(trainer, poolIndexArray, rules);
        break;
    case POOL_PRUNE_RANDOM_TAG:
        RandomTagPrune(trainer, poolIndexArray, rules);
        break;
    case POOL_PRUNE_NON_NORMAL:
        PruneNonType(trainer, poolIndexArray, rules, TYPE_NORMAL);
        break;
    case POOL_PRUNE_NON_FIGHTING:
        PruneNonType(trainer, poolIndexArray, rules, TYPE_FIGHTING);
        break;
    case POOL_PRUNE_NON_FLYING:
        PruneNonType(trainer, poolIndexArray, rules, TYPE_FLYING);
        break;
    case POOL_PRUNE_NON_POISON:
        PruneNonType(trainer, poolIndexArray, rules, TYPE_POISON);
        break;
    case POOL_PRUNE_NON_GROUND:
        PruneNonType(trainer, poolIndexArray, rules, TYPE_GROUND);
        break;
    case POOL_PRUNE_NON_ROCK:
        PruneNonType(trainer, poolIndexArray, rules, TYPE_ROCK);
        break;
    case POOL_PRUNE_NON_BUG:
        PruneNonType(trainer, poolIndexArray, rules, TYPE_BUG);
        break;
    case POOL_PRUNE_NON_GHOST:
        PruneNonType(trainer, poolIndexArray, rules, TYPE_GHOST);
        break;
    case POOL_PRUNE_NON_STEEL:
        PruneNonType(trainer, poolIndexArray, rules, TYPE_STEEL);
        break;
    case POOL_PRUNE_NON_FIRE:
        PruneNonType(trainer, poolIndexArray, rules, TYPE_FIRE);
        break;
    case POOL_PRUNE_NON_WATER:
        PruneNonType(trainer, poolIndexArray, rules, TYPE_WATER);
        break;
    case POOL_PRUNE_NON_GRASS:
        PruneNonType(trainer, poolIndexArray, rules, TYPE_GRASS);
        break;
    case POOL_PRUNE_NON_ELECTRIC:
        PruneNonType(trainer, poolIndexArray, rules, TYPE_ELECTRIC);
        break;
    case POOL_PRUNE_NON_PSYCHIC:
        PruneNonType(trainer, poolIndexArray, rules, TYPE_PSYCHIC);
        break;
    case POOL_PRUNE_NON_ICE:
        PruneNonType(trainer, poolIndexArray, rules, TYPE_ICE);
        break;
    case POOL_PRUNE_NON_DRAGON:
        PruneNonType(trainer, poolIndexArray, rules, TYPE_DRAGON);
        break;
    case POOL_PRUNE_NON_DARK:
        PruneNonType(trainer, poolIndexArray, rules, TYPE_DARK);
        break;
    case POOL_PRUNE_NON_FAIRY:
        PruneNonType(trainer, poolIndexArray, rules, TYPE_FAIRY);
        break;
    case POOL_PRUNE_NON_GROUND_ROCK:
        PruneNonType2(trainer, poolIndexArray, rules, TYPE_GROUND, TYPE_ROCK);
        break;
    case POOL_PRUNE_NON_ROCK_STEEL:
        PruneNonType2(trainer, poolIndexArray, rules, TYPE_ROCK, TYPE_STEEL);
        break;
    case POOL_PRUNE_NON_GROUND_ROCK_STEEL:
        PruneNonType3(trainer, poolIndexArray, rules, TYPE_GROUND, TYPE_ROCK, TYPE_STEEL);
        break;
    default:
        break;
    }
}

void DoTrainerPartyPool(const struct Trainer *trainer, u32 *monIndices, u8 monsCount, u32 battleTypeFlags)
{
    bool32 usingPool = FALSE;
    struct PoolRules rules = defaultPoolRules;
    struct Trainer tempTrainer;
    if (trainer->poolSize == 0 && (trainer->aiFlags & AI_FLAG_RANDOMIZE_PARTY_INDICES))
    {
        tempTrainer = *trainer;
        tempTrainer.poolSize = tempTrainer.partySize;
        trainer = &tempTrainer;
    }

    if (trainer->poolSize != 0)
    {
        usingPool = TRUE;
        rules = gPoolRulesetsList[trainer->poolRuleIndex];
        u8 *poolIndexArray = Alloc(trainer->poolSize);
        RandomizePoolIndices(trainer, poolIndexArray);

        struct PickFunctions pickFunctions = GetPickFunctions(trainer);

        PrunePool(trainer, poolIndexArray, &rules);
        PruneBossMons(trainer, poolIndexArray, &rules);
        PruneBattled(trainer, poolIndexArray, &rules);

        for (u32 i = 0; i < monsCount; i++)
        {
            monIndices[i] = PickMonFromPool(trainer, poolIndexArray, i, monsCount, battleTypeFlags, &rules, pickFunctions);
            //  If the slot doesn't have a proper value, the pool creation failed, fall back to normal mon pick process
            if (monIndices[i] == POOL_SLOT_DISABLED)
            {
                usingPool = FALSE;
                break;
            }
        }
        Free(poolIndexArray);
    }

    if (!usingPool)
    {
        for (u32 i = 0; i < monsCount; i++)
        {
                monIndices[i] = i;
        }
    }
}
