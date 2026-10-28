/* SPDX-License-Identifier: MIT */
/* mercsw 1004c9d7 */
/* mercsw 1004c9d7: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b38fc;
undefined __cdecl FUN_10026f0b(int * param_1);
undefined __cdecl FUN_10061d8b(int * param_1);
undefined4 __cdecl FUN_100832d4(int param_1);
undefined __cdecl FUN_100639ad(int * param_1);
undefined __cdecl FUN_1000465a(int * param_1);
int __cdecl FUN_10051f43(int param_1);
undefined __stdcall FUN_1004fed5(void);
undefined __cdecl FUN_1006b2cc(int * param_1);

void __cdecl FUN_1004c9d7(int * param_1)

{
  int iVar1;
  int local_10;
  
  FUN_10026f0b((int *)*param_1);
  if (param_1[0xf5] == 2) {
    FUN_10061d8b(param_1);
    if (*(int *)(*param_1 + 0x10) == 2) {
      *(undefined4 *)(*param_1 + 0xdc) = 0;
    }
    else if (((*(int *)(*param_1 + 0xdc) != 0) && ((*(byte *)(*param_1 + 0xdd) & 0x10) == 0)) &&
            (iVar1 = FUN_100832d4(*param_1), iVar1 == 0)) {
      *(undefined4 *)(*param_1 + 0xdc) = 0;
    }
    FUN_100639ad(param_1);
    param_1[0xfc] = 0;
    *(undefined1 *)(*(int *)(*param_1 + 0x4c) + 0x43) = 0;
    if (((*(ushort *)(param_1 + 0x110) & 4) != 0) && ((*(ushort *)(param_1 + 0x110) & 8) == 0)) {
      *(undefined4 *)(*(int *)(*param_1 + 0x4c) + 8) = 0;
    }
    iVar1 = *(int *)(*(int *)(*param_1 + 0x4c) + 4);
    if (param_1[0x105] < 0x1680000) {
      if (param_1[0x105] < param_1[2]) {
        param_1[2] = param_1[0x105];
      }
      else if (-param_1[2] != param_1[0x105] && param_1[2] <= -param_1[0x105]) {
        param_1[2] = -param_1[0x105];
      }
    }
    else {
      for (local_10 = iVar1 - param_1[3]; 0xb40000 < local_10; local_10 = local_10 + -0x1680000) {
      }
      for (; local_10 < -0xb40000; local_10 = local_10 + 0x1680000) {
      }
      param_1[2] = iVar1;
      param_1[3] = iVar1 - local_10;
    }
    param_1[6] = **(int **)(*param_1 + 0x4c);
  }
  else {
    param_1[2] = 0;
    param_1[6] = 0;
    *(undefined4 *)(*(int *)(*param_1 + 0x4c) + 8) = 0;
    *(undefined4 *)(*(int *)(*param_1 + 0x4c) + 4) = 0;
    **(undefined4 **)(*param_1 + 0x4c) = 0;
  }
  FUN_1000465a(param_1);
  switch(param_1[0xf5]) {
  case 0:
    param_1[0xf5] = 1;
    iVar1 = FUN_10051f43(0x16a);
    param_1[0xef] = DAT_100b38fc + iVar1 + 0x43e;
    break;
  case 1:
    if (param_1[0xef] < (int)DAT_100b38fc) {
      param_1[0xf5] = 2;
    }
    break;
  case 2:
    break;
  case 3:
    param_1[0xf5] = 0;
    break;
  case 4:
    if (param_1[0xef] == 0) {
      param_1[0xef] = DAT_100b38fc + 0x712;
      FUN_1004fed5();
    }
    if ((int)DAT_100b38fc < param_1[0xef]) {
      FUN_1006b2cc(param_1);
    }
  }
  return;
}
