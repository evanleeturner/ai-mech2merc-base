/* SPDX-License-Identifier: MIT */
/* mercsw 10066ff7 */
/* mercsw 10066ff7: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 PTR_DAT_100aaf68;
undefined __cdecl FUN_10006b9a(int param_1);
int __cdecl FUN_10006b20(int param_1);
int __cdecl FixedMul16(int param_1, int param_2);
int __cdecl CheckedFixedDiv16(int param_1, uint param_2, undefined4 * param_3);
int * __cdecl FUN_10067126(int * param_1, undefined4 param_2, int param_3, int * param_4);

int * __cdecl FUN_10066ff7(int param_1, int param_2, int * param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  (void)local_10;
  iVar3 = (param_2 % 0x1680000 + 0x1680000) % 0x1680000;
  local_14 = ((int)(((unsigned int)(*(int *)(param_1 + 0xc)) - (unsigned int)(*(int *)(param_1 + 4))) + (unsigned int)(1))) >> 1;
  local_10 = ((int)(((unsigned int)(*(int *)(param_1 + 0x10)) - (unsigned int)(*(int *)(param_1 + 8))) + (unsigned int)(1))) >> 1;
  if ((iVar3 < 0x5a0000) || (0x10e0000 < iVar3)) {
    local_8 = 0;
  }
  else {
    local_8 = 1;
  }
  if (iVar3 < 0xb40001) {
    local_8 = local_8 | 2;
  }
  iVar1 = FUN_10006b9a(iVar3);
  iVar3 = FUN_10006b20(iVar3);
  uVar2 = FixedMul16(iVar3 >> 0xd,*(int *)(PTR_DAT_100aaf68 + 0x44));
  uVar2 = CheckedFixedDiv16(iVar1 >> 0xd,uVar2,(undefined4 *)(&local_c));
  local_8 = (uVar2 & 1) << 2 | (local_8 & 0xfffffffb);
  local_c = -local_c;
  FUN_10067126(&local_14,local_8,local_c,param_3);
  return param_3;
}
