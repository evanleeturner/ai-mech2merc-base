/* SPDX-License-Identifier: MIT */
/* mercsw 10039240 */
/* mercsw 10039240: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ae744;
extern undefined4 DAT_100ae748;
extern undefined4 DAT_100ae74c;
extern undefined4 DAT_100ae750;
extern undefined4 DAT_100ae754;
extern undefined4 DAT_100ae758;
extern undefined4 DAT_100c6ce0;
extern undefined4 DAT_100c6ce4;
extern undefined4 DAT_100c6ce8;
extern undefined4 DAT_100c6cf0;
extern undefined4 DAT_100c6cf4;
extern undefined4 DAT_100c6cf8;
extern undefined4 DAT_100c6cfc;
undefined __cdecl FUN_1002f727(int param_1);
undefined __cdecl FUN_1002f7f7(int param_1);

void __cdecl FUN_10039240(int param_1)

{
  int iVar1;
  bool bVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_c;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x6c) != 0)) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x6c) + 0x1c), iVar1 != 0)) {
    local_18 = (int *)(iVar1 + 0x18);
    local_14 = 0x7fffffff;
    local_c = 0x7fffffff;
    local_28 = -0x7fffffff;
    local_24 = -0x7fffffff;
    local_20 = (int)*(short *)(iVar1 + 4);
    while (local_20 != 0) {
      if (local_24 < *local_18) {
        local_24 = *local_18;
      }
      if (local_28 < local_18[2]) {
        local_28 = local_18[2];
      }
      if (*local_18 < local_c) {
        local_c = *local_18;
      }
      if (local_18[2] < local_14) {
        local_14 = local_18[2];
      }
      local_18 = local_18 + 0x11;
      local_20 = local_20 + -1;
    }
    local_1c = local_24 - local_c;
    if (local_24 - local_c < local_28 - local_14) {
      local_1c = local_28 - local_14;
    }
    if (0 < local_1c) {
      bVar2 = *(int *)(param_1 + 4) != 0;
      if (bVar2) {
        local_1c = local_1c + (local_1c >> 0x1f & 0x3fffU);
      }
      else {
        local_1c = local_1c / 3 + (local_1c / 3 >> 0x1f & 0x3fffU);
      }
      DAT_100ae744 = ((local_1c >> 0xe) + 1) * 0x4000;
      DAT_100ae754 = (uint)bVar2;
      DAT_100c6cfc = ((DAT_100ae744 >> 3) + DAT_100ae744) >> 1;
      DAT_100ae758 = param_1;
      DAT_100ae748 = 1;
      DAT_100ae750 = 1;
      DAT_100ae74c = 0;
      DAT_100c6cf8 = 0;
      DAT_100c6cf4 = 0;
      DAT_100c6cf0 = 0;
      DAT_100c6ce8 = 0;
      DAT_100c6ce4 = 0;
      DAT_100c6ce0 = 0;
      FUN_1002f727(param_1);
      FUN_1002f7f7(param_1);
    }
  }
  return;
}
