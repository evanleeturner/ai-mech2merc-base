/* SPDX-License-Identifier: MIT */
/* mercsw 1004986d */
/* mercsw 1004986d: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_10160be0;

undefined4 __stdcall FUN_1004986d(void)

{
  int local_c;
  
  local_c = DAT_10160be0;
  while( true ) {
    if (local_c == 0) {
      return 0;
    }
    if (*(int *)(local_c + 4) == 1) break;
    local_c = *(int *)(local_c + 0x14);
  }
  return *(undefined4 *)(local_c + 0xc);
}
