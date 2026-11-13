#include "global.h"
#include "data.h"
#include "event_data.h"
#include "script.h"
#include "constants/battle.h"

enum DifficultyLevel GetCurrentDifficultyLevel(void)
{
    if (!B_VAR_DIFFICULTY)
        return DIFFICULTY_NORMAL;

    return VarGet(B_VAR_DIFFICULTY);
}

void SetCurrentDifficultyLevel(enum DifficultyLevel desiredDifficulty)
{
    if (!B_VAR_DIFFICULTY)
        return;

    if (desiredDifficulty > DIFFICULTY_MAX)
        desiredDifficulty = DIFFICULTY_MAX;

    VarSet(B_VAR_DIFFICULTY, desiredDifficulty);
}

enum DifficultyLevel GetBattlePartnerDifficultyLevel(u16 partnerId)
{
    enum DifficultyLevel difficulty = GetCurrentDifficultyLevel();

    if (partnerId > TRAINER_PARTNER(PARTNER_NONE))
        partnerId -= TRAINER_PARTNER(PARTNER_NONE);

    if (difficulty == DIFFICULTY_NORMAL)
        return DIFFICULTY_NORMAL;

    if (gBattlePartners[difficulty][partnerId].party == NULL)
        return DIFFICULTY_NORMAL;

    return difficulty;
}

enum DifficultyLevel GetTrainerDifficultyLevel(u16 trainerId)
{
    enum DifficultyLevel difficulty = GetCurrentDifficultyLevel();

    if (difficulty == DIFFICULTY_NORMAL)
        return DIFFICULTY_NORMAL;

    if (gTrainers[difficulty][trainerId].party == NULL)
        return DIFFICULTY_NORMAL;

    return difficulty;
}

void Script_IncreaseDifficulty(void)
{
    enum DifficultyLevel currentDifficulty;

    if (!B_VAR_DIFFICULTY)
        return;

    currentDifficulty = GetCurrentDifficultyLevel();

    if (currentDifficulty++ > DIFFICULTY_MAX)
        return;

    Script_RequestEffects(SCREFF_V1);
    Script_RequestWriteVar(B_VAR_DIFFICULTY);

    SetCurrentDifficultyLevel(currentDifficulty);
}

void Script_DecreaseDifficulty(void)
{
    enum DifficultyLevel currentDifficulty;

    if (!B_VAR_DIFFICULTY)
        return;

    currentDifficulty = GetCurrentDifficultyLevel();

    if (!currentDifficulty)
        return;

    Script_RequestEffects(SCREFF_V1);
    Script_RequestWriteVar(B_VAR_DIFFICULTY);

    SetCurrentDifficultyLevel(--currentDifficulty);
}

void Script_GetDifficulty(void)
{
    Script_RequestEffects(SCREFF_V1);
    gSpecialVar_Result = GetCurrentDifficultyLevel();
}

void Script_SetDifficulty(struct ScriptContext *ctx)
{
    enum DifficultyLevel desiredDifficulty = ScriptReadByte(ctx);

    Script_RequestEffects(SCREFF_V1);
    Script_RequestWriteVar(B_VAR_DIFFICULTY);

    SetCurrentDifficultyLevel(desiredDifficulty);
}

bool32 AllowedAbilitySlotByDifficulty(enum Species species, u8 abilitySlot)
{
    if (GetCurrentDifficultyLevel() < DIFFICULTY_BRUTAL)
        return TRUE;

    switch (species)
    {
        case SPECIES_LARVITAR:
        case SPECIES_PUPITAR:
        case SPECIES_TYRANITAR:
            if (abilitySlot == 2)
                return TRUE;
            else
                return FALSE;
        case SPECIES_WINGULL:
        case SPECIES_PELIPPER:
            if (abilitySlot != 1)
                return TRUE;
            else
                return FALSE;
        case SPECIES_TORKOAL:
            if (abilitySlot != 1)
                return TRUE;
            else
                return FALSE;
        case SPECIES_HIPPOPOTAS:
        case SPECIES_HIPPOWDON:
            if (abilitySlot == 2)
                return TRUE;
            else
                return FALSE;
        case SPECIES_SNOVER:
        case SPECIES_ABOMASNOW:
            if (abilitySlot == 2)
                return TRUE;
            else
                return FALSE;
        case SPECIES_ROGGENROLA:
        case SPECIES_BOLDORE:
        case SPECIES_GIGALITH:
            if (abilitySlot != 1)
                return TRUE;
            else
                return FALSE;
        case SPECIES_VANILLITE:
        case SPECIES_VANILLISH:
        case SPECIES_VANILLUXE:
            if (abilitySlot != 1)
                return TRUE;
            else
                return FALSE;
        default:
            return TRUE;
    }
}
