/* SPDX-License-Identifier: MIT */
/* mw2shell 10040640 */
/* mw2shell 10040640: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __thiscall FUN_10013360(void * this, int param_1);
undefined __thiscall FUN_10012f10(void * this, int param_1, int param_2, int param_3, int param_4);

void __fastcall FUN_10040640(int param_1)

{
  *(undefined4 *)(param_1 + 0x36) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x35) = 0;
  FUN_10013360(*(void **)(param_1 + 0xc),param_1);
  *(undefined1 *)(param_1 + 0x14) = 0;
  FUN_10012f10(*(void **)(param_1 + 0xc),*(int *)(param_1 + 0x25),*(int *)(param_1 + 0x29),
               *(int *)(param_1 + 0x21),*(int *)(param_1 + 0x1d));
  return;
}
