/* SPDX-License-Identifier: MIT */
/* mw2shell 1005ba70 */
/* mw2shell 1005ba70: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef UINT WPARAM;
typedef struct tagPOINT { LONG x; LONG y; } tagPOINT;
typedef struct tagMSG { HWND hwnd; UINT message; UINT wParam; LONG lParam; DWORD time; tagPOINT pt; } tagMSG;
undefined4 __cdecl FUN_1005b6c0(undefined2 * param_1);
int __stdcall PeekMessageA(void *, HWND, UINT, UINT, UINT);
undefined __cdecl FUN_1005b760(UINT param_1, WPARAM param_2, uint param_3);

short __stdcall FUN_1005ba70(void)

{
  BOOL BVar1;
  short local_1e;
  tagMSG local_1c;
  
  FUN_1005b6c0((undefined2 *)(&local_1e));
  if (local_1e == 0) {
    BVar1 = PeekMessageA(&local_1c,(HWND)0x0,0x100,0x108,1);
    if (BVar1 != 0) {
      FUN_1005b760(local_1c.message,local_1c.wParam,local_1c.lParam);
      FUN_1005b6c0((undefined2 *)(&local_1e));
    }
  }
  return local_1e;
}
