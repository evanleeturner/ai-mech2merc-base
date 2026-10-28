/* SPDX-License-Identifier: MIT */
/* mercsw 1004c273 */
/* mercsw 1004c273: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b0700;
extern undefined4 DAT_100b3904;
extern undefined4 DAT_100c7e08;
extern undefined4 DAT_100c7e2c;
extern undefined4 DAT_100c7e30;
extern undefined4 DAT_100c7e34;
extern undefined4 DAT_100c7e38;
undefined __cdecl FUN_1004b839(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);
undefined __cdecl FUN_1004b9f3(undefined4 param_1, int param_2, int param_3, int param_4, int param_5, int param_6);
undefined __cdecl FUN_1007ca5c(int param_1, int param_2, int param_3, int param_4, int param_5);

void __stdcall FUN_1004c273(void)

{
  if (0 < DAT_100b0700) {
    DAT_100c7e2c = DAT_100c7e2c + DAT_100b3904 * 200;
    if (DAT_100c7e08 < DAT_100c7e2c) {
      DAT_100c7e2c = DAT_100c7e08;
    }
    FUN_1004b839(-2,DAT_100c7e30,DAT_100c7e34,DAT_100c7e38,DAT_100c7e2c,0x1000,0);
    FUN_1004b9f3(0xfffffffe,DAT_100c7e30,DAT_100c7e34,DAT_100c7e38,DAT_100c7e2c,0x1000);
    FUN_1007ca5c(DAT_100c7e30,DAT_100c7e34,DAT_100c7e38,DAT_100c7e2c,0x1000);
    DAT_100b0700 = DAT_100b0700 - DAT_100b3904;
  }
  return;
}
