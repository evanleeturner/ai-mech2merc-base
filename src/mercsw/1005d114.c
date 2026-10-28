/* SPDX-License-Identifier: MIT */
/* mercsw 1005d114 */
/* mercsw 1005d114: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aa1ac;
extern undefined4 DAT_100ab090;
extern undefined4 DAT_100ab094;
extern undefined4 DAT_100adcd0;
extern undefined4 DAT_100adf34;
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100b09f8;
extern undefined4 DAT_100b3214;
extern undefined4 DAT_10114da0;
extern undefined4 DAT_10114da4;
extern undefined4 DAT_10114db0[];
extern undefined4 DAT_10114e00;
extern undefined4 DAT_10114ec8;
int __cdecl FUN_1000fc30(int param_1, int param_2, int param_3);
undefined __cdecl FUN_10004475(int * param_1);
undefined __cdecl FUN_10003742(uint param_1, int param_2, undefined4 param_3, int param_4, ushort param_5);
undefined __cdecl FUN_100082c4(int param_1, int param_2);
undefined __cdecl FUN_1005d6f3(int param_1);
undefined __stdcall FUN_100086a2(void);
undefined __cdecl FUN_10033a28(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8);
undefined __cdecl FUN_1003c92a(int param_1);
undefined __stdcall FUN_1000a4d6(void);
undefined __stdcall FUN_1003c807(void);
undefined __stdcall FUN_1000a86e(void);
undefined __stdcall FUN_1003c9e2(void);
undefined __stdcall FUN_1003ca49(void);

void __cdecl FUN_1005d114(int * param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_10;
  int local_c;
  
  if (((undefined4)(*(int *)(*param_1 + 4)) == DAT_100adf38) && (DAT_100adcd0 != 0)) {
    DAT_10114ec8 = param_1[0xf5];
    if ((DAT_10114ec8 != 2) && (*(int *)(DAT_10114e00 + 0xf4) != 0)) {
      ((void (*)(undefined4))((**(code **)(DAT_10114e00 + 0xf4))))(DAT_10114e00);
    }
    if (((DAT_10114ec8 != 5) && (DAT_10114ec8 != 4)) && (DAT_100adcd0 != 0)) {
      DAT_10114da4 = (((*(int *)(*param_1 + 0x60) >> 0x10) % 0x168) % 0x168 + 0x168) % 0x168;
      DAT_10114da0 = ((param_1[3] >> 0x10) % 0x168) % 0x168;
      iVar1 = *(int *)(*param_1 + 0xd8);
      iVar2 = param_1[7];
      local_18 = (*(int *)(*param_1 + 0xd4) >> 0x10) % 0x168 - DAT_10114da4;
      if (local_18 < 0xb5) {
        if (local_18 < -0xb4) {
          local_18 = local_18 + 0x168;
        }
      }
      else {
        local_18 = local_18 + -0x168;
      }
      local_c = local_18 - DAT_10114da0;
      if (local_c < 0xb5) {
        if (local_c < -0xb4) {
          local_c = local_c + 0x168;
        }
      }
      else {
        local_c = local_c + -0x168;
      }
      iVar3 = FUN_1000fc30(*(int *)(*param_1 + 200) - *(int *)(*param_1 + 0x50),
                           *(int *)(*param_1 + 0xcc) - *(int *)(*param_1 + 0x54),
                           *(int *)(*param_1 + 0xd0) - *(int *)(*param_1 + 0x58));
      if (DAT_100b3214 != 0) {
        if (DAT_10114ec8 == 2) {
          FUN_10004475(param_1);
        }
        DAT_100b3214 = 0;
      }
      if (((DAT_100b09f8 != 0) && (DAT_10114ec8 != 3)) &&
         (((*(ushort *)(param_1 + 0x110) & 4) != 0 && ((*(ushort *)(param_1 + 0x110) & 8) == 0)))) {
        FUN_10003742(0xde,100,0x40,5,0x32);
        FUN_100082c4(2,-1);
        *(ushort *)(param_1 + 0x110) = *(ushort *)(param_1 + 0x110) | 8;
      }
      DAT_100b09f8 = 0;
      FUN_1005d6f3((int)param_1);
      if (DAT_10114ec8 == 1) {
        if ((*(char *)(DAT_100adf34 + 9) != '\0') || (DAT_100aa1ac == 0)) {
          FUN_1000a4d6();
        }
        for (local_10 = 0; local_10 < 0x22; local_10 = local_10 + 1) {
          if (*(int *)(DAT_10114db0[local_10] + 0xf0) != 0) {
            ((void (*)(undefined4))((**(code **)(DAT_10114db0[local_10] + 0xf0))))(DAT_10114db0[local_10]);
          }
        }
        FUN_1003c807();
      }
      else if (DAT_10114ec8 == 2) {
        if ((*(char *)(DAT_100adf34 + 9) != '\0') || (DAT_100aa1ac == 0)) {
          FUN_100086a2();
        }
        for (local_10 = 0; local_10 < 0x22; local_10 = local_10 + 1) {
          if (*(int *)(DAT_10114db0[local_10] + 0xf4) != 0) {
            ((void (*)(undefined4))((**(code **)(DAT_10114db0[local_10] + 0xf4))))(DAT_10114db0[local_10]);
          }
        }
        FUN_10033a28(param_1,DAT_10114da4,DAT_10114da0,local_18,local_c,(iVar1 + iVar2) % 0x1680000,
                     iVar3,DAT_100ab090);
        FUN_1003c92a(param_1[0x13]);
      }
      else {
        if ((*(char *)(DAT_100adf34 + 9) != '\0') || (DAT_100aa1ac == 0)) {
          FUN_1000a86e();
        }
        for (local_10 = 0; local_10 < 0x22; local_10 = local_10 + 1) {
          if (*(int *)(DAT_10114db0[local_10] + 0xf8) != 0) {
            ((void (*)(undefined4))((**(code **)(DAT_10114db0[local_10] + 0xf8))))(DAT_10114db0[local_10]);
          }
        }
        FUN_1003c9e2();
      }
      if (DAT_100ab094 == 0) {
        FUN_1003ca49();
      }
    }
  }
  return;
}
