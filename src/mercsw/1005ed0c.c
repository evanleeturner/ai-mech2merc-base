/* SPDX-License-Identifier: MIT */
/* mercsw 1005ed0c */
/* mercsw 1005ed0c: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct tagPOINT { LONG x; LONG y; } tagPOINT;
extern HWND DAT_100adf6c;
extern undefined4 DAT_100adf78;
extern undefined4 DAT_100adf7c;
extern undefined4 DAT_100adf80;
int __stdcall GetCursorPos(void *);
int __stdcall ScreenToClient(HWND, void *);
int __stdcall ClientToScreen(HWND, void *);
int __stdcall SetCursorPos(int, int);

undefined4 __cdecl FUN_1005ed0c(undefined4 param_1, int param_2)

{
  tagPOINT local_c;
  
  if (DAT_100adf80 != 0) {
    GetCursorPos(&local_c);
    ScreenToClient(DAT_100adf6c,&local_c);
    if (param_2 == 0) {
      local_c.y = DAT_100adf7c / 2;
    }
    else if (param_2 == 1) {
      local_c.x = DAT_100adf78 / 2;
    }
    ClientToScreen(DAT_100adf6c,&local_c);
    SetCursorPos(local_c.x,local_c.y);
  }
  return 0;
}
