/* SPDX-License-Identifier: MIT */
/* mercsw 10070219 */
/* mercsw 10070219: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct tagPOINT { LONG x; LONG y; } tagPOINT;
typedef struct tagMSG { HWND hwnd; UINT message; UINT wParam; LONG lParam; DWORD time; tagPOINT pt; } tagMSG;
extern undefined4 DAT_100c7fd8;
extern undefined4 DAT_100c7fdc;
int __stdcall PeekMessageA(void *, HWND, UINT, UINT, UINT);
undefined __cdecl ProcessKeyboardMessages(uint param_1, UINT param_2, uint param_3);

undefined4 __stdcall FUN_10070219(void)

{
  BOOL BVar1;
  tagMSG local_20;
  
  BVar1 = PeekMessageA(&local_20,(HWND)0x0,0x100,0x108,1);
  if (BVar1 != 0) {
    ProcessKeyboardMessages(local_20.message,local_20.wParam,local_20.lParam);
  }
  DAT_100c7fdc = 0;
  DAT_100c7fd8 = 0;
  return 0;
}
