/* SPDX-License-Identifier: MIT */
/* mercsw 10048402 */
/* mercsw 10048402: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100af17c;
extern undefined4 DAT_101686f0;
extern undefined4 DAT_101f52d4;
extern undefined4 DAT_101f52f4;
extern undefined4 PTR_DAT_100af0b4;
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
undefined4 __cdecl FUN_1005b547(int param_1, int param_2);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);
undefined4 __cdecl FUN_10002570(uint param_1, int param_2);
int __cdecl ScaleRectAboutCenter(int param_1, int param_2, int param_3, int param_4);
int __cdecl ScaleRect(undefined4 param_1, int param_2, int param_3);
int * __cdecl ScalePointBySize(int param_1, int * param_2, int * param_3);

void __cdecl FUN_10048402(int * param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_24;
  uint local_20;
  int *local_1c;
  uint local_18;
  ushort *local_10;
  uint local_c;
  uint local_8;
  
  local_1c = (int *)*param_1;
  if ((((local_1c != (int *)0x0) && (piVar1 = (int *)param_1[6], piVar1 != (int *)0x0)) &&
      (*local_1c != 0)) && (*piVar1 != 0)) {
    if ((param_1[4] != -1) &&
       (local_10 = FUN_1008668b(DAT_100af17c,param_1[4] + DAT_101686f0,(int *)PTR_DAT_100af0b4),
       local_10 != (ushort *)0x0)) {
      local_18 = FUN_1005b547((int)local_10,0);
      FUN_1008664f(param_1[4] + DAT_101686f0,(int *)PTR_DAT_100af0b4);
      local_c = (int)local_18 >> 0x10;
      local_8 = local_18 & 0xffff;
      local_c = FUN_10002570(local_c,DAT_101f52f4 + 1);
      local_8 = FUN_10002570(local_8,DAT_101f52d4 + 1);
      local_c = FUN_10002570(local_c,(piVar1[3] - piVar1[1]) + 1);
      local_8 = FUN_10002570(local_8,(piVar1[4] - piVar1[2]) + 1);
      ScaleRectAboutCenter((int)piVar1,(int)piVar1,local_c,local_8);
    }
    local_24 = 0;
    local_20 = FUN_10002570(1,param_1[0xf] + 2);
    iVar3 = FUN_10002570(local_20,0x20000);
    param_1[0x13] = iVar3;
    param_1[0x19] = local_20 * 2;
    param_1[0x17] = param_1[0x19];
    param_1[0x15] = param_1[0x17];
    ScaleRect(*local_1c,(int)local_1c,(int)local_1c);
    ScaleRect(*piVar1,(int)piVar1,(int)piVar1);
    ScalePointBySize((int)local_1c,&local_24,&local_24);
    ScalePointBySize((int)local_1c,param_1 + 0x12,param_1 + 0x12);
    ScalePointBySize((int)local_1c,param_1 + 0x14,param_1 + 0x14);
    ScalePointBySize((int)local_1c,param_1 + 0x16,param_1 + 0x16);
    ScalePointBySize((int)local_1c,param_1 + 0x18,param_1 + 0x18);
    if ((*(byte *)(param_1 + 1) & 0x10) != 0) {
      iVar3 = piVar1[1];
      iVar2 = local_1c[1];
      piVar1[1] = piVar1[1] - (iVar3 - iVar2);
      piVar1[3] = piVar1[3] - (iVar3 - iVar2);
    }
    param_1[0x10] = local_24;
    param_1[0x11] = local_20;
  }
  return;
}
