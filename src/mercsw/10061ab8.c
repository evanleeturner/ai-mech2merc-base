/* SPDX-License-Identifier: MIT */
/* mercsw 10061ab8 */
/* mercsw 10061ab8: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b36fc;
extern undefined DAT_100f30cc[];
extern undefined4 DAT_10114ec8;
undefined __cdecl FUN_10003d80(int * param_1);
undefined4 * __cdecl FUN_10003fc7(int param_1, int * param_2);
undefined __cdecl FUN_1006147f(int param_1);

void __cdecl FUN_10061ab8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_34 [5];
  undefined4 local_20 [5];
  int *local_c;
  undefined4 *local_8;
  
  if ((*(short *)(param_1 + 4) != 0) && (DAT_100b36fc != 0)) {
    local_c = *(int **)(param_1 + 0xac);
    if (local_c != (int *)0x0) {
      if (*(int *)(param_1 + 0xb0) != 1) {
        FUN_10003d80(local_c);
      }
      local_8 = FUN_10003fc7(0,local_c);
      if (local_8 == (undefined4 *)0x0) {
        FUN_1006147f(param_1);
      }
      else {
        puVar2 = (undefined4 *)(DAT_100f30cc);
        puVar3 = local_20;
        for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
        puVar2 = *(undefined4 **)(param_1 + 0xa4);
        puVar3 = local_34;
        for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
        puVar2 = local_8;
        puVar3 = (undefined4 *)(DAT_100f30cc);
        for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
        puVar2 = local_8;
        puVar3 = *(undefined4 **)(param_1 + 0xa4);
        for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
        FUN_1006147f(param_1);
        puVar2 = local_20;
        puVar3 = (undefined4 *)(DAT_100f30cc);
        for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
        puVar2 = local_34;
        puVar3 = *(undefined4 **)(param_1 + 0xa4);
        for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
      }
    }
    *(undefined4 *)(param_1 + 0xb0) = DAT_10114ec8;
  }
  return;
}
