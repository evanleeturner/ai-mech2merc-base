/* SPDX-License-Identifier: MIT */
/* mercsw 10008c56 */
/* mercsw 10008c56: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a7178;
extern undefined4 DAT_100a7310;
extern undefined4 DAT_100aafc8;
extern undefined4 DAT_100aafd0;
extern undefined4 DAT_100aafd4;
extern undefined4 DAT_100ad6a4;
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100eef40[];
extern undefined DAT_100f3040[];
extern undefined4 DAT_10215658;
extern undefined4 DAT_10215664;
extern undefined4 PTR_DAT_100aaf68;
extern undefined * PTR_PTR_100a7b40;
undefined __cdecl FUN_1002f322(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
undefined __cdecl FUN_10035220(undefined4 * param_1, int param_2, int param_3, undefined4 param_4);
undefined4 __stdcall FUN_1001a620(void);
undefined __cdecl FUN_1001a5e1(int param_1);
undefined __stdcall FUN_10050b20(void);
undefined4 __cdecl FUN_10058e74(int * param_1, undefined1 param_2);
undefined __cdecl FUN_100353df(byte param_1);
undefined __cdecl FUN_10009896(int * param_1, int param_2, int param_3);
undefined __cdecl FUN_10008ed5(int * param_1);
undefined __stdcall FUN_1003545c(void);
uint __cdecl FUN_10009e05(ushort * param_1);
uint __cdecl FUN_10009edf(ushort * param_1, int param_2, uint param_3);
undefined __cdecl FUN_1000a1d2(int param_1, uint * param_2, uint param_3);

void __cdecl FUN_10008c56(int * param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  int *local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  (void)local_30;
  (void)local_2c;
  (void)local_28;
  (void)local_24;
  (void)local_20;
  local_3c = DAT_10215658;
  DAT_10215658 = 4;
  local_38 = (int *)PTR_PTR_100a7b40;
  if (PTR_PTR_100a7b40 == (undefined *)0x0) {
    DAT_10215658 = 4;
    return;
  }
  iVar1 = DAT_100eef40[DAT_100adf38];
  DAT_100a7310 = (undefined4)(param_1);
  iVar2 = *(int *)(PTR_PTR_100a7b40 + 8);
  piVar4 = param_1;
  piVar5 = (int *)(DAT_100f3040 + iVar2 * 0x14);
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  local_10 = *(int *)(*(int *)(iVar1 + 0x20) + 0xc);
  local_c = *(int *)(iVar1 + 0x60);
  local_24 = 0x5a0000;
  local_20 = 0;
  if (0 < DAT_10215658) {
    local_28 = local_c;
    if (DAT_10215658 < 3) goto LAB_10008d4e;
    if (DAT_10215658 == 4) {
      local_28 = 0;
      local_10 = local_10 + local_c;
      goto LAB_10008d4e;
    }
  }
  local_28 = 0;
  local_10 = 0;
LAB_10008d4e:
  if (DAT_10215664 == 0) {
    local_44 = 0;
    local_48 = 0;
    local_4c = 0;
    local_14 = *(int *)(iVar1 + 0x44);
    if (local_14 != 0) {
      FUN_1002f322(local_14,&local_4c,&local_48,&local_44);
    }
    local_34 = local_4c;
    local_2c = local_44;
  }
  else {
    local_34 = *(undefined4 *)PTR_DAT_100aaf68;
    local_2c = *(undefined4 *)(PTR_DAT_100aaf68 + 8);
  }
  local_40 = local_38[6];
  local_8 = local_40;
  if (DAT_100a7178 < 0) {
    local_8 = local_40 - DAT_100a7178;
  }
  local_30 = local_40;
  FUN_10035220(&local_34,iVar2,local_40,local_8);
  if (DAT_10215658 == 4) {
    DAT_100aafc8 = (undefined4)(FUN_10009e05);
    DAT_100aafd0 = (undefined4)(FUN_10009edf);
    DAT_100aafd4 = (undefined4)(FUN_1000a1d2);
    local_18 = FUN_1001a620();
    FUN_1001a5e1(6);
    FUN_10050b20();
    FUN_1001a5e1(local_18);
    FUN_10058e74(param_1,(char)DAT_100ad6a4);
    FUN_100353df(0);
  }
  if ((DAT_10215658 != 4) || ((*(ushort *)(iVar1 + 0x14) & 0x16) == 0)) {
    FUN_10009896(param_1,(int)local_38,local_10);
  }
  FUN_10008ed5(local_38);
  FUN_1003545c();
  DAT_10215658 = local_3c;
  DAT_100a7310 = (undefined4)((int *)0x0);
  return;
}
