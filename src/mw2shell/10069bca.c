/* SPDX-License-Identifier: MIT */
/* mw2shell 10069bca */
extern short DAT_10069984;

short * __cdecl FUN_10069990(short *param_1, int param_2);

int __cdecl FUN_10069bca(int param_1)
{
  short *psVar1;
  
  psVar1 = FUN_10069990(&DAT_10069984, param_1);
  return (int)((unsigned short)*psVar1 | ((unsigned int)(unsigned short)psVar1[1] << 16));
}
