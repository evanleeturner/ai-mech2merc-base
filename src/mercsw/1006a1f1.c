/* SPDX-License-Identifier: MIT */
/* mercsw 1006a1f1 */
/* mercsw 1006a1f1: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3a68;
extern char s__100b39e8[];
extern char s____d__ds_100b3bf8[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);

void __stdcall FUN_1006a1f1(void)

{
  char local_24 [16];
  char local_14 [16];
  
  _sprintf(local_14,s____d__ds_100b3bf8,0xc,0xc);
  _sprintf(local_24,local_14,s__100b39e8);
  DAT_100b3a68 = 0;
  return;
}
