/* SPDX-License-Identifier: MIT */
/* mw2shell 100501c0 */
/* mw2shell 100501c0: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __fastcall FUN_1003b520(int param_1);
undefined __fastcall FUN_10010de0(int * param_1);
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
undefined __fastcall FUN_10040640(int param_1);

void __fastcall FUN_100501c0(int * param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[8] != 0) {
    FUN_1003b520(param_1[8]);
  }
  if ((int *)param_1[0xc] != (int *)0x0) {
    FUN_10010de0((int *)param_1[0xc]);
  }
  iVar1 = 0;
  if (0 < *(int *)(*param_1 + 4)) {
    do {
      iVar2 = iVar1 + 1;
      iVar1 = FUN_10018060(*param_1,iVar1);
      FUN_10040640(iVar1);
      iVar1 = iVar2;
    } while (iVar2 < *(int *)(*param_1 + 4));
  }
  return;
}
