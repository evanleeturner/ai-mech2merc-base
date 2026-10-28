/* SPDX-License-Identifier: MIT */
/* mercsw 10083dc0 */
/* mercsw 10083dc0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int * DAT_100b9f70;
extern int * DAT_100b9f88;
extern undefined4 DAT_100b9f90;
undefined __stdcall FUN_10083e28(void);

void __stdcall FUN_10083dc0(void)

{
  DAT_100b9f90 = 0;
  if (DAT_100b9f70 != (int *)0x0) {
    FUN_10083e28();
    if (DAT_100b9f88 != (int *)0x0) {
      ((void (*)(int *))((**(code **)(*DAT_100b9f88 + 8))))(DAT_100b9f88);
      DAT_100b9f88 = (int *)0x0;
    }
    ((void (*)(int *))((**(code **)(*DAT_100b9f70 + 8))))(DAT_100b9f70);
    DAT_100b9f70 = (int *)0x0;
  }
  return;
}
