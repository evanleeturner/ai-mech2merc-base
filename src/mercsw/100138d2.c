/* SPDX-License-Identifier: MIT */
/* mercsw 100138d2 */
/* mercsw 100138d2: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100ef030[];
extern undefined DAT_101eb530[];
undefined __cdecl FUN_1004bbc3(uint param_1);

void __cdecl FUN_100138d2(int param_1, int param_2)

{
  byte local_18;
  int local_14;
  uint local_10;
  byte *local_8;
  
  local_14 = 0;
  local_8 = (byte *)(param_1 + 6);
  if (*(int *)(DAT_101eb530 + param_2 * 4) < *(int *)(param_1 + 2)) {
    *(int *)(DAT_101eb530 + param_2 * 4) = *(int *)(param_1 + 2);
    local_18 = *local_8;
    for (local_10 = 0; (int)local_10 < 0xfe; local_10 = local_10 + 1) {
      if (((local_18 & 0x80) != 0) && ((*(ushort *)(DAT_100ef030 + local_10 * 0x40) & 4) == 0)) {
        FUN_1004bbc3(local_10);
      }
      local_18 = (int)((unsigned int)(local_18) << (1));
      local_14 = local_14 + 1;
      if (local_14 == 8) {
        local_14 = 0;
        local_8 = local_8 + 1;
        local_18 = *local_8;
      }
    }
  }
  return;
}
