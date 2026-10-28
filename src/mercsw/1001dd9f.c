/* SPDX-License-Identifier: MIT */
/* mercsw 1001dd9f */
/* mercsw 1001dd9f: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
extern undefined4 PTR_DAT_100af0f0;
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);
undefined __cdecl FUN_1008689c(uint param_1, int * param_2);

void __cdecl FUN_1001dd9f(int * param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      HeapFree(DAT_100adf74,1,*(LPVOID *)((int)param_1 + 0x17));
    }
    else {
      FUN_1008689c((int)(short)param_1[1],(int *)PTR_DAT_100af0f0);
    }
  }
  return;
}
