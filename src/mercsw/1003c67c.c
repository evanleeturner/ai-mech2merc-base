/* SPDX-License-Identifier: MIT */
/* mercsw 1003c67c */
/* mercsw 1003c67c: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aefb4;
extern undefined4 DAT_100aefb8;
undefined __stdcall FUN_1003c260(void);

void __stdcall FUN_1003c67c(void)

{
  if (DAT_100aefb8 != 0) {
    if (DAT_100aefb4 == 0) {
      FUN_1003c260();
    }
    DAT_100aefb4 = 1;
    DAT_100aefb8 = 0;
  }
  return;
}
