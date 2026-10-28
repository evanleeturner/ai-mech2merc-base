/* SPDX-License-Identifier: MIT */
/* mercsw 10064350 */
/* mercsw 10064350: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100b38d8;
extern undefined4 DAT_100eef40[];

void __stdcall FUN_10064350(void)

{
  int local_c;
  
  for (local_c = 0; local_c < DAT_100b38d8; local_c = local_c + 1) {
    if ((*(int *)(DAT_100eef40[local_c] + 0x28) != 0) &&
       (*(int *)(DAT_100eef40[local_c] + 0x20) != 0)) {
      ((void (*)(undefined4))((**(code **)(DAT_100eef40[local_c] + 0x28))))(DAT_100eef40[local_c]);
    }
  }
  return;
}
