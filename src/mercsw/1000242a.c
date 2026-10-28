/* SPDX-License-Identifier: MIT */
/* mercsw 1000242a */
/* mercsw 1000242a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a40a0;
extern undefined4 DAT_100c4c88;
extern undefined4 DAT_10114db0;
extern undefined4 DAT_10218070;
extern int DAT_10218074;
undefined __cdecl FUN_100609fa(int param_1, uint param_2);
undefined __cdecl FUN_10003742(uint param_1, int param_2, undefined4 param_3, int param_4, ushort param_5);
undefined __cdecl FUN_100082c4(int param_1, int param_2);

void __cdecl FUN_1000242a(undefined4 param_1, int param_2)

{
  if (DAT_10218074 != param_2) {
    if (param_2 == 1) {
      if (*(short *)(DAT_10114db0 + 6) < 1) {
        DAT_10218074 = 1;
        DAT_100c4c88 = 0;
        FUN_100609fa(0xc,0xb5);
        FUN_10003742(0x95,100,0x40,5,0x50);
        FUN_100082c4(0x1c,1);
      }
    }
    else if (param_2 == 0) {
      DAT_100c4c88 = 1;
      DAT_100a40a0 = 0xffffffff;
      DAT_10218070 = 0;
    }
  }
  return;
}
