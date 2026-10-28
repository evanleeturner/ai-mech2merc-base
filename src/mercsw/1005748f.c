/* SPDX-License-Identifier: MIT */
/* mercsw 1005748f */
/* mercsw 1005748f: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100b2b10[];

void __cdecl FUN_1005748f(undefined4 * param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(DAT_100b2b10);
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}
