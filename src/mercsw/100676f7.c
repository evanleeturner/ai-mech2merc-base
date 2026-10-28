/* SPDX-License-Identifier: MIT */
/* mercsw 100676f7 */
/* mercsw 100676f7: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 PTR_DAT_100aaf68;
undefined4 __cdecl FUN_10002570(uint param_1, int param_2);
undefined __stdcall FUN_10006d3e(void);
int * __cdecl FUN_10067951(int param_1, int * param_2, undefined4 param_3, int param_4, int * param_5);

int * __cdecl FUN_100676f7(int param_1, int * param_2, int * param_3)

{
  int iVar1;
  uint uVar2;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_14 = ((int)(((unsigned int)(*(int *)(param_1 + 0xc)) - (unsigned int)(*(int *)(param_1 + 4))) + (unsigned int)(1))) >> 1;
  local_10 = ((int)(((unsigned int)(*(int *)(param_1 + 0x10)) - (unsigned int)(*(int *)(param_1 + 8))) + (unsigned int)(1))) >> 1;
  iVar1 = local_14 - *param_2;
  local_c = (uint)(-1 < iVar1);
  uVar2 = local_10 - param_2[1];
  if (-1 < (int)uVar2) {
    local_c = local_c | 2;
  }
  if (((iVar1 == 0) || (0x7fff < (int)uVar2 / iVar1)) || ((int)uVar2 / iVar1 < -0x8000)) {
    local_c = local_c | 4;
  }
  FUN_10002570(uVar2,*(int *)(PTR_DAT_100aaf68 + 0x44));
  local_8 = FUN_10006d3e();
  FUN_10067951(param_1,&local_14,local_c,local_8,param_3);
  return param_3;
}
