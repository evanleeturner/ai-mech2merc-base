/* SPDX-License-Identifier: MIT */
/* mercsw 10012c5d */
/* mercsw 10012c5d: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a410c;
extern undefined2 DAT_100aa1b4;
extern undefined4 DAT_100aa1f4;
extern undefined4 DAT_100aa210;
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100b38fc;
extern undefined4 DAT_100eef40[];
extern undefined DAT_100ef030[];
extern undefined DAT_100ef032[];
extern undefined DAT_101eb4f0[];
extern undefined DAT_101eb520[];
extern char s___s__destroyed__100aa264[];
extern char s___s__destroyed__100aa28c[];
extern char s___s__destroyed_by___s___100aa274[];
extern char s___s__resurrected__100aa29c[];
int __cdecl FUN_10011e80(int param_1);
undefined __cdecl FUN_1002f37a(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);
undefined __cdecl FUN_1002f668(int param_1, int param_2, int param_3, int param_4, uint param_5);
undefined __cdecl FUN_1002fbc0(int * param_1);
undefined __cdecl FUN_100300e2(int param_1, int param_2, uint param_3);
undefined __cdecl FUN_10005207(int param_1, int * param_2, uint param_3);
undefined __cdecl FUN_10004b19(int param_1, int * param_2);
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
undefined4 __cdecl FUN_1005be24(char * param_1, int param_2, int param_3, int param_4);
undefined4 __cdecl FUN_10071150(int param_1, int param_2, undefined4 param_3, undefined4 param_4);

void __cdecl FUN_10012c5d(int param_1, int param_2)

{
  int iVar1;
  uint uVar2;
  char local_78 [40];
  char local_50 [40];
  int *local_28;
  int local_24;
  int *local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_10 = 0;
  local_18 = 0;
  local_8 = param_1;
  if ((*(byte *)(param_1 + 2) != DAT_100adf38) &&
     (*(int *)(DAT_101eb4f0 + param_2 * 4) < *(int *)(param_1 + 0x55))) {
    *(undefined4 *)(DAT_101eb4f0 + param_2 * 4) = *(undefined4 *)(param_1 + 0x55);
    local_14 = DAT_100eef40[param_2];
    local_20 = *(int **)(local_14 + 0x20);
    *(int *)(local_14 + 0xdc) = (int)*(short *)(param_1 + 3);
    if ((((byte)((ushort)*(undefined2 *)(param_1 + 3) >> 8) & 0xf) == 4) &&
       ((*(ushort *)(param_1 + 7) & 0x400) != 0)) {
      local_18 = *(uint *)(local_14 + 0xdc) & 0xff;
      *(ushort *)(DAT_100ef030 + local_18 * 0x40) =
           *(ushort *)(DAT_100ef030 + local_18 * 0x40) | 0x20;
      *(ushort *)(DAT_100ef032 + local_18 * 0x40) =
           *(ushort *)(DAT_100ef032 + local_18 * 0x40) |
           (ushort)((int)((unsigned int)(1) << ((*(byte *)(local_14 + 8) & 0x1f))));
    }
    *(int *)(local_14 + 0x13c) = (int)*(short *)(param_1 + 5);
    *(ushort *)(local_14 + 0x14) = *(ushort *)(local_14 + 0x14) | 1;
    iVar1 = FUN_10011e80(DAT_100aa210);
    if ((iVar1 == *(int *)(local_14 + 4)) && (DAT_100aa1b4 = 1, DAT_100aa1f4 == 2)) {
      DAT_100b38fc = *(undefined4 *)(local_8 + 0x55);
    }
    *(undefined4 *)(local_14 + 0x50) = *(undefined4 *)(local_8 + 0x59);
    *(undefined4 *)(local_14 + 0x54) = *(undefined4 *)(local_8 + 0x5d);
    *(undefined4 *)(local_14 + 0x58) = *(undefined4 *)(local_8 + 0x61);
    *(undefined4 *)(local_14 + 0x5c) = *(undefined4 *)(local_8 + 0x65);
    *(undefined4 *)(local_14 + 0x60) = *(undefined4 *)(local_8 + 0x69);
    *(undefined4 *)(local_14 + 100) = *(undefined4 *)(local_8 + 0x6d);
    FUN_1002f37a(*(int *)(local_14 + 0x40),*(undefined4 *)(local_14 + 0x50),
                 *(undefined4 *)(local_14 + 0x54),*(undefined4 *)(local_14 + 0x58));
    FUN_1002f668(*(int *)(local_14 + 0x40),*(int *)(local_14 + 0x5c),*(int *)(local_14 + 0x60),
                 *(int *)(local_14 + 100),0);
    FUN_1002fbc0(*(int **)(local_14 + 0x40));
    local_20[0xb] = *(int *)(local_8 + 0x71);
    local_20[10] = *(int *)(local_8 + 0x71);
    local_20[0x13] = *(int *)(local_8 + 0x75);
    local_20[0x12] = *(int *)(local_8 + 0x75);
    local_20[0xe] = *(int *)(local_8 + 0x79);
    local_20[2] = *(int *)(local_8 + 0x7d);
    local_20[6] = *(int *)(local_8 + 0x81);
    local_20[0xf5] = *(ushort *)(local_8 + 7) & 0xf;
    if ((*(ushort *)(local_8 + 7) & 0x800) == 0) {
      *(ushort *)(local_20 + 0x110) = *(ushort *)(local_20 + 0x110) & 0xff7f;
    }
    else {
      *(ushort *)(local_20 + 0x110) = *(ushort *)(local_20 + 0x110) | 0x80;
    }
    if ((*(ushort *)(local_8 + 7) & 0x10) == 0) {
      *(undefined1 *)(*(int *)(*local_20 + 0x4c) + 0x30) = 0;
    }
    else {
      *(undefined1 *)(*(int *)(*local_20 + 0x4c) + 0x30) = 1;
    }
    if ((*(ushort *)(local_8 + 7) & 0x20) == 0) {
      *(undefined1 *)(*(int *)(*local_20 + 0x4c) + 0x1d) = 0;
    }
    else {
      *(undefined1 *)(*(int *)(*local_20 + 0x4c) + 0x1d) = 1;
    }
    if ((*(ushort *)(local_8 + 7) & 0x40) == 0) {
      *(undefined1 *)(*(int *)(*local_20 + 0x4c) + 0x1e) = 0;
    }
    else {
      *(undefined1 *)(*(int *)(*local_20 + 0x4c) + 0x1e) = 1;
    }
    if ((*(ushort *)(local_8 + 7) & 0x80) == 0) {
      *(undefined1 *)(*(int *)(*local_20 + 0x4c) + 0x1f) = 0;
    }
    else {
      *(undefined1 *)(*(int *)(*local_20 + 0x4c) + 0x1f) = 1;
    }
    if ((*(ushort *)(local_8 + 7) & 0x100) == 0) {
      *(undefined1 *)(*(int *)(*local_20 + 0x4c) + 0x20) = 0;
    }
    else {
      *(undefined1 *)(*(int *)(*local_20 + 0x4c) + 0x20) = 1;
    }
    if ((*(ushort *)(local_8 + 7) & 0x200) == 0) {
      *(undefined1 *)(*(int *)(*local_20 + 0x4c) + 0x21) = 0;
    }
    else {
      *(undefined1 *)(*(int *)(*local_20 + 0x4c) + 0x21) = 1;
    }
    for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
      local_10 = 0;
      local_c = 0;
      local_28 = (int *)(local_20[0x16] + local_24 * 0x28);
      *local_28 = *(int *)(local_8 + 0x15 + local_24 * 4);
      local_28[2] = *(int *)(local_8 + 0x35 + local_24 * 4);
      if (local_24 == 1) {
        local_28[1] = *(int *)(local_8 + 0x11);
        uVar2 = ((int)*(short *)((int)local_28 + 0x26) & 0xf0U) >> 4;
        if (uVar2 != 0) {
          local_10 = 0xf - ((local_28[2] + local_28[1] / DAT_100a410c) * 3) / (int)(uVar2 << 0x10);
        }
      }
      else if (local_24 == 2) {
        local_28[1] = *(int *)(local_8 + 0xd);
        uVar2 = ((int)*(short *)((int)local_28 + 0x26) & 0xf0U) >> 4;
        if (uVar2 != 0) {
          local_10 = 0xf - ((local_28[2] + local_28[1] / DAT_100a410c) * 3) / (int)(uVar2 << 0x10);
        }
      }
      else if (local_24 == 3) {
        local_28[1] = *(int *)(local_8 + 9);
        uVar2 = ((int)*(short *)((int)local_28 + 0x26) & 0xf0U) >> 4;
        if (uVar2 != 0) {
          local_10 = 0xf - ((local_28[2] + local_28[1] / DAT_100a410c) * 3) / (int)(uVar2 << 0x10);
        }
      }
      local_1c = (int)*(short *)((int)local_28 + 0x26) & 0xf;
      if (local_1c != 0) {
        local_c = 0xf - ((local_28[2] + *local_28 / DAT_100a410c) * 3) / (int)(local_1c << 0x10);
      }
      iVar1 = local_c;
      if (local_c <= local_10) {
        iVar1 = local_10;
      }
      FUN_100300e2(*(int *)(*local_20 + 0x40),iVar1,local_24 + 1);
      if ((local_28[2] < 1) && ((*(ushort *)((int)local_28 + 0x26) & 0x2000) == 0)) {
        FUN_10005207(*(int *)(local_14 + 0x13c),local_20,local_24 + 1);
      }
    }
    if ((local_20[0xf5] == 4) || (local_20[0xf5] == 5)) {
      if (DAT_101eb520[*(int *)(local_14 + 4)] != '\x01') {
        FUN_10004b19(*(int *)(local_14 + 0x13c),local_20);
        if ((*(int *)(local_14 + 0x13c) < 0) || (7 < *(int *)(local_14 + 0x13c))) {
          _sprintf(local_50,s___s__destroyed__100aa28c,local_14 + 0x110);
        }
        else if (*(int *)(local_14 + 4) == *(int *)(local_14 + 0x13c)) {
          _sprintf(local_50,s___s__destroyed__100aa264,local_14 + 0x110);
        }
        else {
          _sprintf(local_50,s___s__destroyed_by___s___100aa274,local_14 + 0x110,
                   DAT_100eef40[*(int *)(local_14 + 0x13c)] + 0x110);
        }
        FUN_1005be24(local_50,1,0x712,0x50);
        DAT_101eb520[*(int *)(local_14 + 4)] = 1;
      }
    }
    else if (DAT_101eb520[*(int *)(local_14 + 4)] == '\x01') {
      FUN_10071150(*(int *)(local_14 + 4),0,0,0);
      _sprintf(local_78,s___s__resurrected__100aa29c,local_14 + 0x110);
      FUN_1005be24(local_78,1,0x712,0x50);
      DAT_101eb520[*(int *)(local_14 + 4)] = 0;
    }
  }
  return;
}
