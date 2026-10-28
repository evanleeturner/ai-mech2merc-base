/* SPDX-License-Identifier: MIT */
/* mercsw 10027c05 */
/* mercsw 10027c05: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_10027c4c(int param_1);
undefined __cdecl FUN_10027e20(int param_1);

void __cdecl FUN_10027c05(int * param_1)

{
  if ((*param_1 == 8) || (*param_1 == 2)) {
    FUN_10027c4c((int)param_1);
    if (*param_1 == 8) {
      FUN_10027e20((int)param_1);
    }
  }
  return;
}
