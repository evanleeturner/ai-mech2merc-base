/* SPDX-License-Identifier: MIT */
/* mw2shell 1000a590 */
/* mw2shell 1000a590: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_10083878[];

int __cdecl FUN_1000a590(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = 0;
  if (0 < param_1) {
    piVar4 = (int *)(DAT_10083878);
    iVar2 = 8;
    do {
      iVar3 = 0xc;
      do {
        if (*piVar4 == param_1) {
          iVar1 = iVar1 + 1;
          *piVar4 = 0;
        }
        piVar4 = piVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return iVar1;
}
