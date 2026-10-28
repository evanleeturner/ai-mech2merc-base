/* SPDX-License-Identifier: MIT */
/* mercsw 1002587d */
/* mercsw 1002587d: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

void __cdecl FUN_1002587d(LPVOID param_1)

{
  int local_8;
  
  if (param_1 != (LPVOID)0x0) {
    if (*(int *)((int)param_1 + 0x18) == 0) {
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        FUN_1002587d(*(LPVOID *)((int)param_1 + local_8 * 4 + 0x1c));
      }
    }
    HeapFree(DAT_100adf74,1,param_1);
  }
  return;
}
