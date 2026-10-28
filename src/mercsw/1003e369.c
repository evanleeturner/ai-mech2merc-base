/* SPDX-License-Identifier: MIT */
/* mercsw 1003e369 */
/* mercsw 1003e369: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aefc0;

void __cdecl FUN_1003e369(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 4);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 8) = *(undefined4 *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  if (DAT_100aefc0 != 0) {
    *(undefined4 *)(param_1 + 0x44) = 9999;
    *(undefined4 *)(param_1 + 0x48) = 9999;
  }
  return;
}
