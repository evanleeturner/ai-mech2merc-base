/* SPDX-License-Identifier: MIT */
/* mercsw 10023920 */
/* mercsw 10023920: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 * DAT_100ab37c;
extern undefined4 * DAT_100ab380;

void __cdecl FUN_10023920(undefined4 * param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((DAT_100ab37c == (undefined4 *)0x0) && (DAT_100ab380 == (undefined4 *)0x0)) {
      *param_1 = 0;
      param_1[1] = 0;
      DAT_100ab37c = param_1;
      DAT_100ab380 = param_1;
    }
    else {
      *param_1 = (undefined4)(DAT_100ab380);
      param_1[1] = 0;
      DAT_100ab380[1] = (undefined4)(param_1);
      DAT_100ab380 = param_1;
    }
  }
  return;
}
