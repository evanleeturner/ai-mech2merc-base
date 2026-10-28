/* SPDX-License-Identifier: MIT */
/* mw2shell 10012470 */
/* mw2shell 10012470: Ghidra's C, repaired by tools/ghidra_repair.py */

void __thiscall FUN_10012470(void * this, int param_1, int param_2, int param_3, int param_4)

{
  if (param_1 < *(int *)((int)this + 0x82)) {
    *(int *)((int)this + 0x82) = param_1;
  }
  if (param_2 < *(int *)((int)this + 0x86)) {
    *(int *)((int)this + 0x86) = param_2;
  }
  if (*(int *)((int)this + 0x8a) < param_3) {
    *(int *)((int)this + 0x8a) = param_3;
  }
  if (*(int *)((int)this + 0x8e) < param_4) {
    *(int *)((int)this + 0x8e) = param_4;
  }
  return;
}
