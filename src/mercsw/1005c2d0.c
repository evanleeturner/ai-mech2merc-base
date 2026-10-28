/* SPDX-License-Identifier: MIT */
/* mercsw 1005c2d0 */
/* mercsw 1005c2d0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 PTR_DAT_100af0a8;
bool __cdecl FUN_1003eb02(uint param_1, int * param_2);

void __stdcall FUN_1005c2d0(void)

{
  uint local_28 [9];
  
  local_28[0] = 0xca;
  local_28[1] = 0x10c;
  local_28[2] = 0xed;
  local_28[3] = 0x105;
  local_28[4] = 0x10b;
  local_28[5] = 0xe0;
  local_28[6] = 0xdf;
  local_28[7] = 0x113;
  for (local_28[8] = 0; local_28[8] < 8; local_28[8] = local_28[8] + 1) {
    FUN_1003eb02(local_28[local_28[8]],(int *)PTR_DAT_100af0a8);
  }
  return;
}
