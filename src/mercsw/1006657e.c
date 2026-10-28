/* SPDX-License-Identifier: MIT */
/* mercsw 1006657e */
/* mercsw 1006657e: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_1005b50f(int param_1);
undefined4 __cdecl FUN_10002570(uint param_1, int param_2);
int __cdecl FUN_100663e5(int param_1, int param_2, int param_3, int param_4);

int __cdecl FUN_1006657e(int param_1, int param_2, int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_1005b50f(param_3);
  iVar2 = FUN_10002570((int)uVar1 >> 0x10,(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) + 1);
  iVar3 = FUN_10002570(uVar1 & 0xffff,(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)) + 1);
  FUN_100663e5(param_1,param_2,iVar2,iVar3);
  return param_2;
}
