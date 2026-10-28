/* SPDX-License-Identifier: MIT */
/* mw2shell 10005ac0 */
/* mw2shell 10005ac0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int * DAT_10082d08;
extern undefined4 DAT_10083870;
extern undefined DAT_10087b00[];
extern undefined DAT_100889a8[];
extern void * DAT_100ad4f8;
extern void * DAT_100ad504;
extern undefined4 DAT_100ad6b0;
extern void * DAT_100ad6d0;
extern void * DAT_100ae10c;
extern void * DAT_100ae114;
undefined __fastcall FUN_1005f890(void * param_1);
undefined __fastcall FUN_1005f810(void * param_1);
undefined __cdecl FUN_10063ea0(int * param_1);
undefined __cdecl FUN_10063d30(int * param_1);

void __stdcall FUN_10005ac0(void)

{
  DAT_10083870 = 0xffffffff;
  FUN_1005f890(DAT_100ae114);
  FUN_1005f890(DAT_100ad4f8);
  FUN_1005f890(DAT_100ad504);
  FUN_1005f890(DAT_100ae10c);
  FUN_1005f810(DAT_100ad6d0);
  FUN_10063ea0(DAT_10082d08);
  DAT_10082d08 = (int *)DAT_10087b00;
  if (DAT_100ad6b0 != 0) {
    DAT_10082d08 = (int *)DAT_100889a8;
  }
  FUN_10063d30(DAT_10082d08);
  FUN_1005f810(DAT_100ad4f8);
  FUN_1005f810(DAT_100ae10c);
  FUN_1005f890(DAT_100ad6d0);
  return;
}
