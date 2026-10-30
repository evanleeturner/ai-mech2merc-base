/* SPDX-License-Identifier: MIT */
/* mw2shell 1004f1e0 */
/* mw2shell 1004f1e0: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
extern FILE * DAT_1009be04;
extern char DAT_1009bf5c[];
extern char s_debug_log_1009be08[];
FILE * __cdecl FID_conflict___wfopen(char * _Filename, char * _Mode);
int __cdecl _fputs(char * _Str, FILE * _File);
int __cdecl _fflush(FILE * _File);
int __cdecl _fclose(FILE * _File);

void __cdecl FUN_1004f1e0(char * str)

{
  if (DAT_1009be04 == (FILE *)0x0) {
    DAT_1009be04 = FID_conflict___wfopen(s_debug_log_1009be08,DAT_1009bf5c);
  }
  if (DAT_1009be04 != (FILE *)0x0) {
    _fputs(str,DAT_1009be04);
    _fflush(DAT_1009be04);
    _fclose(DAT_1009be04);
    DAT_1009be04 = (FILE *)0x0;
  }
  return;
}
