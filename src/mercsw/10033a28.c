/* SPDX-License-Identifier: MIT */
/* mercsw 10033a28 */
/* mercsw 10033a28: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adc08;
extern undefined4 DAT_100adcd0;
extern undefined4 DAT_100adcd4;
extern undefined4 DAT_100adcd8;
extern undefined4 DAT_100adcdc;
undefined __cdecl FUN_10034a3b(undefined4 param_1, undefined4 param_2, int param_3, int param_4);
undefined __cdecl FUN_1003481a(int * param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5, int param_6);
undefined4 __cdecl FUN_10033f29(int * param_1, int param_2, int param_3, int param_4);
undefined __cdecl FUN_10033e5a(int * param_1);
undefined __cdecl FUN_1003468e(int * param_1);

void __cdecl FUN_10033a28(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8)

{
  if (DAT_100adcd0 != 0) {
    if (DAT_100adcdc != 0) {
      FUN_10034a3b(0x73,0x10,param_2,param_3);
      FUN_1003481a(param_1,0x73,0x10,param_4,param_5,param_6);
    }
    if (((param_8 != 0) && (DAT_100adcd4 != 0)) &&
       (FUN_10033f29(param_1,param_5,param_6,param_7), DAT_100adc08 != 0)) {
      FUN_10033e5a(param_1);
    }
    if (DAT_100adcd8 != 0) {
      FUN_1003468e(param_1);
    }
  }
  return;
}
