/* SPDX-License-Identifier: MIT */
/* mercsw 10044a83 */
/* mercsw 10044a83: Ghidra's C, repaired by tools/ghidra_repair.py */
bool __cdecl FUN_1002950f(int param_1, short param_2);
int __cdecl FUN_1002a132(int param_1);
undefined4 __cdecl FUN_10044bba(int param_1, int param_2);
undefined __cdecl FUN_1004403d(int param_1, undefined1 param_2);

void __cdecl FUN_10044a83(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if ((((*(byte *)(param_1 + 0x1f2) & 1) != 0) && (*(short *)(param_1 + 0x1e4) == 0)) &&
     (*(short *)(param_1 + 0x1c4) != 10)) {
    FUN_1002950f(param_1,*(short *)(param_1 + 0x178));
    uVar1 = FUN_1002a132(param_1);
    iVar2 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
    if ((iVar2 < *(int *)(iVar3 + 0x414)) &&
       ((-*(int *)(iVar3 + 0x414) < iVar2 || (*(int *)(*(int *)(param_1 + 0x4c) + 8) == 0)))) {
      if (((*(int *)(param_1 + 0x1ea) == 0) && (*(char *)(*(int *)(param_1 + 0x4c) + 0x1d) != '\0'))
         && (*(int *)(param_1 + 0x78) != 0)) {
        FUN_1004403d(param_1,0);
      }
    }
    else {
      iVar3 = FUN_10044bba(param_1,0x14);
      if ((iVar3 != 0) &&
         ((*(int *)(param_1 + 0x78) != 0 && (*(char *)(*(int *)(param_1 + 0x4c) + 0x1d) == '\0'))))
      {
        FUN_1004403d(param_1,1);
      }
    }
  }
  return;
}
