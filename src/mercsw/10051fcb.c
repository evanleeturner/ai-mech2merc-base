/* SPDX-License-Identifier: MIT */
/* mercsw 10051fcb */
/* mercsw 10051fcb: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b09e8;
extern undefined DAT_101153c0[];

int __cdecl FUN_10051fcb(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_100b09e8 * 4;
  DAT_100b09e8 = DAT_100b09e8 + 1;
  DAT_100b09e8 = DAT_100b09e8 % 0x7f;
  return *(int *)(DAT_101153c0 + iVar1) % param_1;
}
