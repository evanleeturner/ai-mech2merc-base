/* SPDX-License-Identifier: MIT */
/* mercsw 10002849 */
/* mercsw 10002849: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a40f8;
extern undefined4 DAT_100b38fc;
undefined4 __stdcall _AIL_sample_buffer_ready_4(undefined4);
int __cdecl FUN_1000381c(int param_1);
undefined4 __stdcall _AIL_set_sample_pan_8(undefined4, undefined4);
undefined4 __stdcall _AIL_set_sample_volume_8(undefined4, undefined4);
undefined4 __stdcall _AIL_load_sample_buffer_16(undefined4, undefined4, undefined4, undefined4);
byte * __cdecl FUN_100396a4(byte * param_1, undefined1 * param_2, int param_3, uint param_4, int * param_5);

void __stdcall FUN_10002849(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int local_c;
  uint local_8;
  
  if (DAT_100a40f8 != 0) {
    for (local_8 = 0; local_8 < *(uint *)(DAT_100a40f8 + 0x44); local_8 = local_8 + 1) {
      if ((((*(int *)(DAT_100a40f8 + 0x48 + local_8 * 4) != 0) &&
           (*(int *)(DAT_100a40f8 + 0x368 + local_8 * 4) != 0)) &&
          (*(int *)(DAT_100a40f8 + 0x3a8 + local_8 * 4) <= (int)DAT_100b38fc)) &&
         (iVar2 = _AIL_sample_buffer_ready_4(*(undefined4 *)(DAT_100a40f8 + 4 + local_8 * 4)),
         iVar2 != -1)) {
        if (*(int *)(DAT_100a40f8 + 0x428 + local_8 * 4) == -1) {
          iVar3 = FUN_1000381c(*(int *)(DAT_100a40f8 + 1000 + local_8 * 4));
          _AIL_set_sample_pan_8(*(undefined4 *)(DAT_100a40f8 + 4 + local_8 * 4),iVar3);
        }
        else {
          _AIL_set_sample_pan_8
                    (*(undefined4 *)(DAT_100a40f8 + 4 + local_8 * 4),
                     *(undefined4 *)(DAT_100a40f8 + 0x428 + local_8 * 4));
        }
        _AIL_set_sample_volume_8
                  (*(undefined4 *)(DAT_100a40f8 + 4 + local_8 * 4),
                   *(undefined4 *)(DAT_100a40f8 + 0x468 + local_8 * 4));
        if (*(int *)(DAT_100a40f8 + 0x168 + local_8 * 4) == 0) {
          _AIL_load_sample_buffer_16
                    (*(undefined4 *)(DAT_100a40f8 + 4 + local_8 * 4),iVar2,
                     *(undefined4 *)(local_8 * 8 + iVar2 * 4 + 0x2a8 + DAT_100a40f8),0);
        }
        else {
          if (*(uint *)(DAT_100a40f8 + 0x228 + local_8 * 4) <
              *(uint *)(DAT_100a40f8 + 0x168 + local_8 * 4)) {
            pbVar4 = FUN_100396a4(*(byte **)(DAT_100a40f8 + 0x368 + local_8 * 4),
                                  *(undefined1 **)(local_8 * 8 + iVar2 * 4 + 0x2a8 + DAT_100a40f8),
                                  *(int *)(DAT_100a40f8 + 0x228 + local_8 * 4),
                                  *(uint *)(DAT_100a40f8 + 0x1a8 + local_8 * 4),
                                  (int *)(local_8 * 4 + DAT_100a40f8 + 0x328));
            *(byte **)(DAT_100a40f8 + 0x368 + local_8 * 4) = pbVar4;
            local_c = *(int *)(DAT_100a40f8 + 0x268 + local_8 * 4);
            piVar1 = (int *)(DAT_100a40f8 + 0x168 + local_8 * 4);
            *piVar1 = *piVar1 - *(int *)(DAT_100a40f8 + 0x228 + local_8 * 4);
          }
          else {
            pbVar4 = FUN_100396a4(*(byte **)(DAT_100a40f8 + 0x368 + local_8 * 4),
                                  *(undefined1 **)(local_8 * 8 + iVar2 * 4 + 0x2a8 + DAT_100a40f8),
                                  *(int *)(DAT_100a40f8 + 0x168 + local_8 * 4),
                                  *(uint *)(DAT_100a40f8 + 0x1a8 + local_8 * 4),
                                  (int *)(local_8 * 4 + DAT_100a40f8 + 0x328));
            *(byte **)(DAT_100a40f8 + 0x368 + local_8 * 4) = pbVar4;
            local_c = *(int *)(DAT_100a40f8 + 0x1a8 + local_8 * 4) *
                      *(int *)(DAT_100a40f8 + 0x168 + local_8 * 4);
            *(undefined4 *)(DAT_100a40f8 + 0x168 + local_8 * 4) = 0;
          }
          _AIL_load_sample_buffer_16
                    (*(undefined4 *)(DAT_100a40f8 + 4 + local_8 * 4),iVar2,
                     *(undefined4 *)(local_8 * 8 + iVar2 * 4 + 0x2a8 + DAT_100a40f8),local_c);
        }
      }
    }
  }
  return;
}
