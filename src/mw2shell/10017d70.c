/* SPDX-License-Identifier: MIT */
/* mw2shell 10017d70 */
/* mw2shell 10017d70: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_10098224;
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

undefined4 __cdecl FUN_10017d70(int * param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = 0;
    if (0 < *param_1) {
      do {
        iVar1 = FUN_10018060((int)param_1,iVar2);
        if ((iVar1 != 0) && (*(code **)((int)param_1 + 0x15) != (code *)0x0)) {
          ((void (*)(int))((**(code **)((int)param_1 + 0x15))))(iVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    if (*(LPVOID *)((int)param_1 + 0x11) != (LPVOID)0x0) {
      HeapFree(DAT_10098224,1,*(LPVOID *)((int)param_1 + 0x11));
      *(undefined4 *)((int)param_1 + 0x11) = 0;
    }
    if (param_1 != (int *)0x0) {
      HeapFree(DAT_10098224,1,param_1);
    }
    return 0;
  }
  return 0;
}
