/* SPDX-License-Identifier: MIT */
/* mw2shell 100421c0 */
/* mw2shell 100421c0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100d08c4;
extern undefined4 DAT_100d08c8;

void __cdecl FUN_100421c0(int param_1)

{
  if (*(short *)(param_1 + 2) != 0) {
    *(undefined2 *)(param_1 + 2) = 0;
    if (DAT_100d08c8 != 0) {
      *(int *)(DAT_100d08c8 + 0xc) = param_1;
    }
    *(int *)(param_1 + 0x10) = DAT_100d08c8;
    DAT_100d08c8 = param_1;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (DAT_100d08c4 == 0) {
      DAT_100d08c4 = param_1;
    }
  }
  return;
}
