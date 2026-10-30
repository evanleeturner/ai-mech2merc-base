/* SPDX-License-Identifier: MIT */
/* mercsw 1008664f */
/* mercsw 1008664f: Ghidra's C, repaired by tools/ghidra_repair.py */
ushort * __cdecl FindCacheEntry(uint param_1, int * param_2);
undefined __cdecl FUN_10085f40(int param_1);

void __cdecl FUN_1008664f(uint param_1, int * param_2)

{
  ushort *puVar1;
  
  puVar1 = FindCacheEntry(param_1,param_2);
  if (puVar1 != (ushort *)0x0) {
    FUN_10085f40((int)puVar1);
  }
  return;
}
