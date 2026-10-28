/* SPDX-License-Identifier: MIT */
/* mercsw 1000a5b7 */
/* mercsw 1000a5b7: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a7160;
extern undefined DAT_100a7b30[];
extern undefined4 DAT_100adcd0;
extern undefined4 DAT_100b38fc;
extern undefined4 DAT_100b3904;
extern undefined4 DAT_100c4f30;
extern undefined4 DAT_100c4f34;
extern undefined4 DAT_10215658;
extern undefined4 DAT_10215668;
int __cdecl FUN_100498c5(int param_1);
undefined __stdcall FUN_1000898c(void);
int __cdecl FUN_10051f43(int param_1);
undefined __cdecl FUN_10003d80(int * param_1);
undefined4 __cdecl FUN_1000a3fd(int param_1, undefined4 * param_2, int * param_3, int param_4);

void __stdcall FUN_1000a5b7(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)(DAT_100a7b30 + DAT_10215658 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  piVar2 = (int *)puVar1[5];
  if (piVar2 == (int *)0x0) {
    return;
  }
  iVar3 = FUN_100498c5(4);
  if ((iVar3 != 0) || (DAT_10215668 != 0)) {
    DAT_10215668 = 0;
    FUN_1000898c();
    return;
  }
  if (DAT_100a7160 == 0) {
    iVar3 = FUN_10051f43(*(int *)piVar2[1]);
    DAT_100c4f30 = DAT_100b38fc + iVar3;
    DAT_100a7160 = 1;
  }
  else if (DAT_100a7160 != 1) {
    if (DAT_100a7160 != 2) {
      return;
    }
    goto LAB_1000a6aa;
  }
  if (DAT_100b38fc < DAT_100c4f30) {
    FUN_1000898c();
    return;
  }
  DAT_100a7160 = 2;
  iVar3 = FUN_10051f43(*(int *)piVar2[1]);
  DAT_100c4f34 = DAT_100b38fc + iVar3;
  FUN_10003d80(piVar2);
LAB_1000a6aa:
  DAT_100adcd0 = 0;
  iVar3 = FUN_10051f43((*(int *)piVar2[1] - DAT_100b3904) + -1);
  *(int *)(*piVar2 + 8) = iVar3;
  FUN_1000a3fd(1,puVar1,piVar2,1);
  if (DAT_100c4f34 < DAT_100b38fc) {
    DAT_100a7160 = 0;
  }
  return;
}
