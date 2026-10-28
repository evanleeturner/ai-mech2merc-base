/* SPDX-License-Identifier: MIT */
/* mercsw 10066609 */
/* mercsw 10066609: Ghidra's C, repaired by tools/ghidra_repair.py */
uint __cdecl FUN_10056489(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);

void __cdecl FUN_10066609(int * param_1, int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[3] - param_1[1];
  iVar2 = param_1[4] - param_1[2];
  FUN_10056489(param_1,0,0,iVar1,0,0,param_2);
  FUN_10056489(param_1,iVar1,0,iVar1,iVar2,0,param_2);
  FUN_10056489(param_1,iVar1,iVar2,0,iVar2,0,param_2);
  FUN_10056489(param_1,0,iVar2,0,0,0,param_2);
  return;
}
