/* SPDX-License-Identifier: MIT */
/* mw2shell 1000aa80 */
/* mw2shell 1000aa80: Ghidra's C, repaired by tools/ghidra_repair.py */

void __cdecl FUN_1000aa80(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0x19;
  *(undefined4 *)(param_1 + 0x268) = 0;
  piVar2 = (int *)(param_1 + 0x28c);
  do {
    if (*piVar2 != -1) {
      *(int *)(param_1 + 0x268) = *(int *)(param_1 + 0x268) + 100;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}
