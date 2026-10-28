/* SPDX-License-Identifier: MIT */
/* mercsw 1007cc00 */
/* mercsw 1007cc00: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 * DAT_100b681c;
extern undefined4 * DAT_100b6820;

void __cdecl FUN_1007cc00(undefined4 * param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((DAT_100b681c == (undefined4 *)0x0) && (DAT_100b6820 == (undefined4 *)0x0)) {
      param_1[1] = 0;
      *param_1 = 0;
      DAT_100b681c = param_1;
      DAT_100b6820 = param_1;
    }
    else {
      param_1[1] = (undefined4)(DAT_100b6820);
      *param_1 = 0;
      *DAT_100b6820 = (undefined4)(param_1);
      DAT_100b6820 = param_1;
    }
  }
  return;
}
