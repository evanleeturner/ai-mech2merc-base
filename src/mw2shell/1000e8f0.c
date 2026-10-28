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
undefined __stdcall FUN_1000f360(void);
int __cdecl FUN_1000f6d0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, uint param_5, uint param_6);
int __stdcall PostMessageA(HWND, UINT, UINT, LONG);
undefined __fastcall FUN_100133d0(int param_1);
undefined __cdecl FUN_10016b50(undefined4 param_1);

undefined4 __cdecl FUN_1000e8f0(undefined4 param_1, UINT param_2, WPARAM param_3)

{
  int iVar1;
  
  FUN_1000f360();
  iVar1 = FUN_1000f6d0(0,param_1,0,0,0x1000,0);
  if (iVar1 == -1) {
    PostMessageA(DAT_100d08e8,param_2,param_3,0);
    return 0;
  }
  if (DAT_10098220 != 0) {
    FUN_100133d0(DAT_100a672c);
  }
  DAT_1008e3e4 = param_2;
  DAT_1008e3e8 = param_3;
  FUN_10016b50((undefined4)(LAB_1000e7f0));
  return 1;
}
