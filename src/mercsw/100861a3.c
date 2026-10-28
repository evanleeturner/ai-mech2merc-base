/* SPDX-License-Identifier: MIT */
/* mercsw 100861a3 */
/* mercsw 100861a3: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
extern LPVOID DAT_100ba7bc;
extern undefined4 DAT_100c9050;
extern undefined4 DAT_100c9054;
extern undefined4 DAT_100c9058;
undefined __cdecl FUN_10086336(ushort * param_1);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

void __stdcall FUN_100861a3(void)

{
  ushort *puVar1;
  int local_c;
  ushort *local_8;
  
  if (DAT_100ba7bc != (LPVOID)0x0) {
    for (local_c = 0; local_c < 0x3f1; local_c = local_c + 1) {
      local_8 = *(ushort **)((int)DAT_100ba7bc + local_c * 4);
      while (local_8 != (ushort *)0x0) {
        puVar1 = *(ushort **)(local_8 + 4);
        FUN_10086336(local_8);
        local_8 = puVar1;
      }
    }
    DAT_100c9050 = 0;
    DAT_100c9054 = 0;
    DAT_100c9058 = 0;
    HeapFree(DAT_100adf74,1,DAT_100ba7bc);
  }
  return;
}
