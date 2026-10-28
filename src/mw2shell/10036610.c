/* SPDX-License-Identifier: MIT */
/* mw2shell 10036610 */
/* mw2shell 10036610: Ghidra's C, repaired by tools/ghidra_repair.py */

int __thiscall FUN_10036610(void * this, int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0xc;
  if (0xc < *(int *)((int)this + 0xc)) {
    do {
      iVar1 = *(int *)((int)this + 8) + iVar2;
      if (*(int *)(*(int *)((int)this + 8) + iVar2) == param_1) {
        return iVar1;
      }
      iVar2 = iVar2 + *(int *)(iVar1 + 4);
    } while (iVar2 < *(int *)((int)this + 0xc));
  }
  return 0;
}
