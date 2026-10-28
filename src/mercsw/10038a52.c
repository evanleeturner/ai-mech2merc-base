/* SPDX-License-Identifier: MIT */
/* mercsw 10038a52 */
/* mercsw 10038a52: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

undefined4 __cdecl FUN_10038a52(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x60) != 0) {
      HeapFree(DAT_100adf74,1,*(LPVOID *)(param_1 + 0x60));
    }
    if (*(int *)(param_1 + 100) != 0) {
      HeapFree(DAT_100adf74,1,*(LPVOID *)(param_1 + 100));
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      if (**(int **)(param_1 + 0x68) != 0) {
        HeapFree(DAT_100adf74,1,(LPVOID)**(undefined4 **)(param_1 + 0x68));
      }
      HeapFree(DAT_100adf74,1,*(LPVOID *)(param_1 + 0x68));
    }
    if (*(int *)(param_1 + 0x6c) != 0) {
      if (**(int **)(param_1 + 0x6c) != 0) {
        HeapFree(DAT_100adf74,1,(LPVOID)**(undefined4 **)(param_1 + 0x6c));
      }
      HeapFree(DAT_100adf74,1,*(LPVOID *)(param_1 + 0x6c));
    }
    if (*(int *)(param_1 + 0x70) != 0) {
      HeapFree(DAT_100adf74,1,*(LPVOID *)(param_1 + 0x70));
    }
  }
  return 0;
}
