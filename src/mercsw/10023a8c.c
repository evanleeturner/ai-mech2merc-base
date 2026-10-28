/* SPDX-License-Identifier: MIT */
/* mercsw 10023a8c */
/* mercsw 10023a8c: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100ab374;
extern undefined4 DAT_1016acb4;
extern undefined DAT_1016bc60[];
extern undefined DAT_1016cc60[];
undefined __cdecl FUN_100239a4(int * param_1);

int * __cdecl FUN_10023a8c(int param_1)

{
  int *local_8;
  
  local_8 = (int *)0x0;
  if ((((undefined4)(DAT_100ab374 + -1) != DAT_1016acb4) && (-1 < param_1)) && (param_1 < DAT_100ab374)) {
    local_8 = (int *)(DAT_1016cc60 + param_1 * 0x1fa);
    DAT_1016acb4 = DAT_1016acb4 + 1;
    *(int *)(DAT_1016bc60 + DAT_1016acb4 * 4) = param_1;
    FUN_100239a4(local_8);
  }
  return local_8;
}
