/* SPDX-License-Identifier: MIT */
/* mercsw 100311c8 */
/* mercsw 100311c8: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_10115100[];
extern undefined DAT_10169600[];
extern undefined DAT_101f52e0[];
extern undefined4 PTR_DAT_100aaf68;
undefined4 __cdecl FUN_10017bc1(int param_1, uint param_2, int param_3, int param_4);
undefined __cdecl FUN_1007b068(int * param_1, int * param_2, int param_3, uint param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8);

void __cdecl FUN_100311c8(int param_1, uint param_2)

{
  int iVar1;
  uint uVar2;
  int local_1f0 [120];
  uint local_10;
  int *local_c;
  int *local_8;
  
  uVar2 = FUN_10017bc1(param_1,param_2,*(int *)(PTR_DAT_100aaf68 + 0x3c),
                       *(int *)(PTR_DAT_100aaf68 + 0x40));
  if (2 < uVar2) {
    local_c = (int *)(DAT_10115100);
    local_8 = local_1f0;
    for (local_10 = 0; local_10 < uVar2; local_10 = local_10 + 1) {
      iVar1 = *local_c;
      local_c = local_c + 1;
      *local_8 = *(int *)(iVar1 + 0xc);
      local_8[1] = *(int *)(iVar1 + 0x10);
      local_8[5] = 1;
      local_8[3] = 1;
      local_8[4] = 1;
      local_8[2] = *(int *)(iVar1 + 0x14);
      local_8 = local_8 + 6;
    }
    FUN_1007b068((int *)(DAT_101f52e0),local_1f0,uVar2,0x40,0,0,(undefined4)(DAT_10169600),0);
  }
  return;
}
