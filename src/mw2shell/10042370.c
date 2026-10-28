/* SPDX-License-Identifier: MIT */
/* mw2shell 10042370 */
/* mw2shell 10042370: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100984cc;

short * __cdecl FUN_10042370(int param_1, int * param_2)

{
  short *psVar1;
  
  if (-1 < param_1) {
    for (psVar1 = *(short **)
                   (DAT_100984cc +
                   (((int)*(char *)((int)param_2 + 2) + (int)*(char *)((int)param_2 + 3) +
                     (int)*(char *)((int)param_2 + 1) + (int)(char)*param_2 + param_1) % 0x3f1) * 4)
        ; (psVar1 != (short *)0x0 && ((*psVar1 != param_1 || (*(int *)(psVar1 + 2) != *param_2))));
        psVar1 = *(short **)(psVar1 + 4)) {
    }
    return psVar1;
  }
  return (short *)0x0;
}
