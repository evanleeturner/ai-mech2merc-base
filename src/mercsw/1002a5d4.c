/* SPDX-License-Identifier: MIT */
/* mercsw 1002a5d4 */
/* mercsw 1002a5d4: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b9f60;
extern undefined DAT_10215678[];
extern undefined DAT_10215694[];
int __cdecl FUN_1008255f(uint param_1, uint param_2);

void __cdecl FUN_1002a5d4(int param_1)

{
  uint local_8;
  
  if (DAT_100b9f60 != (undefined4)(-1)) {
    for (local_8 = 0; (int)local_8 < (int)DAT_100b9f60; local_8 = local_8 + 1) {
      if (((*(ushort *)(DAT_10215694 + local_8 * 0x54) & 1) != 0) &&
         (*(uint *)(DAT_10215678 + local_8 * 0x54) == (*(uint *)(param_1 + 4) | 0x200))) {
        if ((*(byte *)(param_1 + 0x1a3) & 0x10) == 0) {
          if ((*(uint *)(param_1 + 0x1a2) & 0xff) != local_8) {
            FUN_1008255f(*(uint *)(param_1 + 4),local_8 | 0x100);
          }
        }
        else {
          FUN_1008255f(*(uint *)(param_1 + 4),local_8 | 0x100);
        }
      }
    }
  }
  return;
}
