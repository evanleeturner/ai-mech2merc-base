/* SPDX-License-Identifier: MIT */
/* mercsw 1002405b */
/* mercsw 1002405b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100ab374;
extern undefined DAT_1016ce56[];
int * __cdecl FUN_10023a8c(int param_1);

void __cdecl FUN_1002405b(int param_1)

{
  if ((0 < param_1) && (param_1 < DAT_100ab374)) {
    *(undefined4 *)(DAT_1016ce56 + param_1 * 0x1fa) = 0;
    FUN_10023a8c(param_1);
  }
  return;
}
