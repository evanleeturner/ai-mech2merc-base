/* SPDX-License-Identifier: MIT */
/* mercsw 10049a38 */
/* mercsw 10049a38: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_101f26f8[];
extern undefined DAT_101f26fc[];
extern undefined DAT_101f2700[];
extern undefined DAT_101f2704[];
extern undefined DAT_101f2708[];
extern undefined DAT_101f2710[];

void __cdecl FUN_10049a38(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x2c;
  *(undefined4 *)(DAT_101f2700 + iVar1) = 0;
  *(undefined4 *)(DAT_101f26fc + iVar1) = *(undefined4 *)(DAT_101f2700 + iVar1);
  *(undefined4 *)(DAT_101f26f8 + iVar1) = *(undefined4 *)(DAT_101f26fc + iVar1);
  *(undefined4 *)(DAT_101f2704 + iVar1) = 0;
  *(undefined4 *)(DAT_101f2708 + iVar1) = 0;
  *(undefined4 *)(DAT_101f2710 + iVar1) = 0;
  return;
}
