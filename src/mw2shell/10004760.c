/* SPDX-License-Identifier: MIT */
/* mw2shell 10004760 */
/* mw2shell 10004760: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10083710;
extern undefined4 DAT_10083744;
extern undefined4 DAT_10083748;
extern undefined4 DAT_10083790;
extern undefined4 DAT_10083798;
undefined __stdcall FUN_10004620(void);
undefined4 * __cdecl FUN_1000a180(int param_1);

void __stdcall FUN_10004760(void)

{
  FUN_10004620();
  if (DAT_10083790 < DAT_10083798) {
    do {
      FUN_1000a180(DAT_10083798 + 0x2134);
      DAT_10083798 = DAT_10083798 + -1;
    } while (DAT_10083790 < DAT_10083798);
  }
  if (DAT_10083710 < 0x157d) {
    DAT_10083744 = 0x32;
  }
  else {
    DAT_10083744 = 100;
    if (0x2134 < DAT_10083710) {
      DAT_10083744 = 200;
    }
  }
  DAT_10083748 = DAT_10083798 * DAT_10083744;
  return;
}
