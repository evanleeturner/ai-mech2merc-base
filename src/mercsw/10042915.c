/* SPDX-License-Identifier: MIT */
/* mercsw 10042915 */
/* mercsw 10042915: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b38fc;
int __cdecl FUN_10051f43(int param_1);
undefined __cdecl FUN_1004403d(int param_1, undefined1 param_2);
int __cdecl FUN_10044a2b(int param_1);
undefined __cdecl FUN_10042f22(int param_1, uint param_2, short param_3, short param_4);
undefined __cdecl FUN_1002a6ac(int param_1);

void __cdecl FUN_10042915(int param_1)

{
  int iVar1;
  short sVar2;
  
  *(undefined2 *)(param_1 + 0x17a) = *(undefined2 *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(param_1 + 0x1ee) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(param_1 + 0x1ea) = 0;
  *(int *)(param_1 + 0x1cc) = DAT_100b38fc + 0x235a;
  switch(*(undefined2 *)(param_1 + 0x1c4)) {
  case 0:
    iVar1 = FUN_10051f43(5);
    *(int *)(param_1 + 0x1cc) = (iVar1 + 8) * 0xb5 + DAT_100b38fc;
    break;
  case 1:
    *(int *)(param_1 + 0x1cc) = DAT_100b38fc + 0xe24;
    *(undefined4 *)(param_1 + 0x1d8) = 0xffffffff;
    break;
  case 2:
  case 6:
    break;
  case 3:
    iVar1 = FUN_10051f43(2);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1d4) = 0xffffffff;
    }
    else {
      *(undefined4 *)(param_1 + 0x1d4) = 1;
    }
    break;
  case 4:
    *(undefined4 *)(*(int *)(param_1 + 0x4c) + 8) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x1ea) = 1;
    FUN_1004403d(param_1,1);
    *(int *)(param_1 + 0x1cc) = DAT_100b38fc + 0x389;
    break;
  case 5:
    FUN_10044a2b(param_1);
    *(undefined4 *)(param_1 + 0x1ea) = 1;
    break;
  case 7:
    if (*(int *)(param_1 + 0xc0) < 4000) {
      sVar2 = 10000;
      iVar1 = FUN_10051f43(2);
      FUN_10042f22(param_1,*(uint *)(param_1 + 4) | 0x200,(-(ushort)(iVar1 == 0) & 8) + 4,sVar2);
    }
    else {
      sVar2 = 10000;
      iVar1 = FUN_10051f43(2);
      FUN_10042f22(param_1,*(uint *)(param_1 + 4) | 0x200,(-(ushort)(iVar1 == 0) & 0xc) + 3,sVar2);
    }
    break;
  case 8:
    iVar1 = FUN_10051f43(0xb);
    *(int *)(param_1 + 0x1cc) = (iVar1 + 10) * 0xb5 + DAT_100b38fc;
    *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x30) = 1;
    break;
  case 9:
    *(undefined4 *)(param_1 + 0x1d4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x1ea) = 1;
    break;
  case 10:
    if (((*(int *)(*(int *)(param_1 + 0x20) + 0x3d8) == 0) || (*(short *)(param_1 + 0x1c6) != 10))
       || (*(int *)(param_1 + 0x7c) != -1)) {
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x30) = 1;
      *(int *)(param_1 + 0x1cc) = DAT_100b38fc + 0x5a8;
    }
    else {
      *(int *)(param_1 + 0x1cc) = DAT_100b38fc + 0x2d4;
    }
    break;
  case 0xb:
    *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x1ea) = 1;
    if ((*(int *)(param_1 + 0x1d4) == 0) || (*(int *)(param_1 + 0x1d4) == 2)) {
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x1e) = 1;
    }
    else {
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x20) = 1;
    }
    FUN_1004403d(param_1,1);
    *(int *)(param_1 + 0x1cc) = DAT_100b38fc + 0x16a;
    break;
  case 0xc:
    *(int *)(param_1 + 0x1cc) = DAT_100b38fc + 0x46b4;
    FUN_1002a6ac(param_1);
    break;
  case 0xd:
    *(int *)(param_1 + 0x1cc) = DAT_100b38fc + 0x46b4;
    iVar1 = FUN_10051f43(0x10);
    *(int *)(param_1 + 0x1d4) = iVar1;
  }
  return;
}
