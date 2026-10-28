/* SPDX-License-Identifier: MIT */
/* mw2shell 10050ac0 */
/* mw2shell 10050ac0: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_10069684(int param_1);

int * __thiscall FUN_10050ac0(void * this, int param_1, int param_2)

{
  undefined4 uVar1;
  
  *(int *)((int)this + 0x410) = param_2;
  *(int *)this = param_1;
  *(int *)((int)this + 0x408) = param_1;
  uVar1 = FUN_10069684(param_1);
  *(undefined4 *)((int)this + 0x40c) = uVar1;
  return this;
}
