/* SPDX-License-Identifier: MIT */
/* mercsw 1003d816 */
/* mercsw 1003d816: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aefc0;
undefined __cdecl FUN_1003e369(int param_1);
undefined __cdecl FUN_1003e3e3(int param_1, int param_2);

void __cdecl FUN_1003d816(int param_1)

{
  int local_8;
  
  if ((param_1 != 0) && (DAT_100aefc0 != 0)) {
    FUN_1003e369(*(int *)(param_1 + 0x6c));
    FUN_1003e3e3(*(int *)(param_1 + 0x6c),0x100c6d18);
    *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x44) = 9999;
    *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x48) = 9999;
    for (local_8 = *(int *)(param_1 + 4); local_8 != 0; local_8 = *(int *)(local_8 + 8)) {
      FUN_1003d816(local_8);
    }
  }
  return;
}
