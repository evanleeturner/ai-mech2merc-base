/* SPDX-License-Identifier: MIT */
/* mercsw 1006abdb */
/* mercsw 1006abdb: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3c40;
extern undefined4 DAT_100b3c44;
extern undefined DAT_100b3c58;
extern undefined4 DAT_100b3ca0;
undefined __stdcall FUN_1003c3a4(void);
undefined __stdcall FUN_1004668e(void);

void __stdcall FUN_1006abdb(void)

{
  if (DAT_100b3ca0 != 0) {
    if ((DAT_100b3c44 != (undefined4)(-1)) && ((DAT_100b3c58 & 4) != 0)) {
      FUN_1003c3a4();
    }
    if ((DAT_100b3c40 != (undefined4)(-1)) && ((DAT_100b3c58 & 8) != 0)) {
      FUN_1004668e();
    }
    DAT_100b3ca0 = 0;
  }
  return;
}
