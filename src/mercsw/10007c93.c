/* SPDX-License-Identifier: MIT */
/* mercsw 10007c93 */
/* mercsw 10007c93: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 * DAT_100a5534;
extern undefined4 DAT_100a5538;
extern undefined4 DAT_100a553c;
undefined4 __stdcall _AIL_end_sample_4(undefined4);
undefined4 __cdecl RemoveBettyQueueEntry(undefined4 * param_1);

void __cdecl FUN_10007c93(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *local_10;
  undefined4 *local_8;
  
  if ((DAT_100a5534 != (undefined4 *)0x0) && (DAT_100a553c == 0)) {
    if ((0 < (int)DAT_100a5534[1]) && ((int)DAT_100a5534[6] < 0x50)) {
      if (DAT_100a5538 != 0) {
        _AIL_end_sample_4(DAT_100a5538);
      }
      DAT_100a5534 = (undefined4 *)RemoveBettyQueueEntry(DAT_100a5534);
      if (DAT_100a5534 == (undefined4 *)0x0) {
        return;
      }
    }
    local_8 = DAT_100a5534;
    local_10 = *(undefined4 **)((int)DAT_100a5534 + 0x4f);
    while (local_10 != (undefined4 *)0x0) {
      bVar1 = true;
      if ((param_1 != 0) &&
         ((local_10[3] != 0 || ((0 < (int)local_10[1] && (0x4f < (int)local_10[6])))))) {
        bVar1 = false;
      }
      if (bVar1) {
        uVar2 = RemoveBettyQueueEntry(local_10);
        *(undefined4 *)((int)local_8 + 0x4f) = uVar2;
        local_10 = *(undefined4 **)((int)local_8 + 0x4f);
      }
      else {
        local_8 = local_10;
        local_10 = *(undefined4 **)((int)local_10 + 0x4f);
      }
    }
    DAT_100a553c = 1;
  }
  return;
}
