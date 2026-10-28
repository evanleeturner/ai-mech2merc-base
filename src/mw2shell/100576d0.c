/* SPDX-License-Identifier: MIT */
/* mw2shell 100576d0 */
/* mw2shell 100576d0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_10098224;
extern int DAT_100a365c;
extern undefined4 DAT_100a3660;
extern LPVOID DAT_100a3664;
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

void __stdcall FUN_100576d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_100a365c) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)((int)DAT_100a3664 + iVar2);
      if (iVar1 != 0) {
        ((void (*)(int))((**(code **)(iVar1 + 0xc))))(((int *)((int)DAT_100a3664 + iVar2))[0x1d]);
      }
      iVar2 = iVar2 + 0x78;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_100a365c);
  }
  if (DAT_100a3664 != (LPVOID)0x0) {
    HeapFree(DAT_10098224,1,DAT_100a3664);
  }
  DAT_100a3664 = (LPVOID)0x0;
  DAT_100a365c = 0;
  DAT_100a3660 = 0;
  return;
}
