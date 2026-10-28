/* SPDX-License-Identifier: MIT */
/* mercsw 1000c550 */
/* mercsw 1000c550: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef DWORD SIZE_T;
extern undefined4 DAT_100a7560;
extern undefined4 DAT_100a7564;
extern undefined4 DAT_100a7570;
extern undefined4 DAT_100a7574;
extern undefined4 DAT_100a757c;
extern undefined4 DAT_100a7580;
extern undefined4 DAT_101f5510;
extern undefined4 DAT_10215624;
undefined __stdcall FUN_1000c73b(void);
undefined4 __cdecl FUN_1002ce10(int param_1);
undefined __cdecl FUN_10086951(SIZE_T param_1);

undefined4 __stdcall FUN_1000c550(void)

{
  uint uVar1;
  SIZE_T SVar2;
  undefined4 local_8;
  
  local_8 = 0;
  FUN_1000c73b();
  uVar1 = FUN_1002ce10(7);
  if (uVar1 != 0) {
    DAT_100a757c = uVar1 >> 3;
    DAT_100a7580 = FUN_10086951(uVar1);
    if (DAT_100a7580 != 0) {
      uVar1 = FUN_1002ce10(8);
      if (uVar1 != 0) {
        DAT_101f5510 = uVar1 >> 2;
        DAT_10215624 = DAT_101f5510;
        DAT_100a7570 = FUN_10086951(uVar1);
        if (DAT_100a7570 != 0) {
          DAT_100a7560 = FUN_10086951(uVar1);
          if (DAT_100a7560 != 0) {
            SVar2 = FUN_1002ce10(9);
            if (SVar2 != 0) {
              DAT_100a7574 = FUN_10086951(SVar2);
              if (DAT_100a7574 != 0) {
                DAT_100a7564 = FUN_10086951(SVar2);
                if (DAT_100a7564 != 0) {
                  local_8 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return local_8;
}
