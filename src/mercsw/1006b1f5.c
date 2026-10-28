/* SPDX-License-Identifier: MIT */
/* mercsw 1006b1f5 */
/* mercsw 1006b1f5: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_10002570(uint param_1, int param_2);
int __cdecl FUN_10003d60(int param_1, int param_2);
undefined4 __cdecl FUN_1006065d(int param_1, uint param_2, int param_3);

void __cdecl FUN_1006b1f5(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 0x10) {
    param_1 = FUN_10002570(param_1,0xf);
  }
  else {
    param_1 = 0x10000;
  }
  uVar1 = FUN_10003d60(0x16a,param_1);
  FUN_1006065d(0x11,uVar1,1);
  return;
}
