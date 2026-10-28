/* SPDX-License-Identifier: MIT */
/* mercsw 100718bd */
/* mercsw 100718bd: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
extern undefined4 DAT_100b9a18;
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

void __cdecl FUN_100718bd(undefined4 * param_1)

{
  if (param_1[1] != 0) {
    HeapFree(DAT_100adf74,1,(LPVOID)param_1[1]);
    param_1[1] = 0;
  }
  ((void (*)(undefined4))((**(code **)(DAT_100b9a18 + 0x18))))(*param_1);
  return;
}
