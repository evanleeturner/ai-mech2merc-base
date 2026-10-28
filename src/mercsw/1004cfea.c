/* SPDX-License-Identifier: MIT */
/* mercsw 1004cfea */
/* mercsw 1004cfea: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_101600f8[];

undefined4 __cdecl FUN_1004cfea(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x10) {
    uVar1 = *(undefined4 *)(DAT_101600f8 + param_1 * 0x3c);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
