/* SPDX-License-Identifier: MIT */
/* mercsw 100674bc */
/* mercsw 100674bc: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 PTR_DAT_100aaf68;
undefined4 __cdecl FUN_10002570(uint param_1, int param_2);
int __cdecl FixedMul16(int param_1, int param_2);
uint __cdecl FUN_1005982d(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6);

void __cdecl FUN_100674bc(int * param_1, int param_2, uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(PTR_DAT_100aaf68 + 0x44);
  iVar1 = param_1[3];
  iVar2 = param_1[1];
  iVar3 = param_1[4];
  iVar4 = param_1[2];
  iVar7 = param_1[3];
  iVar5 = param_1[1];
  iVar6 = FUN_10002570(param_3,0x640000);
  iVar7 = FixedMul16(((iVar7 - iVar5) + 1) / 2 + -1,iVar6);
  iVar8 = FixedMul16(iVar7,iVar8);
  FUN_1005982d(param_1,((int)(((unsigned int)(iVar1) - (unsigned int)(iVar2)) + (unsigned int)(1))) >> 1,((int)(((unsigned int)(iVar3) - (unsigned int)(iVar4)) + (unsigned int)(1))) >> 1,iVar7,iVar8,param_2);
  return;
}
