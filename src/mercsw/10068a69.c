/* SPDX-License-Identifier: MIT */
/* mercsw 10068a69 */
/* mercsw 10068a69: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100f3040[];
extern undefined4 DAT_10114ec8;
undefined __cdecl FUN_10003d80(int * param_1);
undefined4 * __cdecl FUN_10003fc7(int param_1, int * param_2);
undefined __cdecl FUN_100682e7(int param_1);

void __cdecl FUN_10068a69(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_34 [5];
  undefined4 local_20 [5];
  int *local_c;
  undefined4 *local_8;
  
  if ((((*(short *)(param_1 + 4) != 0) && (*(int *)(param_1 + 0x30) != 0)) &&
      (*(int *)(param_1 + 0x30) != 2)) && (*(int *)(param_1 + 0x30) != 1)) {
    local_c = *(int **)(param_1 + 0xac);
    if (local_c != (int *)0x0) {
      if (*(int *)(param_1 + 0xb0) != 1) {
        FUN_10003d80(local_c);
      }
      local_8 = FUN_10003fc7(0,local_c);
      if (local_8 == (undefined4 *)0x0) {
        FUN_100682e7(param_1);
      }
      else {
        puVar2 = (undefined4 *)(DAT_100f3040 + *(int *)(param_1 + 0xc) * 0x14);
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
        puVar3 = (undefined4 *)(DAT_100f3040 + *(int *)(param_1 + 0xc) * 0x14);
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
        FUN_100682e7(param_1);
        puVar2 = local_20;
        puVar3 = (undefined4 *)(DAT_100f3040 + *(int *)(param_1 + 0xc) * 0x14);
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
