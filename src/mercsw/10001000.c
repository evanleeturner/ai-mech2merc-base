/* SPDX-License-Identifier: MIT */
/* mercsw 10001000 */
/* mercsw 10001000: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
extern undefined4 DAT_100a4030;
extern char DAT_100a4034[];
extern char DAT_100a4040[];
extern char s_MW2_INI_100a4038[];
FILE * __cdecl _fopen(char * _Filename, char * _Mode);
char * __cdecl FUN_100012e5(char * param_1);
char * __cdecl _fgets(char * _Buf, int _MaxCount, FILE * _File);
int __cdecl _fclose(FILE * _File);
size_t __cdecl _strspn(char * _Str, char * _Control);
char * __cdecl _strchr(char * _Str, int _Val);
int __cdecl __strcmpi(char * _Str1, char * _Str2);
long __cdecl _ftell(FILE * _File);

undefined4 __cdecl FUN_10001000(char * param_1)

{
  FILE *_File;
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  size_t sVar4;
  char *_Str1;
  int iVar5;
  char local_8c [136];
  
  DAT_100a4030 = -1;
  _File = _fopen(s_MW2_INI_100a4038,DAT_100a4034);
  if (_File == (FILE *)0x0) {
    uVar1 = 0x41;
  }
  else {
    pcVar2 = FUN_100012e5(param_1);
    do {
      do {
        do {
          pcVar3 = _fgets(local_8c,0x85,_File);
          if (pcVar3 == (char *)0x0) {
            _fclose(_File);
            return 0x4a;
          }
          sVar4 = _strspn(local_8c,DAT_100a4040);
        } while (local_8c[sVar4] != '[');
        pcVar3 = _strchr(local_8c + sVar4 + 1,0x5d);
      } while (pcVar3 == (char *)0x0);
      *pcVar3 = '\0';
      pcVar3 = pcVar2;
      _Str1 = FUN_100012e5(local_8c + sVar4 + 1);
      iVar5 = __strcmpi(_Str1,pcVar3);
    } while (iVar5 != 0);
    DAT_100a4030 = _ftell(_File);
    _fclose(_File);
    uVar1 = 0;
  }
  return uVar1;
}
