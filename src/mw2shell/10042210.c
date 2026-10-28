/* SPDX-License-Identifier: MIT */
/* mw2shell 10042210 */
/* mw2shell 10042210: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100d08c4;
extern int DAT_100d08c8;

void __cdecl FUN_10042210(int param_1)

{
  if (*(short *)(param_1 + 2) != 1) {
    *(undefined2 *)(param_1 + 2) = 1;
    if (*(int *)(param_1 + 0xc) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10) = *(undefined4 *)(param_1 + 0x10);
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc) = *(undefined4 *)(param_1 + 0xc);
    }
    if (param_1 == DAT_100d08c4) {
      DAT_100d08c4 = *(int *)(param_1 + 0xc);
    }
    if (param_1 == DAT_100d08c8) {
      DAT_100d08c8 = *(int *)(param_1 + 0x10);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}
