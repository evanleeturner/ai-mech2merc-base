/* SPDX-License-Identifier: MIT */
/* mercsw 1002950f */
/* mercsw 1002950f: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_100832d4(int param_1);

bool __cdecl FUN_1002950f(int param_1, short param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 0xdc) = (int)param_2;
  iVar1 = FUN_100832d4(param_1);
  return 0 < iVar1;
}
