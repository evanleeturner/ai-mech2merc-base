/* SPDX-License-Identifier: MIT */
/* mercsw 10035f3b */
/* mercsw 10035f3b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_1011515c;
extern undefined4 DAT_10167660;
extern undefined4 DAT_10168288;

int __stdcall FUN_10035f3b(void)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_10167660;
  iVar3 = DAT_10167660 + -0x30;
  puVar1 = (undefined1 *)(DAT_10167660 + -0x13);
  DAT_10167660 = iVar3;
  *puVar1 = 0;
  if (iVar2 - 0xf8U <= DAT_10168288) {
    DAT_1011515c = 0;
  }
  return iVar3;
}
