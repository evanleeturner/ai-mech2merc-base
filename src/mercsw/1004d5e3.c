/* SPDX-License-Identifier: MIT */
/* mercsw 1004d5e3 */
/* mercsw 1004d5e3: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100eef40[];
extern undefined DAT_101600f4[];

undefined4 __cdecl FUN_1004d5e3(int param_1)

{
  return *(undefined4 *)(DAT_101600f4 + *(int *)(DAT_100eef40[param_1] + 8) * 0x3c);
}
