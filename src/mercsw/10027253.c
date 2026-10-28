/* SPDX-License-Identifier: MIT */
/* mercsw 10027253 */
/* mercsw 10027253: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };

void __cdecl FUN_10027253(int param_1)

{
  short local_28;
  uint local_24;
  short local_20;
  short local_1c;
  short local_14;
  short local_10;
  short *local_c;
  short local_8;
  
  **(undefined4 **)(param_1 + 0x144) = 0;
  local_14 = 2;
  do {
    if (local_14 < 0) {
      return;
    }
    local_c = *(short **)(param_1 + 0x148 + local_14 * 4);
    if (local_c != (short *)0x0) {
      local_1c = 1;
      local_8 = 0;
      local_10 = 0;
      local_28 = *local_c;
      while (local_28 != 0) {
        local_24 = (uint)((uint)(ushort)local_c[local_1c] == (uint)((int)*(short *)(param_1 + 0x176)));
        if (local_24 != 0) {
          local_8 = local_c[(short)(local_1c + 1)];
          break;
        }
        local_10 = local_c[(short)(local_1c + 1)] + local_10;
        local_1c = local_1c + 2;
        local_28 = local_28 + -1;
      }
      if (local_24 != 0) {
        local_1c = 0;
        for (local_c = (short *)((int)(short)(*local_c * 4 + 2 + local_10 * 0xc) + (int)local_c);
            (local_1c < local_8 && (*local_c != 0)); local_c = local_c + 6) {
          local_20 = 0;
          local_24 = 0;
          while ((local_24 == 0 && (*(int *)(*(int *)(param_1 + 0x144) + local_20 * 4) != 0))) {
            if ((*(short *)(*(int *)(*(int *)(param_1 + 0x144) + local_20 * 4) + 2) == local_c[1])
               && (**(short **)(*(int *)(param_1 + 0x144) + local_20 * 4) == *local_c)) {
              local_24 = 1;
            }
            local_20 = local_20 + 1;
          }
          if (local_24 == 0) {
            *(short **)(*(int *)(param_1 + 0x144) + local_20 * 4) = local_c;
            *(undefined4 *)(*(int *)(param_1 + 0x144) + 4 + local_20 * 4) = 0;
          }
          local_1c = local_1c + 1;
        }
      }
    }
    local_14 = local_14 + -1;
  } while( true );
}
