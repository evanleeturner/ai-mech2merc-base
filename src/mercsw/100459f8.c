/* SPDX-License-Identifier: MIT */
/* mercsw 100459f8 */
/* mercsw 100459f8: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100affd8;
undefined4 __cdecl FUN_10045873(int param_1, int param_2, int param_3);

undefined4 __cdecl FUN_100459f8(int param_1, int param_2, int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_100affd8 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = FUN_10045873(param_1,param_2,param_3);
    if (iVar2 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
