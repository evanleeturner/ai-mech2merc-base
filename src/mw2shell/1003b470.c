/* SPDX-License-Identifier: MIT */
/* mw2shell 1003b470 */
/* mw2shell 1003b470: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_10098224;
undefined __fastcall FUN_1003b520(int param_1);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);
undefined __fastcall FUN_10010de0(int * param_1);

void __fastcall FUN_1003b470(undefined4 * param_1)

{
  FUN_1003b520((int)param_1);
  if ((LPVOID)*param_1 != (LPVOID)0x0) {
    HeapFree(DAT_10098224,1,(LPVOID)*param_1);
    *param_1 = 0;
  }
  if ((int *)param_1[0xd6] != (int *)0x0) {
    FUN_10010de0((int *)param_1[0xd6]);
  }
  return;
}
