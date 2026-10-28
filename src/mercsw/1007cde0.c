/* SPDX-License-Identifier: MIT */
/* mercsw 1007cde0 */
/* mercsw 1007cde0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100c96b8;
extern undefined DAT_100c9ac0[];
extern undefined DAT_100c9ed0[];
undefined __cdecl FUN_1007cc00(undefined4 * param_1);

undefined4 * __stdcall FUN_1007cde0(void)

{
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  if (-1 < DAT_100c96b8) {
    local_8 = (undefined4 *)(DAT_100c9ed0 + *(int *)(DAT_100c9ac0 + DAT_100c96b8 * 4) * 0x40);
    FUN_1007cc00(local_8);
    DAT_100c96b8 = DAT_100c96b8 + -1;
  }
  return local_8;
}
