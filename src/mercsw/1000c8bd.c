/* SPDX-License-Identifier: MIT */
/* mercsw 1000c8bd */
/* mercsw 1000c8bd: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_101f5480;
undefined __stdcall FUN_1000d659(void);
undefined __stdcall FUN_10050b20(void);
undefined __stdcall FUN_1000d22d(void);

void __stdcall FUN_1000c8bd(void)

{
  if (DAT_101f5480 != 0) {
    FUN_1000d659();
    DAT_101f5480 = 0;
  }
  FUN_10050b20();
  FUN_1000d22d();
  return;
}
