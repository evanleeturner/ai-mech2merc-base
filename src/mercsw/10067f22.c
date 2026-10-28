/* SPDX-License-Identifier: MIT */
/* mercsw 10067f22 */
/* mercsw 10067f22: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adcdc;
extern undefined4 DAT_100b2ce8;
extern undefined4 DAT_100b3958;
extern undefined4 DAT_100eeee0;
extern undefined4 DAT_100eef0c;
extern undefined4 DAT_100eef10;
extern undefined4 DAT_100eef20;
extern undefined4 DAT_100eef24;
extern undefined4 DAT_100eef28;
extern undefined4 DAT_100eef2c;
extern undefined4 DAT_100eef30;
extern undefined4 DAT_100eef34;
extern undefined4 DAT_100eef38;
extern undefined4 DAT_10114db8;
extern undefined4 DAT_10114df4;
extern undefined4 DAT_10114e08;
extern undefined4 DAT_10114e18;
extern undefined4 DAT_10114e2c;
extern undefined4 DAT_10114e30;
extern undefined4 DAT_10114e34;
extern undefined4 DAT_10215660;
undefined __cdecl FUN_10009c1b(int param_1);

int __stdcall FUN_10067f22(void)

{
  if (DAT_100b3958 != 0) {
    ((void (*)(undefined4, undefined4))((**(code **)(DAT_10114e08 + 0xd4))))(DAT_10114e08,DAT_100eef28);
    ((void (*)(undefined4, undefined4))((**(code **)(DAT_10114e18 + 0xd4))))(DAT_10114e18,DAT_100eef2c);
    ((void (*)(undefined4, undefined4))((**(code **)(DAT_10114df4 + 0xd4))))(DAT_10114df4,DAT_100eef24);
    ((void (*)(undefined4, undefined4))((**(code **)(DAT_10114db8 + 0xd4))))(DAT_10114db8,DAT_100eef20);
    ((void (*)(undefined4, undefined4))((**(code **)(DAT_10114e2c + 0xd4))))(DAT_10114e2c,DAT_100eef30);
    ((void (*)(undefined4, undefined4))((**(code **)(DAT_10114e30 + 0xd4))))(DAT_10114e30,DAT_100eef34);
    ((void (*)(undefined4, undefined4))((**(code **)(DAT_10114e34 + 0xd4))))(DAT_10114e34,DAT_100eef38);
    DAT_100b2ce8 = DAT_100eeee0;
    DAT_100adcdc = DAT_100eef0c;
    DAT_10215660 = DAT_100eef10;
    FUN_10009c1b(DAT_100eef10);
  }
  return DAT_100b3958;
}
