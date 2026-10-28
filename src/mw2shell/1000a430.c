/* SPDX-License-Identifier: MIT */
/* mw2shell 1000a430 */
/* mw2shell 1000a430: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_10083878[];

undefined4 __cdecl FUN_1000a430(int param_1, int param_2, int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_4;
  
  if (param_2 < 1) {
    return 0;
  }
  iVar2 = 0;
  if (param_3 != 0) {
    piVar1 = (int *)(DAT_10083878 + param_1 * 0xc);
    do {
      if (0xb < iVar2) break;
      if (*piVar1 == 0) {
        param_3 = param_3 + -1;
        *piVar1 = param_2;
      }
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (param_3 != 0);
  }
  if (param_2 - param_2 % 100 == 0xd48) {
    if (param_3 != 0) {
      switch(param_1) {
      case 1:
        local_4 = 4;
        break;
      default:
        break;
      case 3:
        local_4 = 5;
        break;
      case 4:
        local_4 = 1;
        break;
      case 5:
        local_4 = 3;
      }
      iVar2 = 0;
      if (param_3 != 0) {
        piVar1 = (int *)(DAT_10083878 + local_4 * 0xc);
        do {
          if (0xb < iVar2) break;
          if (*piVar1 == 0) {
            param_3 = param_3 + -1;
            *piVar1 = param_2;
          }
          piVar1 = piVar1 + 1;
          iVar2 = iVar2 + 1;
        } while (param_3 != 0);
        if (param_3 != 0) {
          iVar2 = 0xc;
          piVar1 = (int *)(DAT_10083878 + local_4 * 0xc);
          piVar3 = (int *)(DAT_10083878 + param_1 * 0xc);
          do {
            if (*piVar3 == param_2) {
              *piVar3 = 0;
            }
            if (*piVar1 == param_2) {
              *piVar1 = 0;
            }
            piVar1 = piVar1 + 1;
            piVar3 = piVar3 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          return 0;
        }
      }
    }
  }
  else if (param_3 != 0) {
    iVar2 = 0xc;
    piVar1 = (int *)(DAT_10083878 + param_1 * 0xc);
    do {
      if (*piVar1 == param_2) {
        *piVar1 = 0;
      }
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return 0;
  }
  return 1;
}
