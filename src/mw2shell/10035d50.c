/* SPDX-License-Identifier: MIT */
/* mw2shell 10035d50 */
/* mw2shell 10035d50: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10091ffc;
extern undefined4 * DAT_10092000;
extern undefined4 * DAT_10092004;
extern undefined4 DAT_100a6798;
uint __cdecl FUN_10030160(undefined4 * param_1, undefined4 * param_2);

void __stdcall FUN_10035d50(void)

{
  uint uVar1;
  
  uVar1 = FUN_10030160(DAT_10092000,DAT_10092004);
  if (((char)uVar1 == '\x01') && (DAT_10091ffc = DAT_10091ffc + -1, DAT_10091ffc < 0)) {
    DAT_10091ffc = *(int *)(DAT_100a6798 + 4) + -1;
  }
  return;
}
