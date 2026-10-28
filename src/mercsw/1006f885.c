/* SPDX-License-Identifier: MIT */
/* mercsw 1006f885 */
/* mercsw 1006f885: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef LONG LPARAM;
typedef LONG LRESULT;
extern HWND DAT_100b3de0;
extern undefined4 * DAT_100b9a2c;
extern undefined4 DAT_100b9d30;
extern undefined4 DAT_100c9678;
extern undefined4 DAT_100eee30;
extern char s_DisplayDibWindowDraw_err___hd_100b3f7c[];
LONG __stdcall SendMessageA(HWND, UINT, UINT, LONG);
undefined __cdecl FUN_10002168(char * param_1);

LRESULT __stdcall FUN_1006f885(void)

{
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  (void)local_c;
  (void)local_8;
  local_10 = 0x2400401;
  if (DAT_100b9d30 == 0) {
    local_c = 0;
  }
  else {
    local_c = DAT_100c9678;
  }
  local_8 = DAT_100b9d30;
  DAT_100eee30 = SendMessageA(DAT_100b3de0,0x4a,0,(LPARAM)&local_10);
  if (DAT_100eee30 != 0) {
    FUN_10002168(s_DisplayDibWindowDraw_err___hd_100b3f7c);
  }
  *DAT_100b9a2c = 0;
  return DAT_100eee30;
}
