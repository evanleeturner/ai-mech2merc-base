/* SPDX-License-Identifier: MIT */
/* mercsw 1000d403 */
/* mercsw 1000d403: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100ef030[];
extern undefined DAT_100ef034[];
extern undefined DAT_101f64a4[];
extern undefined DAT_101f64ac[];
extern undefined DAT_101f64b4[];
extern undefined DAT_101f64b8[];
extern undefined DAT_101f64bc[];
extern undefined DAT_101f64c0[];
undefined __cdecl FUN_1000d2d0(int param_1);
int __cdecl FUN_1002fc9d(int param_1);
undefined __cdecl FUN_1001d671(undefined * param_1);
undefined4 __cdecl FUN_1000d875(int param_1, int param_2);
undefined __cdecl FUN_1002fc82(int param_1, undefined4 * param_2);
undefined __cdecl FUN_1000d301(int param_1);
undefined __cdecl FUN_1002fa9c(int * param_1);

int __cdecl FUN_1000d403(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_38;
  undefined4 local_34 [12];
  
  iVar1 = param_1 * 0x7c;
  if (*(int *)(DAT_101f64b8 + iVar1) == -1) {
    local_38 = -1;
  }
  else {
    iVar5 = *(int *)(DAT_101f64b8 + iVar1);
    *(uint *)(DAT_101f64ac + iVar1) = *(uint *)(DAT_101f64ac + iVar1) | 0x200;
    *(uint *)(DAT_101f64ac + iVar1) = *(uint *)(DAT_101f64ac + iVar1) | 0x800;
    *(ushort *)(DAT_100ef030 + iVar5 * 0x40) = *(ushort *)(DAT_100ef030 + iVar5 * 0x40) | 4;
    *(undefined4 *)(DAT_100ef034 + iVar5 * 0x40) = 0xffffffff;
    FUN_1000d2d0(param_1);
    puVar2 = *(undefined **)(DAT_101f64bc + iVar1);
    if (puVar2 != (undefined *)0x0) {
      if (*(int *)(DAT_101f64c0 + iVar1) != 0) {
        puVar4 = (undefined4 *)FUN_1002fc9d(*(int *)(DAT_101f64c0 + iVar1));
        puVar6 = local_34;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      FUN_1001d671(puVar2);
      *(undefined4 *)(DAT_101f64bc + iVar1) = 0;
      *(undefined4 *)(DAT_101f64c0 + iVar1) = 0;
    }
    local_38 = *(int *)(DAT_101f64b4 + iVar1);
    if (local_38 != -1) {
      iVar1 = local_38 * 0x7c;
      *(uint *)(DAT_101f64ac + iVar1) = *(uint *)(DAT_101f64ac + iVar1) & 0xfffff7ff;
      iVar5 = FUN_1000d875(local_38,*(int *)(DAT_101f64a4 + iVar1));
      if (iVar5 == 0) {
        *(uint *)(DAT_101f64ac + iVar1) = *(uint *)(DAT_101f64ac + iVar1) & 0x800;
        local_38 = -1;
      }
      else {
        piVar3 = *(int **)(DAT_101f64c0 + iVar1);
        if (piVar3 != (int *)0x0) {
          FUN_1002fc82((int)piVar3,local_34);
        }
        FUN_1000d301(local_38);
        if (piVar3 != (int *)0x0) {
          FUN_1002fa9c(piVar3);
        }
      }
    }
  }
  return local_38;
}
