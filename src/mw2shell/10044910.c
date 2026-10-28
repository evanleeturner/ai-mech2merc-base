/* SPDX-License-Identifier: MIT */
/* mw2shell 10044910 */
/* mw2shell 10044910: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10083508;
extern undefined4 DAT_10098fa8;
extern undefined4 DAT_10098fac;
undefined __stdcall FUN_10044940(void);

void __stdcall FUN_10044910(int param_1)

{
  *(int *)(DAT_10098fa8 + 0x24) = param_1;
  *(int *)(DAT_10098fac + 0x24) = *(int *)(DAT_10083508 + 0x12a) - param_1;
  FUN_10044940();
  return;
}
