/* SPDX-License-Identifier: MIT */
/* mercsw 1002d360 */
extern double _DAT_100a1130;
extern undefined DAT_100c6b18;
extern char s__2_2d__2_2d__05_2f_100ad6e8[];
extern int __cdecl _sprintf(undefined *, char *, int, int, double);

undefined * __cdecl FUN_1002d360(int param_1)
{
  double dVar1;
  int iVar2;
  
  iVar2 = (param_1 % 0x9f150) / 0x2a6c;
  dVar1 = (double)(param_1 % 0x9f150 + iVar2 * -0x2a6c) / _DAT_100a1130;
  _sprintf(&DAT_100c6b18, s__2_2d__2_2d__05_2f_100ad6e8, param_1 / 0x9f150, iVar2, dVar1);
  return &DAT_100c6b18;
}
