/* SPDX-License-Identifier: MIT */
/* mercsw 100677fc */
/* mercsw 100677fc: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 PTR_DAT_100aaf68;
undefined __cdecl FUN_10006b9a(int param_1);
int __cdecl FUN_10006b20(int param_1);
int __cdecl FUN_10003d60(int param_1, int param_2);
undefined __stdcall FUN_10006d3e(void);
int * __cdecl FUN_10067951(int param_1, int * param_2, undefined4 param_3, int param_4, int * param_5);

int * __cdecl FUN_100677fc(int param_1, int param_2, int * param_3)

{
  int iVar1;
  int iVar2;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  (void)local_10;
  iVar2 = (param_2 % 0x1680000 + 0x1680000) % 0x1680000;
  local_14 = ((int)(((unsigned int)(*(int *)(param_1 + 0xc)) - (unsigned int)(*(int *)(param_1 + 4))) + (unsigned int)(1))) >> 1;
  local_10 = ((int)(((unsigned int)(*(int *)(param_1 + 0x10)) - (unsigned int)(*(int *)(param_1 + 8))) + (unsigned int)(1))) >> 1;
  if ((iVar2 < 0x5a0000) || (0x10e0000 < iVar2)) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  if (iVar2 < 0xb40001) {
    local_c = local_c | 2;
  }
  iVar1 = FUN_10006b9a(iVar2);
  iVar1 = iVar1 >> 0xd;
  iVar2 = FUN_10006b20(iVar2);
  iVar2 = FUN_10003d60(iVar2 >> 0xd,*(int *)(PTR_DAT_100aaf68 + 0x44));
  if (((iVar1 == 0) || (0x7fff < iVar2 / iVar1)) || (iVar2 / iVar1 < -0x8000)) {
    local_c = local_c | 4;
  }
  else {
    local_c = local_c & 0xfffffffb;
  }
  local_8 = FUN_10006d3e();
  FUN_10067951(param_1,&local_14,local_c,local_8,param_3);
  return param_3;
}
