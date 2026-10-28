/* SPDX-License-Identifier: MIT */
/* mercsw 100689bf */
/* mercsw 100689bf: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10114ec8;
undefined __cdecl FUN_1005d8ae(int * param_1, int param_2, int param_3, int param_4);

void __cdecl FUN_100689bf(int param_1)

{
  if ((*(short *)(param_1 + 4) != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    *(undefined4 *)(param_1 + 0xb0) = DAT_10114ec8;
    FUN_1005d8ae(*(int **)(param_1 + 0xa4),0,0,0);
  }
  return;
}
