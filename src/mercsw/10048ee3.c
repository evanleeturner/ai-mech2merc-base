/* SPDX-License-Identifier: MIT */
/* mercsw 10048ee3 */
/* mercsw 10048ee3: Ghidra's C, repaired by tools/ghidra_repair.py */

void __cdecl FUN_10048ee3(int param_1, undefined4 param_2, undefined4 * param_3, undefined4 * param_4)

{
  if (param_1 < 0xe) {
    if (param_1 == 0xd) {
      switch(param_2) {
      case 0:
        *param_3 = 3;
        return;
      case 1:
      case 3:
      case 4:
        return;
      case 2:
        *param_3 = 4;
        return;
      case 5:
      case 6:
        *param_3 = 5;
        return;
      default:
        return;
      }
    }
    if (param_1 != 9) {
      return;
    }
LAB_10048ef7:
    *param_4 = 1;
  }
  else {
    if (param_1 < 199) {
      if (param_1 != 0xc6) {
        if (param_1 != 0x1b) {
          return;
        }
        *param_3 = 5;
        return;
      }
    }
    else {
      if (param_1 == 199) goto LAB_10048ef7;
      if (param_1 != 0x209) {
        return;
      }
    }
    *param_4 = 0xffffffff;
  }
  return;
}
