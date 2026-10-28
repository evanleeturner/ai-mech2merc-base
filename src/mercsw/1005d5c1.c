/* SPDX-License-Identifier: MIT */
/* mercsw 1005d5c1 */
/* mercsw 1005d5c1: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aa1ac;
extern undefined4 DAT_100adf34;
extern undefined4 DAT_10114db0[];
undefined __stdcall FUN_1000a942(void);
undefined __cdecl FUN_100105ba(int param_1);

void __stdcall FUN_1005d5c1(void)

{
  int local_8;
  
  if ((*(char *)(DAT_100adf34 + 9) != '\0') || (DAT_100aa1ac == 0)) {
    FUN_1000a942();
  }
  for (local_8 = 0; local_8 < 0x22; local_8 = local_8 + 1) {
    if (*(int *)(DAT_10114db0[local_8] + 0xc0) != 0) {
      ((void (*)(undefined4))((**(code **)(DAT_10114db0[local_8] + 0xc0))))(DAT_10114db0[local_8]);
    }
  }
  FUN_100105ba(-1);
  return;
}
