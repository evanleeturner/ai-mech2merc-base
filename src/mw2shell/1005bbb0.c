/* SPDX-License-Identifier: MIT */
/* mw2shell 1005bbb0 */
/* mw2shell 1005bbb0: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl _toupper(int _C);

char * __cdecl FUN_1005bbb0(char * param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar6;
  uint uVar5;
  
  iVar2 = -1;
  pcVar6 = param_1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar5 = 0;
  if (iVar2 != -2) {
    do {
      uVar4 = uVar5 + 1;
      iVar2 = _toupper((int)param_1[uVar5]);
      uVar3 = 0xffffffff;
      param_1[uVar5] = (char)iVar2;
      pcVar6 = param_1;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar5 = uVar4;
    } while (uVar4 < ~uVar3 - 1);
  }
  return param_1;
}
