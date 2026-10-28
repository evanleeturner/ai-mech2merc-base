/* SPDX-License-Identifier: MIT */
/* mercsw 10007c2b */
/* mercsw 10007c2b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3c50;
extern undefined DAT_100b3c58;
uint __cdecl FUN_10002ba7(int param_1, undefined4 param_2, uint param_3, LPVOID param_4, int param_5, int param_6, undefined4 param_7, undefined4 param_8, int param_9, ushort param_10);

void __stdcall FUN_10007c2b(void)

{
  if ((DAT_100b3c58 & 2) == 0) {
    FUN_10002ba7(0,0,0x4f,(LPVOID)0x0,100,0x10000,0x40,0x2b11,-1,0x250);
  }
  else {
    FUN_10002ba7(0,0,0x31,(LPVOID)0x0,100,DAT_100b3c50,0x40,0x2b11,-1,0x250);
  }
  return;
}
