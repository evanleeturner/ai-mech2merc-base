/* SPDX-License-Identifier: MIT */
/* mercsw 1003289f */
/* mercsw 1003289f: Ghidra's C, repaired by tools/ghidra_repair.py */
extern LPVOID DAT_100ada90;
extern LPVOID DAT_100ada94;
extern HANDLE DAT_100adf74;
extern undefined DAT_10168410[];
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

void __stdcall FUN_1003289f(void)

{
  int local_8;
  
  if (DAT_100ada90 != (LPVOID)0x0) {
    HeapFree(DAT_100adf74,1,DAT_100ada90);
  }
  DAT_100ada90 = (LPVOID)0x0;
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    if (*(int *)(DAT_10168410 + local_8 * 4) != 0) {
      HeapFree(DAT_100adf74,1,*(LPVOID *)(DAT_10168410 + local_8 * 4));
    }
    *(undefined4 *)(DAT_10168410 + local_8 * 4) = 0;
  }
  if (DAT_100ada94 != (LPVOID)0x0) {
    HeapFree(DAT_100adf74,1,DAT_100ada94);
  }
  DAT_100ada94 = (LPVOID)0x0;
  return;
}
