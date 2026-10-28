/* SPDX-License-Identifier: MIT */
/* mw2shell 1000f940 */
/* mw2shell 1000f940: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_1008e3f0[];
extern char s__ssmk__s_smk_1008e410[];

void __cdecl FUN_1000f940(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = (int *)(DAT_1008e3f0);
  do {
    if (*piVar1 == 0) {
      DAT_1008e3f0[iVar2] = param_1;
      return;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
  } while (piVar1 < (int *)(s__ssmk__s_smk_1008e410));
  return;
}
