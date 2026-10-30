/* SPDX-License-Identifier: MIT */
/* mercsw 1007069f */
/* mercsw 1007069f: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct tagPOINT { LONG x; LONG y; } tagPOINT;
typedef struct tagMSG { HWND hwnd; UINT message; UINT wParam; LONG lParam; DWORD time; tagPOINT pt; } tagMSG;
undefined4 __cdecl FUN_100701b9(undefined2 * param_1);
int __stdcall PeekMessageA(void *, HWND, UINT, UINT, UINT);
undefined __cdecl ProcessKeyboardMessages(uint param_1, UINT param_2, uint param_3);

short __stdcall FUN_1007069f(void)

{
  BOOL BVar1;
  tagMSG local_24;
  short local_8 [2];
  
  FUN_100701b9((undefined2 *)(local_8));
  if (local_8[0] == 0) {
    BVar1 = PeekMessageA(&local_24,(HWND)0x0,0x100,0x108,1);
    if (BVar1 != 0) {
      ProcessKeyboardMessages(local_24.message,local_24.wParam,local_24.lParam);
      FUN_100701b9((undefined2 *)(local_8));
    }
  }
  return local_8[0];
}
