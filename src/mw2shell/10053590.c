/* SPDX-License-Identifier: MIT */
/* mw2shell 10053590 */
/* mw2shell 10053590: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
typedef struct wchar_t wchar_t;
extern undefined4 DAT_1009f37c;
extern undefined DAT_1009fc44[];
extern char s____s__s_1009fc38[];
extern char s__s___1009fc30[];
extern char s_jumpjet_enabled_1009fc58[];
extern char s_jumpjet_fire__1009fc48[];
int __cdecl FUN_100576a0(int param_1);
int __cdecl FID_conflict__fwprintf(FILE * _File, wchar_t * _Format, ...);
undefined __cdecl FUN_10053470(FILE * param_1, int param_2);
int __cdecl _strncmp(char * _Str1, char * _Str2, size_t _MaxCount);

void __cdecl FUN_10053590(FILE * param_1, char * param_2, int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100576a0(*(int *)(param_3 + 4));
  iVar2 = *(int *)(param_3 + 0x10);
  if (-1 < iVar2) {
    DAT_1009f37c = DAT_1009f37c + 1;
    FID_conflict__fwprintf(param_1,(wchar_t *)s__s___1009fc30,param_2);
    FID_conflict__fwprintf
              (param_1,(wchar_t *)s____s__s_1009fc38,iVar1 + 4,
               *(undefined4 *)(*(int *)(iVar1 + 0x70) + iVar2 * 4));
    FUN_10053470(param_1,param_3);
    FID_conflict__fwprintf(param_1,(wchar_t *)DAT_1009fc44);
    iVar2 = _strncmp(param_2,s_jumpjet_fire__1009fc48,0xd);
    if (iVar2 == 0) {
      FUN_10053590(param_1,s_jumpjet_enabled_1009fc58,param_3);
    }
  }
  return;
}
