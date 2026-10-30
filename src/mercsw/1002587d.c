/* SPDX-License-Identifier: MIT */
/* mercsw 1002587d */
/* mercsw 1002587d: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

void __cdecl FUN_1002587d(LPVOID mem)

{
  int local_8;
  
  if (mem != (LPVOID)0x0) {
    if (*(int *)((int)mem + 0x18) == 0) {
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        FUN_1002587d(*(LPVOID *)((int)mem + local_8 * 4 + 0x1c));
      }
    }
    HeapFree(DAT_100adf74,1,mem);
  }
  return;
}
