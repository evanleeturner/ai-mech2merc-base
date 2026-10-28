/* SPDX-License-Identifier: MIT */
/* mercsw 100274a5 */
/* mercsw 100274a5: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };

undefined4 __cdecl FUN_100274a5(short param_1, int param_2, short param_3)

{
  short local_8;
  
  local_8 = 0;
  while( true ) {
    if (param_3 <= local_8) {
      return 0;
    }
    if (*(int *)(param_2 + 4 + local_8 * 8) == (int)param_1) break;
    local_8 = local_8 + 1;
  }
  return *(undefined4 *)(param_2 + local_8 * 8);
}
