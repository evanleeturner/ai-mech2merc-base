/* SPDX-License-Identifier: MIT */
/* mercsw 1005f5c6 */
/* mercsw 1005f5c6: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3520;
extern undefined4 DAT_100b3524;
extern undefined4 DAT_100b3528;
extern undefined DAT_10113170[];
extern undefined DAT_10113172[];
extern undefined DAT_10113174[];
extern undefined DAT_10113176[];
extern undefined DAT_10113178[];

undefined4 __cdecl FUN_1005f5c6(int param_1, int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == -1) {
    param_2 = DAT_100b3520;
    DAT_100b3524 = 1;
  }
  if ((((param_2 < 0) || (0x1ff < param_2)) || (param_1 < 0)) || (0x1ff < param_1)) {
    uVar1 = 0;
  }
  else {
    *(short *)(DAT_10113170 + param_1 * 0xe) = (short)param_2;
    *(undefined2 *)(DAT_10113178 + param_1 * 0xe) = 1;
    *(undefined2 *)(DAT_10113176 + param_1 * 0xe) = 1;
    *(undefined2 *)(DAT_10113172 + param_1 * 0xe) = 0;
    if (DAT_100b3528 != 0) {
      *(undefined2 *)(DAT_10113174 + param_1 * 0xe) = 0x2d;
    }
    uVar1 = 1;
  }
  return uVar1;
}
