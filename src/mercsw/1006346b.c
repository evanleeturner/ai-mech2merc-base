/* SPDX-License-Identifier: MIT */
/* mercsw 1006346b */
/* mercsw 1006346b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100a7bd4[];
extern undefined DAT_100a9678[];
extern undefined4 PTR_DAT_100af0a8;
bool __cdecl FUN_1003eb02(uint param_1, int * param_2);

void __stdcall FUN_1006346b(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x42; local_8 = local_8 + 1) {
    if (0 < *(int *)(DAT_100a7bd4 + local_8 * 0x68)) {
      FUN_1003eb02(*(uint *)(DAT_100a7bd4 + local_8 * 0x68),(int *)PTR_DAT_100af0a8);
    }
  }
  for (local_8 = 0; local_8 < 0x24; local_8 = local_8 + 1) {
    if (0 < *(int *)(DAT_100a9678 + local_8 * 0x2c)) {
      FUN_1003eb02(*(uint *)(DAT_100a9678 + local_8 * 0x2c),(int *)PTR_DAT_100af0a8);
    }
  }
  return;
}
