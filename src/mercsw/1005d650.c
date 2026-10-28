/* SPDX-License-Identifier: MIT */
/* mercsw 1005d650 */
/* mercsw 1005d650: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf38;
extern undefined4 DAT_10114db0[];
int __cdecl FUN_10051f43(int param_1);

void __cdecl FUN_1005d650(int * param_1, int param_2)

{
  int iVar1;
  int local_c;
  int local_8;
  
  if ((undefined4)(*(int *)(*param_1 + 4)) == DAT_100adf38) {
    if (param_2 == 0) {
      local_8 = 2;
    }
    else {
      local_8 = 5;
    }
    for (local_c = 0; local_c < 0x22; local_c = local_c + 1) {
      iVar1 = FUN_10051f43(10);
      if (iVar1 < local_8) {
        ((void (*)(undefined4, int))((**(code **)(DAT_10114db0[local_c] + 0xe4))))
                  (DAT_10114db0[local_c],*(short *)(DAT_10114db0[local_c] + 6) + 1);
      }
    }
  }
  return;
}
