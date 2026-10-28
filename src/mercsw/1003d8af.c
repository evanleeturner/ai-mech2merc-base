/* SPDX-License-Identifier: MIT */
/* mercsw 1003d8af */
/* mercsw 1003d8af: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aefc0;
undefined __cdecl FUN_1002f322(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
undefined __cdecl FUN_1003d99c(int param_1, int param_2, int param_3);
undefined __cdecl FUN_1003d816(int param_1);

void __cdecl FUN_1003d8af(ushort * param_1)

{
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (((param_1 != (ushort *)0x0) && (DAT_100aefc0 != 0)) && ((*param_1 & 0x1000) == 0)) {
    FUN_1002f322(*(int *)(param_1 + 0xc),(undefined4 *)(&local_c),&local_18,(undefined4 *)(&local_8));
    local_10 = (local_c + 150000) / 25000;
    local_14 = (local_8 + 150000) / 25000;
    if ((*(int *)(param_1 + 0x22) != local_10) || (*(int *)(param_1 + 0x24) != local_14)) {
      if (((local_10 < 0) || ((0xb < local_10 || (local_14 < 0)))) || (0xb < local_14)) {
        FUN_1003d816(*(int *)(param_1 + 0xc));
      }
      else {
        FUN_1003d99c(*(int *)(param_1 + 0xc),local_10,local_14);
      }
    }
  }
  return;
}
