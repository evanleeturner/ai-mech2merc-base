/* SPDX-License-Identifier: MIT */
/* mercsw 1005aff9 */
/* mercsw 1005aff9: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_1005ade8[];
short * __cdecl FUN_1005adf0(short * param_1, int param_2);

void __cdecl FUN_1005aff9(int param_1, byte * param_2)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)FUN_1005adf0((short *)DAT_1005ade8,param_1);
  iVar2 = 0x300;
  do {
    *param_2 = *pbVar1 >> 2;
    iVar2 = iVar2 + -1;
    pbVar1 = pbVar1 + 1;
    param_2 = param_2 + 1;
  } while (iVar2 != 0);
  return;
}
