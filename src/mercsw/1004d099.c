/* SPDX-License-Identifier: MIT */
/* mercsw 1004d099 */
/* mercsw 1004d099: Ghidra's C, repaired by tools/ghidra_repair.py */
extern uint DAT_100b38d8;
extern undefined4 DAT_100eef40[];

undefined4 __cdecl FUN_1004d099(uint param_1, uint param_2)

{
  undefined4 local_8;
  
  local_8 = 0;
  if ((param_1 < DAT_100b38d8) && (param_2 < 8)) {
    *(uint *)(DAT_100eef40[param_1] + 0xc) = param_2;
    local_8 = 1;
  }
  return local_8;
}
