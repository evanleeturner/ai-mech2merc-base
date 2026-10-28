/* SPDX-License-Identifier: MIT */
/* mercsw 10069a27 */
/* mercsw 10069a27: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_101f52e0[];
uint __cdecl FUN_10056489(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);

void __stdcall FUN_10069a27(void)

{
  uint uVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 10;
  local_c = 10;
  for (local_10 = 0; local_10 < 0x100; local_10 = local_10 + 1) {
    for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
      FUN_10056489((int *)(DAT_101f52e0),local_8,local_c + local_14,local_8 + 3,local_c + local_14,0,
                   local_10);
    }
    uVar1 = (int)(local_10 + 1U) >> 0x1f;
    if ((((local_10 + 1U ^ uVar1) - uVar1 & 0xf) ^ uVar1) == uVar1) {
      local_8 = 10;
      local_c = local_c + 2;
    }
    else {
      local_8 = local_8 + 4;
    }
  }
  return;
}
