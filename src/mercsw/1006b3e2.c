/* SPDX-License-Identifier: MIT */
/* mercsw 1006b3e2 */
/* mercsw 1006b3e2: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1002f783(int param_1);
int __cdecl FUN_1007be21(int * param_1, undefined4 param_2);
undefined __cdecl FUN_1007bf28(int param_1);

void __cdecl FUN_1006b3e2(int * param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  FUN_1002f783(*(int *)(*param_1 + 0x40));
  piVar1 = *(int **)(*param_1 + 0x40);
  piVar2 = (int *)param_1[0xe4];
  iVar3 = FUN_1007be21((int *)param_1[0xe5],1);
  FUN_1007bf28(iVar3);
  iVar3 = FUN_1007be21(piVar2,1);
  FUN_1007bf28(iVar3);
  iVar3 = FUN_1007be21(piVar1,1);
  FUN_1007bf28(iVar3);
  return;
}
