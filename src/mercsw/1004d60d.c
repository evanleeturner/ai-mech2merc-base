/* SPDX-License-Identifier: MIT */
/* mercsw 1004d60d */
/* mercsw 1004d60d: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100ef03c[];
extern undefined DAT_101604a0[];

undefined4 __cdecl FUN_1004d60d(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_100ef03c + param_1 * 0x40) < 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = *(undefined4 *)(DAT_101604a0 + *(int *)(DAT_100ef03c + param_1 * 0x40) * 4);
  }
  return uVar1;
}
