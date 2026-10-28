/* SPDX-License-Identifier: MIT */
/* mercsw 10069e95 */
/* mercsw 10069e95: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3a50;
extern char s__100b39e8[];
extern char s____d__ds_100b3b30[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);

void __stdcall FUN_10069e95(void)

{
  char local_44 [32];
  char local_24 [32];
  
  _sprintf(local_24,s____d__ds_100b3b30,0x1e,0x1e);
  _sprintf(local_44,local_24,s__100b39e8);
  DAT_100b3a50 = 0;
  return;
}
