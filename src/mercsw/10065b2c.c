/* SPDX-License-Identifier: MIT */
/* mercsw 10065b2c */
/* mercsw 10065b2c: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aa1ac;
extern undefined4 DAT_100b38fc;
extern undefined4 DAT_100b3904;
extern undefined4 DAT_100b3908;
extern undefined4 DAT_100b390c;
extern undefined4 DAT_100b3914;
extern undefined4 DAT_100b3918;
extern undefined4 DAT_100b391c;
extern undefined4 DAT_100b3920;
extern undefined4 DAT_100b3930;
extern undefined4 DAT_100b3934;
extern undefined4 DAT_100b3938;
int __cdecl FUN_10036a37(uint param_1);
undefined __cdecl FUN_10036b20(ushort param_1, short param_2);
undefined __cdecl FUN_10036aad(uint param_1, int param_2);

void __stdcall FUN_10065b2c(void)

{
  if (DAT_100b3938 != 0) {
    if (DAT_100b3908 == 0) {
      DAT_100b38fc = FUN_10036a37(DAT_100b3920);
      if (0 < DAT_100b391c) {
        while (DAT_100b38fc - DAT_100b3930 < DAT_100b391c) {
          DAT_100b38fc = FUN_10036a37(DAT_100b3920);
        }
      }
      if (DAT_100b390c != 0) {
        DAT_100b3934 = DAT_100b3908;
        DAT_100b3908 = 3;
        FUN_10036b20(0x80,1);
      }
    }
    else if ((DAT_100b3908 == 3) && (DAT_100b38fc = DAT_100b38fc + 0xc, DAT_100b390c == 0)) {
      DAT_100b3908 = DAT_100b3934;
      FUN_10036b20(0x80,0);
      FUN_10036aad(DAT_100b3920,DAT_100b38fc);
    }
    DAT_100b3904 = DAT_100b38fc - DAT_100b3930;
    if (DAT_100aa1ac == 0) {
      if (DAT_100b3914 == 0) {
        if (DAT_100b3918 != 0) {
          DAT_100b3904 = DAT_100b3904 >> 2;
          DAT_100b38fc = DAT_100b38fc + DAT_100b3904;
          FUN_10036aad(DAT_100b3920,DAT_100b38fc);
        }
      }
      else {
        DAT_100b3904 = DAT_100b3904 * 8;
        DAT_100b38fc = DAT_100b38fc + DAT_100b3904;
        FUN_10036aad(DAT_100b3920,DAT_100b38fc);
      }
    }
    if (DAT_100b3904 < 1) {
      DAT_100b3904 = 0;
      DAT_100b38fc = DAT_100b3930;
    }
    DAT_100b3930 = DAT_100b38fc;
  }
  return;
}
