/* SPDX-License-Identifier: MIT */
/* mw2shell 10050390 */
/* mw2shell 10050390: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_1008518c[];

void __cdecl FUN_10050390(int * param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    *(undefined4 *)((int)param_1 + 0x12) = 100;
    iVar1 = *(int *)(DAT_1008518c + *param_1 * 0x40);
    param_1[1] = iVar1;
    if (iVar1 < 1) {
      param_1[1] = 10000;
    }
    *(undefined4 *)((int)param_1 + 10) = 0xffffffff;
    *(undefined4 *)((int)param_1 + 0xe) = 0;
  }
  return;
}
