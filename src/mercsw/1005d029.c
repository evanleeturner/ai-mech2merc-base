/* SPDX-License-Identifier: MIT */
/* mercsw 1005d029 */
/* mercsw 1005d029: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf38;
extern undefined DAT_100b3188[];
extern undefined DAT_100b3220[];
extern undefined4 DAT_100eef40[];
extern undefined4 DAT_10114db0[];
extern undefined DAT_10114e40[];
undefined __cdecl FUN_1005c34a(int param_1);

void __stdcall FUN_1005d029(void)

{
  int local_c;
  
  FUN_1005c34a(*(int *)(DAT_100eef40[DAT_100adf38] + 0x20));
  for (local_c = 0; local_c < 0x22; local_c = local_c + 1) {
    ((void (*)(undefined4, undefined4))((**(code **)(DAT_10114db0[local_c] + 0xc4))))
              (DAT_10114db0[local_c],*(undefined4 *)(DAT_100b3220 + local_c * 4));
    ((void (*)(undefined4, undefined4))((**(code **)(DAT_10114db0[local_c] + 0xdc))))
              (DAT_10114db0[local_c],*(undefined4 *)(DAT_100b3188 + local_c * 4));
    ((void (*)(undefined4, int))((**(code **)(DAT_10114db0[local_c] + 0xe4))))(DAT_10114db0[local_c],0);
    if (*(int *)(DAT_10114e40 + local_c * 4) != 0) {
      ((void (*)(undefined4))((**(code **)(DAT_10114db0[local_c] + 0xe8))))(DAT_10114db0[local_c]);
    }
  }
  return;
}
