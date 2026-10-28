/* SPDX-License-Identifier: MIT */
/* mercsw 1006804e */
/* mercsw 1006804e: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adcdc;
extern undefined4 DAT_100b2ce8;
extern undefined4 DAT_10114db8;
extern undefined4 DAT_10114df4;
extern undefined4 DAT_10114e08;
extern undefined4 DAT_10114e18;
extern undefined4 DAT_10114e2c;
extern undefined4 DAT_10114e30;
extern undefined4 DAT_10114e34;
extern undefined4 DAT_10215660;
undefined __cdecl FUN_10009c1b(int param_1);

void __stdcall FUN_1006804e(void)

{
  ((void (*)(undefined4, int))((**(code **)(DAT_10114e08 + 0xd4))))(DAT_10114e08,9);
  ((void (*)(undefined4, int))((**(code **)(DAT_10114e18 + 0xd4))))(DAT_10114e18,10);
  ((void (*)(undefined4, int))((**(code **)(DAT_10114df4 + 0xd4))))(DAT_10114df4,8);
  ((void (*)(undefined4, int))((**(code **)(DAT_10114db8 + 0xd4))))(DAT_10114db8,1);
  ((void (*)(undefined4, int))((**(code **)(DAT_10114e2c + 0xd4))))(DAT_10114e2c,0);
  ((void (*)(undefined4, int))((**(code **)(DAT_10114e30 + 0xd4))))(DAT_10114e30,0xc);
  ((void (*)(undefined4, int))((**(code **)(DAT_10114e34 + 0xd4))))(DAT_10114e34,0xd);
  DAT_100b2ce8 = 1;
  DAT_100adcdc = 1;
  DAT_10215660 = 1;
  FUN_10009c1b(1);
  return;
}
