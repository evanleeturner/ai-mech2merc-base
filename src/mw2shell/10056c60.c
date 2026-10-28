/* SPDX-License-Identifier: MIT */
/* mw2shell 10056c60 */
/* mw2shell 10056c60: Ghidra's C, repaired by tools/ghidra_repair.py */

void __cdecl FUN_10056c60(short param_1, short param_2, int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_3 + param_2 * 4);
  puVar1 = (undefined4 *)(param_3 + param_1 * 4);
  *(undefined4 *)(param_3 + param_2 * 4) = *puVar1;
  *puVar1 = uVar2;
  return;
}
