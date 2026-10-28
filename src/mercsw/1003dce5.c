/* SPDX-License-Identifier: MIT */
/* mercsw 1003dce5 */
/* mercsw 1003dce5: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100af098;
extern undefined DAT_100c6d30[];
undefined __cdecl FUN_1003e369(int param_1);

void __cdecl FUN_1003dce5(undefined * param_1)

{
  if (((param_1 != (undefined *)0x0) && ((undefined *)(DAT_100af098) != param_1)) && (param_1 != DAT_100c6d30)) {
    FUN_1003e369((int)param_1);
    if (*(int *)(param_1 + 0x10) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc) = *(undefined4 *)(param_1 + 0xc);
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10) = *(undefined4 *)(param_1 + 0x10);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  }
  return;
}
