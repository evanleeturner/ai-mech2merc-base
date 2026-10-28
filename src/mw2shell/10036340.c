/* SPDX-License-Identifier: MIT */
/* mw2shell 10036340 */
/* mw2shell 10036340: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
extern char DAT_10093c70[];
extern char s__s_BWD_10093c68[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
FILE * __cdecl FID_conflict___wfopen(char * _Filename, char * _Mode);
int __cdecl _fclose(FILE * _File);

undefined4 __stdcall FUN_10036340(undefined4 param_1)

{
  FILE *_File;
  char local_20 [32];
  
  _sprintf(local_20,s__s_BWD_10093c68,param_1);
  _File = FID_conflict___wfopen(local_20,DAT_10093c70);
  if (_File != (FILE *)0x0) {
    _fclose(_File);
    return 0xfffffffe;
  }
  return 0xffffffff;
}
