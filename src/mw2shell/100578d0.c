/* SPDX-License-Identifier: MIT */
/* mw2shell 100578d0 */
/* mw2shell 100578d0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_10098224;
extern undefined4 DAT_100a3660;
extern LPVOID g_entries100a3664_Likely;
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);
LPVOID __stdcall HeapReAlloc(HANDLE, DWORD, LPVOID, DWORD);

int __stdcall GrowRecordArray_Likely(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (g_entries100a3664_Likely == (LPVOID)0x0) {
    g_entries100a3664_Likely = HeapAlloc(DAT_10098224,1,6000);
  }
  else {
    g_entries100a3664_Likely = HeapReAlloc(DAT_10098224,1,g_entries100a3664_Likely,(DAT_100a3660 * 8 + 400) * 0xf);
  }
  if (g_entries100a3664_Likely == (LPVOID)0x0) {
    return 0;
  }
  iVar2 = DAT_100a3660 + 0x32;
  puVar3 = (undefined4 *)(DAT_100a3660 * 0x78 + (int)g_entries100a3664_Likely);
  for (iVar1 = 0x5dc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_100a3660 = iVar2;
  return iVar2;
}
