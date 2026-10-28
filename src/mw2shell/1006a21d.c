/* SPDX-License-Identifier: MIT */
/* mw2shell 1006a21d */
/* mw2shell 1006a21d: Ghidra's C, repaired by tools/ghidra_repair.py */

undefined4 * __cdecl FUN_1006a21d(int param_1, int param_2, undefined4 * param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  iVar1 = *(int *)(param_1 + param_2 * 8 + 0xc);
  if (iVar1 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    piVar5 = (int *)(iVar1 + param_1);
    puVar3 = (undefined4 *)*piVar5;
    puVar4 = puVar3;
    puVar2 = param_3;
    while (puVar2 != (undefined4 *)0x0) {
      piVar5 = piVar5 + 1;
      *piVar5 = *param_3;
      puVar4 = (undefined4 *)((int)puVar4 + -1);
      param_3 = param_3 + 1;
      puVar2 = puVar4;
    }
  }
  return puVar3;
}
