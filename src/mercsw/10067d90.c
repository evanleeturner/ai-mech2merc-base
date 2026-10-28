/* SPDX-License-Identifier: MIT */
/* mercsw 10067d90 */
/* mercsw 10067d90: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
extern undefined4 DAT_100adcdc;
extern undefined4 DAT_100b2ce8;
extern undefined4 DAT_100b3958;
extern char DAT_100b3960[];
extern undefined4 DAT_100eeee0;
extern undefined4 DAT_100eeef0[];
extern undefined4 DAT_100eef0c;
extern undefined4 DAT_100eef10;
extern undefined4 DAT_100eef20[];
extern undefined4 DAT_10215658;
extern char s_mercs_hud_100b3964[];
undefined __stdcall FUN_100681c0(void);
FILE * __cdecl _fopen(char * _Filename, char * _Mode);
size_t __cdecl _fwrite(void * _Str, size_t _Size, size_t _Count, FILE * _File);
int __cdecl _fclose(FILE * _File);

void __stdcall FUN_10067d90(void)

{
  FILE *_File;
  int local_8;
  
  DAT_100b3958 = 1;
  FUN_100681c0();
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    DAT_100eef20[local_8] = DAT_100eeef0[local_8];
  }
  DAT_100eeee0 = DAT_100b2ce8;
  DAT_100eef0c = DAT_100adcdc;
  DAT_100eef10 = DAT_10215658;
  _File = _fopen(s_mercs_hud_100b3964,DAT_100b3960);
  if (_File != (FILE *)0x0) {
    _fwrite(DAT_100eef20,4,7,_File);
    _fwrite(&DAT_100eeee0,4,1,_File);
    _fwrite(&DAT_100eef0c,4,1,_File);
    _fwrite(&DAT_100eef10,4,1,_File);
    _fclose(_File);
  }
  return;
}
