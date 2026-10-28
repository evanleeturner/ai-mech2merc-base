/* SPDX-License-Identifier: MIT */
/* mw2shell 1000fd70 */
/* mw2shell 1000fd70: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
extern char DAT_1008e770[];
extern undefined DAT_100c42c0[];
extern char s_mw2high_cfg_1008e774[];
FILE * __cdecl FID_conflict___wfopen(char * _Filename, char * _Mode);
size_t __cdecl _fread(void * _DstBuf, size_t _ElementSize, size_t _Count, FILE * _File);
int __cdecl _fclose(FILE * _File);

void __stdcall FUN_1000fd70(void)

{
  FILE *_File;
  
  _File = FID_conflict___wfopen(s_mw2high_cfg_1008e774,DAT_1008e770);
  if (_File != (FILE *)0x0) {
    _fread(DAT_100c42c0,0x2b6,1,_File);
    _fclose(_File);
  }
  return;
}
