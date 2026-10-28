/* SPDX-License-Identifier: MIT */
/* mercsw 100035a8 */
/* mercsw 100035a8: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3c4c;
undefined4 __stdcall FUN_1000387d(void);
uint __cdecl FUN_10002ba7(int param_1, undefined4 param_2, uint param_3, LPVOID param_4, int param_5, int param_6, undefined4 param_7, undefined4 param_8, int param_9, ushort param_10);

void __stdcall FUN_100035a8(void)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  
  uVar3 = 0x250;
  iVar2 = -1;
  uVar1 = FUN_1000387d();
  FUN_10002ba7(0,0,0xe3,(LPVOID)0x0,100,DAT_100b3c4c,0x40,uVar1,iVar2,uVar3);
  return;
}
