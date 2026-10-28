/* SPDX-License-Identifier: MIT */
/* mercsw 1000dd06 */
/* mercsw 1000dd06: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_101f64bc[];
undefined __cdecl FUN_1001d671(undefined * param_1);

void __cdecl FUN_1000dd06(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x7c;
  if (*(int *)(DAT_101f64bc + iVar1) != 0) {
    FUN_1001d671(*(undefined **)(DAT_101f64bc + iVar1));
    *(undefined4 *)(DAT_101f64bc + iVar1) = 0;
  }
  return;
}
