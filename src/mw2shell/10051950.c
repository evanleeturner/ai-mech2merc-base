/* SPDX-License-Identifier: MIT */
/* mw2shell 10051950 */
/* mw2shell 10051950: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct tagPOINT { LONG x; LONG y; } tagPOINT;
extern HWND DAT_100d08e8;
int __stdcall ClientToScreen(HWND, void *);

void __cdecl FUN_10051950(LONG * param_1, int param_2, int param_3)

{
  tagPOINT local_8;
  
  local_8.y = 0;
  local_8.x = 0;
  ClientToScreen(DAT_100d08e8,&local_8);
  param_1[1] = local_8.y;
  *param_1 = local_8.x;
  local_8.x = param_2 + -1;
  local_8.y = param_3 + -1;
  ClientToScreen(DAT_100d08e8,&local_8);
  param_1[2] = local_8.x;
  param_1[3] = local_8.y;
  return;
}
