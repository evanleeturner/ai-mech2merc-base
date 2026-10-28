/* SPDX-License-Identifier: MIT */
/* mw2shell 10016b60 */
/* mw2shell 10016b60: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_1008edf4;
extern undefined4 DAT_1008ee2c;
extern char s_UnregisterScreenFunction__pointe_1008f110[];
undefined __cdecl FUN_100640a0(char * param_1);

void __cdecl FUN_10016b60(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_1008ee2c;
  DAT_1008edf4 = param_1;
  if (param_1 == 0) {
    FUN_100640a0(s_UnregisterScreenFunction__pointe_1008f110);
    return;
  }
  if (DAT_1008ee2c != 0) {
    DAT_1008ee2c = 0;
    DAT_1008edf4 = iVar1;
    return;
  }
  DAT_1008edf4 = 0;
  return;
}
