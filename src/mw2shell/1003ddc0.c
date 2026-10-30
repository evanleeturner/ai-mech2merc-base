/* SPDX-License-Identifier: MIT */
/* mw2shell 1003ddc0 */
/* mw2shell 1003ddc0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern char DAT_100d0970[];
int __cdecl __strcmpi(char * _Str1, char * _Str2);

int __cdecl FUN_1003ddc0(char * str2, int param_2)

{
  int iVar1;
  int iVar2;
  char *_Str1;
  
  iVar2 = 0;
  if (0 < param_2) {
    _Str1 = DAT_100d0970;
    do {
      iVar1 = __strcmpi(_Str1,str2);
      if (iVar1 == 0) {
        return iVar2;
      }
      _Str1 = _Str1 + 0xf;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return -1;
}
