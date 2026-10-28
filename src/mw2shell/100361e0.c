/* SPDX-License-Identifier: MIT */
/* mw2shell 100361e0 */
/* mw2shell 100361e0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_10093900[];
extern undefined DAT_10093a18[];
extern undefined4 PTR_DAT_10093b2c;

void __cdecl FUN_100361e0(int param_1, int param_2, int param_3, int param_4, int param_5)

{
  if ((-1 < param_1) && (PTR_DAT_10093b2c = (undefined4)((undefined *)DAT_10093900), param_1 != 0)) {
    PTR_DAT_10093b2c = (undefined4)((undefined *)DAT_10093a18);
  }
  if (-1 < param_2) {
    *(int *)PTR_DAT_10093b2c = param_2;
  }
  if (-1 < param_3) {
    if (2 < param_3) {
      param_3 = 3;
    }
    *(int *)(PTR_DAT_10093b2c + 8) = param_3;
  }
  if (-1 < param_4) {
    if (2 < param_4) {
      param_4 = 3;
    }
    *(int *)(PTR_DAT_10093b2c + 0xc) = param_4;
  }
  if (-1 < param_5) {
    *(int *)(PTR_DAT_10093b2c + 0x10) = param_5;
  }
  return;
}
