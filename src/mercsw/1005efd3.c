/* SPDX-License-Identifier: MIT */
/* mercsw 1005efd3 */
/* mercsw 1005efd3: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct tagPOINT { LONG x; LONG y; } tagPOINT;
extern HWND DAT_100adf6c;
int __stdcall ClientToScreen(HWND, void *);

void __cdecl FUN_1005efd3(LONG * param_1, int param_2, int param_3)

{
  tagPOINT local_c;
  
  local_c.y = 0;
  local_c.x = 0;
  ClientToScreen(DAT_100adf6c,&local_c);
  *param_1 = local_c.x;
  param_1[1] = local_c.y;
  local_c.x = param_2 + -1;
  local_c.y = param_3 + -1;
  ClientToScreen(DAT_100adf6c,&local_c);
  param_1[2] = local_c.x;
  param_1[3] = local_c.y;
  return;
}
