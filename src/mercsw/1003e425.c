/* SPDX-License-Identifier: MIT */
/* mercsw 1003e425 */
/* mercsw 1003e425: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aefc0;
extern ushort * DAT_100c6d08;
extern ushort * DAT_100c6d38;
extern undefined DAT_100c6d50[];
undefined __cdecl FUN_1003e051(ushort * param_1);
undefined __cdecl FUN_1003ddbc(ushort * param_1);
undefined __cdecl FUN_1003dfde(ushort * param_1);
undefined __cdecl FUN_1003df3a(ushort * param_1);

void __cdecl FUN_1003e425(int param_1)

{
  ushort *puVar1;
  ushort *local_10;
  int local_c;
  int local_8;
  
  if (param_1 == 0) {
    if (DAT_100aefc0 == 0) {
      local_10 = DAT_100c6d08;
      puVar1 = local_10;
      while (local_10 = puVar1, local_10 != (ushort *)0x0) {
        puVar1 = *(ushort **)(local_10 + 4);
        if (((byte)local_10[1] & 0xf0) == 0xc0) {
          FUN_1003dfde(local_10);
          FUN_1003df3a(local_10);
        }
      }
    }
    else {
      for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
        for (local_c = 0; local_c < 0xc; local_c = local_c + 1) {
          puVar1 = *(ushort **)(DAT_100c6d50 + local_c * 0x18 + local_8 * 0x120);
          while (local_10 = puVar1, local_10 != (ushort *)0x0) {
            puVar1 = *(ushort **)(local_10 + 4);
            if (((byte)local_10[1] & 0xf0) == 0xc0) {
              FUN_1003dfde(local_10);
              FUN_1003df3a(local_10);
            }
          }
        }
      }
    }
  }
  else {
    local_10 = DAT_100c6d38;
    puVar1 = local_10;
    while (local_10 = puVar1, local_10 != (ushort *)0x0) {
      puVar1 = *(ushort **)(local_10 + 4);
      if (((byte)local_10[1] & 0xf0) == 0xc0) {
        FUN_1003e051(local_10);
        FUN_1003ddbc(local_10);
      }
    }
  }
  return;
}
