/* SPDX-License-Identifier: MIT */
/* mercsw 1005ddde */
/* mercsw 1005ddde: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100ab23c;
int __cdecl FixedMul16(int param_1, int param_2);
undefined __cdecl FUN_1001d916(undefined4 param_1);

void __cdecl FUN_1005ddde(undefined4 param_1, int param_2)

{
  int iVar1;
  
  iVar1 = FixedMul16(param_2,0xf);
  if (iVar1 != DAT_100ab23c) {
    DAT_100ab23c = iVar1;
    FUN_1001d916(iVar1);
  }
  return;
}
