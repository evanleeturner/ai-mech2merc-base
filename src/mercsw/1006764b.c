/* SPDX-License-Identifier: MIT */
/* mercsw 1006764b */
/* mercsw 1006764b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 PTR_DAT_100aaf68;
undefined4 __cdecl FUN_10002570(uint param_1, int param_2);

bool __cdecl FUN_1006764b(int param_1, int param_2, int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = ((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) + 1) / 2 + -1;
  iVar2 = param_2 - (((int)(((unsigned int)(*(int *)(param_1 + 0xc)) - (unsigned int)(*(int *)(param_1 + 4))) + (unsigned int)(1))) >> 1);
  iVar3 = FUN_10002570(param_3 - (((int)(((unsigned int)(*(int *)(param_1 + 0x10)) - (unsigned int)(*(int *)(param_1 + 8))) + (unsigned int)(1))) >> 1),
                       *(int *)(PTR_DAT_100aaf68 + 0x44));
  return iVar3 * iVar3 + iVar2 * iVar2 <= iVar1 * iVar1;
}
