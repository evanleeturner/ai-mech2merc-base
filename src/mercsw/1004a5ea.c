/* SPDX-License-Identifier: MIT */
/* mercsw 1004a5ea */
/* mercsw 1004a5ea: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3904;
undefined __cdecl NormalizeVec3(uint * param_1, uint * param_2, uint * param_3);
int __cdecl FUN_10006b20(int param_1);
int __cdecl FixedMul29(int param_1, int param_2);
undefined __cdecl FUN_10006b9a(int param_1);

void __cdecl FUN_1004a5ea(int param_1, int * param_2, int * param_3, int * param_4)

{
  int iVar1;
  uint local_10 [3];
  
  local_10[2] = -*(int *)(param_1 + 0x14);
  local_10[1] = 0;
  local_10[0] = *(uint *)(param_1 + 0xc);
  NormalizeVec3(local_10 + 2,local_10 + 1,local_10);
  iVar1 = FUN_10006b20(*(int *)(param_1 + 0x2c));
  iVar1 = FixedMul29(local_10[2],iVar1);
  *param_2 = *param_2 + (iVar1 >> 9);
  iVar1 = FUN_10006b20(*(int *)(param_1 + 0x2c));
  iVar1 = FixedMul29(local_10[0],iVar1);
  *param_4 = *param_4 + (iVar1 >> 9);
  iVar1 = FUN_10006b9a(*(int *)(param_1 + 0x2c));
  iVar1 = FixedMul29(local_10[0],iVar1);
  *param_3 = *param_3 + (iVar1 >> 10);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + DAT_100b3904 * 0x3fa57;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) % 0x1680000;
  return;
}
