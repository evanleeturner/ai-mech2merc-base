/* SPDX-License-Identifier: MIT */
/* mw2shell 1000a060 */
/* mw2shell 1000a060: Ghidra's C, repaired by tools/ghidra_repair.py */
extern char DAT_1008d008[];
extern undefined DAT_1008d00c[];
extern void * DAT_100a6738;
int __cdecl __strnicmp(char * _Str1, char * _Str2, size_t _MaxCount);
undefined __thiscall FUN_10036510(void * this, char * param_1, uint param_2, int * param_3);

void __cdecl FUN_1000a060(char * param_1)

{
  int iVar1;
  
  iVar1 = __strnicmp(param_1 + 5,DAT_1008d008,3);
  if (iVar1 == 0) {
    FUN_10036510(DAT_100a6738,param_1,8,(int *)DAT_1008d00c);
  }
  return;
}
