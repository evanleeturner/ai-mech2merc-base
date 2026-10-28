/* SPDX-License-Identifier: MIT */
/* mercsw 100303b0 */
/* mercsw 100303b0: Ghidra's C, repaired by tools/ghidra_repair.py */

void __cdecl FUN_100303b0(int param_1, int * param_2, int * param_3)

{
  if (param_1 != 0) {
    if ((*param_2 == 0) && (*param_3 == 0)) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *param_2 = param_1;
      *param_3 = param_1;
    }
    else {
      *(int *)(param_1 + 0xc) = *param_3;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(int *)(*param_3 + 0x10) = param_1;
      *param_3 = param_1;
    }
  }
  return;
}
