/* SPDX-License-Identifier: MIT */
/* mw2shell 10016620 */
/* mw2shell 10016620: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef void *HMENU;
extern undefined4 DAT_1009820c;
extern HWND DAT_100d08e8;
int __stdcall EnableMenuItem(void *, UINT, UINT);
DWORD __stdcall CheckMenuItem(void *, UINT, UINT);
int __stdcall DrawMenuBar(HWND);

void __cdecl FUN_10016620(HMENU param_1)

{
  EnableMenuItem(param_1,1,0x400);
  EnableMenuItem(param_1,0x9c41,0);
  EnableMenuItem(param_1,0x9c99,0);
  EnableMenuItem(param_1,0x9c97,0);
  EnableMenuItem(param_1,0x9c72,0);
  CheckMenuItem(param_1,0x9c72,(DAT_1009820c == 0) - 1 & 8);
  EnableMenuItem(param_1,0x9c94,0);
  EnableMenuItem(param_1,0x9c4b,0);
  EnableMenuItem(param_1,0x9c96,0);
  EnableMenuItem(param_1,0x9c9a,0);
  DrawMenuBar(DAT_100d08e8);
  return;
}
