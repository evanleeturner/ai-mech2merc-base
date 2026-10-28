/* SPDX-License-Identifier: MIT */
/* mw2shell 10009340 */
/* mw2shell 10009340: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10082d6c;
extern undefined4 DAT_100ae180;
undefined4 __stdcall FUN_1000bfd0(void);
undefined __stdcall FUN_10008330(void);
undefined __stdcall FUN_10008680(void);

void __stdcall FUN_10009340(void)

{
  int iVar1;
  
  DAT_10082d6c = DAT_10082d6c + -1;
  if (DAT_10082d6c < 0) {
    iVar1 = FUN_1000bfd0();
    DAT_10082d6c = iVar1 + -1;
  }
  DAT_100ae180 = 0;
  FUN_10008330();
  FUN_10008680();
  return;
}
