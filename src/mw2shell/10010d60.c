/* SPDX-License-Identifier: MIT */
/* mw2shell 10010d60 */
/* mw2shell 10010d60: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __stdcall _AIL_set_sample_loop_count_8(undefined4, undefined4);

void __fastcall FUN_10010d60(int param_1)

{
  if (*(int *)(param_1 + 0x29) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    _AIL_set_sample_loop_count_8(*(int *)(param_1 + 0x29),0);
  }
  return;
}
