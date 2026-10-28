/* SPDX-License-Identifier: MIT */
/* mercsw 1002c39a */
/* mercsw 1002c39a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100eef40[];
extern undefined DAT_101600e4[];

undefined4 __stdcall FUN_1002c39a(void)

{
  return *(undefined4 *)(DAT_101600e4 + *(int *)(DAT_100eef40[DAT_100adf38] + 8) * 0x3c);
}
