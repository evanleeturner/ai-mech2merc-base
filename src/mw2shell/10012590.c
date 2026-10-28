/* SPDX-License-Identifier: MIT */
/* mw2shell 10012590 */
/* mw2shell 10012590: Ghidra's C, repaired by tools/ghidra_repair.py */

undefined4 __thiscall FUN_10012590(void * this, int param_1, int param_2, int param_3, int param_4)

{
  if ((((param_1 <= *(int *)((int)this + 0x8a)) &&
       (*(int *)((int)this + 0x82) <= param_3 + -1 + param_1)) &&
      (param_2 <= *(int *)((int)this + 0x8e))) &&
     (*(int *)((int)this + 0x86) <= param_4 + -1 + param_2)) {
    return 1;
  }
  return 0;
}
