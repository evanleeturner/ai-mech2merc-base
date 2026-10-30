/* SPDX-License-Identifier: MIT */
/* mercsw 10067389 */
/* mercsw 10067389: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 PTR_DAT_100aaf68;
int __cdecl FixedMul16(int param_1, int param_2);
uint __cdecl FUN_100594ec(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6);

void __cdecl FUN_10067389(int * param_1, int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1[3];
  iVar2 = param_1[1];
  iVar3 = param_1[4];
  iVar4 = param_1[2];
  iVar5 = ((param_1[3] - param_1[1]) + 1) / 2 + -1;
  iVar6 = FixedMul16(iVar5,*(int *)(PTR_DAT_100aaf68 + 0x44));
  FUN_100594ec(param_1,((int)(((unsigned int)(iVar1) - (unsigned int)(iVar2)) + (unsigned int)(1))) >> 1,((int)(((unsigned int)(iVar3) - (unsigned int)(iVar4)) + (unsigned int)(1))) >> 1,iVar5,iVar6,param_2);
  return;
}
