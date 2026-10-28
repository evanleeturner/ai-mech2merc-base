/* SPDX-License-Identifier: MIT */
/* mercsw 10024df7 */
/* mercsw 10024df7: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b38fc;
undefined __cdecl FUN_1002f3a7(int param_1, int param_2, int param_3, int param_4);
undefined __cdecl FUN_1002fbc0(int * param_1);
undefined __cdecl FUN_1002f727(int param_1);

bool __cdecl FUN_10024df7(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_100b38fc - *(int *)(param_1 + 0x1de);
  if (iVar1 < 0x2e) {
    FUN_1002f3a7(*(int *)(param_1 + 0x1d2),*(int *)(param_1 + 0x1ea),*(int *)(param_1 + 0x1ee),
                 *(int *)(param_1 + 0x1f2));
    FUN_1002fbc0(*(int **)(param_1 + 0x1d2));
    *(undefined4 *)(param_1 + 0x1e6) = 3;
  }
  else {
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xfffe;
    FUN_1002f727(*(int *)(param_1 + 0x1d2));
  }
  return iVar1 < 0x2e;
}
