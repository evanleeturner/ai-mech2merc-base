/* SPDX-License-Identifier: MIT */
/* mercsw 1005cfc4 */
/* mercsw 1005cfc4: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b2ce8;
extern undefined4 DAT_10114db0[];

void __stdcall FUN_1005cfc4(void)

{
  int local_8;
  
  DAT_100b2ce8 = (uint)(DAT_100b2ce8 == 0);
  for (local_8 = 3; local_8 < 0x11; local_8 = local_8 + 1) {
    *(short *)(DAT_10114db0[local_8] + 4) = (short)DAT_100b2ce8;
  }
  return;
}
