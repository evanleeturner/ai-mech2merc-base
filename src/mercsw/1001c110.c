/* SPDX-License-Identifier: MIT */
/* mercsw 1001c110 */
/* mercsw 1001c110: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);
undefined __cdecl FUN_1002587d(LPVOID param_1);

void __cdecl FUN_1001c110(int param_1)

{
  LPVOID lpMem;
  
  if ((param_1 != 0) && (lpMem = *(LPVOID *)(param_1 + 0x4c), lpMem != (LPVOID)0x0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      HeapFree(DAT_100adf74,1,lpMem);
    }
    else if (*(int *)(param_1 + 0x24) == 5) {
      FUN_1002587d(lpMem);
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return;
}
