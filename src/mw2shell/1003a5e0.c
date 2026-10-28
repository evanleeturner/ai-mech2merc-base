/* SPDX-License-Identifier: MIT */
/* mw2shell 1003a5e0 */
/* mw2shell 1003a5e0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10083508;
extern undefined4 DAT_1008ee18;
undefined __thiscall FUN_10064a90(void * this, int param_1);

void __cdecl FUN_1003a5e0(void * param_1, int param_2)

{
  if ((*(char *)(DAT_10083508 + 0x239a) == '\0') && (DAT_1008ee18 == 0)) {
    FUN_10064a90(param_1,10);
  }
  if ((((param_2 != 0xc02b) && (param_2 != 0xc031)) && (param_2 != 0xc029)) &&
     ((param_2 != 0xc02f || (*(int *)(DAT_10083508 + 0x23bb) != 2)))) {
    FUN_10064a90(param_1,0xb);
  }
  return;
}
