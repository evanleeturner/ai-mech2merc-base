/* SPDX-License-Identifier: MIT */
/* mercsw 100645c5 */
/* mercsw 100645c5: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100ef030[];
extern undefined DAT_100ef032[];
extern undefined DAT_100ef034[];
extern undefined DAT_100ef038[];
extern undefined DAT_100ef03c[];
extern undefined DAT_100ef044[];

void __cdecl FUN_100645c5(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x40;
  *(undefined2 *)(DAT_100ef030 + iVar1) = 0;
  *(undefined2 *)(DAT_100ef032 + iVar1) = 0;
  *(undefined4 *)(DAT_100ef034 + iVar1) = 0xffffffff;
  *(undefined4 *)(DAT_100ef038 + iVar1) = 0;
  *(undefined4 *)(DAT_100ef03c + iVar1) = 0;
  DAT_100ef044[iVar1] = 0;
  return;
}
