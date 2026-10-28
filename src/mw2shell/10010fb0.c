/* SPDX-License-Identifier: MIT */
/* mw2shell 10010fb0 */
/* mw2shell 10010fb0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_10098224;
undefined4 __stdcall _AIL_end_sample_4(undefined4);
undefined4 __stdcall _AIL_release_sample_handle_4(undefined4);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

void __fastcall FUN_10010fb0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    _AIL_end_sample_4(*(int *)(param_1 + 4));
    _AIL_release_sample_handle_4(*(undefined4 *)(param_1 + 4));
    if (*(LPVOID *)(param_1 + 8) != (LPVOID)0x0) {
      HeapFree(DAT_10098224,1,*(LPVOID *)(param_1 + 8));
    }
    if (*(LPVOID *)(param_1 + 0xc) != (LPVOID)0x0) {
      HeapFree(DAT_10098224,1,*(LPVOID *)(param_1 + 0xc));
    }
  }
  return;
}
