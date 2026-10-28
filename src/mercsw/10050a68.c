/* SPDX-License-Identifier: MIT */
/* mercsw 10050a68 */
/* mercsw 10050a68: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100b0864;
extern undefined DAT_101155e8[];

undefined4 __cdecl FUN_10050a68(int param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  if ((param_1 < DAT_100b0864) && (-1 < param_1)) {
    local_8 = *(undefined4 *)(DAT_101155e8 + param_1 * 0x48);
  }
  return local_8;
}
