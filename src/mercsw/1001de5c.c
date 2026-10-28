/* SPDX-License-Identifier: MIT */
/* mercsw 1001de5c */
/* mercsw 1001de5c: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
extern char DAT_100ab2b4[];
extern char DAT_100ab2c8[];
extern char s_mw2debug_txt_100ab2b8[];
FILE * __cdecl _fopen(char * _Filename, char * _Mode);
int __cdecl _fprintf(FILE * _File, char * _Format, ...);
int __cdecl _fclose(FILE * _File);
undefined __cdecl FUN_1006a38c(char * param_1);

void __cdecl FUN_1001de5c(char * param_1)

{
  FILE *_File;
  
  _File = _fopen(s_mw2debug_txt_100ab2b8,DAT_100ab2b4);
  if (_File != (FILE *)0x0) {
    _fprintf(_File,DAT_100ab2c8,param_1);
  }
  _fclose(_File);
  FUN_1006a38c(param_1);
  return;
}
