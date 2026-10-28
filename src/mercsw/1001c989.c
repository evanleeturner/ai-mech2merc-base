/* SPDX-License-Identifier: MIT */
/* mercsw 1001c989 */
/* mercsw 1001c989: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
undefined __cdecl FUN_1001c8a3(LPVOID param_1);
undefined __cdecl FUN_1001c110(int param_1);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

void __cdecl FUN_1001c989(LPVOID param_1)

{
  LPVOID pvVar1;
  undefined4 local_8;
  
  local_8 = (undefined4)(*(LPVOID *)((int)param_1 + 0x1c));
  while ((LPVOID)(local_8) != (LPVOID)0x0) {
    pvVar1 = *(LPVOID *)((int)local_8 + 0xc);
    FUN_1001c8a3((LPVOID)(local_8));
    local_8 = (undefined4)(pvVar1);
  }
  FUN_1001c110((int)param_1);
  HeapFree(DAT_100adf74,1,param_1);
  return;
}
