/* SPDX-License-Identifier: MIT */
/* mw2shell 10063f00 */
/* mw2shell 10063f00: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl ClearAllEntryFlags(int * param_1);

void __cdecl FUN_10063f00(int * param_1, int param_2)

{
  int *piVar1;
  int iVar2;
  
  ClearAllEntryFlags(param_1);
  iVar2 = *param_1;
  while (iVar2 != -1) {
    if (param_1[9] == param_2) {
      param_1[0xb] = 1;
    }
    piVar1 = param_1 + 0xe;
    param_1 = param_1 + 0xe;
    iVar2 = *piVar1;
  }
  return;
}
