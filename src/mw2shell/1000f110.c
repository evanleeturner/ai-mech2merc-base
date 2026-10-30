/* SPDX-License-Identifier: MIT */
/* mw2shell 1000f110 */
/* mw2shell 1000f110: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_1008da7c[];

undefined4 __cdecl IsSlotHighBitSetBit0Clear(int param_1)

{
  if ((((-1 < param_1) && (param_1 < 0x20)) && ((DAT_1008da7c[param_1 * 0x13] & 0x80000000) != 0)
      ) && ((DAT_1008da7c[param_1 * 0x13] & 1) == 0)) {
    return 1;
  }
  return 0;
}
