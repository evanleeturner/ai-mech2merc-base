/* SPDX-License-Identifier: MIT */
/* mercsw 10065786 */
/* mercsw 10065786: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 * DAT_100b38e8;
extern undefined4 DAT_100c7fa8;
uint __cdecl FUN_100655f6(uint param_1, byte param_2);

void __cdecl FUN_10065786(byte param_1)

{
  undefined4 *local_c;
  int local_8;
  
  DAT_100c7fa8 = 0;
  local_c = DAT_100b38e8;
  for (local_8 = 0; local_8 < 0x26f5; local_8 = local_8 + 1) {
    *local_c = 0xffff;
    local_c = local_c + 1;
  }
  for (local_8 = 0; local_8 < ((int)((unsigned int)(1) << ((param_1 & 0x1f)))) + 2; local_8 = local_8 + 1) {
    FUN_100655f6(0xffff,(byte)local_8);
  }
  return;
}
