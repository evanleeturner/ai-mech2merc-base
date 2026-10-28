/* SPDX-License-Identifier: MIT */
/* mw2shell 10012450 */
/* mw2shell 10012450: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_10098224;
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);
undefined __stdcall FUN_1005fb90(void);

void __fastcall FUN_10012450(int param_1)

{
  HeapFree(DAT_10098224,1,*(LPVOID *)(param_1 + 0x42));
  FUN_1005fb90();
  return;
}
