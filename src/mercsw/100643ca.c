/* SPDX-License-Identifier: MIT */
/* mercsw 100643ca */
/* mercsw 100643ca: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100b38d8;
extern undefined4 DAT_100eef40[];

void __stdcall FUN_100643ca(void)

{
  int local_10;
  
  for (local_10 = 0; local_10 < DAT_100b38d8; local_10 = local_10 + 1) {
    if ((*(code **)(DAT_100eef40[local_10] + 0x2c) != (code *)0x0) &&
       (*(int *)(DAT_100eef40[local_10] + 0x20) != 0)) {
      ((void (*)(int))((**(code **)(DAT_100eef40[local_10] + 0x2c))))(*(int *)(DAT_100eef40[local_10] + 0x20));
    }
  }
  return;
}
