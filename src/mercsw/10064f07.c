/* SPDX-License-Identifier: MIT */
/* mercsw 10064f07 */
/* mercsw 10064f07: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b38ec;
extern undefined DAT_100c7e84;

void __cdecl FUN_10064f07(int param_1, int param_2, int param_3, int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = ((int)((unsigned int)(1) << ((DAT_100c7e84 & 0x1f)))) + -1;
  puVar2 = (undefined1 *)(param_1 * 3 + DAT_100b38ec);
  *puVar2 = (char)((param_2 * 0xff) / iVar1);
  puVar2[1] = (char)((param_3 * 0xff) / iVar1);
  puVar2[2] = (char)((param_4 * 0xff) / iVar1);
  return;
}
