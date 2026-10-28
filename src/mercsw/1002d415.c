/* SPDX-License-Identifier: MIT */
/* mercsw 1002d415 */
/* mercsw 1002d415: Ghidra's C, repaired by tools/ghidra_repair.py */
extern char DAT_100c6b28[];
extern char s__2_2d__2_2d__2_2d_100ad6fc[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);

undefined * __cdecl FUN_1002d415(int param_1)

{
  int iVar1;
  
  iVar1 = (param_1 % 0xe10) / 0x3c;
  _sprintf(DAT_100c6b28,s__2_2d__2_2d__2_2d_100ad6fc,param_1 / 0xe10,iVar1,
           param_1 % 0xe10 + iVar1 * -0x3c);
  return (undefined *)(DAT_100c6b28);
}
