/* SPDX-License-Identifier: MIT */
/* mw2shell 10040680 */
/* mw2shell 10040680: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_10098224;
undefined __fastcall FUN_10040640(int param_1);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

void __fastcall FUN_10040680(int param_1)

{
  FUN_10040640(param_1);
  if (*(LPVOID *)(param_1 + 0x19) != (LPVOID)0x0) {
    HeapFree(DAT_10098224,1,*(LPVOID *)(param_1 + 0x19));
    *(undefined4 *)(param_1 + 0x19) = 0;
  }
  return;
}
