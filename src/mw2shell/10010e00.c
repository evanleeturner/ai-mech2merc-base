/* SPDX-License-Identifier: MIT */
/* mw2shell 10010e00 */
/* mw2shell 10010e00: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __stdcall _AIL_sample_status_4(undefined4);

uint __fastcall FUN_10010e00(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x29) != 0) {
    uVar1 = _AIL_sample_status_4(*(int *)(param_1 + 0x29));
    if (uVar1 == 4) {
      *(undefined1 *)(param_1 + 0x28) = 1;
      return 1;
    }
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  return uVar1 & 0xffffff00;
}
