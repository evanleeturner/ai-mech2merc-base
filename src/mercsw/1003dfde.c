/* SPDX-License-Identifier: MIT */
/* mercsw 1003dfde */
/* mercsw 1003dfde: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1003e369(int param_1);
undefined __cdecl FUN_1003e3e3(int param_1, int param_2);

void __cdecl FUN_1003dfde(ushort * param_1)

{
  if (((param_1 != (ushort *)0x0) && ((*param_1 & 0x1000) == 0)) &&
     (*param_1 = *param_1 | 0x1000, *(int *)(param_1 + 2) != 0)) {
    FUN_1003e369((int)param_1);
    FUN_1003e3e3((int)param_1,0x100c6d30);
  }
  return;
}
