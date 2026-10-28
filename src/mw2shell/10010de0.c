/* SPDX-License-Identifier: MIT */
/* mw2shell 10010de0 */
/* mw2shell 10010de0: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __stdcall _AIL_stop_sample_4(undefined4);

void __fastcall FUN_10010de0(int * param_1)

{
  if ((*(int *)((int)param_1 + 0x29) != 0) && (*(int *)(*param_1 + 5) != 0)) {
    *(undefined1 *)(param_1 + 10) = 0;
    _AIL_stop_sample_4(*(int *)((int)param_1 + 0x29));
  }
  return;
}
