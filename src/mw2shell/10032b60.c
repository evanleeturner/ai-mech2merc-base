/* SPDX-License-Identifier: MIT */
/* mw2shell 10032b60 */
/* mw2shell 10032b60: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
undefined __cdecl FUN_1000a890(int param_1);

int __cdecl FUN_10032b60(int param_1, int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *local_8;
  int local_4;
  
  *(undefined4 *)(param_1 + 0x7f0) = 1;
  if (*(int *)(param_1 + 0x84f) == 1) {
    *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 0x32;
  }
  FUN_1000a890(param_1);
  iVar1 = 0;
LAB_10032b96:
  iVar1 = iVar1 + 1;
  local_4 = 0;
  local_8 = (int *)(param_1 + 0x368);
  do {
    iVar2 = 0;
    piVar3 = local_8;
    do {
      if ((((*piVar3 / 10) * 5 - 0x12a7U & 0x7fffffff) == 0) && (*piVar3 % 10 == iVar1))
      goto LAB_10032b96;
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xc);
    local_8 = local_8 + 0xc;
    local_4 = local_4 + 1;
    if (7 < local_4) {
      return param_2 + iVar1;
    }
  } while( true );
}
