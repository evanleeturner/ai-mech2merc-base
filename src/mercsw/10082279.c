/* SPDX-License-Identifier: MIT */
/* mercsw 10082279 */
/* mercsw 10082279: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HWND DAT_100adf6c;
extern undefined4 DAT_100adf88;
extern undefined4 DAT_100adf90;
extern int * DAT_100b9a18;
extern undefined4 DAT_100b9d4c;
extern undefined4 DAT_100c9240;
extern undefined4 DAT_100c9244;
extern undefined4 DAT_100c9248;
extern undefined4 DAT_100c924c;
extern int DAT_100c967c;
extern int DAT_100c9680;
extern undefined4 DAT_1016584c;
extern undefined4 DAT_1016593c;
LONG __stdcall SetWindowLongA(HWND, int, LONG);
DWORD __stdcall timeGetTime(void);
int __stdcall SetWindowPos(HWND, HWND, int, int, int, int, UINT);
int __cdecl FUN_100498c5(int param_1);
int __stdcall ShowCursor(int);
int __stdcall GetSystemMetrics(int);

void __cdecl FUN_10082279(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) == 2) {
      SetWindowLongA(DAT_100adf6c,-0x10,*(uint *)(param_1 + 8) | 0x10000000);
    }
    else {
      SetWindowLongA(DAT_100adf6c,-0x10,(*(uint *)(param_1 + 8) & 0xfff7ffff) | 0x10000000);
    }
    if (*(int *)(param_1 + 4) == 2) {
      if ((DAT_100b9a18 != (int *)0x0) && (*DAT_100b9a18 == 0)) {
        DAT_1016584c = timeGetTime();
        DAT_1016593c = DAT_1016584c + 3000;
        DAT_100adf90 = 1;
      }
      SetWindowPos(DAT_100adf6c,(HWND)0xfffffffe,DAT_100c9240,DAT_100c9244,DAT_100c9248,DAT_100c924c
                   ,0x10);
      if ((DAT_100adf88 != 0) && (iVar1 = FUN_100498c5(4), iVar1 == 0)) {
        do {
          iVar1 = ShowCursor(1);
        } while (iVar1 < 0);
      }
    }
    else if (DAT_100adf88 != 0) {
      do {
        iVar1 = ShowCursor(0);
      } while (-1 < iVar1);
    }
    iVar1 = GetSystemMetrics(0);
    if ((DAT_100c967c < iVar1) || (iVar1 = GetSystemMetrics(1), DAT_100c9680 < iVar1)) {
      DAT_100b9d4c = *(undefined4 *)(param_1 + 4);
    }
    else {
      DAT_100b9d4c = 1;
    }
  }
  return;
}
