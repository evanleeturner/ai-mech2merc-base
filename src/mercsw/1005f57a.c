/* SPDX-License-Identifier: MIT */
/* mercsw 1005f57a */
/* mercsw 1005f57a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100b3530[];
extern undefined4 PTR_DAT_100af0ac;
bool __cdecl FUN_1003eb02(uint param_1, int * param_2);

void __stdcall FUN_1005f57a(void)

{
  int local_8;
  
  for (local_8 = 0; *(int *)(DAT_100b3530 + local_8 * 4) != -1; local_8 = local_8 + 1) {
    FUN_1003eb02(*(uint *)(DAT_100b3530 + local_8 * 4),(int *)PTR_DAT_100af0ac);
  }
  return;
}
