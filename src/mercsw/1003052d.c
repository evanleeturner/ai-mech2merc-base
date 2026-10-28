/* SPDX-License-Identifier: MIT */
/* mercsw 1003052d */
/* mercsw 1003052d: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ada4c;
extern int DAT_100ada50;
extern undefined DAT_100ada58[];
extern undefined DAT_100ada5c[];
extern undefined DAT_10168800[];
extern undefined DAT_10168900[];
undefined __cdecl FUN_10030433(int param_1, int * param_2, int * param_3);

undefined * __cdecl FUN_1003052d(int param_1)

{
  undefined *local_8;
  
  local_8 = (undefined *)0x0;
  if ((((undefined4)(DAT_100ada50 + -1) != DAT_100ada4c) && (-1 < param_1)) && (param_1 < DAT_100ada50)) {
    local_8 = DAT_10168900 + param_1 * 0x34;
    DAT_100ada4c = DAT_100ada4c + 1;
    *(int *)(DAT_10168800 + DAT_100ada4c * 4) = param_1;
    FUN_10030433((int)local_8,(int *)(DAT_100ada58),(int *)(DAT_100ada5c));
  }
  return local_8;
}
