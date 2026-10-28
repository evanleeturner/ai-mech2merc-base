/* SPDX-License-Identifier: MIT */
/* mw2shell 10005a60 */
/* mw2shell 10005a60: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int * DAT_10082d08;
extern void * DAT_100ad4f8;
extern void * DAT_100ad504;
extern void * DAT_100ad6d0;
extern void * DAT_100ae10c;
extern void * DAT_100ae114;
undefined __fastcall FUN_1005f890(void * param_1);
undefined __fastcall FUN_1005f810(void * param_1);
undefined __cdecl FUN_10063ea0(int * param_1);
undefined __cdecl FUN_10063d30(int * param_1);

void __cdecl FUN_10005a60(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x28);
  FUN_1005f890(DAT_100ae114);
  FUN_1005f890(DAT_100ad4f8);
  FUN_1005f890(DAT_100ad504);
  FUN_1005f890(DAT_100ae10c);
  FUN_1005f810(DAT_100ad6d0);
  FUN_10063ea0(DAT_10082d08);
  DAT_10082d08 = piVar1;
  FUN_10063d30(piVar1);
  return;
}
