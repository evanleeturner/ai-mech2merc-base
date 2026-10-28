/* SPDX-License-Identifier: MIT */
/* mw2shell 1005f790 */
/* mw2shell 1005f790: Ghidra's C, repaired by tools/ghidra_repair.py */
bool __thiscall FUN_1005f8c0(void * this, uint param_1);
undefined __thiscall FUN_1005f6d0(void * this, uint param_1, uint param_2);
undefined __cdecl FUN_10016ba0(undefined4 param_1, undefined4 param_2);

void __thiscall FUN_1005f790(void * this, undefined4 param_1)

{
  bool bVar1;
  
  bVar1 = FUN_1005f8c0(this,0x40000000);
  if (!bVar1) {
    FUN_1005f6d0(this,8,0);
    FUN_10016ba0((undefined4)(this),param_1);
  }
  return;
}
