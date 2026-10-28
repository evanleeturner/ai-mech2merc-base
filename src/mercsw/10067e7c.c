/* SPDX-License-Identifier: MIT */
/* mercsw 10067e7c */
/* mercsw 10067e7c: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
extern undefined4 DAT_100b3958;
extern char DAT_100b3970[];
extern undefined DAT_100eeee0[];
extern undefined DAT_100eef0c[];
extern undefined DAT_100eef10[];
extern undefined DAT_100eef20[];
extern char s_mercs_hud_100b3974[];
FILE * __cdecl _fopen(char * _Filename, char * _Mode);
size_t __cdecl _fread(void * _DstBuf, size_t _ElementSize, size_t _Count, FILE * _File);
int __cdecl _fclose(FILE * _File);

void __stdcall FUN_10067e7c(void)

{
  FILE *_File;
  
  _File = _fopen(s_mercs_hud_100b3974,DAT_100b3970);
  if (_File == (FILE *)0x0) {
    DAT_100b3958 = 0;
  }
  else {
    DAT_100b3958 = 1;
    _fread(DAT_100eef20,4,7,_File);
    _fread(DAT_100eeee0,4,1,_File);
    _fread(DAT_100eef0c,4,1,_File);
    _fread(DAT_100eef10,4,1,_File);
    _fclose(_File);
  }
  return;
}
