/* SPDX-License-Identifier: MIT */
/* mw2shell 100109d0 */
/* mw2shell 100109d0: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __stdcall _AIL_set_sequence_loop_count_8(undefined4, undefined4);

void __thiscall FUN_100109d0(void * this, undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x14) = param_1;
  if (*(int *)((int)this + 4) != 0) {
    _AIL_set_sequence_loop_count_8(*(int *)((int)this + 4),param_1);
  }
  return;
}
