/* SPDX-License-Identifier: MIT */
/* mw2shell 10017a40 */
/* mw2shell 10017a40: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl __strcmpi(char * _Str1, char * _Str2);

int __cdecl FUN_10017a40(int param_1, char * str1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  iVar2 = 0;
  bVar4 = *(int *)(param_1 + 0x4b4) == 0;
  if (0 < *(int *)(param_1 + 0x4b4)) {
    puVar3 = (undefined4 *)(param_1 + 4);
    do {
      iVar1 = __strcmpi(str1,(char *)*puVar3);
      if (iVar1 == 0) break;
      puVar3 = puVar3 + 3;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x4b4));
    bVar4 = *(int *)(param_1 + 0x4b4) == iVar2;
  }
  iVar1 = -1;
  if (!bVar4) {
    iVar1 = iVar2;
  }
  return iVar1;
}
