/* SPDX-License-Identifier: MIT */
/* mw2shell 100164f0 */
/* mw2shell 100164f0: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct tagPOINT { LONG x; LONG y; } tagPOINT;
typedef struct tagMSG { HWND hwnd; UINT message; UINT wParam; LONG lParam; DWORD time; tagPOINT pt; } tagMSG;
extern undefined4 DAT_10098204;
int __stdcall WaitMessage(void);
int __stdcall PeekMessageA(void *, HWND, UINT, UINT, UINT);
void __stdcall PostQuitMessage(int);
int __stdcall TranslateMessage(const void *);
LONG __stdcall DispatchMessageA(const void *);

undefined4 __stdcall FUN_100164f0(void)

{
  BOOL BVar1;
  undefined4 uVar2;
  tagMSG local_1c;
  
  if (DAT_10098204 == 0) {
    WaitMessage();
  }
  BVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
  if (BVar1 != 0) {
    if (local_1c.message == 0x12) {
      PostQuitMessage(local_1c.wParam);
      return 0;
    }
    uVar2 = 1;
    TranslateMessage(&local_1c);
    if ((local_1c.message == 0x111) &&
       (((local_1c.wParam == 0x9c41 || (local_1c.wParam == 0x9c97)) || (local_1c.wParam == 0x9c43)))
       ) {
      uVar2 = 0;
    }
    DispatchMessageA(&local_1c);
    return uVar2;
  }
  return 1;
}
