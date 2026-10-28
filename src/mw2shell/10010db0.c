/* SPDX-License-Identifier: MIT */
/* mw2shell 10010db0 */
/* mw2shell 10010db0: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __fastcall FUN_10010d80(void * param_1);
undefined4 __stdcall _AIL_sample_status_4(undefined4);

void __fastcall FUN_10010db0(void * param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + 0x29) != 0) {
    FUN_10010d80(param_1);
    do {
      iVar1 = _AIL_sample_status_4(*(undefined4 *)((int)param_1 + 0x29));
    } while (iVar1 == 4);
    *(undefined1 *)((int)param_1 + 0x28) = 0;
  }
  return;
}
