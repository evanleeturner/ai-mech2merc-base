/* SPDX-License-Identifier: MIT */
/* mercsw 1007cf3a */
/* mercsw 1007cf3a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3904;
extern undefined4 * DAT_100b681c;
extern undefined DAT_100c96c0[];
undefined __cdecl FUN_1007d08d(int param_1);

void __stdcall FUN_1007cf3a(void)

{
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  local_10 = 0;
  if (DAT_100b681c != (undefined4 *)0x0) {
    for (local_c = DAT_100b681c; local_c != (undefined4 *)0x0; local_c = (undefined4 *)*local_c) {
      if ((local_c[0xe] != (undefined4)(-1)) &&
         (local_c[0xf] = local_c[0xf] + DAT_100b3904, (int)local_c[0xe] < (int)local_c[0xf])) {
        *(undefined4 *)(DAT_100c96c0 + local_10 * 4) = local_c[3];
        local_10 = local_10 + 1;
      }
    }
    if (local_10 != 0) {
      for (local_8 = 0; local_8 < local_10; local_8 = local_8 + 1) {
        FUN_1007d08d(*(int *)(DAT_100c96c0 + local_8 * 4));
      }
    }
  }
  return;
}
