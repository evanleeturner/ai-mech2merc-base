/* SPDX-License-Identifier: MIT */
/* mercsw 10005228 */
/* mercsw 10005228: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aa1ac;
extern undefined4 DAT_100adf38;
undefined __cdecl FUN_100051a2(undefined4 param_1, int param_2, int param_3);
int __cdecl FUN_10051f43(int param_1);
undefined __cdecl FUN_10030304(int * param_1, uint param_2);
undefined __cdecl FUN_10030282(int * param_1, uint param_2);
undefined4 __stdcall FUN_10051f89(void);
undefined __cdecl FUN_10004b19(int param_1, int * param_2);

void __cdecl FUN_10005228(int param_1, int * param_2, uint param_3, int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 0) {
    return;
  }
  iVar1 = param_2[0x16] + param_3 * 0x28;
  if ((*(ushort *)(iVar1 + -2) & 0x2000) != 0) {
    return;
  }
  *(undefined4 *)(iVar1 + -0x20) = 0;
  *(ushort *)(iVar1 + -2) = *(ushort *)(iVar1 + -2) | 0x2000;
  FUN_100051a2(param_1,(int)param_2,param_3);
  switch(param_3) {
  case 2:
    FUN_10005228(param_1,param_2,5,0);
    *(ushort *)(iVar1 + -2) = *(ushort *)(iVar1 + -2) & 0xdfff;
    return;
  case 3:
    FUN_10005228(param_1,param_2,5,0);
    FUN_10005228(param_1,param_2,2,0);
    FUN_10005228(param_1,param_2,4,0);
    FUN_10005228(param_1,param_2,6,0);
    FUN_10005228(param_1,param_2,1,0);
    break;
  case 4:
    FUN_10005228(param_1,param_2,6,0);
    *(ushort *)(iVar1 + -2) = *(ushort *)(iVar1 + -2) & 0xdfff;
    return;
  case 5:
  case 6:
    if (param_4 == 0) {
      FUN_10030304(*(int **)(*param_2 + 0x40),param_3);
      return;
    }
    FUN_10030282(*(int **)(*param_2 + 0x40),param_3);
    return;
  case 7:
  case 8:
    if ((*(ushort *)(param_2 + 0x110) & 0x20) == 0) {
      iVar2 = FUN_10051f43(100);
      if (((iVar2 < 0x5f) && (param_4 == 0)) && (*(int *)*param_2 == 1)) {
        *(undefined4 *)(iVar1 + -0x20) = 0x10000;
        *(ushort *)(iVar1 + -2) = *(ushort *)(iVar1 + -2) & 0xdfff;
        param_2[0xf9] = 0x3333;
        return;
      }
      if (param_4 == 0) {
        FUN_10030304(*(int **)(*param_2 + 0x40),param_3);
      }
      else {
        FUN_10030282(*(int **)(*param_2 + 0x40),param_3);
      }
      param_2[0xf9] = 0;
      *(ushort *)(param_2 + 0x110) = *(ushort *)(param_2 + 0x110) | 0x20;
      if (*(int *)*param_2 != 1) {
        return;
      }
      *(ushort *)((int)param_2 + 0x442) = *(ushort *)((int)param_2 + 0x442) | 4;
      iVar1 = FUN_10051f89();
      param_2[0x114] = (int)(iVar1 * 0x10000 + ((int)((unsigned int)(iVar1) * (unsigned int)(0x10000)) >> 0x1f & 0x3ffU)) >> 10;
      return;
    }
    FUN_10005228(param_1,param_2,3,0);
    break;
  default:
    iVar2 = FUN_10051f43(100);
    if ((0x13 < iVar2) || (((undefined4)(*(int *)(*param_2 + 4)) != DAT_100adf38 && (DAT_100aa1ac != 0)))) {
      *(undefined4 *)(iVar1 + -0x20) = 0x10000;
      *(ushort *)(iVar1 + -2) = *(ushort *)(iVar1 + -2) & 0xdfff;
      return;
    }
    FUN_10004b19(param_1,param_2);
  }
  if (param_4 == 0) {
    FUN_10030304(*(int **)(*param_2 + 0x40),param_3);
    if (((param_2[0xf5] != 4) && (param_2[0xf5] != 5)) &&
       (((undefined4)(*(int *)(*param_2 + 4)) == DAT_100adf38 || (DAT_100aa1ac == 0)))) {
      FUN_10004b19(param_1,param_2);
    }
  }
  else {
    FUN_10030282(*(int **)(*param_2 + 0x40),param_3);
  }
  return;
}
