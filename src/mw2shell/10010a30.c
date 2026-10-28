/* SPDX-License-Identifier: MIT */
/* mw2shell 10010a30 */
/* mw2shell 10010a30: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __stdcall _AIL_start_sequence_4(undefined4);
undefined __thiscall FUN_100109d0(void * this, undefined4 param_1);

void __fastcall FUN_10010a30(int * param_1)

{
  if (param_1[1] != 0) {
    _AIL_start_sequence_4(param_1[1]);
    FUN_100109d0(param_1,param_1[5]);
    *(int **)(*param_1 + 0xd) = param_1;
  }
  return;
}
