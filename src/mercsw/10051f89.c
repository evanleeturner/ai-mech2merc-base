/* SPDX-License-Identifier: MIT */
/* mercsw 10051f89 */
/* mercsw 10051f89: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b09e4;
extern undefined DAT_101151c0[];

undefined4 __stdcall FUN_10051f89(void)

{
  int iVar1;
  
  iVar1 = DAT_100b09e4 * 4;
  DAT_100b09e4 = DAT_100b09e4 + 1;
  if (DAT_100b09e4 == 0x7f) {
    DAT_100b09e4 = 0;
  }
  return *(undefined4 *)(DAT_101151c0 + iVar1);
}
