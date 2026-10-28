/* SPDX-License-Identifier: MIT */
/* mercsw 1005ed99 */
/* mercsw 1005ed99: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
typedef short SHORT;
typedef struct tagPOINT { LONG x; LONG y; } tagPOINT;
typedef struct RECT RECT;
extern HWND DAT_100adf6c;
extern undefined4 DAT_100adf78;
extern undefined4 DAT_100adf7c;
extern undefined4 DAT_100adf80;
extern undefined4 DAT_100b34d4;
extern undefined4 DAT_100b34d8;
extern undefined DAT_10114d90[];
undefined __cdecl FUN_1005efd3(LONG * param_1, int param_2, int param_3);
int __stdcall ClipCursor(const void *);
undefined4 __cdecl FUN_1005ed0c(undefined4 param_1, int param_2);
short __stdcall GetAsyncKeyState(int);
int __stdcall GetCursorPos(void *);
int __stdcall ScreenToClient(HWND, void *);

undefined4 __cdecl FUN_1005ed99(undefined4 param_1, int * param_2, uint * param_3)

{
  bool bVar1;
  SHORT SVar2;
  BOOL BVar3;
  ushort local_18;
  ushort local_14;
  tagPOINT local_10;
  ushort local_8;
  
  if (DAT_100adf80 == 0) {
    if (DAT_100b34d4 != 0) {
      ClipCursor((RECT *)0x0);
      DAT_100b34d4 = 0;
    }
    *param_3 = 0;
  }
  else {
    if ((DAT_100b34d4 == 0) || (DAT_100b34d8 != 0)) {
      FUN_1005efd3((LONG *)DAT_10114d90,DAT_100adf78,DAT_100adf7c);
      ClipCursor((RECT *)DAT_10114d90);
      FUN_1005ed0c(param_1,0);
      FUN_1005ed0c(param_1,1);
      DAT_100b34d4 = 1;
      DAT_100b34d8 = 0;
    }
    if (param_3 != (uint *)0x0) {
      SVar2 = GetAsyncKeyState(1);
      local_18 = (ushort)(((int)SVar2 & 0x8000U) != 0);
      SVar2 = GetAsyncKeyState(2);
      local_8 = (ushort)(((int)SVar2 & 0x8000U) != 0);
      SVar2 = GetAsyncKeyState(4);
      local_14 = (ushort)(((int)SVar2 & 0x8000U) != 0);
      *param_3 = (int)((unsigned int)((int)(short)local_8) << (2)) | (short)local_14 * 2 | (int)(short)local_18;
    }
    if ((param_2 != (int *)0x0) && (BVar3 = GetCursorPos(&local_10), BVar3 != 0)) {
      ScreenToClient(DAT_100adf6c,&local_10);
      if ((local_10.x < 0) || ((int)DAT_100adf78 <= local_10.x)) {
        bVar1 = false;
      }
      else if ((local_10.y < 0) || ((int)DAT_100adf7c <= local_10.y)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *param_2 = ((local_10.y * 2 - DAT_100adf7c) * 0x10000) / DAT_100adf7c;
        param_2[1] = ((local_10.x * 2 - DAT_100adf78) * 0x10000) / DAT_100adf78;
      }
    }
  }
  return 0;
}
