/* SPDX-License-Identifier: MIT */
/* mercsw 10069c65 */
/* mercsw 10069c65: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3a20;
extern char s__100b39e8[];
extern char s____d__ds_100b3acc[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);

void __stdcall FUN_10069c65(void)

{
  char local_24 [16];
  char local_14 [16];
  
  _sprintf(local_14,s____d__ds_100b3acc,0xe,0xe);
  _sprintf(local_24,local_14,s__100b39e8);
  DAT_100b3a20 = 0;
  return;
}
