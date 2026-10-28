/* SPDX-License-Identifier: MIT */
/* mercsw 100305b5 */
/* mercsw 100305b5: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ada4c;
extern undefined DAT_100ada58[];
extern undefined DAT_100ada5c[];
extern undefined DAT_10168800[];
extern undefined DAT_10168900[];
undefined __cdecl FUN_100303b0(int param_1, int * param_2, int * param_3);

undefined * __stdcall FUN_100305b5(void)

{
  undefined *local_8;
  
  local_8 = (undefined *)0x0;
  if (-1 < DAT_100ada4c) {
    local_8 = DAT_10168900 + *(int *)(DAT_10168800 + DAT_100ada4c * 4) * 0x34;
    FUN_100303b0((int)local_8,(int *)(DAT_100ada58),(int *)(DAT_100ada5c));
    DAT_100ada4c = DAT_100ada4c + -1;
  }
  return local_8;
}
