/* SPDX-License-Identifier: MIT */
/* mw2shell 10016c20 */
/* mw2shell 10016c20: Ghidra's C, repaired by tools/ghidra_repair.py */
extern code * DAT_1008edf4;
extern undefined4 DAT_1008edf8;
extern code * DAT_1008edfc;
extern void * DAT_1008ee00;
extern int * DAT_100a6730;
extern undefined4 DAT_100a6734;
extern undefined DAT_100b0f44[];
extern undefined4 DAT_100b0f4c;
extern undefined DAT_100b0f50[];
undefined __stdcall FUN_1000ee30(void);
bool __fastcall FUN_1005f850(void * param_1);
undefined __stdcall FUN_10016bd0(void);
undefined __fastcall FUN_1005edd0(int * param_1);

void __stdcall FUN_10016c20(void)

{
  bool bVar1;
  
  if (DAT_1008edfc != (code *)0x0) {
    ((void (*)(int))((*DAT_1008edfc)))(1);
    return;
  }
  if (DAT_1008edf4 != (code *)0x0) {
    ((void (*)(undefined4, undefined *, undefined *, undefined4))((*DAT_1008edf4)))(DAT_100a6734,DAT_100b0f50,DAT_100b0f44,DAT_100b0f4c);
    FUN_1000ee30();
    return;
  }
  if (DAT_1008edf8 == 0) {
    return;
  }
  bVar1 = FUN_1005f850(DAT_1008ee00);
  if (!bVar1) {
    FUN_10016bd0();
    return;
  }
  FUN_1005edd0(DAT_100a6730);
  return;
}
