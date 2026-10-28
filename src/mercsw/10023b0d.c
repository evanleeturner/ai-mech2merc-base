/* SPDX-License-Identifier: MIT */
/* mercsw 10023b0d */
/* mercsw 10023b0d: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ab384;
extern undefined4 DAT_1016acb4;
extern undefined DAT_1016bc60[];
extern undefined DAT_1016cc60[];
undefined __cdecl FUN_10023920(undefined4 * param_1);

undefined4 * __stdcall FUN_10023b0d(void)

{
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  if ((-1 < DAT_1016acb4) && (DAT_100ab384 != 0)) {
    local_8 = (undefined4 *)(DAT_1016cc60 + *(int *)(DAT_1016bc60 + DAT_1016acb4 * 4) * 0x1fa);
    FUN_10023920(local_8);
    DAT_1016acb4 = DAT_1016acb4 + -1;
  }
  return local_8;
}
