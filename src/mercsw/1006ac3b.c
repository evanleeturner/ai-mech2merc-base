/* SPDX-License-Identifier: MIT */
/* mercsw 1006ac3b */
/* mercsw 1006ac3b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3c40;
extern undefined4 DAT_100b3c44;
undefined __stdcall FUN_100467ab(void);
undefined __stdcall FUN_1003c260(void);

void __stdcall FUN_1006ac3b(void)

{
  if (DAT_100b3c40 != (undefined4)(-1)) {
    FUN_100467ab();
  }
  if (DAT_100b3c44 != (undefined4)(-1)) {
    FUN_1003c260();
  }
  return;
}
