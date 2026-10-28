/* SPDX-License-Identifier: MIT */
/* mw2shell 1001a910 */
/* mw2shell 1001a910: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_100361e0(int param_1, int param_2, int param_3, int param_4, int param_5);
uint __cdecl FUN_10035f30(int param_1, char * param_2, char * param_3, char * param_4);

void __cdecl FUN_1001a910(int param_1, char * param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  FUN_100361e0(param_1,0,*(int *)(param_2 + 0xc),*(int *)(param_2 + 8),*(int *)(param_2 + 4));
  pcVar1 = param_2;
  if (0 < *(int *)(param_2 + 0xc)) {
    do {
      FUN_10035f30(iVar2,pcVar1 + 0x10,(char *)0x0,(char *)0x0);
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 0x10;
    } while (iVar2 < *(int *)(param_2 + 0xc));
  }
  FUN_100361e0(param_1,0,*(int *)(param_2 + 0xc),*(int *)(param_2 + 8),*(int *)(param_2 + 4));
  return;
}
