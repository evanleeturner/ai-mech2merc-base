/* SPDX-License-Identifier: MIT */
/* mercsw 1003e938 */
/* mercsw 1003e938: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100af0a0;
extern undefined4 DAT_100af0a4;
extern undefined4 DAT_100c7b70;
extern undefined4 DAT_100c7b88;
extern undefined DAT_100c7bc0[];

void __stdcall FUN_1003e938(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(DAT_100c7bc0);
  for (iVar1 = 0x46; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_100af0a0 = 0;
  DAT_100c7b70 = 0;
  DAT_100c7b88 = 0;
  DAT_100af0a4 = 0;
  return;
}
