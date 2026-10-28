/* SPDX-License-Identifier: MIT */
/* mw2shell 10050400 */
/* mw2shell 10050400: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_10082bf0[];

void __cdecl FUN_10050400(int * param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    param_1[1] = 10000;
    switch(iVar1) {
    case 1:
      param_1[1] = *(int *)(DAT_10082bf0 + iVar1 * 0xc);
      return;
    case 2:
      param_1[1] = *(int *)(DAT_10082bf0 + iVar1 * 0xc);
      return;
    case 3:
      param_1[1] = 50000;
      return;
    case 4:
      param_1[1] = 50000;
      return;
    case 5:
      param_1[1] = *(int *)(DAT_10082bf0 + iVar1 * 0xc);
      return;
    case 6:
      param_1[1] = *(int *)(DAT_10082bf0 + iVar1 * 0xc);
    }
  }
  return;
}
