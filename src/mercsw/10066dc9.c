/* SPDX-License-Identifier: MIT */
/* mercsw 10066dc9 */
/* mercsw 10066dc9: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_1005b547(int param_1, int param_2);
undefined4 __cdecl FUN_10056fc4(int * param_1, int param_2, int param_3, int param_4, int param_5);

void __cdecl FUN_10066dc9(int * param_1, int param_2, int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_28;
  int local_24;
  int local_14;
  int local_10;
  
  local_10 = 0;
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    uVar5 = FUN_1005b547(param_2,param_3);
    iVar6 = (int)uVar5 >> 0x10;
    uVar5 = uVar5 & 0xffff;
    iVar1 = param_1[3];
    iVar2 = param_1[1];
    iVar3 = param_1[4];
    iVar4 = param_1[2];
    for (local_28 = 0; local_14 = 0, local_28 < (int)((iVar3 - iVar4) + uVar5) / (int)uVar5;
        local_28 = local_28 + 1) {
      for (local_24 = 0; local_24 < ((iVar1 - iVar2) + iVar6) / iVar6; local_24 = local_24 + 1) {
        FUN_10056fc4(param_1,param_2,param_3,local_14,local_10);
        local_14 = local_14 + iVar6;
      }
      local_10 = local_10 + uVar5;
    }
  }
  return;
}
