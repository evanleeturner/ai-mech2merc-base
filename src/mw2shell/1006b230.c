/* SPDX-License-Identifier: MIT */
/* mw2shell 1006b230 */
/* mw2shell 1006b230: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1006b300(int param_1, int param_2, int param_3, char param_4);
undefined __cdecl FUN_1006b380(int param_1, int param_2, int param_3, char param_4);
undefined4 __cdecl FUN_1006b500(int param_1, int param_2, char param_3, int param_4, int param_5);

int __cdecl FUN_1006b230(int param_1, int param_2, char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_4;
  
  local_4 = 0;
  if (param_2 == 0) {
    return 0;
  }
  iVar3 = 0;
  piVar5 = (int *)(param_2 + 0x368);
  piVar6 = (int *)(param_1 + 0x368);
  *(undefined1 *)(param_1 + 0x84d) = 1;
  do {
    iVar1 = FUN_1006b300(param_1,param_2,iVar3,param_3);
    iVar4 = 0;
    iVar2 = FUN_1006b380(param_1,param_2,iVar3,param_3);
    local_4 = local_4 + iVar1 + iVar2;
    do {
      if (*piVar5 != *piVar6) {
        iVar1 = FUN_1006b500(iVar3,iVar4,param_3,param_1,param_2);
        if (0 < iVar1) {
          local_4 = local_4 + iVar1;
        }
      }
      piVar6 = piVar6 + 1;
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xc);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  return local_4;
}
