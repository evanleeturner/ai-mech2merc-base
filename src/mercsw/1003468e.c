/* SPDX-License-Identifier: MIT */
/* mercsw 1003468e */
/* mercsw 1003468e: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100eef40[];
undefined4 __cdecl FUN_1004d5e3(int param_1);
undefined __cdecl FUN_10034c0a(int param_1, int param_2);
undefined4 __cdecl FUN_1004d60d(int param_1);
undefined4 __stdcall FUN_10083808(void);
undefined __cdecl FUN_10034e74(int param_1, int param_2, int param_3);
undefined4 __cdecl FUN_1003ba89(int * param_1, int * param_2, int * param_3);
undefined __cdecl FUN_1003510c(int param_1, int param_2, int param_3);
int * __cdecl FUN_10066f36(int param_1, int * param_2, int * param_3);
undefined __cdecl FUN_100340f0(int * param_1);

void __cdecl FUN_1003468e(int * param_1)

{
  int iVar1;
  int iVar2;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_c = *param_1;
  local_24 = *(uint *)(local_c + 0xdc);
  if ((local_24 != 0) && ((local_24 & 0x1000) == 0)) {
    local_8 = local_24 & 0xff;
    local_24 = local_24 & 0xf00;
    if (local_24 == 0x100) {
      local_1c = 0xc4;
      local_20 = 0xca;
      local_10 = *(int *)(local_c + 200);
      local_14 = *(int *)(local_c + 0xcc);
      local_18 = *(int *)(local_c + 0xd0);
      iVar1 = FUN_1003ba89(&local_10,&local_14,&local_18);
      if (iVar1 == 0) {
        local_2c = local_10;
        local_28 = local_14;
        FUN_10066f36(0x101f52e0,&local_2c,&local_2c);
        FUN_1003510c(local_2c,local_28,local_20);
      }
      else {
        FUN_1003510c(local_10,local_14,local_1c);
      }
    }
    else if (local_24 == 0x200) {
      iVar1 = FUN_1004d5e3(local_8);
      FUN_10034c0a(DAT_100eef40[local_8],iVar1);
    }
    else if (local_24 == 0x400) {
      iVar1 = FUN_1004d60d(local_8);
      iVar2 = FUN_10083808();
      FUN_10034e74(local_8,iVar2,iVar1);
    }
  }
  if (local_24 != 0x100) {
    FUN_100340f0(param_1);
  }
  return;
}
