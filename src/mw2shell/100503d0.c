/* SPDX-License-Identifier: MIT */
/* mw2shell 100503d0 */
/* mw2shell 100503d0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10085190[];

void __cdecl FUN_100503d0(int * param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    *(undefined4 *)((int)param_1 + 0x16) = 100;
    iVar1 = DAT_10085190[*param_1 * 0x10];
    param_1[1] = iVar1;
    if (iVar1 < 1) {
      param_1[1] = 10000;
    }
    *(undefined4 *)((int)param_1 + 0x12) = 0;
  }
  return;
}
