/* SPDX-License-Identifier: MIT */
/* mw2shell 1000a800 */
/* mw2shell 1000a800: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1000a690(int param_1);
undefined4 * __cdecl FUN_1000a180(int param_1);

void __cdecl FUN_1000a800(int param_1)

{
  int iVar1;
  
  FUN_1000a690(param_1);
  if (*(int *)(param_1 + 0x280) < *(int *)(param_1 + 0x288)) {
    do {
      FUN_1000a180(*(int *)(param_1 + 0x288) + 0x2134);
      iVar1 = *(int *)(param_1 + 0x288) + -1;
      *(int *)(param_1 + 0x288) = iVar1;
    } while (*(int *)(param_1 + 0x280) < iVar1);
  }
  if (*(int *)(param_1 + 0x200) < 0x157d) {
    *(undefined4 *)(param_1 + 0x234) = 0x32;
  }
  else if (*(int *)(param_1 + 0x200) < 0x2135) {
    *(undefined4 *)(param_1 + 0x234) = 100;
  }
  else {
    *(undefined4 *)(param_1 + 0x234) = 200;
  }
  *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x288) * *(int *)(param_1 + 0x234);
  return;
}
