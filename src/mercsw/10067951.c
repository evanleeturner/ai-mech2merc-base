/* SPDX-License-Identifier: MIT */
/* mercsw 10067951 */
/* mercsw 10067951: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 PTR_DAT_100aaf68;
int __cdecl FUN_10003d60(int param_1, int param_2);
undefined __cdecl FUN_10006b9a(int param_1);
int __cdecl FUN_10006b20(int param_1);

int * __cdecl FUN_10067951(int param_1, int * param_2, undefined4 param_3, int param_4, int * param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_10;
  
  local_14 = *param_2;
  local_10 = param_2[1];
  iVar1 = ((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) + 1) / 2;
  iVar2 = FUN_10003d60(iVar1 + -1,*(int *)(PTR_DAT_100aaf68 + 0x44));
  iVar2 = iVar2 + -1;
  switch(param_3) {
  case 0:
  case 1:
  case 2:
  case 3:
    iVar3 = FUN_10006b9a(param_4);
    iVar1 = FUN_10003d60(iVar1 + -2,iVar3);
    local_14 = local_14 - (iVar1 >> 0xd);
    iVar1 = FUN_10006b20(param_4);
    iVar2 = FUN_10003d60(iVar2,iVar1);
    local_10 = local_10 - (iVar2 >> 0xd);
    break;
  default:
    local_10 = 0;
    local_14 = 0;
    break;
  case 5:
    local_10 = local_10 + iVar2;
    break;
  case 7:
    local_10 = local_10 - iVar2;
  }
  *param_5 = local_14;
  param_5[1] = local_10;
  return param_5;
}
