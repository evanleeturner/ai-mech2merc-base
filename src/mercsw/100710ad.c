/* SPDX-License-Identifier: MIT */
/* mercsw 100710ad */
/* mercsw 100710ad: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl FUN_10070f83(int param_1, char * param_2);
undefined4 __cdecl FUN_10071045(undefined4 * param_1, int param_2);

undefined4 __cdecl FUN_100710ad(undefined4 * param_1, char * param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10070f83((int)param_1,param_2);
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_10071045(param_1,iVar1);
  }
  return uVar2;
}
