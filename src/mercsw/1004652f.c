/* SPDX-License-Identifier: MIT */
/* mercsw 1004652f */
/* mercsw 1004652f: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b04c4;
undefined __cdecl FUN_10046f04(int param_1);
undefined4 __stdcall FUN_1004633a(void);

void __stdcall FUN_1004652f(void)

{
  if (DAT_100b04c4 != 0) {
    FUN_10046f04(0x100b04b8);
    FUN_1004633a();
    DAT_100b04c4 = 0;
  }
  return;
}
