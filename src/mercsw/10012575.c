/* SPDX-License-Identifier: MIT */
/* mercsw 10012575 */
/* mercsw 10012575: Ghidra's C, repaired by tools/ghidra_repair.py */
extern LPVOID DAT_100aa1dc;
extern LPVOID DAT_100aa1e8;
extern LPVOID DAT_100aa1ec;
extern undefined4 DAT_100aa1f0;
extern HANDLE DAT_100adf74;
extern LPVOID DAT_101eb4c0;
extern LPVOID DAT_101eb4c4;
int __stdcall FUN_10013faa(void);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

void __stdcall FUN_10012575(void)

{
  FUN_10013faa();
  if (DAT_100aa1f0 != 0) {
    if (DAT_100aa1dc != (LPVOID)0x0) {
      HeapFree(DAT_100adf74,1,DAT_100aa1dc);
    }
    if (DAT_100aa1e8 != (LPVOID)0x0) {
      HeapFree(DAT_100adf74,1,DAT_100aa1e8);
    }
    if (DAT_100aa1ec != (LPVOID)0x0) {
      HeapFree(DAT_100adf74,1,DAT_100aa1ec);
    }
    HeapFree(DAT_100adf74,1,DAT_101eb4c4);
    HeapFree(DAT_100adf74,1,DAT_101eb4c0);
  }
  return;
}
