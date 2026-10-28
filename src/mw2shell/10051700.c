/* SPDX-License-Identifier: MIT */
/* mw2shell 10051700 */
/* mw2shell 10051700: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct tagPOINT { LONG x; LONG y; } tagPOINT;
extern undefined4 DAT_10098204;
extern undefined4 DAT_100d08d4;
extern undefined4 DAT_100d08d8;
extern HWND DAT_100d08e8;
int __stdcall GetCursorPos(void *);
int __stdcall ScreenToClient(HWND, void *);
int __stdcall ClientToScreen(HWND, void *);
int __stdcall SetCursorPos(int, int);

undefined4 __cdecl FUN_10051700(undefined4 param_1, int param_2)

{
  tagPOINT local_8;
  
  if (DAT_10098204 != 0) {
    GetCursorPos(&local_8);
    ScreenToClient(DAT_100d08e8,&local_8);
    if (param_2 == 0) {
      local_8.y = DAT_100d08d4 / 2;
    }
    else if (param_2 == 1) {
      local_8.x = DAT_100d08d8 / 2;
    }
    ClientToScreen(DAT_100d08e8,&local_8);
    SetCursorPos(local_8.x,local_8.y);
  }
  return 0;
}
