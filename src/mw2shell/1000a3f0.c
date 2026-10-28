/* SPDX-License-Identifier: MIT */
/* mw2shell 1000a3f0 */
/* mw2shell 1000a3f0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100839fc;
extern undefined4 DAT_10083a00[];
extern undefined4 DAT_10083a04[];

void __cdecl FUN_1000a3f0(int param_1, undefined4 param_2)

{
  if ((0 < param_1) && (DAT_100839fc < 0x4e)) {
    DAT_10083a00[DAT_100839fc * 2] = param_1;
    DAT_10083a04[DAT_100839fc * 2] = param_2;
    DAT_100839fc = DAT_100839fc + 1;
  }
  return;
}
