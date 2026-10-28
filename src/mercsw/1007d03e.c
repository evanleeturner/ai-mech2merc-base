/* SPDX-License-Identifier: MIT */
/* mercsw 1007d03e */
/* mercsw 1007d03e: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b6824;
undefined4 * __stdcall FUN_1007cde0(void);

undefined4 __stdcall FUN_1007d03e(void)

{
  undefined4 *puVar1;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  if (DAT_100b6824 != 0) {
    puVar1 = FUN_1007cde0();
    if (puVar1 != (undefined4 *)0x0) {
      local_c = puVar1[3];
      puVar1[0xf] = 0;
    }
  }
  return local_c;
}
