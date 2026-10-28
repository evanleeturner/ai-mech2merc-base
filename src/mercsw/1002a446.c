/* SPDX-License-Identifier: MIT */
/* mercsw 1002a446 */
/* mercsw 1002a446: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };

undefined4 __cdecl FUN_1002a446(int param_1, short param_2)

{
  ushort *puVar1;
  int local_10;
  int local_8;
  
  local_8 = 0;
  do {
    if (2 < local_8) {
      return 0;
    }
    puVar1 = *(ushort **)(param_1 + 0x148 + local_8 * 4);
    if (puVar1 != (ushort *)0x0) {
      for (local_10 = 0; local_10 < (int)(uint)*puVar1; local_10 = local_10 + 1) {
        if ((uint)puVar1[local_10 * 2 + 1] == (uint)((int)param_2)) {
          return 1;
        }
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}
