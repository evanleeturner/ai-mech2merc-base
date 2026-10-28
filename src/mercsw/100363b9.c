/* SPDX-License-Identifier: MIT */
/* mercsw 100363b9 */
/* mercsw 100363b9: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 PTR_FUN_100b99d0;

void __cdecl FUN_100363b9(int param_1, int param_2)

{
  if (((param_1 != 0) && (param_2 != 0)) && (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0)) {
    **(undefined4 **)(param_2 + 8) = PTR_FUN_100b99d0;
  }
  return;
}
