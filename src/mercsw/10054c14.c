/* SPDX-License-Identifier: MIT */
/* mercsw 10054c14 */
/* mercsw 10054c14: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100b0f18;
extern undefined4 DAT_100b0f1c;
extern undefined4 DAT_1011515c;
extern undefined4 DAT_10115170;
extern int * DAT_10167e70;
undefined __stdcall FUN_10035f13(void);
undefined __cdecl FUN_10054cc0(int param_1);
undefined __cdecl FUN_100547e0(int * param_1, int * param_2);
undefined __cdecl FUN_10054e09(short * param_1);

void __cdecl FUN_10054c14(int param_1)

{
  int local_8;
  
  FUN_10035f13();
  DAT_100b0f18 = 0;
  DAT_100b0f1c = 0;
  DAT_1011515c = 1;
  DAT_10115170 = (undefined4)(DAT_10167e70);
  FUN_10054cc0(param_1);
  if (1 < DAT_100b0f18) {
    FUN_100547e0(DAT_10167e70,DAT_10167e70 + (DAT_100b0f18 + -1) * 8);
  }
  for (local_8 = 0; local_8 < DAT_100b0f18; local_8 = local_8 + 1) {
    FUN_10054e09((short *)DAT_10167e70[local_8 * 8]);
  }
  return;
}
