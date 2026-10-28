/* SPDX-License-Identifier: MIT */
/* mw2shell 10018060 */
/* mw2shell 10018060: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_10018020(int param_1);

undefined4 __cdecl FUN_10018060(int param_1, int param_2)

{
  if (param_1 == 0) {
    return 0;
  }
  FUN_10018020(param_1);
  if ((param_2 <= *(int *)(param_1 + 4)) && (-1 < param_2)) {
    return *(undefined4 *)(*(int *)(param_1 + 0x11) + param_2 * 4);
  }
  return 0;
}
