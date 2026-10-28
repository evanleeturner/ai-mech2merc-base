/* SPDX-License-Identifier: MIT */
/* mercsw 1001c5d1 */
/* mercsw 1001c5d1: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ab0c0;
extern HANDLE DAT_100adf74;
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);
int * __cdecl FUN_1001c303(int param_1, int param_2, int param_3, int param_4, int param_5, undefined4 * param_6);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

ushort * __cdecl FUN_1001c5d1(int param_1, int param_2, int param_3, undefined4 * param_4)

{
  ushort *lpMem;
  int *piVar1;
  
  lpMem = HeapAlloc(DAT_100adf74,1,0x54);
  if (lpMem == (ushort *)0x0) {
    lpMem = (ushort *)0x0;
  }
  else {
    *lpMem = (ushort)DAT_100ab0c0 | 0x8000;
    lpMem[0xc] = 0;
    lpMem[0xd] = 0;
    lpMem[0xe] = 0;
    lpMem[0xf] = 0;
    *(undefined4 *)(lpMem + 0x10) = *(undefined4 *)(lpMem + 0xe);
    piVar1 = FUN_1001c303((int)lpMem,0,param_1,param_2,param_3,param_4);
    if (piVar1 == (int *)0x0) {
      HeapFree(DAT_100adf74,1,lpMem);
      lpMem = (ushort *)0x0;
    }
    else {
      lpMem[1] = 0;
      lpMem[0xb] = 0;
      lpMem[10] = 0;
      lpMem[0x1e] = 0;
      lpMem[0x1f] = 0;
      *(undefined4 *)(lpMem + 0x1c) = *(undefined4 *)(lpMem + 0x1e);
      *(undefined4 *)(lpMem + 0x1a) = *(undefined4 *)(lpMem + 0x1c);
      lpMem[0x18] = 0;
      lpMem[0x19] = 0;
      *(undefined4 *)(lpMem + 0x16) = *(undefined4 *)(lpMem + 0x18);
      *(undefined4 *)(lpMem + 0x14) = *(undefined4 *)(lpMem + 0x16);
      lpMem[0x20] = 0;
      lpMem[0x21] = 0;
      lpMem[0x26] = 0;
      lpMem[0x27] = 0;
      lpMem[4] = 0;
      lpMem[5] = 0;
      *(undefined4 *)(lpMem + 2) = *(undefined4 *)(lpMem + 4);
      lpMem[8] = 0;
      lpMem[9] = 0;
      *(undefined4 *)(lpMem + 6) = *(undefined4 *)(lpMem + 8);
      lpMem[0x12] = 4;
      lpMem[0x13] = 0;
      lpMem[0x28] = 0;
      lpMem[0x29] = 0;
    }
  }
  return lpMem;
}
