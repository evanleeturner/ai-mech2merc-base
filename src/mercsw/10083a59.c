/* SPDX-License-Identifier: MIT */
/* mercsw 10083a59 */
/* mercsw 10083a59: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __stdcall FUN_10006d3e(void);
int __cdecl FUN_10006b20(int param_1);
undefined4 __cdecl FUN_10022b50(uint param_1, int param_2);
undefined __cdecl FUN_10006b9a(int param_1);

void __cdecl FUN_10083a59(uint param_1, undefined4 param_2, uint param_3, int * param_4, undefined4 * param_5, uint * param_6, int * param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_1c;
  undefined4 local_10;
  
  iVar1 = FUN_10006d3e();
  if ((int)((param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f)) <
      (int)((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f))) {
    iVar2 = FUN_10006b20(iVar1);
    if (iVar2 == 0) {
      local_10 = 0;
    }
    else {
      local_10 = FUN_10022b50(param_1,iVar2);
    }
  }
  else {
    iVar2 = FUN_10006b9a(iVar1);
    if (iVar2 == 0) {
      local_10 = 0;
    }
    else {
      local_10 = FUN_10022b50(param_3,iVar2);
    }
  }
  iVar2 = FUN_10006d3e();
  iVar3 = FUN_10006b9a(iVar2);
  if (iVar3 == 0) {
    local_1c = 0;
  }
  else {
    local_1c = FUN_10022b50(local_10,iVar3);
  }
  *param_4 = iVar1;
  *param_6 = local_10;
  *param_5 = local_1c;
  *param_7 = iVar2;
  return;
}
