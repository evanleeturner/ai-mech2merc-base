/* SPDX-License-Identifier: MIT */
/* mw2shell 10036100 */
/* mw2shell 10036100: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_10093b38[];
extern undefined4 PTR_DAT_10093b2c;

undefined * __cdecl FUN_10036100(int param_1)

{
  if (param_1 < 0) {
    param_1 = *(int *)(PTR_DAT_10093b2c + 4);
  }
  if ((param_1 < *(int *)(PTR_DAT_10093b2c + 8)) && (param_1 < *(int *)(PTR_DAT_10093b2c + 0xc))) {
    return (undefined *)(PTR_DAT_10093b2c + param_1 * 0x40 + 0x18);
  }
  return DAT_10093b38;
}
