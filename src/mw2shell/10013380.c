/* SPDX-License-Identifier: MIT */
/* mw2shell 10013380 */
/* mw2shell 10013380: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_1008eb64;
undefined __fastcall FUN_1001e6b0(int * param_1);

void __thiscall FUN_10013380(void * this, int param_1)

{
  int *piVar1;
  
  DAT_1008eb64 = 1;
  if (param_1 == 0) {
    piVar1 = *(int **)((int)this + 0x1a);
  }
  else {
    piVar1 = *(int **)((int)this + 0x16);
  }
  FUN_1001e6b0(piVar1);
  DAT_1008eb64 = 0;
  return;
}
