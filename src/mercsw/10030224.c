/* SPDX-License-Identifier: MIT */
/* mercsw 10030224 */
/* mercsw 10030224: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_100301b0(int * param_1);

void __cdecl FUN_10030224(int * param_1)

{
  if (param_1 != (int *)0x0) {
    if (param_1[2] != 0) {
      FUN_10030224((int *)param_1[2]);
    }
    if (param_1[1] != 0) {
      FUN_10030224((int *)param_1[1]);
    }
    FUN_100301b0(param_1);
  }
  return;
}
