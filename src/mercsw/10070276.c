/* SPDX-License-Identifier: MIT */
/* mercsw 10070276 */
/* mercsw 10070276: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct tagPOINT { LONG x; LONG y; } tagPOINT;
typedef struct tagMSG { HWND hwnd; UINT message; UINT wParam; LONG lParam; DWORD time; tagPOINT pt; } tagMSG;
undefined __cdecl FUN_100704a0(undefined4 param_1, uint param_2, int param_3);
undefined __cdecl FUN_10070381(UINT param_1);
LONG __stdcall DefWindowProcA(HWND, UINT, UINT, LONG);
int __stdcall PeekMessageA(void *, HWND, UINT, UINT, UINT);
int __stdcall TranslateMessage(const void *);

void __cdecl FUN_10070276(uint param_1, UINT param_2, uint param_3)

{
  BOOL BVar1;
  tagMSG local_24;
  int local_8;
  
  local_8 = 0;
  do {
    switch(param_1) {
    case 0x100:
    case 0x104:
      FUN_100704a0(param_2,param_3,1);
      break;
    case 0x101:
    case 0x105:
      FUN_10070381(param_2);
      FUN_100704a0(param_2,param_3,0);
    }
    if (0x103 < param_1) {
      DefWindowProcA(local_24.hwnd,local_24.message,local_24.wParam,local_24.lParam);
    }
    BVar1 = PeekMessageA(&local_24,(HWND)0x0,0x100,0x108,1);
    if (BVar1 == 0) {
      local_8 = 1;
    }
    else {
      TranslateMessage(&local_24);
      param_1 = local_24.message;
      param_2 = local_24.wParam;
      param_3 = local_24.lParam;
    }
  } while (local_8 == 0);
  return;
}
