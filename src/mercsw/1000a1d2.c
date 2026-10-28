/* SPDX-License-Identifier: MIT */
/* mercsw 1000a1d2 */
/* mercsw 1000a1d2: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100a7b30[];
extern undefined4 DAT_100aaf74;
extern undefined DAT_101f52e0[];
extern undefined4 DAT_10215658;
int __cdecl FUN_1000a37c(int param_1, int param_2);
undefined __cdecl FUN_1003f893(int * param_1, int param_2, int param_3, uint * param_4);
undefined __cdecl FUN_1003eb9c(int * param_1, int param_2, uint * param_3);
uint __cdecl FUN_10055f9e(int param_1, int param_2, int * param_3, int param_4, int param_5);
undefined __cdecl FUN_10016e60(int param_1, uint * param_2, uint param_3);

void __cdecl FUN_1000a1d2(int param_1, uint * param_2, uint param_3)

{
  int iVar1;
  uint uVar2;
  uint *local_14;
  int local_10;
  
  iVar1 = *(int *)(DAT_100a7b30 + DAT_10215658 * 4);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = param_3 & 0xf000;
  local_14 = param_2;
  if (uVar2 < 0x3001) {
    if (uVar2 == 0x3000) {
      FUN_10055f9e((param_3 & 0xff0) >> 4,param_1,(int *)param_2,-1,1);
      return;
    }
    if (uVar2 == 0) {
      FUN_10016e60(param_1,param_2,0);
      FUN_10016e60(param_1,param_2,param_3 | 0xa000);
      return;
    }
  }
  else {
    if (uVar2 == 0x4000) {
      for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
        uVar2 = FUN_1000a37c(iVar1,local_14[5]);
        local_14[2] = (uVar2 | (param_3 & 0xf0)) << 0x10;
        local_14 = local_14 + 6;
      }
      if (DAT_100aaf74 != 0) {
        FUN_1003f893((int *)(DAT_101f52e0),0x7fff,param_1,param_2);
        return;
      }
      FUN_1003eb9c((int *)(DAT_101f52e0),param_1,param_2);
      return;
    }
    if (uVar2 == 0x8000) {
      return;
    }
    if (uVar2 == 0x9000) {
      return;
    }
  }
  FUN_10016e60(param_1,param_2,param_3);
  return;
}
