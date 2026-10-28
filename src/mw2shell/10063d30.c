/* SPDX-License-Identifier: MIT */
/* mw2shell 10063d30 */
/* mw2shell 10063d30: Ghidra's C, repaired by tools/ghidra_repair.py */

void __cdecl FUN_10063d30(int * param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    while (iVar2 != -1) {
      uVar3 = param_1[1];
      if ((int)uVar3 < 0) {
        param_1[1] = ((uVar3 & 0xff0) >> 4) * iVar5 + (uVar3 & 0xf) + iVar4;
      }
      piVar1 = param_1 + 6;
      if ((code *)param_1[7] == (code *)0x0) {
        *piVar1 = 0;
      }
      else {
        iVar4 = ((int (*)(int *))((void (*)(void))((*(code *)param_1[7]))))(param_1);
        *piVar1 = iVar4;
      }
      if (*piVar1 != 0) {
        if (param_1[2] == -1) {
          param_1[2] = *(int *)(*piVar1 + 0x21);
        }
        if (param_1[3] == -1) {
          param_1[3] = *(int *)(*piVar1 + 0x1d);
        }
      }
      if (param_1[2] == -1) {
        param_1[2] = 0;
      }
      if (param_1[3] == -1) {
        param_1[3] = iVar5;
      }
      iVar4 = param_1[1];
      iVar5 = param_1[3];
      piVar1 = param_1 + 0xe;
      param_1 = param_1 + 0xe;
      iVar2 = *piVar1;
    }
  }
  return;
}
