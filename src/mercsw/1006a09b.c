/* SPDX-License-Identifier: MIT */
/* mercsw 1006a09b */
/* mercsw 1006a09b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3a5c;
extern char s__100b39e8[];
extern char s____d__ds_100b3bac[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);

void __stdcall FUN_1006a09b(void)

{
  char local_6c [52];
  char local_38 [52];
  
  _sprintf(local_38,s____d__ds_100b3bac,0x32,0x32);
  _sprintf(local_6c,local_38,s__100b39e8);
  DAT_100b3a5c = 0;
  return;
}
