/* SPDX-License-Identifier: MIT */
/* mercsw 10049a9b */
/* mercsw 10049a9b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_101ec754[];
extern undefined DAT_101ec758[];
extern undefined DAT_101ec75c[];
extern undefined DAT_101ec760[];
extern undefined DAT_101ec764[];
extern undefined DAT_101ec768[];
extern undefined DAT_101ec76c[];
extern undefined DAT_101ec770[];
extern undefined DAT_101ec774[];
extern undefined DAT_101ec778[];
extern undefined DAT_101ec77c[];
extern undefined DAT_101ec784[];
extern undefined DAT_101ec788[];
extern undefined DAT_101ec78c[];
extern undefined DAT_101ec790[];
extern undefined DAT_101ec798[];
extern undefined DAT_101ec79c[];
extern undefined DAT_101ec7a0[];
extern undefined DAT_101ec7a4[];
extern undefined DAT_101ec7a8[];
extern undefined DAT_101ec7ac[];

void __cdecl FUN_10049a9b(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x60;
  *(undefined4 *)(DAT_101ec764 + iVar1) = 0;
  *(undefined4 *)(DAT_101ec760 + iVar1) = *(undefined4 *)(DAT_101ec764 + iVar1);
  *(undefined4 *)(DAT_101ec75c + iVar1) = *(undefined4 *)(DAT_101ec760 + iVar1);
  *(undefined4 *)(DAT_101ec770 + iVar1) = 0;
  *(undefined4 *)(DAT_101ec76c + iVar1) = *(undefined4 *)(DAT_101ec770 + iVar1);
  *(undefined4 *)(DAT_101ec768 + iVar1) = *(undefined4 *)(DAT_101ec76c + iVar1);
  *(undefined4 *)(DAT_101ec778 + iVar1) = 0;
  *(undefined4 *)(DAT_101ec774 + iVar1) = *(undefined4 *)(DAT_101ec778 + iVar1);
  *(undefined4 *)(DAT_101ec77c + iVar1) = 0;
  *(undefined4 *)(DAT_101ec758 + iVar1) = 0xffffffff;
  *(undefined4 *)(DAT_101ec784 + iVar1) = 0;
  *(undefined4 *)(DAT_101ec788 + iVar1) = 0;
  *(undefined4 *)(DAT_101ec78c + iVar1) = 0;
  *(undefined4 *)(DAT_101ec790 + iVar1) = 0;
  *(undefined4 *)(DAT_101ec79c + iVar1) = 0;
  *(undefined4 *)(DAT_101ec798 + iVar1) = *(undefined4 *)(DAT_101ec79c + iVar1);
  *(undefined4 *)(DAT_101ec7a0 + iVar1) = 0;
  *(undefined4 *)(DAT_101ec7a4 + iVar1) = 0xffffffff;
  *(undefined4 *)(DAT_101ec754 + iVar1) = 0;
  *(undefined4 *)(DAT_101ec7a8 + iVar1) = 0xffffffff;
  *(undefined4 *)(DAT_101ec7ac + iVar1) = 0xffffffff;
  return;
}
