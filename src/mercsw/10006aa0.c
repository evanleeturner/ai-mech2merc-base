/* SPDX-License-Identifier: MIT */
/* mercsw 10006aa0 */
/* mercsw 10006aa0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a4110;
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100eef40[];
undefined __cdecl FUN_1002f727(int param_1);
undefined __cdecl FUN_1002f783(int param_1);

void __stdcall FUN_10006aa0(void)

{
  if (DAT_100a4110 == 0) {
    FUN_1002f727(*(int *)(DAT_100eef40[DAT_100adf38] + 0x40));
  }
  else {
    FUN_1002f783(*(int *)(DAT_100eef40[DAT_100adf38] + 0x40));
  }
  DAT_100a4110 = (uint)(DAT_100a4110 == 0);
  return;
}
