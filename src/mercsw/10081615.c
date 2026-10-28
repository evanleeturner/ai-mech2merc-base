/* SPDX-License-Identifier: MIT */
/* mercsw 10081615 */
/* mercsw 10081615: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
extern int DAT_100b98a0;
extern undefined4 DAT_100b98a4;
extern undefined4 DAT_100c8240[];
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

void __stdcall FUN_10081615(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < DAT_100b98a0; local_8 = local_8 + 1) {
    HeapFree(DAT_100adf74,1,(LPVOID)DAT_100c8240[local_8 * 3]);
    DAT_100c8240[local_8 * 3] = 0;
  }
  DAT_100b98a0 = 0;
  DAT_100b98a4 = 0;
  return;
}
