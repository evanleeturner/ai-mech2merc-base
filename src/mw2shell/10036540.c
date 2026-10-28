/* SPDX-License-Identifier: MIT */
/* mw2shell 10036540 */
/* mw2shell 10036540: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_10093b40[];

int * __stdcall FUN_10036540(int param_1, int param_2, int param_3)

{
  int *piVar1;
  
  if (param_3 == 0) {
    piVar1 = (int *)(param_1 + 0xc);
  }
  else {
    piVar1 = (int *)(*(int *)(param_3 + 4) + param_3);
  }
  while( true ) {
    if ((int *)(*(int *)(param_1 + 4) + param_1) <= piVar1) {
      return (int *)0x0;
    }
    if ((undefined4)(*piVar1) == DAT_10093b40[param_2]) break;
    piVar1 = piVar1 + ((int)(piVar1[1] + (piVar1[1] >> 0x1f & 3U)) >> 2);
  }
  return piVar1;
}
