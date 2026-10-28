/* SPDX-License-Identifier: MIT */
/* mw2shell 1000a6f0 */
/* mw2shell 1000a6f0: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 * __cdecl FUN_1000a180(int param_1);
undefined __cdecl FUN_1000a3f0(int param_1, undefined4 param_2);

void __cdecl FUN_1000a6f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x230);
  iVar1 = (*(int *)(param_1 + 0x22c) / 100 - *(int *)(param_1 + 0x210) / 0x19) + 10;
  *(int *)(param_1 + 0x230) = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x230) = 0;
  }
  if ((-1 < iVar2) && (iVar2 != *(int *)(param_1 + 0x230))) {
    if (*(int *)(param_1 + 0x230) < iVar2) {
      do {
        iVar1 = iVar2 + 8000;
        iVar2 = iVar2 + -1;
        FUN_1000a180(iVar1);
      } while (*(int *)(param_1 + 0x230) < iVar2);
    }
    if (iVar2 < *(int *)(param_1 + 0x230)) {
      do {
        iVar1 = iVar2 + 0x1f41;
        iVar2 = iVar2 + 1;
        FUN_1000a3f0(iVar1,*(undefined4 *)(param_1 + 0x228));
      } while (iVar2 < *(int *)(param_1 + 0x230));
    }
  }
  return;
}
