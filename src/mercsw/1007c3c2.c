/* SPDX-License-Identifier: MIT */
/* mercsw 1007c3c2 */
/* mercsw 1007c3c2: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100b6800[];
extern undefined DAT_100cf0d0[];
extern undefined DAT_100cf0d4[];
extern undefined DAT_100cf0e0[];
undefined4 __cdecl FUN_1002f28d(int param_1);
undefined4 __cdecl FUN_1001cac9(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
undefined __cdecl FUN_1004aa97(undefined4 param_1, uint param_2, int param_3, int param_4, int param_5, int param_6, undefined4 param_7, int param_8);
undefined __cdecl FUN_1007cbc4(int * param_1);
int __cdecl FUN_1007c9fd(int param_1);
undefined __cdecl FUN_1007c97d(int param_1);

void __cdecl FUN_1007c3c2(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = param_1 * 0x14;
  piVar1 = *(int **)(DAT_100cf0d4 + iVar2);
  if (piVar1 != (int *)0x0) {
    piVar8 = &local_14;
    piVar7 = &local_10;
    piVar6 = &local_c;
    iVar3 = FUN_1002f28d((int)piVar1);
    FUN_1001cac9(iVar3,(undefined4 *)(piVar6),(undefined4 *)(piVar7),(undefined4 *)(piVar8));
    FUN_1004aa97(0xfffffffe,7,local_c,local_10,local_14,local_c,local_10,local_14);
    FUN_1007cbc4(piVar1);
    if (*(int *)(DAT_100cf0e0 + iVar2) != 0) {
      ((void (*)(int *))((**(code **)(DAT_100cf0e0 + iVar2))))(piVar1);
    }
    local_8 = FUN_1007c9fd((int)piVar1);
    if (local_8 != -1) {
      FUN_1007c97d(local_8);
    }
    puVar4 = (undefined4 *)(DAT_100b6800);
    puVar5 = (undefined4 *)(DAT_100cf0d0 + iVar2);
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  return;
}
