/* SPDX-License-Identifier: MIT */
/* mw2shell 10032e00 */
/* mw2shell 10032e00: Ghidra's C, repaired by tools/ghidra_repair.py */

uint __cdecl FUN_10032e00(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar2 = (int *)(param_1 + 0x368);
  iVar5 = 0;
  do {
    iVar3 = 0;
    piVar4 = piVar2;
    do {
      iVar1 = *piVar4;
      if (iVar1 / 10 == 700) {
        return 0x201;
      }
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    piVar2 = piVar2 + 0xc;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  return iVar1 / 10 & 0xffffff00;
}
