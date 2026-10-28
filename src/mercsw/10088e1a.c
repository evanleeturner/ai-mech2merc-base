/* SPDX-License-Identifier: MIT */
/* mercsw 10088e1a */
/* mercsw 10088e1a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100bf7d0;
extern undefined DAT_100c8908[];
extern undefined DAT_100c8920[];
extern undefined DAT_100c8dc0[];

void __stdcall FUN_10088e1a(void)

{
  int iVar1;
  int local_8;
  
  local_8 = DAT_100bf7d0;
  while (iVar1 = local_8 + -1, local_8 != 0) {
    local_8 = iVar1;
    if (*(int *)(DAT_100c8908 + iVar1 * 4) != 0) {
      ((void (*)(undefined *))((**(code **)(*(int *)(DAT_100c8dc0 + iVar1 * 4) + 0xc))))(DAT_100c8920 + iVar1 * 0x74);
    }
  }
  return;
}
