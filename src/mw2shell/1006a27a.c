/* SPDX-License-Identifier: MIT */
/* mw2shell 1006a27a */
/* mw2shell 1006a27a: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };

int __cdecl FUN_1006a27a(int param_1, uint * param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar3 = (int *)(param_1 + 8);
  iVar2 = 1;
  piVar4 = piVar3;
  if (param_2 != (uint *)0x0) {
    *param_2 = 0;
    param_2 = param_2 + 1;
  }
joined_r0x1006a2aa:
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 == 0) {
      return iVar2;
    }
    piVar4 = piVar4 + 2;
    piVar5 = piVar3;
    do {
      if (*piVar4 == *piVar5) goto joined_r0x1006a2aa;
      piVar5 = piVar5 + 2;
    } while ((int)piVar5 < (int)piVar4);
    if (param_2 != (uint *)0x0) {
      *param_2 = (uint)((int)piVar4 - (int)piVar3) >> 3;
      param_2 = param_2 + 1;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}
