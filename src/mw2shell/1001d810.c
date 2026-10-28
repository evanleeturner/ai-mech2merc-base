/* SPDX-License-Identifier: MIT */
/* mw2shell 1001d810 */
/* mw2shell 1001d810: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };

int __cdecl FUN_1001d810(int * param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  piVar3 = param_1;
  while( true ) {
    piVar2 = param_1;
    if (iVar1 == -1) {
      return -1;
    }
    if (piVar3[0xb] == 1) break;
    iVar1 = *piVar2;
    param_1 = piVar2 + 0xe;
    piVar3 = piVar2;
  }
  return piVar3[9];
}
