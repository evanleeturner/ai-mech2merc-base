/* SPDX-License-Identifier: MIT */
/* mercsw 10066f36 */
/* mercsw 10066f36: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl CheckedFixedDiv16(int param_1, uint param_2, undefined4 * param_3);
int * __cdecl FUN_10067126(int * param_1, undefined4 param_2, int param_3, int * param_4);

int * __cdecl FUN_10066f36(int param_1, int * param_2, int * param_3)

{
  uint uVar1;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_14 = ((int)(((unsigned int)(*(int *)(param_1 + 0xc)) - (unsigned int)(*(int *)(param_1 + 4))) + (unsigned int)(1))) >> 1;
  local_10 = ((int)(((unsigned int)(*(int *)(param_1 + 0x10)) - (unsigned int)(*(int *)(param_1 + 8))) + (unsigned int)(1))) >> 1;
  local_8 = (uint)(-1 < local_14 - *param_2);
  if (-1 < local_10 - param_2[1]) {
    local_8 = local_8 | 2;
  }
  uVar1 = CheckedFixedDiv16(local_14 - *param_2,local_10 - param_2[1],(undefined4 *)(&local_c));
  local_8 = (uVar1 & 1) << 2 | (local_8 & 0xfffffffb);
  FUN_10067126(&local_14,local_8,local_c,param_3);
  return param_3;
}
