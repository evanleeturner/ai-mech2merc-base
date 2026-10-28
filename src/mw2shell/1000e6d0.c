/* SPDX-License-Identifier: MIT */
/* mw2shell 1000e6d0 */
/* mw2shell 1000e6d0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_1008e3e0;
extern undefined DAT_100a6780;
extern char DAT_100b0568[];
extern char s__ssmk__s_smk_1008e410[];
extern char s_smk__s_smk_1008e420[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);

undefined * __cdecl FUN_1000e6d0(undefined4 param_1)

{
  if ((DAT_1008e3e0 == 0) || (DAT_100a6780 == '\0')) {
    _sprintf(DAT_100b0568,s_smk__s_smk_1008e420,param_1);
  }
  else {
    _sprintf(DAT_100b0568,s__ssmk__s_smk_1008e410,&DAT_100a6780,param_1);
  }
  DAT_1008e3e0 = 0;
  return (undefined *)(DAT_100b0568);
}
