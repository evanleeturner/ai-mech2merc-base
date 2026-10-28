/* SPDX-License-Identifier: MIT */
/* mercsw 1004839c */
/* mercsw 1004839c: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
extern undefined4 DAT_10160bdc;
extern undefined4 DAT_10160be0;
undefined __cdecl FUN_10048832(int param_1);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

void __stdcall FUN_1004839c(void)

{
  LPVOID pvVar1;
  undefined4 local_c;
  
  local_c = DAT_10160be0;
  while ((LPVOID)(local_c) != (LPVOID)0x0) {
    FUN_10048832((int)local_c);
    pvVar1 = *(LPVOID *)((int)local_c + 0x14);
    HeapFree(DAT_100adf74,1,(LPVOID)(local_c));
    local_c = (undefined4)(pvVar1);
  }
  DAT_10160be0 = (undefined4)((LPVOID)0x0);
  DAT_10160bdc = 0;
  return;
}
