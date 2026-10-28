/* SPDX-License-Identifier: MIT */
/* mercsw 1007cd68 */
/* mercsw 1007cd68: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100c96b4;
extern undefined4 DAT_100c96b8;
extern undefined DAT_100c9ac0[];
extern undefined DAT_100c9ed0[];
undefined __cdecl FUN_1007cc83(int * param_1);

int * __cdecl FUN_1007cd68(int param_1)

{
  int *local_8;
  
  local_8 = (int *)0x0;
  if ((((undefined4)(DAT_100c96b4 + -1) != DAT_100c96b8) && (-1 < param_1)) && (param_1 < DAT_100c96b4)) {
    local_8 = (int *)(DAT_100c9ed0 + param_1 * 0x40);
    DAT_100c96b8 = DAT_100c96b8 + 1;
    *(int *)(DAT_100c9ac0 + DAT_100c96b8 * 4) = param_1;
    FUN_1007cc83(local_8);
  }
  return local_8;
}
