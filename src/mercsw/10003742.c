/* SPDX-License-Identifier: MIT */
/* mercsw 10003742 */
/* mercsw 10003742: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100a40d0[];
extern undefined4 DAT_100b3c4c;
uint __cdecl FUN_10002ba7(int param_1, undefined4 param_2, uint param_3, LPVOID param_4, int param_5, int param_6, undefined4 param_7, undefined4 param_8, int param_9, ushort param_10);

void __cdecl FUN_10003742(uint param_1, int param_2, undefined4 param_3, int param_4, ushort param_5)

{
  FUN_10002ba7(0,0,param_1,(LPVOID)0x0,param_2,DAT_100b3c4c,param_3,
               *(undefined4 *)(DAT_100a40d0 + param_4 * 4),-1,param_5);
  return;
}
