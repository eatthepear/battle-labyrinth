#ifndef GUARD_SCRIPT_POKEMON_UTIL_H
#define GUARD_SCRIPT_POKEMON_UTIL_H

u32 ScriptGiveMon(u16 species, u8 level, u16 item);
u8 ScriptGiveEgg(u16 species);
void CreateScriptedWildMon(u16 species, u8 level, u16 item);
void CreateScriptedWildMon_PBL(u16 species, u8 level, u16 item, u8 nature, u8 iv, u8 abilityNum, u16 move1, u16 move2, u16 move3, u16 move4);
void CreateScriptedDoubleWildMon(u16 species, u8 level, u16 item, u16 species2, u8 level2, u16 item2);
void CreateScriptedDoubleWildMon_PBL(u16 species1, u8 level1, u16 item1, u8 nature1, u8 iv1, u8 abilityNum1, u16 move11, u16 move12, u16 move13, u16 move14,
                                     u16 species2, u8 level2, u16 item2, u8 nature2, u8 iv2, u8 abilityNum2, u16 move21, u16 move22, u16 move23, u16 move24);
void ScriptSetMonMoveSlot(u8 monIndex, u16 move, u8 slot);
void ReducePlayerPartyToSelectedMons(void);
void HealPlayerParty(void);
void Script_GetChosenMonOffensiveEVs(void);
void Script_GetChosenMonDefensiveEVs(void);
void Script_GetChosenMonOffensiveIVs(void);
void Script_GetChosenMonDefensiveIVs(void);

#endif // GUARD_SCRIPT_POKEMON_UTIL_H
