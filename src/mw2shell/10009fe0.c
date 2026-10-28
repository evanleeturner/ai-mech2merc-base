/* SPDX-License-Identifier: MIT */
/* mw2shell 10009fe0 */
/* mw2shell 10009fe0: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_10009f90(uint param_1, int param_2, int * param_3);

undefined4 __cdecl FUN_10009fe0(uint param_1, int * param_2, int * param_3)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_10009f90(param_1,iVar2,&local_4);
    if (iVar1 != 0) {
      if (param_2 != (int *)0x0) {
        *param_2 = iVar2;
      }
      if (param_3 != (int *)0x0) {
        *param_3 = local_4;
      }
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  return 0;
}
