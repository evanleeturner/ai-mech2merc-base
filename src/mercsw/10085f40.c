/* SPDX-License-Identifier: MIT */
/* mercsw 10085f40 */
/* mercsw 10085f40: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100c9054;
extern undefined4 DAT_100c9058;

void __cdecl FUN_10085f40(int param_1)

{
  if (*(short *)(param_1 + 2) != 0) {
    *(undefined2 *)(param_1 + 2) = 0;
    if (DAT_100c9058 != 0) {
      *(int *)(DAT_100c9058 + 0xc) = param_1;
    }
    *(int *)(param_1 + 0x10) = DAT_100c9058;
    DAT_100c9058 = param_1;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (DAT_100c9054 == 0) {
      DAT_100c9054 = param_1;
    }
  }
  return;
}
