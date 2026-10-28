/* SPDX-License-Identifier: MIT */
/* mercsw 1004baf4 */
/* mercsw 1004baf4: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b06f0;
extern undefined DAT_100c7e10[];
extern undefined DAT_101ec7a0[];

undefined * __stdcall FUN_1004baf4(void)

{
  undefined *puVar1;
  
  if ((DAT_100b06f0 == (undefined4)(-1)) || (*(int *)(DAT_101ec7a0 + DAT_100b06f0 * 0x60) == 0)) {
    DAT_100b06f0 = -1;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = DAT_100c7e10;
  }
  return puVar1;
}
