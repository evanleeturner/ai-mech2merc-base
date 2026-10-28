/* SPDX-License-Identifier: MIT */
/* mw2shell 10036460 */
/* mw2shell 10036460: Ghidra's C, repaired by tools/ghidra_repair.py */
ushort * __cdecl FUN_100425b0(int param_1, uint param_2, int * param_3);

ushort * __thiscall FUN_10036460(void * this, uint param_1, int * param_2)

{
  ushort *puVar1;
  
  if (param_1 == 0xffffffff) {
    return (ushort *)0x0;
  }
  if (param_1 == 0xfffffffe) {
    return (ushort *)0x0;
  }
  puVar1 = FUN_100425b0(*(int *)this,param_1,param_2);
  return puVar1;
}
