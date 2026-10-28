/* SPDX-License-Identifier: MIT */
/* mercsw 10037cb1 */
/* mercsw 10037cb1: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct tagPOINT { LONG x; LONG y; } tagPOINT;
typedef struct tagMSG { HWND hwnd; UINT message; UINT wParam; LONG lParam; DWORD time; tagPOINT pt; } tagMSG;
extern undefined4 DAT_100adf28;
extern undefined4 DAT_100adf80;
extern undefined4 DAT_100adf94;
int __stdcall WaitMessage(void);
int __stdcall PeekMessageA(void *, HWND, UINT, UINT, UINT);
int __stdcall TranslateMessage(const void *);
LONG __stdcall DispatchMessageA(const void *);

void __stdcall FUN_10037cb1(void)

{
  BOOL BVar1;
  tagMSG local_20;
  
  if (DAT_100adf80 == 0) {
    WaitMessage();
  }
  if (DAT_100adf28 == 0) {
    BVar1 = PeekMessageA(&local_20,(HWND)0x0,0,0,1);
    if (BVar1 != 0) {
      while (((DAT_100adf94 == 0 && (0x1ff < local_20.message)) && (local_20.message < 0x20a))) {
        PeekMessageA(&local_20,(HWND)0x0,0,0,1);
      }
      if ((local_20.hwnd == (HWND)0x0) || (local_20.message != 0x12)) {
        TranslateMessage(&local_20);
        DispatchMessageA(&local_20);
      }
      else {
        DAT_100adf28 = 1;
      }
    }
  }
  return;
}
