/* SPDX-License-Identifier: MIT */
/* mercsw 1002ab38 */
/* mercsw 1002ab38: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_100adf38;
extern int DAT_100b38d8;
extern undefined4 DAT_100eef40[];

int __cdecl FUN_1002ab38(int param_1)

{
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (DAT_100b38d8 <= local_10) {
      return -1;
    }
    if ((*(int *)(DAT_100eef40[DAT_100adf38] + 8) == *(int *)(DAT_100eef40[local_10] + 8)) &&
       (*(int *)(DAT_100eef40[local_10] + 0xc) == param_1)) break;
    local_10 = local_10 + 1;
  }
  return local_10;
}
