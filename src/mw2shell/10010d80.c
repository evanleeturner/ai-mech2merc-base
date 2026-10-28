/* SPDX-License-Identifier: MIT */
/* mw2shell 10010d80 */
/* mw2shell 10010d80: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __thiscall FUN_10010e80(void * this, undefined4 param_1);
undefined __thiscall FUN_10010e30(void * this, int param_1);
undefined4 __stdcall _AIL_start_sample_4(undefined4);

void __fastcall FUN_10010d80(void * param_1)

{
  if (*(int *)((int)param_1 + 0x29) != 0) {
    FUN_10010e80(param_1,*(undefined4 *)((int)param_1 + 0x10));
    FUN_10010e30(param_1,*(int *)((int)param_1 + 0xc));
    _AIL_start_sample_4(*(undefined4 *)((int)param_1 + 0x29));
    *(undefined1 *)((int)param_1 + 0x28) = 1;
  }
  return;
}
