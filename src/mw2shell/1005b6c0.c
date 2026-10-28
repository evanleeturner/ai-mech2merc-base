/* SPDX-License-Identifier: MIT */
/* mw2shell 1005b6c0 */
/* mw2shell 1005b6c0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100c40c0;
extern undefined4 DAT_100c40c4;
extern undefined DAT_100c6080[];

undefined4 __cdecl FUN_1005b6c0(undefined2 * param_1)

{
  if (DAT_100c40c0 == DAT_100c40c4) {
    *param_1 = 0;
    return 0;
  }
  *param_1 = *(undefined2 *)(DAT_100c6080 + DAT_100c40c0 * 2);
  DAT_100c40c0 = DAT_100c40c0 + 1;
  if (DAT_100c40c0 == 0x40) {
    DAT_100c40c0 = 0;
  }
  return 0;
}
