/* SPDX-License-Identifier: MIT */
/* mw2shell 10010c80 */
/* mw2shell 10010c80: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_10098224;
undefined __thiscall FUN_100108b0(void * this, int param_1);
undefined __fastcall FUN_10010de0(int * param_1);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);
undefined4 __stdcall _AIL_release_sample_handle_4(undefined4);

void __fastcall FUN_10010c80(int * param_1)

{
  FUN_100108b0((void *)*param_1,(int)param_1);
  if (*(int *)((int)param_1 + 0x29) != 0) {
    FUN_10010de0(param_1);
    if ((LPVOID)param_1[1] != (LPVOID)0x0) {
      HeapFree(DAT_10098224,1,(LPVOID)param_1[1]);
      param_1[1] = 0;
    }
    _AIL_release_sample_handle_4(*(undefined4 *)((int)param_1 + 0x29));
  }
  return;
}
