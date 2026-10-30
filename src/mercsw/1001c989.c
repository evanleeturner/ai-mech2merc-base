/* SPDX-License-Identifier: MIT */
/* mercsw 1001c989 */
/* mercsw 1001c989: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
undefined __cdecl FUN_1001c8a3(LPVOID mem);
undefined __cdecl FUN_1001c110(int mem);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

void __cdecl FUN_1001c989(LPVOID mem)

{
  LPVOID pvVar1;
  undefined4 local_8;
  
  local_8 = (undefined4)(*(LPVOID *)((int)mem + 0x1c));
  while ((LPVOID)(local_8) != (LPVOID)0x0) {
    pvVar1 = *(LPVOID *)((int)local_8 + 0xc);
    FUN_1001c8a3((LPVOID)(local_8));
    local_8 = (undefined4)(pvVar1);
  }
  FUN_1001c110((int)mem);
  HeapFree(DAT_100adf74,1,mem);
  return;
}
