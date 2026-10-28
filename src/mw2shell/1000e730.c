/* SPDX-License-Identifier: MIT */
/* mw2shell 1000e730 */
/* mw2shell 1000e730: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_1008e3e0;
extern undefined DAT_100a6780;
extern char DAT_100b0590[];
extern char s__ssmk__s_shp_1008e42c[];
extern char s_smk__s_shp_1008e43c[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);

undefined * __cdecl FUN_1000e730(undefined4 param_1)

{
  if ((DAT_1008e3e0 == 0) || (DAT_100a6780 == '\0')) {
    _sprintf(DAT_100b0590,s_smk__s_shp_1008e43c,param_1);
  }
  else {
    _sprintf(DAT_100b0590,s__ssmk__s_shp_1008e42c,&DAT_100a6780,param_1);
  }
  DAT_1008e3e0 = 0;
  return (undefined *)(DAT_100b0590);
}
