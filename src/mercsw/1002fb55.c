/* SPDX-License-Identifier: MIT */
/* mercsw 1002fb55 */
/* mercsw 1002fb55: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1002fa9c(int * param_1);

void __cdecl FUN_1002fb55(int * param_1)

{
  int *local_8;
  
  if ((*(byte *)(param_1 + 0x1d) & 1) == 0) {
    if (param_1[1] != 0) {
      for (local_8 = (int *)param_1[1]; local_8 != (int *)0x0; local_8 = (int *)local_8[2]) {
        FUN_1002fb55(local_8);
      }
    }
  }
  else {
    FUN_1002fa9c(param_1);
  }
  return;
}
