/* SPDX-License-Identifier: MIT */
/* mercsw 1002a132 */
/* mercsw 1002a132: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf38;

int __cdecl FUN_1002a132(int param_1)

{
  int local_8;
  
  if (((undefined4)(*(int *)(param_1 + 4)) == DAT_100adf38) && (*(int *)(*(int *)(param_1 + 0x20) + 0x3f0) != 0))
  {
    local_8 = *(int *)(param_1 + 0xfc) - *(int *)(param_1 + 0x60);
  }
  else {
    local_8 = *(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0x60);
  }
  if (local_8 < 0xb40001) {
    if (local_8 < -0xb40000) {
      local_8 = local_8 + 0x1680000;
    }
  }
  else {
    local_8 = local_8 + -0x1680000;
  }
  return local_8;
}
