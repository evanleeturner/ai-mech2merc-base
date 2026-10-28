/* SPDX-License-Identifier: MIT */
/* mercsw 1003df3a */
/* mercsw 1003df3a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100af098;

void __cdecl FUN_1003df3a(ushort * param_1)

{
  if (((param_1 != (ushort *)0x0) && ((*param_1 & 0x800) == 0)) &&
     (*param_1 = *param_1 | 0x800, DAT_100af098 != 0)) {
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 8) + 0xc) = *(undefined4 *)(param_1 + 6);
    }
    if (*(int *)(param_1 + 6) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 6) + 0x10) = *(undefined4 *)(param_1 + 8);
    }
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 6);
  }
  return;
}
