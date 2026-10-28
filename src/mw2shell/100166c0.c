/* SPDX-License-Identifier: MIT */
/* mw2shell 100166c0 */
/* mw2shell 100166c0: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef void *HMENU;
extern HWND DAT_100d08e8;
int __stdcall EnableMenuItem(void *, UINT, UINT);
int __stdcall DrawMenuBar(HWND);

void __cdecl FUN_100166c0(HMENU param_1)

{
  EnableMenuItem(param_1,1,0x401);
  EnableMenuItem(param_1,0x9c41,1);
  EnableMenuItem(param_1,0x9c99,1);
  EnableMenuItem(param_1,0x9c97,1);
  EnableMenuItem(param_1,0x9c72,1);
  EnableMenuItem(param_1,0x9c94,1);
  EnableMenuItem(param_1,0x9c4b,1);
  EnableMenuItem(param_1,0x9c96,1);
  EnableMenuItem(param_1,0x9c9a,1);
  DrawMenuBar(DAT_100d08e8);
  return;
}
