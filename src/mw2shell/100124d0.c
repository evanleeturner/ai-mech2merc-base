/* SPDX-License-Identifier: MIT */
/* mw2shell 100124d0 */
/* mw2shell 100124d0: Ghidra's C, repaired by tools/ghidra_repair.py */

void __thiscall FUN_100124d0(void * this, int param_1, int param_2, int param_3, int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + -1 + param_3;
  iVar2 = param_2 + -1 + param_4;
  if (param_1 < *(int *)((int)this + 0x82)) {
    *(int *)((int)this + 0x82) = param_1;
  }
  if (param_2 < *(int *)((int)this + 0x86)) {
    *(int *)((int)this + 0x86) = param_2;
  }
  if (*(int *)((int)this + 0x8a) < iVar1) {
    *(int *)((int)this + 0x8a) = iVar1;
  }
  if (*(int *)((int)this + 0x8e) < iVar2) {
    *(int *)((int)this + 0x8e) = iVar2;
  }
  return;
}
