/* SPDX-License-Identifier: MIT */
/* mw2shell 1000e8f0 */
/* mw2shell 1000e8f0: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef UINT WPARAM;
extern undefined LAB_1000e7f0[];
extern undefined4 DAT_1008e3e4;
extern undefined4 DAT_1008e3e8;
extern undefined4 DAT_10098220;
extern undefined4 DAT_100a672c;
extern HWND DAT_100d08e8;
undefined __stdcall ApplyToAll32Slots(void);
int __cdecl FUN_1000f6d0(int param_1, undefined4 msg, undefined4 wParam, undefined4 param_4, uint param_5, uint param_6);
int __stdcall PostMessageA(HWND, UINT, UINT, LONG);
undefined __fastcall FUN_100133d0(int param_1);
undefined __cdecl FUN_10016b50(undefined4 param_1);

undefined4 __cdecl FUN_1000e8f0(undefined4 param_1, UINT msg, WPARAM wParam)

{
  int iVar1;
  
  ApplyToAll32Slots();
  iVar1 = FUN_1000f6d0(0,param_1,0,0,0x1000,0);
  if (iVar1 == -1) {
    PostMessageA(DAT_100d08e8,msg,wParam,0);
    return 0;
  }
  if (DAT_10098220 != 0) {
    FUN_100133d0(DAT_100a672c);
  }
  DAT_1008e3e4 = msg;
  DAT_1008e3e8 = wParam;
  FUN_10016b50((undefined4)(LAB_1000e7f0));
  return 1;
}
