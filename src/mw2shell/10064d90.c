/* SPDX-License-Identifier: MIT */
/* mw2shell 10064d90 */
/* mw2shell 10064d90: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __thiscall FUN_10012c30(void * this, int param_1, int param_2, int param_3, int param_4, int param_5);

void __thiscall FUN_10064d90(void * this, void * param_1)

{
  FUN_10012c30(param_1,*(int *)this,*(int *)((int)this + 0xc),*(int *)((int)this + 8),
               *(int *)((int)this + 0xc),0x11);
  FUN_10012c30(param_1,*(int *)this,*(int *)((int)this + 4),*(int *)((int)this + 8),
               *(int *)((int)this + 4),0x11);
  FUN_10012c30(param_1,*(int *)((int)this + 8),*(int *)((int)this + 4),*(int *)((int)this + 8),
               *(int *)((int)this + 0xc),0x11);
  FUN_10012c30(param_1,*(int *)this,*(int *)((int)this + 0xc),*(int *)this,*(int *)((int)this + 4),
               0x11);
  return;
}
