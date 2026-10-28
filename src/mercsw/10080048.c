/* SPDX-License-Identifier: MIT */
/* mercsw 10080048 */
/* mercsw 10080048: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aa1f4;
extern undefined4 DAT_100ab094;
extern undefined4 DAT_100adf38;
extern undefined4 PTR_DAT_100aaf68;
undefined __cdecl FUN_1007c203(int * param_1, undefined * param_2, int param_3);
undefined __cdecl FUN_100037f0(uint param_1, undefined4 param_2, uint param_3, uint param_4, int param_5);
undefined __cdecl FUN_10050ecc(int param_1);

void __cdecl FUN_10080048(int * param_1)

{
  if (((DAT_100aa1f4 == 0) || ((undefined4)(*(int *)(*param_1 + 4)) == DAT_100adf38)) || (param_1[0xf5] == 4)) {
    FUN_1007c203(*(int **)(*param_1 + 0x40),(undefined *)(FUN_10050ecc),999);
    *(ushort *)(param_1 + 0x110) = *(ushort *)(param_1 + 0x110) | 0x100;
    FUN_100037f0(*(int *)(*param_1 + 0x50) - *(int *)PTR_DAT_100aaf68,
                 *(int *)(*param_1 + 0x54) - *(int *)(PTR_DAT_100aaf68 + 4),
                 *(int *)(*param_1 + 0x58) - *(int *)(PTR_DAT_100aaf68 + 8),0xa9,DAT_100ab094);
  }
  return;
}
