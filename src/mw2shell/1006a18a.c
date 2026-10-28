/* SPDX-License-Identifier: MIT */
/* mw2shell 1006a18a */
/* mw2shell 1006a18a: Ghidra's C, repaired by tools/ghidra_repair.py */

void __cdecl FUN_1006a18a(int param_1, int param_2, int param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = *(int *)(param_1 + param_2 * 8 + 0xc);
  if (iVar2 != 0) {
    pbVar3 = (byte *)(iVar2 + param_1);
    iVar2 = *(int *)pbVar3;
    do {
      iVar1 = (uint)pbVar3[4] * 3;
      *(byte *)(iVar1 + param_3) = pbVar3[5];
      *(undefined2 *)(iVar1 + 1 + param_3) = *(undefined2 *)(pbVar3 + 6);
      iVar2 = iVar2 + -1;
      pbVar3 = pbVar3 + 4;
    } while (iVar2 != 0);
  }
  return;
}
