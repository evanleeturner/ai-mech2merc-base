/* SPDX-License-Identifier: MIT */
/* mw2shell 1003b520 */
/* mw2shell 1003b520: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_10067af3(int * param_1, int param_2, int param_3, int * param_4, int param_5, int param_6, uint param_7);
undefined __thiscall FUN_10012f10(void * this, int param_1, int param_2, int param_3, int param_4);
undefined __thiscall FUN_10013380(void * this, int param_1);

void __fastcall FUN_1003b520(int param_1)

{
  FUN_10067af3((int *)(param_1 + 0x1c),0,0,(int *)(param_1 + 0x30),0,0,0xffffffff);
  FUN_10012f10(*(void **)(param_1 + 8),*(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10),
               *(int *)(param_1 + 0x14),*(int *)(param_1 + 0x18));
  FUN_10013380(*(void **)(param_1 + 8),0);
  FUN_10013380(*(void **)(param_1 + 8),1);
  return;
}
