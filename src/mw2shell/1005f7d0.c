/* SPDX-License-Identifier: MIT */
/* mw2shell 1005f7d0 */
/* mw2shell 1005f7d0: Ghidra's C, repaired by tools/ghidra_repair.py */
bool __thiscall FUN_1005f8c0(void * this, uint param_1);

void __thiscall FUN_1005f7d0(void * this, int param_1)

{
  bool bVar1;
  
  bVar1 = FUN_1005f8c0(this,0x40000000);
  if (!bVar1) {
    if (*(int *)((int)this + 0x130) <= param_1) {
      param_1 = 0;
    }
    *(undefined4 *)((int)this + 0x128) = 0xffffffff;
    *(int *)((int)this + 300) = param_1;
  }
  return;
}
