/* SPDX-License-Identifier: MIT */
/* mercsw 1000ed10 */
/* mercsw 1000ed10: Ghidra's C, repaired by tools/ghidra_repair.py */
extern LPVOID DAT_100a7b5c;
extern undefined4 DAT_100a7b64;
extern HANDLE DAT_100adf74;
extern undefined4 DAT_100adf80;
extern undefined4 DAT_100b9a1c;
extern undefined4 DAT_101f52e0;
undefined __stdcall FUN_1003e1b7(void);
undefined __stdcall FUN_10035e10(void);
undefined4 __cdecl FUN_10058e74(int * param_1, undefined1 param_2);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);
undefined __stdcall FUN_10081cb8(void);

void __stdcall FUN_1000ed10(void)

{
  FUN_1003e1b7();
  FUN_10035e10();
  if ((DAT_100a7b5c != (LPVOID)0x0) && (DAT_101f52e0 != 0)) {
    FUN_10058e74((int *)(&DAT_101f52e0),0);
    if (DAT_100adf80 != 0) {
      (**(code **)(DAT_100b9a1c + 0x18))();
    }
  }
  if (DAT_100a7b5c != (LPVOID)0x0) {
    HeapFree(DAT_100adf74,1,DAT_100a7b5c);
  }
  DAT_100a7b64 = 0;
  FUN_10081cb8();
  return;
}
