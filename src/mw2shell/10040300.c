/* SPDX-License-Identifier: MIT */
/* mw2shell 10040300 */
/* mw2shell 10040300: Ghidra's C, repaired by tools/ghidra_repair.py */
uint __fastcall FUN_10040330(undefined4 * param_1);

void __fastcall FUN_10040300(undefined4 * param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x3a);
  *(undefined4 *)((int)param_1 + 0x3a) = 0xffffffff;
  if (-1 < iVar1) {
    do {
      FUN_10040330(param_1);
    } while (*(int *)((int)param_1 + 0x3a) < iVar1);
  }
  return;
}
