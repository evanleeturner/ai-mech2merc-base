/* SPDX-License-Identifier: MIT */
/* mercsw 1006ab7b */
/* mercsw 1006ab7b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3c40;
extern undefined4 DAT_100b3c44;
extern undefined DAT_100b3c58;
extern undefined4 DAT_100b3ca0;
undefined __stdcall FUN_1003c32b(void);
undefined __stdcall FUN_1004668e(void);

void __stdcall FUN_1006ab7b(void)

{
  if (DAT_100b3ca0 == 0) {
    if ((DAT_100b3c44 != (undefined4)(-1)) && ((DAT_100b3c58 & 4) != 0)) {
      FUN_1003c32b();
    }
    if ((DAT_100b3c40 != (undefined4)(-1)) && ((DAT_100b3c58 & 8) != 0)) {
      FUN_1004668e();
    }
    DAT_100b3ca0 = 1;
  }
  return;
}
