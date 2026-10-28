/* SPDX-License-Identifier: MIT */
/* mw2shell 10009300 */
/* mw2shell 10009300: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10082d6c;
extern undefined4 DAT_100ae180;
undefined4 __stdcall FUN_1000bfd0(void);
undefined __stdcall FUN_10008330(void);
undefined __stdcall FUN_10008680(void);

void __stdcall FUN_10009300(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_10082d6c + 1;
  DAT_10082d6c = iVar2;
  iVar1 = FUN_1000bfd0();
  if (iVar1 <= iVar2) {
    DAT_10082d6c = 0;
  }
  DAT_100ae180 = 0;
  FUN_10008330();
  FUN_10008680();
  return;
}
