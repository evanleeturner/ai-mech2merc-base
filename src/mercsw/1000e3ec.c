/* SPDX-License-Identifier: MIT */
/* mercsw 1000e3ec */
/* mercsw 1000e3ec: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a7584;
extern undefined DAT_101f64a8[];
extern undefined DAT_101f64b8[];
undefined __cdecl FUN_100645c5(int param_1);
undefined __cdecl FUN_1000d05f(int param_1);

undefined4 __cdecl FUN_1000e3ec(uint param_1)

{
  uint local_10;
  undefined4 local_8;
  
  local_8 = 0;
  for (local_10 = 0; (int)local_10 < (int)DAT_100a7584; local_10 = local_10 + 1) {
    if (*(uint *)(DAT_101f64a8 + local_10 * 0x7c) == param_1) {
      FUN_1000e3ec(local_10);
    }
  }
  if (param_1 < 0x402) {
    if (*(uint *)(DAT_101f64b8 + param_1 * 0x7c) < 0xfe) {
      FUN_100645c5(*(uint *)(DAT_101f64b8 + param_1 * 0x7c));
    }
    FUN_1000d05f(param_1);
    local_8 = 1;
  }
  return local_8;
}
