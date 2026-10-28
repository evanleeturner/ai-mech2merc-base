/* SPDX-License-Identifier: MIT */
/* mw2shell 10050b20 */
/* mw2shell 10050b20: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_10069697(int param_1, int param_2);

int __thiscall FUN_10050b20(void * this, char * param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (char *)0x0) {
    iVar3 = 0;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      iVar2 = FUN_10069697(*(int *)this,(int)*param_1);
      iVar3 = iVar3 + iVar2;
      cVar1 = param_1[1];
      param_1 = param_1 + 1;
    }
    return iVar3;
  }
  return 0;
}
