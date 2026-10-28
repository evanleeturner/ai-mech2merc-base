/* SPDX-License-Identifier: MIT */
/* mercsw 1000115d */
/* mercsw 1000115d: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
extern undefined4 DAT_100a4030;
extern char DAT_100a4044[];
extern char DAT_100a4050[];
extern char DAT_100a4054[];
extern char DAT_100a4058[];
extern char DAT_100a405c[];
extern char DAT_100c4be8[];
extern char s_MW2_INI_100a4048[];
FILE * __cdecl _fopen(char * _Filename, char * _Mode);
int __cdecl _fseek(FILE * _File, long _Offset, int _Origin);
char * __cdecl FUN_100012e5(char * param_1);
char * __cdecl _fgets(char * _Buf, int _MaxCount, FILE * _File);
size_t __cdecl _strspn(char * _Str, char * _Control);
char * __cdecl _strchr(char * _Str, int _Val);
int __cdecl __strcmpi(char * _Str1, char * _Str2);
int __cdecl _fclose(FILE * _File);
size_t __cdecl _strcspn(char * _Str, char * _Control);

char * __cdecl FUN_1000115d(char * param_1, int param_2)

{
  char cVar1;
  FILE *_File;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  size_t sVar5;
  uint uVar6;
  char *_Str2;
  char *local_10;
  
  if ((DAT_100a4030 == (undefined4)(-1)) ||
     (_File = _fopen(s_MW2_INI_100a4048,DAT_100a4044), _File == (FILE *)0x0)) {
    local_10 = DAT_100a4050;
  }
  else {
    _fseek(_File,DAT_100a4030,0);
    pcVar2 = FUN_100012e5(param_1);
    do {
      do {
        local_10 = DAT_100a4054;
        pcVar3 = _fgets(DAT_100c4be8,0x85,_File);
        if (pcVar3 == (char *)0x0) goto LAB_1000126c;
        sVar5 = _strspn(DAT_100c4be8,DAT_100a4058);
        pcVar3 = DAT_100c4be8 + sVar5;
        if (*pcVar3 == '[') goto LAB_1000126c;
        local_10 = _strchr(pcVar3,0x3d);
      } while (local_10 == (char *)0x0);
      *local_10 = '\0';
      local_10 = local_10 + 1;
      _Str2 = pcVar2;
      pcVar3 = FUN_100012e5(pcVar3);
      iVar4 = __strcmpi(pcVar3,_Str2);
    } while (iVar4 != 0);
LAB_1000126c:
    _fclose(_File);
    uVar6 = 0xffffffff;
    pcVar2 = local_10;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (~uVar6 != 1) {
      local_10[~uVar6 - 2] = '\0';
    }
    if (param_2 == 0) {
      sVar5 = _strcspn(local_10,DAT_100a405c);
      local_10[sVar5] = '\0';
      local_10 = FUN_100012e5(local_10);
    }
  }
  return local_10;
}
