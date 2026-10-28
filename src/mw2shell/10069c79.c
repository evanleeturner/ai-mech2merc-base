/* SPDX-License-Identifier: MIT */
/* mw2shell 10069c79 */
/* mw2shell 10069c79: Ghidra's C, repaired by tools/ghidra_repair.py */

void __cdecl FUN_10069c79(int param_1, int param_2, byte * param_3)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = 0x300;
  pbVar2 = (byte *)(param_1 + param_2 + -0x300);
  do {
    *param_3 = *pbVar2 >> 2;
    iVar1 = iVar1 + -1;
    pbVar2 = pbVar2 + 1;
    param_3 = param_3 + 1;
  } while (iVar1 != 0);
  return;
}
