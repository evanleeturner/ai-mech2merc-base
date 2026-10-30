/* SPDX-License-Identifier: MIT */
/* mercsw 10064c99 */
/* mercsw 10064c99: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
extern char DAT_100b38f8[];
extern FILE * DAT_100c7f9c;
FILE * __cdecl _fopen(char * _Filename, char * _Mode);

bool __cdecl FUN_10064c99(char * filename)

{
  DAT_100c7f9c = _fopen(filename,DAT_100b38f8);
  return DAT_100c7f9c == (FILE *)0x0;
}
