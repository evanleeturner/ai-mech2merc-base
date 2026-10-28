/* SPDX-License-Identifier: MIT */
/* mercsw 100717ee */
/* mercsw 100717ee: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b9a18;

void __cdecl FUN_100717ee(int param_1)

{
  undefined1 *puVar1;
  int local_10;
  undefined1 auStack_c [4];
  undefined1 *local_8;
  
  puVar1 = (undefined1 *)((uint)*(byte *)(param_1 + 8) * 3 + *(int *)(param_1 + 4));
  local_8 = puVar1;
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    auStack_c[local_10] = *local_8;
    local_8 = local_8 + 1;
  }
  local_8 = puVar1;
  for (local_10 = 0; local_10 < *(int *)(param_1 + 9) * 3 + -3; local_10 = local_10 + 1) {
    *local_8 = local_8[3];
    local_8 = local_8 + 1;
  }
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    *local_8 = auStack_c[local_10];
    local_8 = local_8 + 1;
  }
  ((void (*)(undefined4))((**(code **)(DAT_100b9a18 + 0x18))))(*(undefined4 *)(param_1 + 4));
  return;
}
