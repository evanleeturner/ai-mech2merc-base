/* SPDX-License-Identifier: MIT */
/* mw2shell 10053500 */
/* mw2shell 10053500: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
typedef struct wchar_t wchar_t;
extern undefined4 DAT_1009f378;
extern undefined DAT_1009fc2c[];
extern char s__c__s__s_1009fc20[];
extern char s__s___1009fc18[];
int __cdecl EntryAddress120_Likely(int param_1);
int __cdecl FID_conflict__fwprintf(FILE * _File, wchar_t * _Format, ...);
undefined __cdecl FUN_10053470(FILE * param_1, int param_2);

void __cdecl FUN_10053500(FILE * param_1, undefined4 param_2, int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = EntryAddress120_Likely(*(int *)(param_3 + 4));
  iVar1 = *(int *)(param_3 + 0x10);
  if (-1 < iVar1) {
    DAT_1009f378 = DAT_1009f378 + 1;
    FID_conflict__fwprintf(param_1,(wchar_t *)s__s___1009fc18,param_2);
    FID_conflict__fwprintf
              (param_1,(wchar_t *)s__c__s__s_1009fc20,
               (int)(char)((-((*(uint *)(param_3 + 8) & 0x80000000) == 0) & 0xfeU) + 0x2d),iVar2 + 4
               ,*(undefined4 *)(*(int *)(iVar2 + 0x68) + iVar1 * 4));
    FUN_10053470(param_1,param_3);
    FID_conflict__fwprintf(param_1,(wchar_t *)DAT_1009fc2c);
  }
  return;
}
