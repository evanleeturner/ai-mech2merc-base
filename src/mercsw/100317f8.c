/* SPDX-License-Identifier: MIT */
/* mercsw 100317f8 */
/* mercsw 100317f8: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aae84;
extern undefined4 DAT_100ada6c;
extern undefined4 DAT_100af17c;
extern undefined4 DAT_100b351c;
extern ushort * DAT_100b352c;
extern undefined DAT_10115100[];
extern undefined4 DAT_10115160;
extern undefined DAT_101f52e0[];
extern undefined4 PTR_DAT_100aaf68;
extern undefined4 PTR_DAT_100af100;
undefined4 __cdecl FUN_10017bc1(int param_1, uint param_2, int param_3, int param_4);
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
undefined __cdecl FUN_1007b068(int * param_1, int * param_2, int param_3, uint param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8);
undefined __cdecl FUN_1003eb9c(int * param_1, int param_2, uint * param_3);

void __cdecl FUN_100317f8(int param_1, int param_2)

{
  int iVar1;
  int iVar2;
  uint local_74c [2];
  undefined4 local_744;
  undefined1 *local_56c;
  uint local_568;
  undefined1 local_564 [1360];
  uint local_14;
  int *local_10;
  uint *local_c;
  ushort *local_8;
  
  (void)local_744;
  local_8 = (ushort *)0x0;
  if ((param_2 != 0) && (-1 < *(int *)(param_2 + 0x18))) {
    DAT_10115160 = 0;
    local_14 = (uint)*(ushort *)(param_2 + 2);
    iVar1 = *(int *)(*(int *)(param_2 + 0x20) + 0x20);
    local_56c = local_564;
    for (local_568 = 0; local_568 < local_14; local_568 = local_568 + 1) {
      iVar2 = (uint)*(byte *)(*(int *)(param_2 + 4) + local_568 + param_2) * 0x44 + iVar1 + 0x18;
      *(undefined4 *)(local_56c + 0xc) = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)(local_56c + 0x14) = *(undefined4 *)(iVar2 + 0x14);
      if (*(int *)(param_1 + 0x18) == 0) {
        *(undefined4 *)(local_56c + 0x10) = 0;
      }
      else {
        *(int *)(local_56c + 0x10) = *(int *)(param_1 + 0x18) + 5;
      }
      *(undefined4 *)(local_56c + 0x18) = 0;
      *(undefined4 *)(local_56c + 0x1c) = 0;
      *(undefined4 *)(local_56c + 0x24) = 0;
      local_56c = local_56c + 0x44;
    }
    local_14 = FUN_10017bc1((int)local_564,local_14,*(int *)(PTR_DAT_100aaf68 + 0x3c),
                            *(int *)(PTR_DAT_100aaf68 + 0x40));
    if (2 < local_14) {
      local_10 = (int *)(DAT_10115100);
      local_c = local_74c;
      for (local_568 = 0; local_568 < local_14; local_568 = local_568 + 1) {
        iVar1 = *local_10;
        local_10 = local_10 + 1;
        *local_c = *(uint *)(iVar1 + 0xc);
        local_c[1] = *(uint *)(iVar1 + 0x10);
        local_c[5] = 1;
        local_c[3] = 1;
        local_c[4] = 1;
        local_c[2] = 0xe00000;
        local_c = local_c + 6;
      }
      if (DAT_100b352c == (ushort *)0x0) {
        DAT_100b352c = FUN_1008668b(DAT_100af17c,DAT_100b351c,(int *)PTR_DAT_100af100);
      }
      local_8 = DAT_100b352c + DAT_100ada6c * 0x80;
      if (DAT_100aae84 == 0) {
        local_744 = 0;
        FUN_1003eb9c((int *)(DAT_101f52e0),local_14,local_74c);
      }
      else {
        FUN_1007b068((int *)(DAT_101f52e0),(int *)local_74c,local_14,0x80,0,0,(undefined4)(local_8),0);
      }
    }
  }
  return;
}
