/* SPDX-License-Identifier: MIT */
/* mercsw 1001deb6 */
/* mercsw 1001deb6: Ghidra's C, repaired by tools/ghidra_repair.py */
extern char DAT_100ab2cc[];
extern char DAT_101e8690[];
char * __cdecl FUN_1001ddf0(int param_1);
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
undefined __cdecl FUN_1001de5c(char * param_1);

void __cdecl FUN_1001deb6(int param_1)

{
  char local_108 [256];
  char *local_8;
  
  local_8 = DAT_101e8690;
  local_8 = FUN_1001ddf0(param_1);
  _sprintf(local_108,DAT_100ab2cc,local_8);
  FUN_1001de5c(local_108);
  return;
}
