/* SPDX-License-Identifier: MIT */
/* mw2shell 10069b99 */
/* mw2shell 10069b99: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_10069988[];
short * __cdecl FUN_10069990(short * param_1, int param_2);

void __cdecl FUN_10069b99(int param_1, byte * param_2)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)FUN_10069990((short *)DAT_10069988,param_1);
  iVar2 = 0x300;
  do {
    *param_2 = *pbVar1 >> 2;
    iVar2 = iVar2 + -1;
    pbVar1 = pbVar1 + 1;
    param_2 = param_2 + 1;
  } while (iVar2 != 0);
  return;
}
