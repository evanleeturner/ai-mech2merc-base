/* SPDX-License-Identifier: MIT */
/* mercsw 10063fbd */
/* mercsw 10063fbd: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int * DAT_100ab0a8;
undefined __cdecl FUN_1006403e(int param_1, int * param_2, int * param_3, int * param_4);
undefined __cdecl FUN_1002f322(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
undefined __cdecl SetSegmentFromDirection(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8);

void __cdecl FUN_10063fbd(int param_1, int * param_2)

{
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_1006403e(param_1,&local_8,&local_c,&local_10);
  FUN_1002f322(*(int *)(param_1 + 0x44),(undefined4 *)(&local_14),(undefined4 *)(&local_18),(undefined4 *)(&local_1c));
  if (DAT_100ab0a8 != (int *)0x0) {
    local_18 = local_18 + *DAT_100ab0a8;
  }
  SetSegmentFromDirection(param_2,local_14,local_18,local_1c,local_8,local_c,local_10,150000);
  return;
}
