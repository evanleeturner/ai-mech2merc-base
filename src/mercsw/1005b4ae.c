/* SPDX-License-Identifier: MIT */
/* mercsw 1005b4ae */
/* mercsw 1005b4ae: Ghidra's C, repaired by tools/ghidra_repair.py */

void __cdecl FUN_1005b4ae(int param_1, byte * param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar2 = (byte *)(param_1 + 0xd);
  if ((*(byte *)(param_1 + 10) & 0x80) != 0) {
    iVar1 = ((int)((unsigned int)(1) << (((*(byte *)(param_1 + 10) & 7) + 1)))) * 3;
    pbVar3 = pbVar2;
    pbVar4 = param_2;
    do {
      pbVar2 = pbVar3 + 1;
      *pbVar4 = *pbVar3 >> 2;
      iVar1 = iVar1 + -1;
      pbVar3 = pbVar2;
      pbVar4 = pbVar4 + 1;
    } while (iVar1 != 0);
  }
  if ((pbVar2[9] & 0x80) != 0) {
    iVar1 = ((int)((unsigned int)(1) << (((pbVar2[9] & 7) + 1)))) * 3;
    pbVar2 = pbVar2 + 10;
    do {
      *param_2 = *pbVar2 >> 2;
      iVar1 = iVar1 + -1;
      pbVar2 = pbVar2 + 1;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return;
}
