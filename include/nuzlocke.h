#ifndef GUARD_NUZLOCKE_H
#define GUARD_NUZLOCKE_H

extern const u16 gEvolutionLines[NUM_SPECIES][16];

u8 NuzlockeFlagSet(u16 mapsec);
u8 NuzlockeFlagClear(u16 mapsec);
u8 NuzlockeFlagGet(u16 mapsec);
bool8 IsCaptureBlockedBySpeciesClause(enum Species species);
void CheckSpeciesClause(void);

#endif // GUARD_NUZLOCKE_H
