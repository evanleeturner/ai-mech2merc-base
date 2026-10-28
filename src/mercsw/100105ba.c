/* SPDX-License-Identifier: MIT */
/* mercsw 100105ba */
/* mercsw 100105ba: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1001060a(int param_1);

void __cdecl FUN_100105ba(int param_1)

{
  if (param_1 < 0) {
    for (param_1 = 0; param_1 < 7; param_1 = param_1 + 1) {
      FUN_1001060a(param_1);
    }
  }
  else {
    FUN_1001060a(param_1);
  }
  return;
}
