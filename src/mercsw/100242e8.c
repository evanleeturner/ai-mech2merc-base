/* SPDX-License-Identifier: MIT */
/* mercsw 100242e8 */
/* mercsw 100242e8: Ghidra's C, repaired by tools/ghidra_repair.py */
extern uint DAT_100ab374;
extern undefined4 DAT_100ab378;
extern undefined DAT_1016cc60[];
extern undefined DAT_1016cc70[];
extern undefined DAT_1016ce3a[];

void __cdecl FUN_100242e8(uint param_1)

{
  if (((DAT_100ab378 != 0) && (param_1 < DAT_100ab374)) &&
     ((*(ushort *)(DAT_1016cc70 + param_1 * 0x1fa) & 1) != 0)) {
    ((void (*)(undefined *))((**(code **)(DAT_1016ce3a + param_1 * 0x1fa))))(DAT_1016cc60 + param_1 * 0x1fa);
  }
  return;
}
