/* SPDX-License-Identifier: MIT */
/* mercsw 1001793d */
/* mercsw 1001793d: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_100aafdc;
extern undefined4 DAT_100aafe0;
extern undefined4 DAT_100af17c;
extern undefined4 DAT_100b351c;
extern ushort * DAT_100b352c;
extern undefined DAT_101f52e0[];
extern undefined4 PTR_DAT_100aaf68;
extern undefined4 PTR_DAT_100af100;
ushort * __cdecl FUN_1005f9f7(int param_1, ushort * param_2, ushort * param_3);
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
undefined4 __cdecl FUN_1001a040(uint param_1, uint param_2);
int __cdecl FixedMul30(int param_1, int param_2);
undefined __cdecl FUN_1000c3a0(int * param_1, byte * param_2, short param_3, short param_4, int param_5, uint * param_6, undefined4 param_7, undefined4 param_8, int param_9);

undefined4 __cdecl FUN_1001793d(int param_1, int * param_2, int param_3, int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  ushort local_208 [2];
  uint local_204;
  int *local_200;
  uint *local_1fc;
  int local_1f8;
  uint local_1f4 [120];
  ushort *local_14;
  int local_10;
  ushort local_c [2];
  ushort *local_8;
  
  local_14 = (ushort *)0x0;
  local_8 = (ushort *)0x0;
  local_14 = FUN_1005f9f7(param_1 + 0x100,local_c,local_208);
  if (local_14 == (ushort *)0x0) {
    uVar1 = 0;
  }
  else {
    if ((param_4 != 0) &&
       ((DAT_100aafdc = DAT_100aafdc + DAT_100aafe0, DAT_100aafdc < 0 || (0xf < DAT_100aafdc)))) {
      DAT_100aafe0 = -DAT_100aafe0;
      DAT_100aafdc = DAT_100aafdc + DAT_100aafe0;
    }
    if (DAT_100b352c == (ushort *)0x0) {
      DAT_100b352c = FUN_1008668b(DAT_100af17c,DAT_100b351c,(int *)PTR_DAT_100af100);
    }
    local_8 = DAT_100b352c + DAT_100aafdc * 0x80;
    local_1f8 = param_3;
    local_1fc = local_1f4;
    local_200 = param_2;
    while( true ) {
      if (local_1f8 == 0) break;
      local_10 = *local_200;
      local_200 = local_200 + 1;
      local_204 = *(uint *)(local_10 + 0xc);
      uVar2 = *(uint *)(local_10 + 0x10);
      *local_1fc = local_204;
      local_1fc[1] = uVar2;
      local_1fc[3] = *(uint *)(local_10 + 0x14);
      local_1fc[4] = *(uint *)(local_10 + 0x18);
      local_1fc[5] = *(uint *)(local_10 + 8);
      local_1fc[2] = (int)((unsigned int)(*(int *)(local_10 + 0x2c)) << (0x10));
      local_1fc = local_1fc + 6;
      local_1f8 = local_1f8 + -1;
    }
    local_1fc = local_1f4;
    for (local_1f8 = 0; local_1f8 < param_3; local_1f8 = local_1f8 + 1) {
      uVar2 = FUN_1001a040(*(uint *)(PTR_DAT_100aaf68 + 0x94),local_1fc[5]);
      local_1fc[5] = uVar2;
      uVar2 = FixedMul30(local_1fc[3],local_1fc[5]);
      local_1fc[3] = uVar2;
      uVar2 = FixedMul30(local_1fc[4],local_1fc[5]);
      local_1fc[4] = uVar2;
      local_1fc = local_1fc + 6;
    }
    FUN_1000c3a0((int *)(DAT_101f52e0),(byte *)local_14,local_c[0],local_208[0],param_3,local_1f4,0,(undefined4)(local_8),
                 0);
    uVar1 = 1;
  }
  return uVar1;
}
