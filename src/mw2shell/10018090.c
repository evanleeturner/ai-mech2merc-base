/* SPDX-License-Identifier: MIT */
/* mw2shell 10018090 */
/* mw2shell 10018090: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_10017df0(int * param_1, undefined4 param_2);
undefined __cdecl FUN_100180f0(int * param_1, char param_2);

void __cdecl FUN_10018090(int * param_1, int * param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    if (0 < param_2[1]) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 4;
        iVar1 = iVar1 + 1;
        FUN_10017df0(param_1,*(undefined4 *)(*(int *)((int)param_2 + 0x11) + -4 + iVar2));
        *(undefined4 *)(*(int *)((int)param_2 + 0x11) + -4 + iVar2) = 0;
      } while (iVar1 < param_2[1]);
    }
    FUN_100180f0(param_2,'\x01');
  }
  return;
}
