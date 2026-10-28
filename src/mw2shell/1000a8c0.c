/* SPDX-License-Identifier: MIT */
/* mw2shell 1000a8c0 */
/* mw2shell 1000a8c0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_10085170[];

void __cdecl FUN_1000a8c0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0xe;
  *(undefined4 *)(param_1 + 0x260) = 0;
  piVar1 = (int *)(param_1 + 0x2f0);
  do {
    if (*piVar1 != -1) {
      *(int *)(param_1 + 0x260) =
           *(int *)(param_1 + 0x260) + *(int *)(DAT_10085170 + (*piVar1 / 100) * 0x40);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
