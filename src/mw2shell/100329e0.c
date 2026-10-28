/* SPDX-License-Identifier: MIT */
/* mw2shell 100329e0 */
/* mw2shell 100329e0: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
undefined __cdecl FUN_1000a6f0(int param_1);
undefined __cdecl FUN_1000a890(int param_1);

int __cdecl FUN_100329e0(int param_1, int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *local_8;
  int local_4;
  
  *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 100;
  FUN_1000a6f0(param_1);
  FUN_1000a890(param_1);
  iVar1 = 0;
LAB_10032a12:
  iVar1 = iVar1 + 1;
  local_4 = 0;
  local_8 = (int *)(param_1 + 0x368);
  do {
    iVar3 = 0;
    piVar2 = local_8;
    do {
      if ((((*piVar2 / 100) * 4 + -0x140) * 0x19 == 0) && (*piVar2 % 100 == iVar1))
      goto LAB_10032a12;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    local_8 = local_8 + 0xc;
    local_4 = local_4 + 1;
    if (7 < local_4) {
      return param_2 + iVar1;
    }
  } while( true );
}
