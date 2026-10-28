/* SPDX-License-Identifier: MIT */
/* mw2shell 1000d3d0 */
/* mw2shell 1000d3d0: Ghidra's C, repaired by tools/ghidra_repair.py */
int __thiscall FUN_10050b20(void * this, char * param_1);

char * __cdecl FUN_1000d3d0(char * param_1, void * param_2, int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = FUN_10050b20(param_2,param_1);
  if (param_3 < iVar2) {
    cVar1 = *param_1;
    for (iVar2 = 0; (cVar1 != '\0' && (param_1[iVar2] != ' ')); iVar2 = iVar2 + 1) {
      cVar1 = param_1[iVar2 + 1];
    }
    cVar1 = param_1[iVar2];
    for (; (cVar1 != '\0' && (param_1[iVar2] == ' ')); iVar2 = iVar2 + 1) {
      cVar1 = param_1[iVar2 + 1];
    }
    pcVar3 = param_1 + iVar2;
    if (param_1[iVar2] == '\0') {
      pcVar3 = param_1;
    }
    return pcVar3;
  }
  return param_1;
}
