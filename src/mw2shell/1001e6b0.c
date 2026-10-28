/* SPDX-License-Identifier: MIT */
/* mw2shell 1001e6b0 */
/* mw2shell 1001e6b0: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
undefined __fastcall FUN_100402b0(undefined4 * param_1);

void __fastcall FUN_1001e6b0(int * param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(*param_1 + 4)) {
    do {
      puVar1 = (undefined4 *)FUN_10018060(*param_1,iVar2);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_100402b0(puVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*param_1 + 4));
  }
  return;
}
