/* SPDX-License-Identifier: MIT */
/* mercsw 10030fd2 */
/* mercsw 10030fd2: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100ada50;
extern undefined DAT_10168930[];
undefined __cdecl FUN_1002f727(int param_1);
undefined * __cdecl FUN_1003052d(int param_1);

void __cdecl FUN_10030fd2(int param_1)

{
  if ((-1 < param_1) && (param_1 < DAT_100ada50)) {
    FUN_1002f727(*(int *)(DAT_10168930 + param_1 * 0x34));
    FUN_1003052d(param_1);
  }
  return;
}
