/* SPDX-License-Identifier: MIT */
/* mercsw 1001060a */
/* mercsw 1001060a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
extern undefined4 DAT_101686f0;
extern undefined DAT_101ec430[];
extern undefined4 PTR_DAT_100af0b4;
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

void __cdecl FUN_1001060a(int param_1)

{
  if (*(int *)(DAT_101ec430 + param_1 * 4) != 0) {
    if (*(int *)(*(int *)(DAT_101ec430 + param_1 * 4) + 0x18) != 0) {
      FUN_1008664f(*(int *)(*(int *)(DAT_101ec430 + param_1 * 4) + 0x14) + DAT_101686f0,
                   (int *)PTR_DAT_100af0b4);
    }
    HeapFree(DAT_100adf74,1,*(LPVOID *)(DAT_101ec430 + param_1 * 4));
    *(undefined4 *)(DAT_101ec430 + param_1 * 4) = 0;
  }
  return;
}
