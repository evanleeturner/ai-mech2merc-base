/* SPDX-License-Identifier: MIT */
/* mercsw 10007e2a */
/* mercsw 10007e2a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a5534;
extern undefined4 DAT_100a5538;
undefined4 __cdecl FUN_10007dc0(undefined4 * param_1);
undefined4 __stdcall _AIL_stop_sample_4(undefined4);

void __stdcall FUN_10007e2a(void)

{
  undefined4 local_8;
  
  if (DAT_100a5534 != 0) {
    for (local_8 = (undefined4)(*(undefined4 **)(DAT_100a5534 + 0x4f)); (undefined4 *)(local_8) != (undefined4 *)0x0;
        local_8 = (undefined4)((undefined4 *)FUN_10007dc0((undefined4 *)(local_8)))) {
    }
  }
  if (DAT_100a5538 != 0) {
    _AIL_stop_sample_4(DAT_100a5538);
  }
  return;
}
