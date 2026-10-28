/* SPDX-License-Identifier: MIT */
/* mercsw 10003618 */
/* mercsw 10003618: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3c4c;
undefined4 __stdcall FUN_1000387d(void);
uint __cdecl FUN_10002ba7(int param_1, undefined4 param_2, uint param_3, LPVOID param_4, int param_5, int param_6, undefined4 param_7, undefined4 param_8, int param_9, ushort param_10);

void __cdecl FUN_10003618(int param_1, undefined4 param_2, uint param_3, int param_4, undefined4 param_5, ushort param_6)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = -1;
  uVar1 = FUN_1000387d();
  FUN_10002ba7(param_1,param_2,param_3,(LPVOID)0x0,param_4,DAT_100b3c4c,param_5,uVar1,iVar2,param_6)
  ;
  return;
}
