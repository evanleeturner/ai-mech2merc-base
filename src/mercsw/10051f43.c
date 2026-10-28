/* SPDX-License-Identifier: MIT */
/* mercsw 10051f43 */
/* mercsw 10051f43: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b09e0;
extern undefined DAT_101153c0[];

int __cdecl FUN_10051f43(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_100b09e0 * 4;
  DAT_100b09e0 = DAT_100b09e0 + 1;
  if (DAT_100b09e0 == 0x7f) {
    DAT_100b09e0 = 0;
  }
  return *(int *)(DAT_101153c0 + iVar1) % param_1;
}
