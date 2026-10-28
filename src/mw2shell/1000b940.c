/* SPDX-License-Identifier: MIT */
/* mw2shell 1000b940 */
/* mw2shell 1000b940: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_1000b8f0(undefined4 param_1, uint param_2, int param_3, int * param_4);

undefined4 __cdecl FUN_1000b940(undefined4 param_1, uint param_2, int * param_3, int * param_4)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_1000b8f0(param_1,param_2,iVar2,&local_4);
    if (iVar1 != 0) {
      if (param_3 != (int *)0x0) {
        *param_3 = iVar2;
      }
      if (param_4 != (int *)0x0) {
        *param_4 = local_4;
      }
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  return 0;
}
