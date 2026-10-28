/* SPDX-License-Identifier: MIT */
/* mercsw 1007d258 */
/* mercsw 1007d258: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100c96b4;
extern undefined DAT_100c9ed8[];

void __cdecl FUN_1007d258(int param_1, int param_2)

{
  if ((-1 < param_1) && (param_1 < DAT_100c96b4)) {
    if (param_2 == 0) {
      *(undefined4 *)(DAT_100c9ed8 + param_1 * 0x40) = 0;
    }
    else {
      *(undefined4 *)(DAT_100c9ed8 + param_1 * 0x40) = 1;
    }
  }
  return;
}
