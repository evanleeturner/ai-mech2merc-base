/* SPDX-License-Identifier: MIT */
/* mw2shell 10054ef0 */
/* mw2shell 10054ef0: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_10018060(int param_1, int param_2);

undefined4 __thiscall FUN_10054ef0(void * this, int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x80) != 0) {
    if ((param_1 <= *(int *)(*(int *)((int)this + 0x88) + 4)) && (-1 < param_1)) {
      uVar1 = FUN_10018060(*(int *)((int)this + 0x88),param_1 + -1);
      return uVar1;
    }
  }
  return 0;
}
