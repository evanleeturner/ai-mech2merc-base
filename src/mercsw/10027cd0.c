/* SPDX-License-Identifier: MIT */
/* mercsw 10027cd0 */
/* mercsw 10027cd0: Ghidra's C, repaired by tools/ghidra_repair.py */

void __cdecl FUN_10027cd0(int param_1, int * param_2)

{
  uint uVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_8;
  
  local_8 = *param_2 -
            *(int *)(*(int *)(param_1 + 0x4c) + 8) *
            ((int)((*param_2 >> 1) + (*param_2 >> 0x1f & 0x3ffU)) >> 10);
  uVar1 = *(int *)(param_1 + 0x54) - local_8;
  if (300 < (int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f))) {
    if (uVar1 == 0) {
      local_14 = 0;
    }
    else if ((int)uVar1 < 0) {
      local_14 = -1;
    }
    else {
      local_14 = 1;
    }
    local_8 = *(int *)(param_1 + 0x54) + local_14 * -300;
  }
  *param_2 = local_8;
  if (uVar1 == 0) {
    local_18 = 0;
  }
  else if ((int)uVar1 < 0) {
    local_18 = -1;
  }
  else {
    local_18 = 1;
  }
  if ((undefined4)(*(int *)(param_1 + 0x5c)) != local_18 * 0xa0000) {
    if ((undefined4)(*(int *)(param_1 + 0x5c)) == local_18 * 0xa0000) {
      local_1c = 0;
    }
    else if (*(int *)(param_1 + 0x5c) + local_18 * -0xa0000 < 0) {
      local_1c = -1;
    }
    else {
      local_1c = 1;
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + local_1c * -0x10000;
  }
  return;
}
