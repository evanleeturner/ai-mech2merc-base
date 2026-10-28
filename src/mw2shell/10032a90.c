/* SPDX-License-Identifier: MIT */
/* mw2shell 10032a90 */
/* mw2shell 10032a90: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
undefined __cdecl FUN_1000a800(int param_1);
undefined __cdecl FUN_1000a890(int param_1);

int __cdecl FUN_10032a90(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *local_c;
  int local_8;
  int iVar4;
  
  if (*(int *)(param_1 + 0x280) <= *(int *)(param_1 + 0x288)) {
    return 0;
  }
  *(int *)(param_1 + 0x288) = *(int *)(param_1 + 0x288) + 1;
  iVar3 = 0;
LAB_10032acd:
  iVar4 = iVar3;
  iVar3 = iVar4 + 1;
  local_8 = 0;
  local_c = (int *)(param_1 + 0x368);
  do {
    iVar1 = 0;
    piVar2 = local_c;
    do {
      if ((((*piVar2 / 100) * 4 + -0x154) * 0x19 == 0) && (*piVar2 % 100 == iVar3))
      goto LAB_10032acd;
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    local_c = local_c + 0xc;
    local_8 = local_8 + 1;
    if (7 < local_8) {
      FUN_1000a800(param_1);
      FUN_1000a890(param_1);
      return iVar4 + 0x2135;
    }
  } while( true );
}
