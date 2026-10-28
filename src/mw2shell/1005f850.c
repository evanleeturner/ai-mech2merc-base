/* SPDX-License-Identifier: MIT */
/* mw2shell 1005f850 */
/* mw2shell 1005f850: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
bool __thiscall FUN_1005f8c0(void * this, uint param_1);

bool __fastcall FUN_1005f850(void * param_1)

{
  bool bVar1;
  
  bVar1 = FUN_1005f8c0(param_1,0x40000000);
  if (bVar1) {
    return false;
  }
  bVar1 = FUN_1005f8c0(param_1,1);
  return !bVar1;
}
