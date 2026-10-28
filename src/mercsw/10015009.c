/* SPDX-License-Identifier: MIT */
/* mercsw 10015009 */
/* mercsw 10015009: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_100150df(int param_1, int param_2, int param_3, int param_4);
undefined4 __cdecl FUN_100157bd(int param_1, int param_2, int param_3, int param_4);
undefined4 __cdecl FUN_1001544e(int param_1, int param_2, int param_3, int param_4);

undefined4 __cdecl FUN_10015009(int param_1, int param_2, int param_3, int param_4, int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (*(ushort *)(param_1 + 2) < 3) {
    uVar1 = 0;
  }
  else {
    uVar5 = (int)*(uint *)(param_1 + 0x14) >> 0x1f;
    iVar2 = (*(uint *)(param_1 + 0x14) ^ uVar5) - uVar5;
    uVar5 = (int)*(uint *)(param_1 + 0x18) >> 0x1f;
    iVar3 = (*(uint *)(param_1 + 0x18) ^ uVar5) - uVar5;
    uVar5 = (int)*(uint *)(param_1 + 0x1c) >> 0x1f;
    iVar4 = (*(uint *)(param_1 + 0x1c) ^ uVar5) - uVar5;
    if ((iVar2 < iVar3) && (iVar4 < iVar3)) {
      uVar1 = FUN_100150df(param_1,param_2,param_3,param_5);
    }
    else if (iVar4 < iVar2) {
      uVar1 = FUN_100157bd(param_1,param_2,param_4,param_5);
    }
    else {
      uVar1 = FUN_1001544e(param_1,param_2,param_3,param_4);
    }
  }
  return uVar1;
}
