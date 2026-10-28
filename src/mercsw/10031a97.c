/* SPDX-License-Identifier: MIT */
/* mercsw 10031a97 */
/* mercsw 10031a97: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1002f6e8(int param_1);
undefined __cdecl FUN_100317f8(int param_1, int param_2);

void __cdecl FUN_10031a97(int param_1, int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_8;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    iVar2 = *(int *)(param_2 + 0x6c);
    iVar3 = *(int *)(iVar2 + 0x20);
    if (*(int *)(*(int *)(iVar2 + 0x20) + 0x10) != *(int *)(iVar2 + 0x50)) {
      FUN_1002f6e8(iVar2);
    }
    sVar1 = *(short *)(iVar3 + 6);
    for (local_14 = 0; local_14 < sVar1; local_14 = local_14 + 1) {
      FUN_100317f8(param_1,*(int *)(iVar3 + 8) + iVar3 + local_14 * 0x24);
    }
    if (*(int *)(param_2 + 4) != 0) {
      for (local_8 = *(int *)(param_2 + 4); local_8 != 0; local_8 = *(int *)(local_8 + 8)) {
        FUN_10031a97(param_1,local_8);
      }
    }
  }
  return;
}
