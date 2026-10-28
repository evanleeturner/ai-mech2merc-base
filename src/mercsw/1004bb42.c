/* SPDX-License-Identifier: MIT */
/* mercsw 1004bb42 */
/* mercsw 1004bb42: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100b06ec;
extern undefined4 DAT_100b06f0;
extern undefined DAT_101ec78c[];
extern undefined DAT_101ec794[];
extern undefined DAT_101ec7a0[];

undefined4 __stdcall FUN_1004bb42(void)

{
  undefined4 uVar1;
  
  if (((DAT_100b06ec < 1) || (*(int *)(DAT_101ec78c + DAT_100b06ec * 0x60) == 0)) ||
     ((undefined4)(*(int *)(DAT_101ec794 + DAT_100b06ec * 0x60)) != DAT_100adf38)) {
    DAT_100b06f0 = -1;
    uVar1 = 0;
  }
  else {
    DAT_100b06f0 = DAT_100b06ec;
    *(undefined4 *)(DAT_101ec7a0 + DAT_100b06ec * 0x60) = 1;
    uVar1 = 1;
  }
  return uVar1;
}
