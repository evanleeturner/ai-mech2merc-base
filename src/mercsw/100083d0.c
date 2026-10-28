/* SPDX-License-Identifier: MIT */
/* mercsw 100083d0 */
/* mercsw 100083d0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100a7188[];
extern undefined DAT_100f3040[];
extern undefined DAT_101f5300[];
extern undefined4 DAT_10215658;
extern undefined4 PTR_DAT_100aaf68;
extern undefined PTR_DAT_100b2cf0[];
int __cdecl FUN_10065e40(undefined4 param_1, int param_2, int param_3);
int * __cdecl FUN_100660e1(int param_1, int * param_2, int * param_3);
int __cdecl FUN_10066145(int param_1, uint param_2);
int __cdecl FUN_10066342(undefined4 param_1, int * param_2, int param_3);
int __cdecl FUN_10065ebf(int param_1, int param_2, int param_3);
undefined __cdecl FUN_10009ce8(int param_1);

void __cdecl FUN_100083d0(int param_1, undefined4 * param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_2;
    DAT_10215658 = param_1;
    *puVar1 = (undefined4)(DAT_101f5300);
    FUN_10065e40((undefined4)(DAT_101f5300),(int)puVar1,(int)puVar1);
    if (param_1 == 1) {
      puVar4 = puVar1;
      ppuVar5 = (undefined **)(PTR_DAT_100b2cf0);
      for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppuVar5 = (undefined *)*puVar4;
        puVar4 = puVar4 + 1;
        ppuVar5 = ppuVar5 + 1;
      }
    }
    puVar4 = puVar1;
    puVar6 = (undefined4 *)(DAT_100f3040 + param_2[2] * 0x14);
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_100660e1((int)puVar1,(int *)(param_2 + 0x16),(int *)(param_2 + 0x16));
    FUN_100660e1((int)puVar1,(int *)(param_2 + 0x18),(int *)(param_2 + 0x18));
    FUN_100660e1((int)puVar1,(int *)(param_2 + 0x1a),(int *)(param_2 + 0x1a));
    iVar3 = param_2[5];
    if (iVar3 != 0) {
      piVar2 = *(int **)(*(int *)(iVar3 + 4) + 4);
      *piVar2 = (int)DAT_101f5300;
      if (param_1 == 4) {
        FUN_10066145((int)piVar2,*(uint *)(PTR_DAT_100aaf68 + 0x44));
        FUN_10066342((undefined4)(DAT_101f5300),piVar2,(int)piVar2);
      }
      else {
        FUN_10065ebf((int)puVar1,(int)piVar2,(int)piVar2);
      }
      piVar2 = *(int **)(*(int *)(iVar3 + 4) + 8);
      *piVar2 = (int)DAT_101f5300;
      if (param_1 == 4) {
        FUN_10066145((int)piVar2,*(uint *)(PTR_DAT_100aaf68 + 0x44));
        FUN_10066342((undefined4)(DAT_101f5300),piVar2,(int)piVar2);
      }
      else {
        FUN_10065ebf((int)puVar1,(int)piVar2,(int)piVar2);
      }
      **(undefined4 **)(*(int *)(iVar3 + 4) + 0xc) = (undefined4)(DAT_101f5300);
    }
    param_2[0x1f] = *(undefined4 *)(DAT_100a7188 + param_2[0x1f] * 4);
    param_2[0x20] = *(undefined4 *)(DAT_100a7188 + param_2[0x20] * 4);
    param_2[0x21] = *(undefined4 *)(DAT_100a7188 + param_2[0x21] * 4);
    param_2[0x22] = *(undefined4 *)(DAT_100a7188 + param_2[0x22] * 4);
    FUN_10009ce8(0);
  }
  return;
}
