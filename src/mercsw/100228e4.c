/* SPDX-License-Identifier: MIT */
/* mercsw 100228e4 */
/* mercsw 100228e4: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aa1ac;
extern undefined4 DAT_100b4838;

void __cdecl FUN_100228e4(int param_1)

{
  int local_18;
  undefined4 *local_10;
  undefined2 *local_c;
  int local_8;
  
  *(int *)(param_1 + 0x54) = param_1 + 0x4d3;
  *(int *)(param_1 + 0x58) = param_1 + 0x853;
  *(int *)(param_1 + 0x5c) = param_1 + 0x993;
  local_10 = *(undefined4 **)(param_1 + 0x54);
  local_8 = param_1 + 100;
  for (local_18 = 0; local_18 < 0xe; local_18 = local_18 + 1) {
    *local_10 = 0xffffffff;
    local_10[1] = 0xffffffff;
    local_10[2] = 0xffffffff;
    local_10[4] = 0;
    local_10[5] = 0;
    if ((DAT_100aa1ac == 0) || (DAT_100b4838 != (undefined4)(-1))) {
      local_10[3] = 0;
    }
    local_10[6] = 0xffffffff;
    local_10[7] = 0;
    local_10[9] = 0;
    local_10[10] = 0xffffffff;
    local_10[0xb] = 0;
    local_10[0xc] = 0;
    local_10[8] = 9999;
    local_10 = local_10 + 0x10;
    *(undefined4 *)(local_8 + 2) = 0xffffffff;
    *(undefined4 *)(local_8 + 6) = 0;
    local_8 = local_8 + 0x3a;
  }
  local_c = *(undefined2 **)(param_1 + 0x5c);
  for (local_18 = 0; local_18 < 0x19; local_18 = local_18 + 1) {
    *local_c = 0xffff;
    local_c[1] = 0;
    local_c[2] = 0;
    local_c[3] = 0;
    local_c[4] = 0;
    *(undefined4 *)(local_c + 5) = 0;
    *(undefined4 *)(local_c + 7) = 0;
    local_c = local_c + 0xf;
  }
  return;
}
