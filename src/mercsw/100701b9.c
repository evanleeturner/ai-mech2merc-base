/* SPDX-License-Identifier: MIT */
/* mercsw 100701b9 */
/* mercsw 100701b9: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100c7fd8;
extern undefined4 DAT_100c7fdc;
extern undefined DAT_100eedb0[];

undefined4 __cdecl FUN_100701b9(undefined2 * param_1)

{
  if (DAT_100c7fd8 == DAT_100c7fdc) {
    *param_1 = 0;
  }
  else {
    *param_1 = *(undefined2 *)(DAT_100eedb0 + DAT_100c7fd8 * 2);
    DAT_100c7fd8 = DAT_100c7fd8 + 1;
    if (DAT_100c7fd8 == 0x40) {
      DAT_100c7fd8 = 0;
    }
  }
  return 0;
}
