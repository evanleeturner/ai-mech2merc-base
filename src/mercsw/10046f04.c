/* SPDX-License-Identifier: MIT */
/* mercsw 10046f04 */
/* mercsw 10046f04: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

void __cdecl FUN_10046f04(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    HeapFree(DAT_100adf74,1,*(LPVOID *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}
