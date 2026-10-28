/* SPDX-License-Identifier: MIT */
/* mercsw 10088873 */
/* mercsw 10088873: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100baa08;
extern undefined DAT_100c8dc0[];
undefined4 __stdcall FUN_10088072(void);
undefined4 __stdcall FUN_100882a5(void);

void __stdcall FUN_10088873(void)

{
  FUN_10088072();
  FUN_100882a5();
  (**(code **)(*(int *)(DAT_100c8dc0 + DAT_100baa08 * 4) + 0x1c))();
  return;
}
