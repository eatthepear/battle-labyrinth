#ifndef GUARD_OUTFIT_MENU_H
#define GUARD_OUTFIT_MENU_H

void OpenOutfitMenu(MainCallback retCB);
void Task_OpenOutfitMenu(u8 taskId);

//! misc funcs
u32 GetPlayerTrainerPicIdByOutfitGender(u32 outfitId, u32 gender);
u16 *GetOutfitPointer(u16 id);
u16 UnlockOutfit(u16 id);
u16 ToggleOutfit(u16 id);
u16 LockOutfit(u16 id);
bool8 GetOutfitStatus(u16 id);
bool8 IsPlayerWearingOutfit(u16 id);

#endif //! GUARD_OUTFIT_MENU_H
