/* SPDX-License-Identifier: MIT */
/* mercsw 10085fb3 */
/* mercsw 10085fb3: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100c9054;
extern int DAT_100c9058;

void __cdecl FUN_10085fb3(int param_1)

{
  if (*(short *)(param_1 + 2) != 1) {
    *(undefined2 *)(param_1 + 2) = 1;
    if (*(int *)(param_1 + 0xc) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10) = *(undefined4 *)(param_1 + 0x10);
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc) = *(undefined4 *)(param_1 + 0xc);
    }
    if (param_1 == DAT_100c9054) {
      DAT_100c9054 = *(int *)(param_1 + 0xc);
    }
    if (param_1 == DAT_100c9058) {
      DAT_100c9058 = *(int *)(param_1 + 0x10);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}
