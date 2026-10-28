/* SPDX-License-Identifier: MIT */
/* mercsw 1001c255 */
/* mercsw 1001c255: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ab0c0;

undefined4 __cdecl FUN_1001c255(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_100ab0c0;
  DAT_100ab0c0 = param_1;
  return uVar1;
}
