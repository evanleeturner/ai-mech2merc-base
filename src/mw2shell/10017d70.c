/* SPDX-License-Identifier: MIT */
/* mw2shell 10017d70 */
/* mw2shell 10017d70: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_10098224;
undefined4 __cdecl FUN_10018060(int mem, int param_2);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

undefined4 __cdecl FUN_10017d70(int * mem)

{
  int iVar1;
  int iVar2;
  
  if (mem != (int *)0x0) {
    iVar2 = 0;
    if (0 < *mem) {
      do {
        iVar1 = FUN_10018060((int)mem,iVar2);
        if ((iVar1 != 0) && (*(code **)((int)mem + 0x15) != (code *)0x0)) {
          ((void (*)(int))((**(code **)((int)mem + 0x15))))(iVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *mem);
    }
    if (*(LPVOID *)((int)mem + 0x11) != (LPVOID)0x0) {
      HeapFree(DAT_10098224,1,*(LPVOID *)((int)mem + 0x11));
      *(undefined4 *)((int)mem + 0x11) = 0;
    }
    if (mem != (int *)0x0) {
      HeapFree(DAT_10098224,1,mem);
    }
    return 0;
  }
  return 0;
}
