/* SPDX-License-Identifier: MIT */
/* mw2shell 1005b710 */
/* mw2shell 1005b710: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef UINT WPARAM;
typedef struct tagPOINT { LONG x; LONG y; } tagPOINT;
typedef struct tagMSG { HWND hwnd; UINT message; UINT wParam; LONG lParam; DWORD time; tagPOINT pt; } tagMSG;
extern undefined4 DAT_100c40c0;
extern undefined4 DAT_100c40c4;
int __stdcall PeekMessageA(void *, HWND, UINT, UINT, UINT);
undefined __cdecl FUN_1005b760(UINT param_1, WPARAM param_2, uint param_3);

void __stdcall FUN_1005b710(void)

{
  BOOL BVar1;
  tagMSG local_1c;
  
  BVar1 = PeekMessageA(&local_1c,(HWND)0x0,0x100,0x108,1);
  if (BVar1 != 0) {
    FUN_1005b760(local_1c.message,local_1c.wParam,local_1c.lParam);
  }
  DAT_100c40c4 = 0;
  DAT_100c40c0 = 0;
  return;
}
