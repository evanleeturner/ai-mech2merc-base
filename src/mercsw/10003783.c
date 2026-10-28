/* SPDX-License-Identifier: MIT */
/* mercsw 10003783 */
/* mercsw 10003783: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __stdcall FUN_1003c7f5(void);
undefined __cdecl FUN_10003618(int param_1, undefined4 param_2, uint param_3, int param_4, undefined4 param_5, ushort param_6);

int __cdecl FUN_10003783(int param_1, undefined4 param_2, uint param_3, int param_4, undefined4 param_5, ushort param_6)

{
  int iVar1;
  
  iVar1 = FUN_1003c7f5();
  if (iVar1 < 1) {
    iVar1 = FUN_10003618(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return iVar1;
}
