#ifndef GUARD_SCRIPT_POKEMON_UTIL_H
#define GUARD_SCRIPT_POKEMON_UTIL_H

u32 ScriptGiveMon(u16 species, u8 level, enum Item item);
u8 ScriptGiveEgg(u16 species);
void CreateScriptedWildMon(u16 species, u8 level, enum Item item);
void CreateScriptedWildMon_PBL(u16 species, u8 level, enum Item item, u8 nature, u8 iv, u8 abilityNum, enum Move move1, enum Move move2, enum Move move3, enum Move move4);
void CreateScriptedDoubleWildMon(u16 species, u8 level, enum Item item, u16 species2, u8 level2, enum Item item2);
void CreateScriptedDoubleWildMon_PBL(u16 species1, u8 level1, enum Item item1, u8 nature1, u8 iv1, u8 abilityNum1, enum Move move11, enum Move move12, enum Move move13, enum Move move14,
                                     u16 species2, u8 level2, enum Item item2, u8 nature2, u8 iv2, u8 abilityNum2, enum Move move21, enum Move move22, enum Move move23, enum Move move24);
void ScriptSetMonMoveSlot(u8 monIndex, enum Move move, u8 slot);
void ReducePlayerPartyToSelectedMons(void);
void HealPlayerParty(void);
void Script_GetChosenMonOffensiveEVs(void);
void Script_GetChosenMonDefensiveEVs(void);
void Script_GetChosenMonOffensiveIVs(void);
void Script_GetChosenMonDefensiveIVs(void);

#endif // GUARD_SCRIPT_POKEMON_UTIL_H
