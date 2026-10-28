/* SPDX-License-Identifier: MIT */
/* mercsw 1005dd5a */
/* mercsw 1005dd5a: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
extern undefined4 DAT_100b3444;
extern FILE * DAT_100b3448;
extern char DAT_100b34a0[];
int __cdecl _fprintf(FILE * _File, char * _Format, ...);

undefined4 __cdecl FUN_1005dd5a(undefined4 param_1)

{
  undefined4 uVar1;
  
  if ((DAT_100b3444 == 0) || (DAT_100b3448 == (FILE *)0x0)) {
    uVar1 = 0;
  }
  else {
    _fprintf(DAT_100b3448,DAT_100b34a0,param_1);
    uVar1 = 1;
  }
  return uVar1;
}
