/* SPDX-License-Identifier: MIT */
/* mercsw 100086a2 */
/* mercsw 100086a2: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10215654;
extern undefined4 DAT_10215658;
extern undefined4 DAT_1021565c;
extern undefined4 DAT_10215660;
undefined __stdcall FUN_1000895c(void);
undefined4 __stdcall FUN_100086f7(void);

void __stdcall FUN_100086a2(void)

{
  DAT_10215654 = DAT_1021565c;
  DAT_1021565c = 4;
  if (DAT_10215658 < 3) {
    FUN_1000895c();
  }
  else if ((DAT_10215658 == 4) && (DAT_10215660 < 3)) {
    FUN_100086f7();
  }
  return;
}
