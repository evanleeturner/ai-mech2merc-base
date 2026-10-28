/* SPDX-License-Identifier: MIT */
/* mw2shell 1005f6d0 */
/* mw2shell 1005f6d0: Ghidra's C, repaired by tools/ghidra_repair.py */

void __thiscall FUN_1005f6d0(void * this, uint param_1, uint param_2)

{
  uint uVar1;
  
  uVar1 = ~param_1 & *(uint *)((int)this + 0x10c);
  *(uint *)((int)this + 0x10c) = uVar1;
  *(uint *)((int)this + 0x10c) = (param_2 & param_1) | uVar1;
  return;
}
