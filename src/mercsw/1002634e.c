/* SPDX-License-Identifier: MIT */
/* mercsw 1002634e */
/* mercsw 1002634e: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl EnsureSegmentDirection(int param_1);

undefined4 __cdecl FUN_1002634e(int param_1)

{
  if (*(int *)(param_1 + 0x34) == 0) {
    EnsureSegmentDirection(param_1);
  }
  return *(undefined4 *)(param_1 + 0x30);
}
