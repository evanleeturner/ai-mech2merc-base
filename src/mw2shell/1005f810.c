/* SPDX-License-Identifier: MIT */
/* mw2shell 1005f810 */
/* mw2shell 1005f810: Ghidra's C, repaired by tools/ghidra_repair.py */
bool __thiscall FUN_1005f8c0(void * this, uint param_1);

void __fastcall FUN_1005f810(void * param_1)

{
  bool bVar1;
  
  bVar1 = FUN_1005f8c0(param_1,0x40000000);
  if (!bVar1) {
    bVar1 = FUN_1005f8c0(param_1,0x20);
    if (bVar1) {
      *(uint *)((int)param_1 + 0x10c) = (*(uint *)((int)param_1 + 0x10c) & 0xffffffdf) | 0x100;
    }
  }
  return;
}
