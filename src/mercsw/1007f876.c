/* SPDX-License-Identifier: MIT */
/* mercsw 1007f876 */
/* mercsw 1007f876: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_100aa558;
extern undefined4 DAT_100aa55c;
extern undefined4 DAT_100aa560;
extern undefined4 DAT_100ab094;
extern undefined DAT_10160c00[];
extern undefined4 PTR_DAT_100aaf68;
undefined __cdecl FUN_1003d2d3(int param_1, int param_2);
int __cdecl FUN_1000fc30(int param_1, int param_2, int param_3);
int __cdecl FUN_1007be21(int * param_1, undefined4 param_2);
undefined __cdecl FUN_1007c7bc(int param_1, int param_2, int param_3, int param_4);
undefined __cdecl FUN_1002f322(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
undefined __cdecl FUN_100037f0(uint param_1, undefined4 param_2, uint param_3, uint param_4, int param_5);
undefined4 __cdecl FUN_10002570(uint param_1, int param_2);
int __cdecl FUN_10003d60(int param_1, int param_2);

undefined4 __cdecl FUN_1007f876(int param_1, int * param_2, int * param_3, int * param_4, int * param_5)

{
  int iVar1;
  uint local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int *local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_18 = 0;
  FUN_1003d2d3(*param_2,*param_4);
  local_c = *(int *)(DAT_10160c00 + local_18 * 4);
  while( true ) {
    if (local_c == 0) {
      return 0;
    }
    local_18 = local_18 + 1;
    if (local_c == 0) break;
    *param_5 = 0;
    for (local_1c = *(int *)(local_c + 0x10); local_1c != 0; local_1c = *(int *)(local_1c + 0x10)) {
      if ((*(int *)(local_1c + 0x24) == 6) && ((*(ushort *)(local_1c + 2) & 0x100) == 0)) {
        local_24 = *param_2 - *(int *)(local_1c + 0x34);
        local_28 = *param_3 - *(int *)(local_1c + 0x38);
        local_8 = *param_4 - *(int *)(local_1c + 0x3c);
        local_10 = *(int *)(local_1c + 0x40) + *(int *)(param_1 + 0x41c);
        local_14 = FUN_1000fc30(local_24,local_28,local_8);
        if (local_14 < local_10) {
          if (((byte)*(undefined2 *)(local_1c + 2) & 0xf0) == 0x50) {
            local_2c = *(int **)(local_1c + 0x18);
            local_14 = FUN_1000fc30(*(int *)(param_1 + 0x428),*(int *)(param_1 + 0x42c),
                                    *(int *)(param_1 + 0x430));
            if ((0 < local_14) && (local_30 = FUN_1007be21(local_2c,1), -1 < local_30)) {
              FUN_1007c7bc(local_30,*(int *)(param_1 + 0x428) * 2,*(int *)(param_1 + 0x42c) * 2,
                           *(int *)(param_1 + 0x430) * 2);
              FUN_1002f322((int)local_2c,&local_34,(undefined4 *)(&local_38),&local_3c);
              local_34 = local_34 - *(int *)PTR_DAT_100aaf68;
              local_38 = local_38 - *(int *)(PTR_DAT_100aaf68 + 4);
              local_3c = local_3c - *(int *)(PTR_DAT_100aaf68 + 8);
              FUN_100037f0(local_34,local_38,local_3c,0xa9,DAT_100ab094);
            }
            return 0;
          }
          if (local_14 == 0) {
            DAT_100aa55c = 0;
            DAT_100aa558 = 0;
            DAT_100aa560 = 0x10000;
          }
          else {
            DAT_100aa558 = FUN_10002570(local_24,local_14);
            DAT_100aa55c = FUN_10002570(local_28,local_14);
            DAT_100aa560 = FUN_10002570(local_8,local_14);
          }
          iVar1 = FUN_10003d60(DAT_100aa558,local_10);
          *param_2 = *(int *)(local_1c + 0x34) + iVar1;
          iVar1 = FUN_10003d60(DAT_100aa55c,local_10);
          *param_3 = *(int *)(local_1c + 0x38) + iVar1;
          iVar1 = FUN_10003d60(DAT_100aa560,local_10);
          *param_4 = *(int *)(local_1c + 0x3c) + iVar1;
          iVar1 = FUN_1000fc30(*(int *)(param_1 + 0x434),*(int *)(param_1 + 0x438),
                               *(int *)(param_1 + 0x43c));
          if (-iVar1 >> 2 < 9) {
            local_20 = -4;
          }
          else {
            local_20 = -(-iVar1 >> 2) >> 1;
          }
          iVar1 = FUN_10003d60(DAT_100aa558,local_20);
          *(int *)(param_1 + 0x428) = iVar1;
          iVar1 = FUN_10003d60(DAT_100aa55c,local_20);
          *(int *)(param_1 + 0x42c) = iVar1;
          iVar1 = FUN_10003d60(DAT_100aa560,local_20);
          *(int *)(param_1 + 0x430) = iVar1;
          *param_5 = local_1c;
          return 1;
        }
      }
    }
    local_c = *(int *)(DAT_10160c00 + local_18 * 4);
  }
  return 0;
}
