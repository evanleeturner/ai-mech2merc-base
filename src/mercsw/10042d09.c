/* SPDX-License-Identifier: MIT */
/* mercsw 10042d09 */
/* mercsw 10042d09: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100eef40[];
undefined __cdecl FUN_1002a5d4(int param_1);
undefined __cdecl FUN_1004403d(int param_1, undefined1 param_2);
bool __cdecl FUN_1002950f(int param_1, short param_2);

void __cdecl FUN_10042d09(int param_1)

{
  char *pcVar1;
  
  switch(*(undefined2 *)(param_1 + 0x1c4)) {
  case 1:
    FUN_1002a5d4(param_1);
    if ((*(ushort *)(param_1 + 0x17a) & 0x200) != 0) {
      pcVar1 = (char *)(DAT_100eef40[*(ushort *)(param_1 + 0x17a) & 0xff] + 0x1f6 +
                       *(int *)(param_1 + 0x1d4) / 2);
      *pcVar1 = *pcVar1 + -1;
    }
    break;
  case 2:
  case 3:
  case 6:
    break;
  case 4:
    FUN_1004403d(param_1,0);
    break;
  case 5:
    FUN_1004403d(param_1,0);
    *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x20) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x21) = 0;
    break;
  case 7:
    FUN_1002a5d4(param_1);
    break;
  case 8:
  case 10:
    *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x30) = 0;
    break;
  case 9:
    FUN_1004403d(param_1,0);
    break;
  case 0xb:
    *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x20) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x21) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x1e) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x1f) = 0;
    FUN_1004403d(param_1,0);
    break;
  case 0xc:
  case 0xd:
    FUN_1002a5d4(param_1);
  }
  FUN_1004403d(param_1,0);
  *(undefined2 *)(param_1 + 0x1c6) = *(undefined2 *)(param_1 + 0x1c4);
  *(undefined2 *)(param_1 + 0x1c4) = 0xffff;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined2 *)(param_1 + 0x178) = *(undefined2 *)(param_1 + 0x17a);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x1d8);
  FUN_1002950f(param_1,*(short *)(param_1 + 0x17a));
  return;
}
